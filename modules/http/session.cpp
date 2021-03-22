//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "ot/libuv.h"
#include "ot/format.h"
#include "ot/function.h"

#include "session.h"


//
// OtHttpNotFound
//

class OtHttpNotFoundClass;
typedef std::shared_ptr<OtHttpNotFoundClass> OtHttpNotFound;

class OtHttpNotFoundClass : public OtInternalClass {
public:
	OtHttpNotFoundClass() = default;
	OtHttpNotFoundClass(OtHttpResponse s) : res(s) {}

	// execute not found
	void call() {
		// nobody wanted the request so it must be a case of "Resource Not Found"
		res->setStatus(404);
		res->end();
	}

	// get type definition
	static OtType getMeta() {
		static OtType type = nullptr;

		if (!type) {
			type = OtTypeClass::create<OtHttpNotFoundClass>("HttpNotFound", OtInternalClass::getMeta());
			type->set("__call__", OtFunctionClass::create(&OtHttpNotFoundClass::call));
		}

		return type;
	}

	// create a new object
	static OtHttpNotFound create(OtHttpResponse s) {
		OtHttpNotFound notfound = std::make_shared<OtHttpNotFoundClass>(s);
		notfound->setType(getMeta());
		return notfound;
	}

private:
	OtHttpResponse res;
};


//
//	OtHttpSessionClass::OtHttpSessionClass
//

OtHttpSessionClass::OtHttpSessionClass(uv_stream_t* stream, OtHttpRouter r) : router(r) {
	// setup request/response objects
	request = OtHttpRequestClass::create();
	response = OtHttpResponseClass::create();

	// setup parser settings
	llhttp_settings_init(&settings);

	// callback for start of message
	settings.on_message_begin = [](llhttp_t* parser) -> int {
		((OtHttpSessionClass*)(parser->data))->onBegin();
		return HPE_OK;
	};

	// callback for request URL
	settings.on_url = [](llhttp_t* parser, const char *at, size_t length) -> int {
		((OtHttpSessionClass*)(parser->data))->request->onURL(at, length);
		return HPE_OK;
	};

	// callback for header name
	settings.on_header_field = [](llhttp_t* parser, const char *at, size_t length) -> int {
		((OtHttpSessionClass*)(parser->data))->request->onHeaderField(at, length);
		return HPE_OK;
	};

	// callback for header value
	settings.on_header_value = [](llhttp_t* parser, const char *at, size_t length) -> int {
		((OtHttpSessionClass*)(parser->data))->request->onHeaderValue(at, length);
		return HPE_OK;
	};

	// callback for complete header state
	settings.on_headers_complete = [](llhttp_t* parser) -> int {
		((OtHttpSessionClass*)(parser->data))->request->onHeadersComplete(
			std::string(llhttp_method_name((llhttp_method_t) parser->method)),
			OtFormat("HTTP/%d.%d", parser->http_major, parser->http_minor));

		return HPE_OK;
	};

	// callback for body content
	settings.on_body = [](llhttp_t* parser, const char *at, size_t length) -> int {
		((OtHttpSessionClass*)(parser->data))->request->onBody(at, length);
		return HPE_OK;
	};

	// callback for complete messages
	settings.on_message_complete = [](llhttp_t* parser) -> int {
		((OtHttpSessionClass*)(parser->data))->onMessageComplete();
		return HPE_OK;
	};

	// setup HTTP parser
	llhttp_init(&parser, HTTP_BOTH, &settings);
	parser.data = this;

	// setup client socket
	uv_tcp_init(uv_default_loop(), &uv_client);
	uv_client.data = this;

	int status = uv_accept(stream, (uv_stream_t*) &uv_client);
	UV_CHECK_ERROR("uv_accept", status);

	// allocate memory and attempt to read
	status = uv_read_start(
		(uv_stream_t*) &uv_client,
		[](uv_handle_t* handle, size_t size, uv_buf_t* buffer) {
			*buffer = uv_buf_init((char*) malloc(size), size);
		},
		[](uv_stream_t* socket, ssize_t nread, const uv_buf_t* buffer) {
			((OtHttpSessionClass*)(socket->data))->onRead(buffer, nread);
		});

	UV_CHECK_ERROR("uv_read_start", status);

	// pass client socket to response object for writes
	response->setStream((uv_stream_t*) &(uv_client));

	// set sesion status
	active = true;
	lastRequest = uv_now(uv_default_loop());

	OT_DEBUG("OtHttpSessionClass");
}


OtHttpSessionClass::~OtHttpSessionClass() {
	OT_DEBUG("~OtHttpSessionClass");
}


//
//	OtHttpSessionClass::close
//

void OtHttpSessionClass::close() {
	if (uv_is_active((uv_handle_t*) &uv_client) && !uv_is_closing((uv_handle_t*) &uv_client)) {
		uv_close((uv_handle_t*) &uv_client, [](uv_handle_t* handle) {
			auto session = ((OtHttpSessionClass*)(handle->data));
			session->active = false;
		});
	}
}


//
//	OtHttpSessionClass::close
//

bool OtHttpSessionClass::isAlive() {
	if (!active) {
		return false;

	} else if (!uv_is_active((uv_handle_t*) &uv_client)) {
		OT_DEBUG("funny session case");
		active = false;
		return false;

	} else if (uv_now(uv_default_loop()) - lastRequest > 60 * 1000) {
		close();
	}

	return true;
}


//
//	OtHttpSessionClass::onBegin
//

void OtHttpSessionClass::onBegin() {
	request->clear();
	response->clear();
}


//
//	OtHttpSessionClass::onMessageComplete
//

void OtHttpSessionClass::onMessageComplete() {
	// finish request
	request->onMessageComplete();

	// set default response headers
	if (request->headerIs("Connection","close")) {
		response->setHeader("Connection","close");

	} else {
		response->setHeader("Keep-Alive","timeout=5, max=5");
	}

	// dispatch request
	OtObject pars[] = {
		request,
		response,
		OtHttpNotFoundClass::create(response)
	};

	router->call(nullptr, 3, pars);

	// track last reuest time
	lastRequest = uv_now(uv_default_loop());
}


//
//	OtHttpSessionClass::onRead
//

void OtHttpSessionClass::onRead(const uv_buf_t* buffer, ssize_t nread) {
	if (nread > 0) {
		auto status = llhttp_execute(&parser, buffer->base, nread);

		if (status) {
			OT_DEBUG(OtFormat("llhttp error in llhttp_execute: %s", llhttp_errno_name(status)));
			close();
		}

		// free buffer data
		free(buffer->base);

	} else if (nread == UV_EOF) {
		close();

		// free buffer data
		free(buffer->base);

	} else if (nread < 0) {
		OT_DEBUG(OtFormat("libuv error during read: %s", uv_strerror(nread)));
		close();
	}
}


//
//	OtHttpResponseClass::getMeta
//

OtType OtHttpSessionClass::getMeta() {
	static OtType type = nullptr;

	if (!type) {
		type = OtTypeClass::create<OtHttpResponseClass>("HttpSession", OtInternalClass::getMeta());
	}

	return type;
}


//
//	OtHttpSessionClass::create
//

OtHttpSession OtHttpSessionClass::create(uv_stream_t* stream, OtHttpRouter router) {
	OtHttpSession session = std::make_shared<OtHttpSessionClass>(stream, router);
	session->setType(getMeta());
	return session;
}
