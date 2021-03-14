//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "ot/boolean.h"
#include "ot/function.h"


//
//	OtBooleanClass::getMeta
//

OtType OtBooleanClass::getMeta() {
	static OtType type = nullptr;

	if (!type) {
		type = OtTypeClass::create<OtBooleanClass>("Boolean", OtPrimitiveClass::getMeta());

		type->set("__and__", OtFunctionClass::create(&OtBooleanClass::logicalAnd));
		type->set("__or__", OtFunctionClass::create(&OtBooleanClass::logicalOr));
		type->set("__not__", OtFunctionClass::create(&OtBooleanClass::logicalNot));

		type->set("__eq__", OtFunctionClass::create(&OtBooleanClass::equal));
		type->set("__ne__", OtFunctionClass::create(&OtBooleanClass::notEqual));
	}

	return type;
}

//
//	OtBooleanClass::create
//

OtBoolean OtBooleanClass::create(bool value) {
	OtBoolean boolean = std::make_shared<OtBooleanClass>(value);
	boolean->setType(getMeta());
	return boolean;
}
