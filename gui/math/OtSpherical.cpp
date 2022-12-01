//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2022 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "OtException.h"
#include "OtFunction.h"

#include "OtSpherical.h"


//
//	OtSphericalClass::init
//

void OtSphericalClass::init(size_t count, OtObject* parameters) {
	if (count == 3) {
		radius = parameters[0]->operator float();
		phi = parameters[1]->operator float();
		theta = parameters[2]->operator float();

	} else if (count != 0) {
		OtExcept("Invalid number of constructor parameters for [Spherical]");
	}
}

//
//	OtSphericalClass::getMeta
//

OtType OtSphericalClass::getMeta() {
	static OtType type;

	if (!type) {
		type = OtTypeClass::create<OtSphericalClass>("Spherical", OtMathClass::getMeta());
		type->set("__init__", OtFunctionClass::create(&OtSphericalClass::init));
	}

	return type;
}


//
//	OtSphericalClass::create
//

OtSpherical OtSphericalClass::create() {
	OtSpherical spherical = std::make_shared<OtSphericalClass>();
	spherical->setType(getMeta());
	return spherical;
}
