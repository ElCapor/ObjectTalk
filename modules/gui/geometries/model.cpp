//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "tiny_obj_loader.h"

#include "ot/function.h"

#include "model.h"


//
//	OtModelClass::init
//

OtObject OtModelClass::init(size_t count, OtObject* parameters) {
	// set attributes
	if (count) {
		switch (count) {
			case 2:
				scale = parameters[1]->operator double();

			case 1:
				modelName = parameters[0]->operator std::string();
				break;

			default:
				OtExcept("Too many parameters [%ld] for [Model] contructor (max 2)", count);
		}

		refreshBuffers = true;
	}

	return nullptr;
}


//
//	OtModelClass::setModel
//

OtObject OtModelClass::setModel(const std::string& name) {
	modelName = name;
	refreshBuffers = true;
	return shared();
}


//
//	OtModelClass::setScale
//

OtObject OtModelClass::setScale(double s) {
	scale = s;
	refreshBuffers = true;
	return shared();
}


//
//	OtModelClass::fillBuffers
//

void OtModelClass::fillBuffers() {
	// clear geometry
	clear();

	// default culling
	culling = true;

	// load the object model
	tinyobj::attrib_t attrib;
	std::vector<tinyobj::shape_t> shapes;
	std::vector<tinyobj::material_t> materials;
	std::string warn;
	std::string err;
	tinyobj::LoadObj(&attrib, &shapes, &materials, &warn, &err, modelName.c_str());

	// handle warnings
	if (!warn.empty()) {
		OT_DEBUG(warn);
	}

	// handle errors
	if (!err.empty()) {
		OtExcept("Error while loading model [%s]: %s", modelName.c_str(), err.c_str());
	}

	// process all model shapes (and created vertices and indices)
	bool hasUV = attrib.texcoords.size() > 0;

	for (auto& shape : shapes) {
		for (auto& index : shape.mesh.indices) {
			addVertex(OtVertex(
				glm::vec3(
					scale * attrib.vertices[3 * index.vertex_index + 0],
					scale * attrib.vertices[3 * index.vertex_index + 1],
					scale * attrib.vertices[3 * index.vertex_index + 2]),
				glm::normalize(glm::vec3(
					attrib.normals[3 * index.normal_index + 0],
					attrib.normals[3 * index.normal_index + 1],
					attrib.normals[3 * index.normal_index + 2])),
				glm::vec2(
					hasUV ? attrib.texcoords[2 * index.texcoord_index + 0] : 0.0,
					hasUV ? attrib.texcoords[2 * index.texcoord_index + 1] : 0.0)));

			auto size = vertices.size();

			if (size && ((size % 3) == 0)) {
				addTriangle(size -3, size -2, size - 1);
				addLine(size - 3, size - 2);
				addLine(size - 2, size - 1);
				addLine(size - 1, size - 3);
			}
		}
	}
}


//
//	OtModelClass::getMeta
//

OtType OtModelClass::getMeta() {
	static OtType type = nullptr;

	if (!type) {
		type = OtTypeClass::create<OtModelClass>("Model", OtGeometryClass::getMeta());
		type->set("__init__", OtFunctionClass::create(&OtModelClass::init));
		type->set("setModel", OtFunctionClass::create(&OtModelClass::setModel));
		type->set("setScale", OtFunctionClass::create(&OtModelClass::setScale));
	}

	return type;
}


//
//	OtModelClass::create
//

OtModel OtModelClass::create() {
	OtModel model = std::make_shared<OtModelClass>();
	model->setType(getMeta());
	return model;
}
