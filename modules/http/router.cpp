//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include <regex>

#include "ot/function.h"
#include "ot/internal.h"
#include "ot/vm.h"

#include "router.h"


//
//	OtHttpNext
//

class OtHttpNextClass;
typedef std::shared_ptr<OtHttpNextClass> OtHttpNext;

class OtHttpNextClass : public OtInternalClass {
public:
	OtHttpNextClass() = default;
	OtHttpNextClass(OtHttpRouter r, size_t i, OtHttpRequest q, OtHttpResponse s, OtObject n)
		: router(r), index(i), req(q), res(s), next(n) {}

	// execute next
	void call() {
		router.lock()->runHandler(index, req, res, next);
	}

	// get type definition
	static OtType getMeta() {
		static OtType type = nullptr;

		if (!type) {
			type = OtTypeClass::create<OtHttpNextClass>("HttpNext", OtInternalClass::getMeta());
			type->set("__call__", OtFunctionClass::create(&OtHttpNextClass::call));
		}

		return type;
	}

	// create a new object
	static OtHttpNext create(OtHttpRouter r, size_t i, OtHttpRequest q, OtHttpResponse s, OtObject n) {
		OtHttpNext next = std::make_shared<OtHttpNextClass>(r, i, q, s, n);
		next->setType(getMeta());
		return next;
	}

private:
	std::weak_ptr<OtHttpRouterClass> router;
	size_t index;
	OtHttpRequest req;
	OtHttpResponse res;
	OtObject next;
};


//
//	OtHttpMethodHandler
//

class OtHttpMethodHandler : public OtHttpRouterClass::OtHandler {
public:
	OtHttpMethodHandler(const std::string& m, const std::string& p, OtObject cb) : method(m), path(p), callback(cb) {
		if (method.length() == 0) {
			type = USE;

		} else if (path.back() == '*') {
			type = STARTSWITH;
			path = path.substr(0, path.length() - 1);

		} else if (path.find(':') != std::string::npos) {
			type = REGEX;

			std::regex nameRE(":([^\\/]+)?");
			std::sregex_token_iterator it(path.begin(), path.end(), nameRE);
			std::sregex_token_iterator end;

			while (it != end) {
				std::string name = *it++;
				names.push_back(name.erase(0, 1));
			}

			pattern = std::regex("^" + std::regex_replace(path, nameRE, "(?:([^\\/]+?))") +"$");

		} else {
			type = MATCH;
		}
	}

	bool match(OtHttpRequest req) {
		switch(type) {
			case USE:
				return true;
				break;

			case MATCH:
				return (method == "ALL" || req->getMethod() == method) && req->getPath() == path;
				break;

			case STARTSWITH:
				return (method == "ALL" || req->getMethod() == method) && OtText::startsWith(req->getPath(), path);
				break;

			case REGEX:
				if (method == "ALL" || req->getMethod() == method) {
					std::string path = req->getPath();
					std::smatch values;

					if (regex_match(path, values, pattern)) {
						for (auto i = 1; i < values.size(); i++) {
							req->setParam(names[i], values[i]);
						}

					} else {
						return false;
					}

				} else {
					return false;
				}

				break;
		}

		return false;
	}

	void run(OtHttpRequest req, OtHttpResponse res, OtObject next) {
		// execute callback if method and path matches
		if (match(req)) {
			OtVM::memberFunction(callback, "__call__", req, res, next);

		} else {
			// no match, call next handler
			OtVM::memberFunction(next, "__call__");
		}
	}

private:
	enum OtHttpHandlerType {
		USE = 1,
		MATCH,
		STARTSWITH,
		REGEX
	};

	OtHttpHandlerType type;
	std::string method;
	std::string path;
	std::regex pattern;
	std::vector<std::string> names;
	OtObject callback;
};


//
//	OtStaticHandler
//

class OtStaticHandler : public OtHttpRouterClass::OtHandler {
public:
	OtStaticHandler(const std::string& p, const std::string& f) : serverPath(p), fsPath(f) {}

	void run(OtHttpRequest req, OtHttpResponse res, OtObject next) {
		if (OtText::startsWith(req->getPath(), serverPath)) {
			// send file
			res->sendfile(fsPath + req->getPath().substr(serverPath.size(), -1));

		} else {
			// no match, pass to next handler
			OtVM::memberFunction(next, "__call__");
		}
	}

private:
	std::string serverPath;
	std::string fsPath;
};


//
//	OtHttpRouterClass::addHandler
//

OtObject OtHttpRouterClass::addHandler(const std::string& method, const std::string& path, OtObject callback) {
	handlers.push_back(std::make_shared<OtHttpMethodHandler>(method, path, callback));
	return getSharedPtr();
}


//
//	OtHttpRouterClass::runHandler
//

void OtHttpRouterClass::runHandler(const size_t index, OtHttpRequest req, OtHttpResponse res, OtObject next) {
	if (index < handlers.size()) {
		handlers[index]->run(req, res, OtHttpNextClass::create(cast<OtHttpRouterClass>(), index + 1, req, res, next));

	} else {
		OtVM::memberFunction(next, "__call__");
	}
}


//
//	OtHttpRouterClass::useHandler
//

OtObject OtHttpRouterClass::useHandler(OtObject callback) {
	handlers.push_back(std::make_shared<OtHttpMethodHandler>("", "*", callback));
	return getSharedPtr();
}


//
//	OtHttpRouterClass::allHandler
//

OtObject OtHttpRouterClass::allHandler(const std::string& path, OtObject callback) {
	return addHandler("ALL", path, callback);
}


//
//	OtHttpRouterClass::getHandler
//

OtObject OtHttpRouterClass::getHandler(const std::string& path, OtObject callback) {
	return addHandler("GET", path, callback);
}


//
//	OtHttpRouterClass::putHandler
//

OtObject OtHttpRouterClass::putHandler(const std::string& path, OtObject callback) {
	return addHandler("PUT", path, callback);
}


//
//	OtHttpRouterClass::postHandler
//

OtObject OtHttpRouterClass::postHandler(const std::string& path, OtObject callback) {
	return addHandler("POST", path, callback);
}


//
//	OtHttpRouterClass::deleleteHandler
//

OtObject OtHttpRouterClass::deleleteHandler(const std::string& path, OtObject callback) {
	return addHandler("DELETE", path, callback);
}


//
//	OtHttpRouterClass::staticFiles
//

OtObject OtHttpRouterClass::staticFiles(const std::string& serverPath, const std::string& filePath) {
	handlers.push_back(std::make_shared<OtStaticHandler>(serverPath, filePath));
	return getSharedPtr();
}


//
//	OtHttpRouterClass::call
//

OtObject OtHttpRouterClass::call(OtObject req, OtObject res, OtObject next) {
	runHandler(0, req->cast<OtHttpRequestClass>(), res->cast<OtHttpResponseClass>(), next);
	return getSharedPtr();
}


//
//	OtHttpRouterClass::clearHandlers
//

void OtHttpRouterClass::clearHandlers() {
	handlers.clear();
}


//
//	OtHttpRouterClass::getMeta
//

OtType OtHttpRouterClass::getMeta() {
	static OtType type = nullptr;

	if (!type) {
		type = OtTypeClass::create<OtHttpRouterClass>("HttpRouter", OtHttpClass::getMeta());
		type->set("use", OtFunctionClass::create(&OtHttpRouterClass::useHandler));
		type->set("all", OtFunctionClass::create(&OtHttpRouterClass::allHandler));
		type->set("get", OtFunctionClass::create(&OtHttpRouterClass::getHandler));
		type->set("put", OtFunctionClass::create(&OtHttpRouterClass::putHandler));
		type->set("post", OtFunctionClass::create(&OtHttpRouterClass::postHandler));
		type->set("delete", OtFunctionClass::create(&OtHttpRouterClass::deleleteHandler));
		type->set("static", OtFunctionClass::create(&OtHttpRouterClass::staticFiles));
		type->set("__call__", OtFunctionClass::create(&OtHttpRouterClass::call));
		type->set("clearHandlers", OtFunctionClass::create(&OtHttpRouterClass::clearHandlers));
	}

	return type;
}


//
//	OtHttpRouterClass::create
//

OtHttpRouter OtHttpRouterClass::create() {
	OtHttpRouter router = std::make_shared<OtHttpRouterClass>();
	router->setType(getMeta());
	return router;
}
