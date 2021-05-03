//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include <iostream>

#include "ot/exception.h"
#include "ot/numbers.h"

#include "ot/global.h"

#include "ot/primitive.h"
#include "ot/boolean.h"
#include "ot/integer.h"
#include "ot/real.h"
#include "ot/function.h"

#include "ot/collection.h"
#include "ot/array.h"
#include "ot/dict.h"
#include "ot/set.h"

#include "ot/class.h"
#include "ot/module.h"

#include "ot/rangeiterator.h"


//
//	OtGlobalClass::OtGlobalClass
//

OtGlobalClass::OtGlobalClass() {
	// add default constants
	set("null", OtObjectClass::create());
	set("true", OtBooleanClass::create(true));
	set("false", OtBooleanClass::create(false));
	set("pi", OtRealClass::create(std::numbers::pi));
	set("e", OtRealClass::create(std::numbers::e));

	// add default functions
	set("assert", OtFunctionClass::create(&OtGlobalClass::doAssert));
	set("range", OtFunctionClass::create(&OtGlobalClass::range));
	set("import", OtFunctionClass::create(&OtGlobalClass::import));
	set("print", OtFunctionClass::create(&OtGlobalClass::print));

	// add default classes
	set("Object", OtClassClass::create(OtObjectClass::getMeta()));

	set("Primitive", OtClassClass::create(OtPrimitiveClass::getMeta()));
	set("Boolean", OtClassClass::create(OtBooleanClass::getMeta()));
	set("Integer", OtClassClass::create(OtIntegerClass::getMeta()));
	set("Real", OtClassClass::create(OtRealClass::getMeta()));
	set("String", OtClassClass::create(OtStringClass::getMeta()));
	set("Function", OtClassClass::create(OtFunctionClass::getMeta()));

	set("Collection", OtClassClass::create(OtCollectionClass::getMeta()));
	set("Array", OtClassClass::create(OtArrayClass::getMeta()));
	set("Dict", OtClassClass::create(OtDictClass::getMeta()));
	set("Set", OtClassClass::create(OtSetClass::getMeta()));
}


//
//	OtGlobalClass::doAssert
//

void OtGlobalClass::doAssert(bool condition) {
	if (!condition) {
		OtExcept("Assertion error");
	}
}


//
//	OtGlobalClass::import
//

OtObject OtGlobalClass::import(const std::string name) {
	OtModule module = OtModuleClass::create();
	module->import(name);
	return module;
}


//
//	OtGlobalClass::range
//

OtObject OtGlobalClass::range(size_t count, OtObject* parameters) {
	long from;
	long to;
	long increment;

	if (count == 1) {
		from = 1;
		to = parameters[0]->operator long();
		increment = 1;

	} else if (count == 2) {
		from = parameters[0]->operator long();
		to = parameters[1]->operator long();
		increment = 1;

	} else if (count == 3) {
		from = parameters[0]->operator long();
		to = parameters[1]->operator long();
		increment = parameters[2]->operator long();

	}else {
		OtExcept("Range functions required 1, 2 or 3 parameters, not %ld", count);
	}

	if (increment == 0) {
		OtExcept("You can't create a range with an increment of 0");

	} else if (to > from && increment < 0) {
		OtExcept("Forward ranges must have positive increments");

	} else if (from > to && increment > 0) {
		OtExcept("Reverse ranges must have negative increments");
	}

	return OtRangeIteratorClass::create(from, to, increment);
}


//
//	OtGlobalClass::print
//

OtObject OtGlobalClass::print(size_t count, OtObject* parameters) {
	for (size_t i = 0; i < count; i++) {
		std::cout << (std::string) *parameters[i];
	}

	std::cout << std::endl;
	return nullptr;
}


//
//	OtGlobalClass::getMeta
//

OtType OtGlobalClass::getMeta() {
	static OtType type = nullptr;

	if (!type) {
		type = OtTypeClass::create<OtGlobalClass>("Global", OtInternalClass::getMeta());
	}

	return type;
}


//
//	OtGlobalClass::create
//

OtGlobal OtGlobalClass::create() {
	OtGlobal module = std::make_shared<OtGlobalClass>();
	module->setType(getMeta());
	return module;
}
