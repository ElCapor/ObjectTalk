//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include <cmath>

#include "ot/function.h"

#include "torus.h"


//
//	OtTorusClass::init
//

OtObject OtTorusClass::init(size_t count, OtObject* parameters) {
	// set attributes
	if (count) {
		switch (count) {
			case 8:
				tubularLength = parameters[7]->operator double();

			case 7:
				tubularStart = parameters[6]->operator double();

			case 6:
				radialLength = parameters[5]->operator double();

			case 5:
				radialStart = parameters[4]->operator double();

			case 4:
				tubularSegments = parameters[3]->operator int();

			case 3:
				radialSegments = parameters[2]->operator int();

			case 2:
				tubeRadius = parameters[1]->operator double();

			case 1:
				radius = parameters[0]->operator double();
				break;

			default:
				OtExcept("Too many parameters [%ld] for [Torus] constructor (max 8)", count);
		}

		refreshGeometry = true;
	}

	return nullptr;
}


//
//	OtTorusClass::setRadius
//

OtObject OtTorusClass::setRadius(double r) {
	radius = r;
	refreshGeometry = true;
	return shared();
}


//
//	OtTorusClass::setTubeRadius
//

OtObject OtTorusClass::setTubeRadius(double tr) {
	tubeRadius = tr;
	refreshGeometry = true;
	return shared();
}


//
//	OtTorusClass::setRadialSegments
//

OtObject OtTorusClass::setRadialSegments(int segments) {
	radialSegments = segments;
	refreshGeometry = true;
	return shared();
}


//
//	OtTorusClass::setTubularSegments
//

OtObject OtTorusClass::setTubularSegments(int segments) {
	tubularSegments = segments;
	refreshGeometry = true;
	return shared();
}


//
//	OtTorusClass::setRadialStart
//

OtObject OtTorusClass::setRadialStart(double rs) {
	radialStart = rs;
	refreshGeometry = true;
	return shared();
}


//
//	OtTorusClass::setRadialLength
//

OtObject OtTorusClass::setRadialLength(double rl) {
	radialLength = rl;
	refreshGeometry = true;
	return shared();
}


//
//	OtTorusClass::setTubularStart
//

OtObject OtTorusClass::setTubularStart(double ts) {
	tubularStart = ts;
	refreshGeometry = true;
	return shared();
}


//
//	OtTorusClass::setTubularLength
//

OtObject OtTorusClass::setTubularLength(double tl) {
	tubularLength = tl;
	refreshGeometry = true;
	return shared();
}


//
//	OtTorusClass::fillGeometry
//

void OtTorusClass::fillGeometry() {
	// default culling
	culling = tubularLength == std::numbers::pi * 2.0 && radialLength == std::numbers::pi;

	// generate vertices
	for (auto j = 0; j <= radialSegments; j++) {
		for (auto i = 0; i <= tubularSegments; i++) {
			auto u = radialStart + (float) j / radialSegments * radialLength;
			auto v = tubularStart + (float) i / tubularSegments * tubularLength;

			auto x = (radius + tubeRadius * std::cos(v)) * std::cos(u);
			auto y = (radius + tubeRadius * std::cos(v)) * std::sin(u);
			auto z = tubeRadius * std::sin(v);

			glm::vec3 pos = glm::vec3(x, y, z);
			glm::vec3 center = glm::vec3(radius * std::cos(u), radius * std::sin(u), 0.0);
			glm::vec3 normal = glm::normalize(pos - center);

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
//	OtTorusClass::getMeta
//

OtType OtTorusClass::getMeta() {
	static OtType type = nullptr;

	if (!type) {
		type = OtTypeClass::create<OtTorusClass>("Torus", OtGeometryClass::getMeta());
		type->set("__init__", OtFunctionClass::create(&OtTorusClass::init));
		type->set("setRadius", OtFunctionClass::create(&OtTorusClass::setRadius));
		type->set("setTubeRadius", OtFunctionClass::create(&OtTorusClass::setTubeRadius));
		type->set("setRadialSegments", OtFunctionClass::create(&OtTorusClass::setRadialSegments));
		type->set("setTubularSegments", OtFunctionClass::create(&OtTorusClass::setTubularSegments));
		type->set("setRadialStart", OtFunctionClass::create(&OtTorusClass::setRadialStart));
		type->set("setRadialLength", OtFunctionClass::create(&OtTorusClass::setRadialLength));
		type->set("setTubularStart", OtFunctionClass::create(&OtTorusClass::setTubularStart));
		type->set("setTubularLength", OtFunctionClass::create(&OtTorusClass::setTubularLength));
	}

	return type;
}


//
//	OtTorusClass::create
//

OtTorus OtTorusClass::create() {
	OtTorus torus = std::make_shared<OtTorusClass>();
	torus->setType(getMeta());
	return torus;
}
