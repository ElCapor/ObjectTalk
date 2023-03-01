//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "OtException.h"
#include "OtFunction.h"
#include "OtThrow.h"


//
//	OtThrowClass::call
//

void OtThrowClass::call(const std::string& error) {
	OtExcept(error);
}


//
//	OtThrowClass::getMeta
//

OtType OtThrowClass::getMeta() {
	static OtType type;

	if (!type) {
		type = OtTypeClass::create<OtThrowClass>("Throw", OtInternalClass::getMeta());
		type->set("__call__", OtFunction::create(&OtThrowClass::call));
	}

	return type;
}
