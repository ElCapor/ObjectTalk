//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2022 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "OtFunction.h"

#include "OtIcosahedronGeometry.h"


//
//	See https://en.wikipedia.org/wiki/Regular_icosahedron
//


//
//	Globals
//

static float t = (1.0 + std::sqrt(5.0)) / 2.0;

static glm::vec3 bv[] = {
	glm::vec3(-1.0, t, 0.0), 	glm::vec3(1.0, t, 0.0), 	glm::vec3(-1.0, -t, 0.0), 	glm::vec3(1.0, -t, 0.0),
	glm::vec3(0.0, -1.0, t), 	glm::vec3(0.0, 1.0, t),		glm::vec3(0.0, -1.0, -t), 	glm::vec3(.00, 1.0, -t),
	glm::vec3(t, 0.0, -1.0), 	glm::vec3(t, 0.0, 1.0), 	glm::vec3(-t, 0.0, -1.0), 	glm::vec3(-t, 0.0, 1.0)
};

static uint32_t bi[] = {
	0, 11, 5, 	0, 5, 1, 	0, 1, 7, 	0, 7, 10, 	0, 10, 11,
	1, 5, 9, 	5, 11, 4,	11, 10, 2,	10, 7, 6,	7, 1, 8,
	3, 9, 4, 	3, 4, 2,	3, 2, 6,	3, 6, 8,	3, 8, 9,
	4, 9, 5, 	2, 4, 11,	6, 2, 10,	8, 6, 7,	9, 8, 1
};


//
//	OtIcosahedronGeometryClass::OtIcosahedronGeometryClass
//

OtIcosahedronGeometryClass::OtIcosahedronGeometryClass() {
	baseVertices = bv;
	baseIndices = bi;
	baseVertexCount = sizeof(bv) / sizeof(bv[0]);
	baseIndexCount = sizeof(bi) / sizeof(bi[0]);
}


//
//	OtIcosahedronGeometryClass::getMeta
//

OtType OtIcosahedronGeometryClass::getMeta() {
	static OtType type;

	if (!type) {
		type = OtTypeClass::create<OtIcosahedronGeometryClass>("IcosahedronGeometry", OtPolyhedronGeometryClass::getMeta());
	}

	return type;
}


//
//	OtIcosahedronGeometryClass::create
//

OtIcosahedronGeometry OtIcosahedronGeometryClass::create() {
	OtIcosahedronGeometry geometry = std::make_shared<OtIcosahedronGeometryClass>();
	geometry->setType(getMeta());
	return geometry;
}
