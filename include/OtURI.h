//	ObjectTalk Scripting Language
//	Copyright 1993-2018 Johan A. Goossens
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


//
//  OtURI
//

class OtURIClass;
typedef std::shared_ptr<OtURIClass> OtURI;


//
//  OtURIClass
//

class OtURIClass : public OtOSClass
{
public:
	// constructors
	OtURIClass() {}
	OtURIClass(const std::string& path) { parse(path); }

	// initialize URI
	OtObject init(OtObject, size_t count, OtObject* parameters)
	{
		if (count != 1)
			OT_EXCEPT("URI initializer expected 1 parameter not [%d]", count);

		parse(parameters[0]->operator std::string());
		return getSharedPtr();
	}

	// get URI parts
	operator std::string() { return uri; }
	const char* c_str() { return uri.c_str(); }
	const std::string& getURI() { return uri; }
	const std::string& getScheme() { return scheme; }
	const std::string& getAuthority() { return authority; }
	const std::string& getUsername() { return username; }
	const std::string& getPassword() { return password; }
	const std::string& getHost() { return host; }
	long getPort() { return port; }
	const std::string& getPath() { return path; }
	const std::string& getDirectory() { return directory; }
	const std::string& getFilename() { return filename; }
	const std::string& getStem() { return stem; }
	const std::string& getExtension() { return extension; }
	const std::string& getQuery() { return query; }
	const std::string& getFragment() { return fragment; }
	const std::map<std::string, std::string>& getQueryParams() { return queryParams; }

	OtObject getParams()
	{
		OtDict result = OtDictClass::create();

		for (auto& it : getQueryParams())
			result->operator[](it.first) = OtStringClass::create(it.second);

		return result;
	}

	// parse URI string
	void parse(const std::string& uri)
	{
		this->uri = uri;

		static std::regex uriRegex(
			"([a-zA-Z][a-zA-Z0-9+.-]*):"	// scheme:
			"([^?#]*)"						// authority and path
			"(?:\\?([^#]*))?"				// ?query
			"(?:#(.*))?");					// #fragment
		std::smatch match;
	
		if (!std::regex_match(uri, match, uriRegex))
			OT_EXCEPT("Invalid URI [%s]", uri.c_str());
	
		scheme = submatch(match, 1);
		std::transform(scheme.begin(), scheme.end(), scheme.begin(), ::tolower);
		path = submatch(match, 2);
	
		static std::regex authorityAndPathRegex("//([^/]*)(/.*)?");
		std::smatch authorityAndPathMatch;

		if (std::regex_match(path, authorityAndPathMatch, authorityAndPathRegex))
		{
			authority = submatch(authorityAndPathMatch, 1);

			static std::regex authorityRegex(
				"(?:([^@:]*)(?::([^@]*))?@)?"	// username, password
				"(\\[[^\\]]*\\]|[^\\[:]*)"		// host (IP-literal (e.g. '['+IPv6+']', dotted-IPv4, or named host)
				"(?::(\\d*))?");				// port
		
			std::smatch authorityMatch;

			if (!std::regex_match(authority, authorityMatch, authorityRegex))
				OT_EXCEPT("Invalid URI authority [%s]", authority.c_str());
		
			username = submatch(authorityMatch, 1);
			password = submatch(authorityMatch, 2);
			host = submatch(authorityMatch, 3);
			auto portString = submatch(authorityMatch, 4);
			port = (portString.size()) ? std::stoi(portString) : 0;

			path = submatch(authorityAndPathMatch, 2);
		
			auto slash = path.rfind('/');

			if (slash == std::string::npos)
			{
				directory = "";
				filename = path;
			}
		
			else
			{
				directory = path.substr(0, slash);
				filename = path.substr(slash + 1);
			}

			auto period = filename.rfind('.');
		
			if (period == std::string::npos)
			{
				stem = filename;
				extension = "";
			}
		
			else
			{
				stem = filename.substr(0, period);
				extension = filename.substr(period + 1);
				std::transform(extension.begin(), extension.end(), extension.begin(), ::tolower);
			}
		}

		query = submatch(match, 3);
	
		if (query.size())
		{
			static std::regex queryParamRegex(
				"(^|&)"			// start of query or start of parameter "&"
				"([^=&]*)=?"	// parameter name and "=" if value is expected
				"([^=&]*)"		// parameter value
				"(?=(&|$))");	// next should be end of query or start of next parameter

			for (auto i = std::sregex_iterator(query.begin(), query.end(), queryParamRegex); i != std::sregex_iterator(); i++)
				queryParams[std::string((*i)[2].first, (*i)[2].second)] = std::string((*i)[3].first, (*i)[3].second);
		}
	
		fragment = submatch(match, 4);
	}

	// get type definition
	static OtType getMeta()
	{
		static OtType type = nullptr;

		if (!type)
		{
			type = OtTypeClass::create<OtURIClass>("Path", OtOSClass::getMeta());

			type->set("__init__", OtFunctionClass::create(&OtURIClass::init));

			type->set("scheme", OtFunctionCreate(&OtURIClass::getScheme));
			type->set("authority", OtFunctionCreate(&OtURIClass::getAuthority));
			type->set("user", OtFunctionCreate(&OtURIClass::getUsername));
			type->set("password", OtFunctionCreate(&OtURIClass::getPassword));
			type->set("host", OtFunctionCreate(&OtURIClass::getHost));
			type->set("port", OtFunctionCreate(&OtURIClass::getPort));
			type->set("path", OtFunctionCreate(&OtURIClass::getPath));
			type->set("directory", OtFunctionCreate(&OtURIClass::getDirectory));
			type->set("filename", OtFunctionCreate(&OtURIClass::getFilename));
			type->set("stem", OtFunctionCreate(&OtURIClass::getStem));
			type->set("extension", OtFunctionCreate(&OtURIClass::getExtension));
			type->set("query", OtFunctionCreate(&OtURIClass::getQuery));
			type->set("params", OtFunctionCreate(&OtURIClass::getParams));
			type->set("fragment", OtFunctionCreate(&OtURIClass::getFragment));
		}

		return type;
	}

	// create a new object
	static OtURI create(const std::string& value)
	{
		OtURI Path = std::make_shared<OtURIClass>(value);
		Path->setType(getMeta());
		return Path;
	}

private:
	std::string submatch(const std::smatch& match, int index)
	{
		auto& sub = match[index];
		return std::string(sub.first, sub.second);
	}

	std::string uri;
	std::string scheme;
	std::string authority;
	std::string username;
	std::string password;
	std::string host;
	int port;
	std::string path;
	std::string directory;
	std::string filename;
	std::string stem;
	std::string extension;
	std::string query;
	std::string fragment;
	std::map<std::string, std::string> queryParams;
};
