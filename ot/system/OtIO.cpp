//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include <fstream>
#include <sstream>

#include "OtByteCode.h"
#include "OtCompiler.h"
#include "OtFunction.h"
#include "OtIO.h"
#include "OtSource.h"
#include "OtString.h"
#include "OtVM.h"


//
//	OtIOClass::readJSON
//

OtObject OtIOClass::readJSON(const std::string& name) {
	std::stringstream buffer;

	try {
		std::ifstream stream(name.c_str());

		if (stream.fail()) {
			OtError("Can't read from file [%s]", name.c_str());
		}

		buffer << stream.rdbuf();
		stream.close();

	} catch (std::exception& e) {
		OtError("Can't read from file [%s], error: %s", name.c_str(), e.what());
	}

	OtCompiler compiler;
	OtSource source = OtSourceClass::create(name, buffer.str());
	OtByteCode bytecode = compiler.compileExpression(source);

	return OtVM::instance()->execute(bytecode);
}


//
//	OtIOClass::writeJSON
//

void OtIOClass::writeJSON(const std::string& name, OtObject object) {
	try {
		std::ofstream stream(name.c_str());

		if (stream.fail()) {
			OtError("Can't write to file [%s]", name.c_str());
		}

		stream << object->json();
		stream.close();

	} catch (std::exception& e) {
		OtError("Can't write to file [%s], error: %s", name.c_str(), e.what());
	}
}


//
//	OtIOClass::readText
//

OtObject OtIOClass::readText(const std::string& name) {
	std::stringstream buffer;

	try {
		std::ifstream stream(name.c_str());

		if (stream.fail()) {
			OtError("Can't read from file [%s]", name.c_str());
		}

		buffer << stream.rdbuf();
		stream.close();

	} catch (std::exception& e) {
		OtError("Can't read from file [%s], error: %s", name.c_str(), e.what());
	}

	return OtString::create(buffer.str());
}


//
//	OtIOClass::writeText
//

void OtIOClass::writeText(const std::string& name, OtObject object) {
	try {
		std::ofstream stream(name.c_str());

		if (stream.fail()) {
			OtError("Can't write to file [%s]", name.c_str());
		}

		stream << object->operator std::string();
		stream.close();

	} catch (std::exception& e) {
		OtError("Can't write to file [%s], error: %s", name.c_str(), e.what());
	}
}


//
//	OtIOClass::getMeta
//

OtType OtIOClass::getMeta() {
	static OtType type;

	if (!type) {
		type = OtType::create<OtIOClass>("IO", OtSystemClass::getMeta());
		type->set("readJSON", OtFunction::create(&OtIOClass::readJSON));
		type->set("writeJSON", OtFunction::create(&OtIOClass::writeJSON));
		type->set("readText", OtFunction::create(&OtIOClass::readText));
		type->set("writeText", OtFunction::create(&OtIOClass::writeText));
	}

	return type;
}
