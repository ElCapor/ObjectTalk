//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2022 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "bgfx/embedded_shader.h"
#include "glm/glm.hpp"
#include "glm/ext.hpp"

#include "OtFunction.h"

#include "OtFramework.h"
#include "OtSkybox.h"
#include "OtSkyboxShader.h"


//
//	Globals
//

static const bgfx::EmbeddedShader embeddedShaders[] = {
	BGFX_EMBEDDED_SHADER(OtSkyboxVS),
	BGFX_EMBEDDED_SHADER(OtSkyboxFS),
	BGFX_EMBEDDED_SHADER_END()
};

static glm::vec3 skyboxVertices[] = {
	{ -1.0f,  1.0f, -1.0f },
	{ -1.0f, -1.0f, -1.0f },
	{  1.0f, -1.0f, -1.0f },
	{  1.0f, -1.0f, -1.0f },
	{  1.0f,  1.0f, -1.0f },
	{ -1.0f,  1.0f, -1.0f },

	{ -1.0f, -1.0f,  1.0f },
	{ -1.0f, -1.0f, -1.0f },
	{ -1.0f,  1.0f, -1.0f },
	{ -1.0f,  1.0f, -1.0f },
	{ -1.0f,  1.0f,  1.0f },
	{ -1.0f, -1.0f,  1.0f },

	{  1.0f, -1.0f, -1.0f },
	{  1.0f, -1.0f,  1.0f },
	{  1.0f,  1.0f,  1.0f },
	{  1.0f,  1.0f,  1.0f },
	{  1.0f,  1.0f, -1.0f },
	{  1.0f, -1.0f, -1.0f },

	{ -1.0f, -1.0f,  1.0f },
	{ -1.0f,  1.0f,  1.0f },
	{  1.0f,  1.0f,  1.0f },
	{  1.0f,  1.0f,  1.0f },
	{  1.0f, -1.0f,  1.0f },
	{ -1.0f, -1.0f,  1.0f },

	{ -1.0f,  1.0f, -1.0f },
	{  1.0f,  1.0f, -1.0f },
	{  1.0f,  1.0f,  1.0f },
	{  1.0f,  1.0f,  1.0f },
	{ -1.0f,  1.0f,  1.0f },
	{ -1.0f,  1.0f, -1.0f },

	{ -1.0f, -1.0f, -1.0f },
	{ -1.0f, -1.0f,  1.0f },
	{  1.0f, -1.0f, -1.0f },
	{  1.0f, -1.0f, -1.0f },
	{ -1.0f, -1.0f,  1.0f },
	{  1.0f, -1.0f,  1.0f }
};

static uint32_t skyboxIndices[] = {
	0, 1, 2,
	3, 4, 5,

	6, 7, 8,
	9, 10, 11,

	12, 13, 14,
	15, 16, 17,

	18, 19, 20,
	21, 22, 23,

	24, 25, 26,
	27, 28, 29,

	30, 31, 32,
	33, 34, 35
};


//
//	OtSkyboxClass::OtSkyboxClass
//

OtSkyboxClass::OtSkyboxClass() {
	// create geometry
	bgfx::VertexLayout layout;

	layout.begin()
		.add(bgfx::Attrib::Position, 3, bgfx::AttribType::Float)
		.end();

	vertexBuffer = bgfx::createVertexBuffer(bgfx::makeRef(skyboxVertices, sizeof(skyboxVertices) * sizeof(glm::vec3)), layout);
	indexBuffer = bgfx::createIndexBuffer(bgfx::makeRef(skyboxIndices, sizeof(skyboxIndices) *	sizeof(uint32_t)), BGFX_BUFFER_INDEX32);

	// register uniform
	cubemapUniform = bgfx::createUniform("s_cubemap", bgfx::UniformType::Sampler);

	// initialize shader
	bgfx::RendererType::Enum type = bgfx::getRendererType();

	shader = bgfx::createProgram(
		bgfx::createEmbeddedShader(embeddedShaders, type, "OtSkyboxVS"),
		bgfx::createEmbeddedShader(embeddedShaders, type, "OtSkyboxFS"),
		true);
}


//
//	OtSkyboxClass::~OtSkyboxClass
//

OtSkyboxClass::~OtSkyboxClass() {
	// release resources
	bgfx::destroy(vertexBuffer);
	bgfx::destroy(indexBuffer);
	bgfx::destroy(cubemapUniform);

	if (bgfx::isValid(cubemap)) {
		bgfx::destroy(cubemap);
	}

	bgfx::destroy(shader);
}


//
//	OtSkyboxClass::init
//

void OtSkyboxClass::init(size_t count, OtObject* parameters) {
	if (count == 6) {
		setCubemap(
			parameters[0]->operator std::string(),
			parameters[1]->operator std::string(),
			parameters[2]->operator std::string(),
			parameters[3]->operator std::string(),
			parameters[4]->operator std::string(),
			parameters[5]->operator std::string());

	} else if (count != 0) {
		OtExcept("[Skybox] constructor expects 0 or 6 arguments (not %ld)", count);
	}
}


//
//	OtSkyboxClass::setCubemap
//

OtObject OtSkyboxClass::setCubemap(const std::string& posx, const std::string& negx, const std::string& posy, const std::string& negy, const std::string& posz, const std::string& negz) {
	// sanity check
	if (bgfx::isValid(cubemap)) {
		OtExcept("Cubemap already set for [Skybox]");
	}

	// load first side
	auto framework = OtFrameworkClass::instance();
	bimg::ImageContainer* image = framework->getImage(posx, true, true);
	uint16_t imageSize = image->m_width;
	bimg::TextureFormat::Enum imageFormat = image->m_format;

	// create a new cubemap
	cubemap = bgfx::createTextureCube(imageSize, false, 1, bgfx::TextureFormat::Enum(imageFormat), BGFX_TEXTURE_NONE | BGFX_SAMPLER_NONE);

	// store first side
	const bgfx::Memory* mem = bgfx::makeRef(image->m_data, image->m_size);
	bgfx::updateTextureCube(cubemap, 0, 0, 0, 0, 0, imageSize, imageSize, mem);

	// load and store other sides
	image = framework->getImage(negx, true, true);

	if (image->m_width != imageSize || image->m_format != imageFormat) {
		OtExcept("Cubemap image (negx] does not have same size or format as others");
	}

	mem = bgfx::makeRef(image->m_data, image->m_size);
	bgfx::updateTextureCube(cubemap, 0, 1, 0, 0, 0, imageSize, imageSize, mem);

	image = framework->getImage(posy, true, true);

	if (image->m_width != imageSize || image->m_format != imageFormat) {
		OtExcept("Cubemap image (posy] does not have same size or format as others");
	}

	mem = bgfx::makeRef(image->m_data, image->m_size);
	bgfx::updateTextureCube(cubemap, 0, 2, 0, 0, 0, imageSize, imageSize, mem);

	image = framework->getImage(negy, true, true);

	if (image->m_width != imageSize || image->m_format != imageFormat) {
		OtExcept("Cubemap image (negy] does not have same size or format as others");
	}

	mem = bgfx::makeRef(image->m_data, image->m_size);
	bgfx::updateTextureCube(cubemap, 0, 3, 0, 0, 0, imageSize, imageSize, mem);

	image = framework->getImage(posz, true, true);

	if (image->m_width != imageSize || image->m_format != imageFormat) {
		OtExcept("Cubemap image (posz] does not have same size or format as others");
	}

	mem = bgfx::makeRef(image->m_data, image->m_size);
	bgfx::updateTextureCube(cubemap, 0, 4, 0, 0, 0, imageSize, imageSize, mem);

	image = framework->getImage(negz, true, true);

	if (image->m_width != imageSize || image->m_format != imageFormat) {
		OtExcept("Cubemap image (negz] does not have same size or format as others");
	}

	mem = bgfx::makeRef(image->m_data, image->m_size);
	bgfx::updateTextureCube(cubemap, 0, 5, 0, 0, 0, imageSize, imageSize, mem);

	return shared();
}


//
//	OtSkyboxClass::render
//

void OtSkyboxClass::render(OtRenderingContext context) {
	// sanity check
	if (!bgfx::isValid(cubemap)) {
		OtExcept("[cubemap] missing for [Skybox]");
	}

	// ensure skybox is centered at camera position
	glm::mat4 transform = glm::translate(glm::mat4(1.0), context->getCamera()->getPosition());
	bgfx::setTransform(glm::value_ptr(transform));

	// submit cubemap
	bgfx::setTexture(0, cubemapUniform, cubemap);

	// submit vertices and triangles
	bgfx::setVertexBuffer(0, vertexBuffer);
	bgfx::setIndexBuffer(indexBuffer);

	// run shader
	bgfx::setState(BGFX_STATE_WRITE_RGB | BGFX_STATE_WRITE_A | BGFX_STATE_MSAA);
	bgfx::submit(context->getView(), shader);
}


//
//	OtSkyboxClass::getMeta
//

OtType OtSkyboxClass::getMeta() {
	static OtType type;

	if (!type) {
		type = OtTypeClass::create<OtSkyboxClass>("Skybox", OtSceneObjectClass::getMeta());
		type->set("__init__", OtFunctionClass::create(&OtSkyboxClass::init));
		type->set("setCubemap", OtFunctionClass::create(&OtSkyboxClass::setCubemap));
	}

	return type;
}


//
//	OtSkyboxClass::create
//

OtSkybox OtSkyboxClass::create() {
	OtSkybox skybox = std::make_shared<OtSkyboxClass>();
	skybox->setType(getMeta());
	return skybox;
}
