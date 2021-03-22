//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "ot/exception.h"
#include "ot/function.h"


//
//	OtFunctionClass::operator ()
//

OtObject OtFunctionClass::operator () (OtContext context, size_t count, OtObject* parameters) {
	// sanity check
	if (parameterCount != SIZE_MAX && count != parameterCount) {
		OtExcept("Function expects %d parameters, %d given", parameterCount, count);
	}

	return (*invoker)(target, context, count, parameters);
}


//
//	OtFunctionClass::getMeta()
//

OtType OtFunctionClass::getMeta() {
	static OtType type = nullptr;

	if (!type) {
		type = OtTypeClass::create<OtFunctionClass>("Function", OtPrimitiveClass::getMeta());
		type->set("__call__", OtFunctionClass::create(&OtFunctionClass::operator ()));
	}

	return type;
}
