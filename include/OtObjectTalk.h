//	ObjectTalk Scripting Language
//	Copyright 1993-2019 Johan A. Goossens
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
//	OtObjectTalk
//

class OtObjectTalk
{
public:
	// create a default ObjectTalk context
	static OtObject createDefaultContext()
	{
		// create context
		OtObject context = OtObjectClass::create();

		// add default constants
		context->set("true", OtBooleanClass::create(true));
		context->set("false", OtBooleanClass::create(false));
		context->set("null", nullptr);

		// add default functions
		context->set("assert", OtFunctionClass::create([] (OtObject context, size_t c, OtObject* p)->OtObject
		{
			if (c != 1)
				OT_EXCEPT("Function [assert] expects 1 parameter, %d given", c);

			OtObjectTalk ot;
			std::string assertion = p[0]->operator std::string();
			OtObject result = ot.processText(assertion, context);

			if (!result->operator bool())
				OT_EXCEPT("Assertion [%s] failed", assertion.c_str());

			return nullptr;
		}));

		context->set("import", OtFunctionClass::create([] (OtObject context, size_t c, OtObject* p)->OtObject
		{
			if (c != 1)
				OT_EXCEPT("Function [import] expects 1 parameter, %d given", c);

			return processFile(OtPathClass::create(p[0]->operator std::string()), context);
		}));

		context->set("run", OtFunctionClass::create([] (OtObject, size_t c, OtObject* p)->OtObject
		{
			if (c != 1)
				OT_EXCEPT("Function [run] expects 1 parameter, %d given", c);

			OtObject context = createDefaultContext();
			OtObject result = processFile(OtPathClass::create(p[0]->operator std::string()), context);
			return result;
		}));

		context->set("print", OtFunctionClass::create([] (OtObject, size_t c, OtObject* p)->OtObject
		{
			for (size_t i = 0; i < c; i++)
				std::cout << (std::string) *p[i];

			std::cout << std::endl;
			return nullptr;
		}));

		// add default classes
		context->set("Object", OtClassClass::create(OtObjectClass::getMeta()));

		context->set("Internal", OtClassClass::create(OtInternalClass::getMeta()));
		context->set("Class", OtClassClass::create(OtClassClass::getMeta()));

		context->set("Primitive", OtClassClass::create(OtPrimitiveClass::getMeta()));
		context->set("Boolean", OtClassClass::create(OtBooleanClass::getMeta()));
		context->set("Integer", OtClassClass::create(OtIntegerClass::getMeta()));
		context->set("Real", OtClassClass::create(OtRealClass::getMeta()));
		context->set("String", OtClassClass::create(OtStringClass::getMeta()));
		context->set("Function", OtClassClass::create(OtFunctionClass::getMeta()));

		context->set("Collection", OtClassClass::create(OtCollectionClass::getMeta()));
		context->set("Array", OtClassClass::create(OtArrayClass::getMeta()));
		context->set("Dict", OtClassClass::create(OtDictClass::getMeta()));

		context->set("System", OtClassClass::create(OtSystemClass::getMeta()));
		context->set("Path", OtClassClass::create(OtPathClass::getMeta()));
		context->set("FS", OtClassClass::create(OtFSClass::getMeta()));
		context->set("OS", OtClassClass::create(OtOSClass::getMeta()));
		context->set("URI", OtClassClass::create(OtURIClass::getMeta()));

		// return default context
		return context;
	}

	// compile and run ObjectTalk text
	static OtObject processText(const std::string& text, OtObject context)
	{
		// compile code, run it and return result
		OtCompiler compiler;
		OtCode code = compiler.compile(text);
		return code->operator ()(context);
	}

	// compile and run an ObjectTalk file
	static OtObject processFile(OtPath path, OtObject context)
	{
		// add file name to context
		context->set("__FILE__", path);

		// get text from file and process it
		std::ifstream stream(path->operator std::string());
		std::stringstream buffer;
		buffer << stream.rdbuf();
		return processText(buffer.str(), context);
	}

private:
	// constructor
	OtObjectTalk() {}
};
