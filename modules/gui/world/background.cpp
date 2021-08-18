//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "bgfx/embedded_shader.h"

#include "ot/function.h"

#include "background.h"
#include "background_shader.h"
#include "plane.h"
#include "theme.h"


//
//	Globals
//

static const bgfx::EmbeddedShader embeddedShaders[] = {
	BGFX_EMBEDDED_SHADER(vs_background),
	BGFX_EMBEDDED_SHADER(fs_background),
	BGFX_EMBEDDED_SHADER_END()
};


//
//	OtBackgroundClass::OtBackgroundClass
//

OtBackgroundClass::OtBackgroundClass() {
	// create geometry
	geometry = OtPlaneClass::create(2.0, 2.0);
	vertexBuffer = geometry->getVertexBuffer();
	indexBuffer = geometry->getTriangleIndexBuffer();

	// register uniform
	transformUniform = bgfx::createUniform("u_background_transform", bgfx::UniformType::Mat4);

	// initialize shader
	bgfx::RendererType::Enum type = bgfx::getRendererType();

	program = bgfx::createProgram(
		bgfx::createEmbeddedShader(embeddedShaders, type, "vs_background"),
		bgfx::createEmbeddedShader(embeddedShaders, type, "fs_background"),
		true);
}


//
//	OtBackgroundClass::~OtBackgroundClass
//

OtBackgroundClass::~OtBackgroundClass() {
	// release resources
	if (transformUniform.idx != bgfx::kInvalidHandle) {
		bgfx::destroy(transformUniform);
	}

	if (program.idx != bgfx::kInvalidHandle) {
		bgfx::destroy(program);
	}

	if (vertexBuffer.idx != bgfx::kInvalidHandle) {
		bgfx::destroy(vertexBuffer);
	}

	if (indexBuffer.idx != bgfx::kInvalidHandle) {
		bgfx::destroy(indexBuffer);
	}
}


//
//	OtBackgroundClass::init
//

void OtBackgroundClass::init(OtObject mat) {
	// setGeometry(geom);
	setMaterial(mat);
}


//
//	OtBackgroundClass::setMaterial
//

void OtBackgroundClass::setMaterial(OtObject object) {
	// ensure object is a material
	if (object->isKindOf("Material")) {
		material = object->cast<OtMaterialClass>();

	} else {
		OtExcept("Expected a [Material] object, not a [%s]", object->getType()->getName().c_str());
	}
}


//
//	OtBackgroundClass::render
//

void OtBackgroundClass::render(int view, glm::mat4 parentTransform) {
	// sanity check
	if (!material) {
		OtExcept("[material] missing for [background]");
	}

	// submit uniforms
	glm::mat4 transform = glm::mat4(1.0);
	float scale = (float) OtTheme::height / (float) OtTheme::width;
	// transform = glm::scale(transform, glm::vec3(1.0, scale, 1.0));
	bgfx::setUniform(transformUniform, &transform);

	// submit vertices and triangles
	bgfx::setVertexBuffer(0, vertexBuffer);
	bgfx::setIndexBuffer(indexBuffer);

	// setup material
	material->submit(view);

	// run shader
	bgfx::setState(BGFX_STATE_WRITE_RGB | BGFX_STATE_WRITE_A | BGFX_STATE_MSAA);
	bgfx::submit(view, program, bgfx::ViewMode::Default);
}


//
//	OtBackgroundClass::getMeta
//

OtType OtBackgroundClass::getMeta() {
	static OtType type = nullptr;

	if (!type) {
		type = OtTypeClass::create<OtBackgroundClass>("Background", OtObject3dClass::getMeta());
		type->set("__init__", OtFunctionClass::create(&OtBackgroundClass::init));
		type->set("setMaterial", OtFunctionClass::create(&OtBackgroundClass::setMaterial));
	}

	return type;
}


//
//	OtBackgroundClass::create
//

OtBackground OtBackgroundClass::create() {
	OtBackground wireframe = std::make_shared<OtBackgroundClass>();
	wireframe->setType(getMeta());
	return wireframe;
}
