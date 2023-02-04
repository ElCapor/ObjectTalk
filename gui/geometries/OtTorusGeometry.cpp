//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include <cmath>

#include "imgui.h"
#include "nlohmann/json.hpp"

#include "OtFunction.h"

#include "OtTorusGeometry.h"


//
//	OtTorusGeometryClass::init
//

void OtTorusGeometryClass::init(size_t count, OtObject* parameters) {
	// set attributes
	if (count) {
		switch (count) {
			case 8:
				tubularLength = parameters[7]->operator float();

			case 7:
				tubularStart = parameters[6]->operator float();

			case 6:
				radialLength = parameters[5]->operator float();

			case 5:
				radialStart = parameters[4]->operator float();

			case 4:
				tubularSegments = parameters[3]->operator int();

			case 3:
				radialSegments = parameters[2]->operator int();

			case 2:
				tubeRadius = parameters[1]->operator float();

			case 1:
				radius = parameters[0]->operator float();
				break;

			default:
				OtExcept("Too many parameters [%ld] for [TorusGeometry] constructor (max 8)", count);
		}

		refreshGeometry = true;
	}
}


//
//	OtTorusGeometryClass::setRadius
//

OtObject OtTorusGeometryClass::setRadius(float r) {
	radius = r;
	refreshGeometry = true;
	return shared();
}


//
//	OtTorusGeometryClass::setTubeRadius
//

OtObject OtTorusGeometryClass::setTubeRadius(float tr) {
	tubeRadius = tr;
	refreshGeometry = true;
	return shared();
}


//
//	OtTorusGeometryClass::setRadialSegments
//

OtObject OtTorusGeometryClass::setRadialSegments(int segments) {
	radialSegments = segments;
	refreshGeometry = true;
	return shared();
}


//
//	OtTorusGeometryClass::setTubularSegments
//

OtObject OtTorusGeometryClass::setTubularSegments(int segments) {
	tubularSegments = segments;
	refreshGeometry = true;
	return shared();
}


//
//	OtTorusGeometryClass::setRadialStart
//

OtObject OtTorusGeometryClass::setRadialStart(float rs) {
	radialStart = rs;
	refreshGeometry = true;
	return shared();
}


//
//	OtTorusGeometryClass::setRadialLength
//

OtObject OtTorusGeometryClass::setRadialLength(float rl) {
	radialLength = rl;
	refreshGeometry = true;
	return shared();
}


//
//	OtTorusGeometryClass::setTubularStart
//

OtObject OtTorusGeometryClass::setTubularStart(float ts) {
	tubularStart = ts;
	refreshGeometry = true;
	return shared();
}


//
//	OtTorusGeometryClass::setTubularLength
//

OtObject OtTorusGeometryClass::setTubularLength(float tl) {
	tubularLength = tl;
	refreshGeometry = true;
	return shared();
}


//
//	OtTorusGeometryClass::fillGeometry
//

void OtTorusGeometryClass::fillGeometry() {
	// generate vertices
	for (auto j = 0; j <= radialSegments; j++) {
		for (auto i = 0; i <= tubularSegments; i++) {
			auto u = radialStart + (float) j / radialSegments * radialLength;
			auto v = tubularStart + (float) i / tubularSegments * tubularLength;

			auto x = (radius + tubeRadius * std::cos(v)) * std::cos(u);
			auto y = (radius + tubeRadius * std::cos(v)) * std::sin(u);
			auto z = tubeRadius * std::sin(v);

			// add vertex
			addVertex(OtVertex(
				glm::vec3(x, y, z),
				glm::normalize(glm::vec3(x, y, z) - glm::vec3(radius * std::cos(u), radius * std::sin(u), 0.0)),
				glm::vec2((float) i / (float) tubularSegments, (float) j / (float) radialSegments)));
		}
	}

	// add triangles
	for (auto j = 1; j <= radialSegments; j++) {
		for (auto i = 1; i <= tubularSegments; i++) {
			auto a = (tubularSegments + 1) * j + i - 1;
			auto b = (tubularSegments + 1) * (j - 1) + i - 1;
			auto c = (tubularSegments + 1) * (j - 1) + i;
			auto d = (tubularSegments + 1) * j + i;

			addTriangle(a, b, d);
			addTriangle(b, c, d);

			if (i == 1) {
				addLine(a, b);
			}

			addLine(b, c);
			addLine(c, d);
			addLine(d, a);
		}
	}
}


//
//	OtTorusGeometryClass::renderGUI
//

bool OtTorusGeometryClass::renderGUI() {
	return false;
}


//
//	OtTorusGeometryClass::serialize
//

nlohmann::json OtTorusGeometryClass::serialize() {
	auto data = nlohmann::json::object();
	data["type"] = name;
	data["radius"] = radius;
	data["tubeRadius"] = tubeRadius;
	data["radialSegments"] = radialSegments;
	data["tubularSegments"] = tubularSegments;
	data["radialStart"] = radialStart;
	data["radialLength"] = radialLength;
	data["tubularStart"] = tubularStart;
	data["tubularLength"] = tubularLength;
	return data;
}


//
//	OtTorusGeometryClass::deserialize
//

void OtTorusGeometryClass::deserialize(nlohmann::json data) {
	radius = data.value("radius", 1.0f);
	tubeRadius = data.value("tubeRadius", 0.4f);
	radialSegments = data.value("radialSegments", 32);
	tubularSegments = data.value("tubularSegments", 16);
	radialStart = data.value("radialStart", 0.0f);
	radialLength = data.value("phiSegments", std::numbers::pi * 2.0f);
	tubularStart = data.value("phiSegments", 0.0f);
	tubularLength = data.value("phiSegments", std::numbers::pi * 2.0f);
}


//
//	OtTorusGeometryClass::getMeta
//

OtType OtTorusGeometryClass::getMeta() {
	static OtType type;

	if (!type) {
		type = OtTypeClass::create<OtTorusGeometryClass>("TorusGeometry", OtGeometryClass::getMeta());
		type->set("__init__", OtFunctionClass::create(&OtTorusGeometryClass::init));
		type->set("setRadius", OtFunctionClass::create(&OtTorusGeometryClass::setRadius));
		type->set("setTubeRadius", OtFunctionClass::create(&OtTorusGeometryClass::setTubeRadius));
		type->set("setRadialSegments", OtFunctionClass::create(&OtTorusGeometryClass::setRadialSegments));
		type->set("setTubularSegments", OtFunctionClass::create(&OtTorusGeometryClass::setTubularSegments));
		type->set("setRadialStart", OtFunctionClass::create(&OtTorusGeometryClass::setRadialStart));
		type->set("setRadialLength", OtFunctionClass::create(&OtTorusGeometryClass::setRadialLength));
		type->set("setTubularStart", OtFunctionClass::create(&OtTorusGeometryClass::setTubularStart));
		type->set("setTubularLength", OtFunctionClass::create(&OtTorusGeometryClass::setTubularLength));
	}

	return type;
}


//
//	OtTorusGeometryClass::create
//

OtTorusGeometry OtTorusGeometryClass::create() {
	OtTorusGeometry torusgeometry = std::make_shared<OtTorusGeometryClass>();
	torusgeometry->setType(getMeta());
	return torusgeometry;
}
