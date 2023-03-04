//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "imgui.h"
#include "nlohmann/json.hpp"

#include "OtFunction.h"

#include "OtCustomGeometry.h"


//
//	OtCustomGeometryClass::renderGUI
//

bool OtCustomGeometryClass::renderGUI() {
	return false;
}


//
//	OtCustomGeometryClass::serialize
//

nlohmann::json OtCustomGeometryClass::serialize() {
	auto data = nlohmann::json::object();
	data["type"] = name;
	return data;
}


//
//	OtCustomGeometryClass::deserialize
//

void OtCustomGeometryClass::deserialize(nlohmann::json data) {
}


//
//	OtCustomGeometryClass::getMeta
//

OtType OtCustomGeometryClass::getMeta() {
	static OtType type;

	if (!type) {
		type = OtType::create<OtCustomGeometryClass>("CustomGeometry", OtGeometryClass::getMeta());
	}

	return type;
}
