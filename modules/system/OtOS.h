//	ObjectTalk Scripting Language
//	Copyright 1993-2020 Johan A. Goossens
//
//	Licensed under the Apache License, Version 2.0 (the "License");
//	you may not use this file except in compliance with the License.
//	You may obtain a copy of the License at
//
//		http://www.apache.org/licenses/LICENSE-2.0
//
//	Unless required by applicable law or agreed to in writing, software
//	distributed under the License is distributed on an "AS IS" BASIS,
//	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//	See the License for the specific language governing permissions and
//	limitations under the License.


#include <uv.h>


//
//	OtOS
//

class OtOSClass;
typedef std::shared_ptr<OtOSClass> OtOS;


//
//	OtOSClass
//

class OtOSClass : public OtSystemClass {
public:
	OtOSClass() {}

	// see if environment variable exists
	bool hasenv(const std::wstring& name) {
		size_t size = 256;
		char* value = (char*) malloc(size);
		int result = uv_os_getenv(OtTextToNarrow(name).c_str(), value, &size);

		if (result == UV_ENOBUFS) {
			value = (char*) realloc(value, size);
			result = uv_os_getenv(OtTextToNarrow(name).c_str(), value, &size);
		}

		free(value);
		return result != UV_ENOENT;
	}

	// get environment variable
	std::wstring getenv(const std::wstring& name) {
		size_t size = 256;
		char* value = (char*) malloc(size);
		int result = uv_os_getenv(OtTextToNarrow(name).c_str(), value, &size);

		if (result == UV_ENOBUFS) {
			value = (char*) realloc(value, size);
			result = uv_os_getenv(OtTextToNarrow(name).c_str(), value, &size);
		}

		if (result == UV_ENOENT) {
			return 0;
		}

		std::wstring v = OtTextToWide(value);
		free(value);
		return v;
	}

	// set environment variable
	void setenv(const std::wstring& name, const std::wstring& value) {
		uv_os_setenv(OtTextToNarrow(name).c_str(), OtTextToNarrow(value).c_str());
	}

	// unset environment variable
	void unsetenv(const std::wstring& name) {
		uv_os_unsetenv(OtTextToNarrow(name).c_str());
	}

	// get type definition
	static OtType getMeta() {
		static OtType type = nullptr;

		if (!type) {
			type = OtTypeClass::create<OtOSClass>(L"OS", OtSystemClass::getMeta());

			type->set(L"hasenv", OtFunctionCreate(&OtOSClass::hasenv));
			type->set(L"getenv", OtFunctionCreate(&OtOSClass::getenv));
			type->set(L"setenv", OtFunctionCreate(&OtOSClass::setenv));
			type->set(L"unsetenv", OtFunctionCreate(&OtOSClass::unsetenv));
		}

		return type;
	}

	// create a new object
	static OtOS create() {
		OtOS fs = std::make_shared<OtOSClass>();
		fs->setType(getMeta());
		return fs;
	}
};
