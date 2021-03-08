//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	OtHttpResponse
//

class OtHttpResponseClass;
typedef std::shared_ptr<OtHttpResponseClass> OtHttpResponse;

class OtHttpResponseClass : public OtInternalClass {
public:
	// specify the output stream
	void setStream(uv_stream_t* s) {
		clientStream = s;
	}

	// clear all response fields
	void clear() {
		state = START;
		setStatus(404);
		headers.clear();
	}

	// set response status
	OtObject setStatus(int s) {
		status = s;

		switch (status) {
			//####### 1xx - Informational #######
			case 100: explanation = "Continue"; break;
			case 101: explanation = "Switching Protocols"; break;
			case 102: explanation = "Processing"; break;
			case 103: explanation = "Early Hints"; break;

			//####### 2xx - Successful #######
			case 200: explanation = "OK"; break;
			case 201: explanation = "Created"; break;
			case 202: explanation = "Accepted"; break;
			case 203: explanation = "Non-Authoritative Information"; break;
			case 204: explanation = "No Content"; break;
			case 205: explanation = "Reset Content"; break;
			case 206: explanation = "Partial Content"; break;
			case 207: explanation = "Multi-Status"; break;
			case 208: explanation = "Already Reported"; break;
			case 226: explanation = "IM Used"; break;

			//####### 3xx - Redirection #######
			case 300: explanation = "Multiple Choices"; break;
			case 301: explanation = "Moved Permanently"; break;
			case 302: explanation = "Found"; break;
			case 303: explanation = "See Other"; break;
			case 304: explanation = "Not Modified"; break;
			case 305: explanation = "Use Proxy"; break;
			case 307: explanation = "Temporary Redirect"; break;
			case 308: explanation = "Permanent Redirect"; break;

			//####### 4xx - Client Error #######
			case 400: explanation = "Bad Request"; break;
			case 401: explanation = "Unauthorized"; break;
			case 402: explanation = "Payment Required"; break;
			case 403: explanation = "Forbidden"; break;
			case 404: explanation = "Not Found"; break;
			case 405: explanation = "Method Not Allowed"; break;
			case 406: explanation = "Not Acceptable"; break;
			case 407: explanation = "Proxy Authentication Required"; break;
			case 408: explanation = "Request Timeout"; break;
			case 409: explanation = "Conflict"; break;
			case 410: explanation = "Gone"; break;
			case 411: explanation = "Length Required"; break;
			case 412: explanation = "Precondition Failed"; break;
			case 413: explanation = "Payload Too Large"; break;
			case 414: explanation = "URI Too Long"; break;
			case 415: explanation = "Unsupported Media Type"; break;
			case 416: explanation = "Range Not Satisfiable"; break;
			case 417: explanation = "Expectation Failed"; break;
			case 418: explanation = "I'm a teapot"; break;
			case 422: explanation = "Unprocessable Entity"; break;
			case 423: explanation = "Locked"; break;
			case 424: explanation = "Failed Dependency"; break;
			case 426: explanation = "Upgrade Required"; break;
			case 428: explanation = "Precondition Required"; break;
			case 429: explanation = "Too Many Requests"; break;
			case 431: explanation = "Request Header Fields Too Large"; break;
			case 451: explanation = "Unavailable For Legal Reasons"; break;

			//####### 5xx - Server Error #######
			case 500: explanation = "Internal Server Error"; break;
			case 501: explanation = "Not Implemented"; break;
			case 502: explanation = "Bad Gateway"; break;
			case 503: explanation = "Service Unavailable"; break;
			case 504: explanation = "Gateway Time-out"; break;
			case 505: explanation = "HTTP Version Not Supported"; break;
			case 506: explanation = "Variant Also Negotiates"; break;
			case 507: explanation = "Insufficient Storage"; break;
			case 508: explanation = "Loop Detected"; break;
			case 510: explanation = "Not Extended"; break; break;
			case 511: explanation = "Network Authentication Required"; break;

			default: explanation = ""; break;
		}

		return getSharedPtr();
	}

	// add response header
	OtObject setHeader(const std::string& name, const std::string& value) {
		if (state != START) {
			throw OtException(OtFormat("HttpResponse can't send headers after body transmission has started", false));
		}

		headers.emplace(name, value);
		return getSharedPtr();
	}

	// see if header is set
	const bool hasHeader(const std::string& header) {
		return headers.has(header);
	}

	// send headers to stream
	void sendHeaders() {
		std::stringstream stream;

		// put status and headers in stream
		stream << "HTTP/1.1 " << status << " " << explanation << "\r\n";

		for (auto &header : headers) {
			stream << header.first << ": " << header.second << "\r\n";
		}

		stream << "\r\n";

		// send response
		std::string text = stream.str();
		uv_buf_t buffer = uv_buf_init(strndup((char*) text.c_str(), text.size()), text.size());
		uv_write_t* uv_write_req = (uv_write_t*) malloc(sizeof(uv_write_t));
		uv_write_req->data = buffer.base;

		uv_write(uv_write_req, clientStream, &buffer, 1, [](uv_write_t* req, int status) {
			free(req->data);
			free(req);
		});

		status = HEADERS_SENT;
	}

	// write string as part of body
	OtObject write(const char* data, size_t size) {
		if (state == START) {
			sendHeaders();
		}

		// send body
		uv_buf_t buffer = uv_buf_init(strndup(data, size), size);
		uv_write_t* uv_write_req = (uv_write_t*) malloc(sizeof(uv_write_t));
		uv_write_req->data = buffer.base;

		uv_write(uv_write_req, clientStream, &buffer, 1, [](uv_write_t* req, int status) {
			free(req->data);
			free(req);
		});

		return getSharedPtr();
	}

	OtObject write(const std::string& data) {
		return write(data.c_str(), data.size());
	}

	// end the response
	OtObject end() {
		if (state == START) {
			headers.emplace("Content-Type", "text/plain");
			headers.emplace("Content-Length", std::to_string(explanation.size()));
			write(explanation);
		}

		status = COMPLETE;
		return getSharedPtr();
	}

	// send body
	OtObject send(const std::string& text) {
		if (!hasHeader("Content-Type")) {
			headers.emplace("Content-Type", "text/plain");
		}

		headers.emplace("Content-Length", std::to_string(text.size()));
		write(text);
		end();

		return getSharedPtr();
	};

	// send result as jSON
	OtObject json(OtObject object) {
		setStatus(200);
		std::string text = object->json();
		headers.emplace("Content-Type", "application/json");
		headers.emplace("Content-Length", std::to_string(text.size()));
		write(text);
		end();

		return getSharedPtr();
	}

	// send a file as the response
	OtObject sendfile(const std::string& name) {
		std::filesystem::file_status status = std::filesystem::status(name);

		// handle file not found error
		if (!std::filesystem::is_regular_file(status)) {
			setStatus(404);
			end();

		} else {
			// set status
			setStatus(200);

			// set headers
			std::filesystem::path path(name);
			headers.emplace("Content-Length", std::to_string(std::filesystem::file_size(name)));
			headers.emplace("Content-Type", OtMimeTypeGet(path.extension().string().substr(1, std::string::npos)));

			// open file
			uv_fs_t open_req;
			auto status = uv_fs_open(uv_default_loop(), &open_req, name.c_str(), O_RDONLY, 0, nullptr);
			UV_CHECK_ERROR("uv_fs_open", status);
			uv_fs_req_cleanup(&open_req);
			uv_read_fd = open_req.result;

			uv_read_req.data = this;
			uv_read_buffer = (char*) malloc(64 * 1024);
			uv_buf_t buffer = uv_buf_init(uv_read_buffer, 64 * 1024);

			status = uv_fs_read(uv_default_loop(), &uv_read_req, uv_read_fd, &buffer, 1, -1, [](uv_fs_t* req) {
				uv_fs_req_cleanup(req);
				OtHttpResponseClass* res = (OtHttpResponseClass*) req->data;
				((OtHttpResponseClass*)(req->data))->onFileRead(req->result);
			});

			UV_CHECK_ERROR("uv_fs_read", status);
		}

		return getSharedPtr();
	}

	// handle file read events
	void onFileRead(ssize_t size) {
		if (size > 0) {
			// write file to socket
			write(uv_read_buffer, size);

			// continue reading
			uv_buf_t buffer = uv_buf_init(uv_read_buffer, 64 * 1024);

			auto status = uv_fs_read(uv_default_loop(), &uv_read_req, uv_read_fd, &buffer, 1, -1, [](uv_fs_t* req) {
				uv_fs_req_cleanup(req);
				OtHttpResponseClass* res = (OtHttpResponseClass*) req->data;
				((OtHttpResponseClass*)(req->data))->onFileRead(req->result);
			});

			UV_CHECK_ERROR("uv_fs_read", status);

		} else if (size == 0) {
			uv_fs_t close_req;
			uv_fs_close(uv_default_loop(), &close_req, uv_read_fd, nullptr);
			uv_fs_req_cleanup(&close_req);
			free(uv_read_buffer);
			end();

		} else {
			UV_CHECK_ERROR("uv_fs_read", size);
		}
	}

	// download user file
	OtObject download(const std::string& name) {
		std::filesystem::path path(name);
		headers.emplace("Content-Disposition", "attachment; filename=" + path.filename().string());
		return sendfile(name);
	}

	// get type definition
	static OtType getMeta() {
		static OtType type = nullptr;

		if (!type) {
			type = OtTypeClass::create<OtHttpResponseClass>("HttpResponse", OtInternalClass::getMeta());
			type->set("setStatus", OtFunctionClass::create(&OtHttpResponseClass::setStatus));
			type->set("setHeader", OtFunctionClass::create(&OtHttpResponseClass::setHeader));
			type->set("hasHeader", OtFunctionClass::create(&OtHttpResponseClass::hasHeader));
			type->set("end", OtFunctionClass::create(&OtHttpResponseClass::end));
			type->set("send", OtFunctionClass::create(&OtHttpResponseClass::send));
			type->set("sendfile", OtFunctionClass::create(&OtHttpResponseClass::sendfile));
			type->set("download", OtFunctionClass::create(&OtHttpResponseClass::download));
			type->set("json", OtFunctionClass::create(&OtHttpResponseClass::json));
		}

		return type;
	}

	// create a new object
	static OtHttpResponse create() {
		OtHttpResponse response = std::make_shared<OtHttpResponseClass>();
		response->setType(getMeta());
		return response;
	}

private:
	enum OtResponseState {
		START = 1,
		HEADERS_SENT,
		COMPLETE
	};

	OtResponseState state;
	int status;
	std::string explanation;
	OtHttpHeaders headers;

	uv_stream_t* clientStream;
	ssize_t uv_read_fd;
	uv_fs_t uv_read_req;
	char* uv_read_buffer;
};
