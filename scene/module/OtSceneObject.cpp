//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "OtFunction.h"

#include "OtEntityObject.h"
#include "OtSceneObject.h"


//
//	OtSceneObjectClass::getMeta
//

OtType OtSceneObjectClass::getMeta() {
	static OtType type = nullptr;

	if (!type) {
		type = OtType::create<OtSceneObjectClass>("Scene", OtObjectClass::getMeta());

		type->set("hasEntity", OtFunction::create(&OtSceneObjectClass::hasEntity));
		type->set("getEntity", OtFunction::create(&OtSceneObjectClass::getEntity));
	}

	return type;
}
