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
#include "imgui.h"

#include "OtFunction.h"
#include "OtNumbers.h"

#include "OtColor.h"
#include "OtFramework.h"
#include "OtScene.h"
#include "OtWater.h"
#include "OtWaterShader.h"


//
//	Constants
//

static constexpr int frameBufferWidth = 512;


//
//	Globals
//

static const bgfx::EmbeddedShader embeddedShaders[] = {
	BGFX_EMBEDDED_SHADER(OtWaterVS),
	BGFX_EMBEDDED_SHADER(OtWaterFS),
	BGFX_EMBEDDED_SHADER_END()
};

static glm::vec3 templateVertices[] = {
	{ -1.0f, 0.0f, -1.0f },
	{ -1.0f, 0.0f,	1.0f },
	{  1.0f, 0.0f,	1.0f },
	{  1.0f, 0.0f, -1.0f }
};

static uint32_t waterIndices[] = {
	0, 1, 3,
	1, 2, 3
};


//
//	OtWaterClass::OtWaterClass
//

OtWaterClass::OtWaterClass() {
	// create geometry
	bgfx::VertexLayout layout;

	layout.begin()
		.add(bgfx::Attrib::Position, 3, bgfx::AttribType::Float)
		.end();

	vertexBuffer = bgfx::createDynamicVertexBuffer(bgfx::makeRef(waterVertices, sizeof(waterVertices) * sizeof(glm::vec3)), layout);
	indexBuffer = bgfx::createIndexBuffer(bgfx::makeRef(waterIndices, sizeof(waterIndices) *  sizeof(uint32_t)), BGFX_BUFFER_INDEX32);

	// register uniforms
	auto framework = OtFrameworkClass::instance();

	waterUniform = framework->getUniform("u_water", bgfx::UniformType::Vec4, 2);
	normalsUniform = framework->getUniform("s_normals", bgfx::UniformType::Sampler);
	reflectionUniform = framework->getUniform("s_reflection", bgfx::UniformType::Sampler);
	refractionUniform = framework->getUniform("s_refraction", bgfx::UniformType::Sampler);

	// initialize shader
	shader = framework->getProgram(embeddedShaders, "OtWaterVS", "OtWaterFS");
}


//
//	OtWaterClass::~OtWaterClass
//

OtWaterClass::~OtWaterClass() {
	// release resources
	if (bgfx::isValid(reflectionFrameBuffer)) {
		bgfx::destroy(reflectionFrameBuffer);
	}

	if (bgfx::isValid(refractionFrameBuffer)) {
		bgfx::destroy(refractionFrameBuffer);
	}

	bgfx::destroy(vertexBuffer);
	bgfx::destroy(indexBuffer);
}


//
//	OtWaterClass::updateFrameBuffers
//

void OtWaterClass::updateFrameBuffers(float aspectRatio) {
	// release resources
	if (bgfx::isValid(reflectionFrameBuffer)) {
		bgfx::destroy(reflectionFrameBuffer);
	}

	if (bgfx::isValid(refractionFrameBuffer)) {
		bgfx::destroy(refractionFrameBuffer);
	}

	// determine size of frame buffer
	const uint64_t flags = BGFX_TEXTURE_RT | BGFX_SAMPLER_U_CLAMP | BGFX_SAMPLER_V_CLAMP;
	int w = frameBufferWidth;
	int h = w / aspectRatio;

	// create new frame buffers
	reflectionTextures[0] = bgfx::createTexture2D(w, h, false, 1, bgfx::TextureFormat::RGBA16F, flags);
	reflectionTextures[1] = bgfx::createTexture2D(w, h, false, 1, bgfx::TextureFormat::D32F, flags);
	reflectionFrameBuffer = bgfx::createFrameBuffer(2, reflectionTextures, true);

	refractionTextures[0] = bgfx::createTexture2D(w, h, false, 1, bgfx::TextureFormat::RGBA16F, flags);
	refractionTextures[1] = bgfx::createTexture2D(w, h, false, 1, bgfx::TextureFormat::D32F, flags);
	refractionFrameBuffer = bgfx::createFrameBuffer(2, refractionTextures, true);
}


//
//	OtWaterClass::setSize
//

OtObject OtWaterClass::setSize(int s) {
	size = s;
	return shared();
}


//
//	OtWaterClass::setNormalMap
//

OtObject OtWaterClass::setNormalMap(const std::string& normalsName) {
	if (bgfx::isValid(normals)) {
		OtExcept("Normal map already set for [Water]");
	}

	normals = OtFrameworkClass::instance()->getTexture(normalsName);
	return shared();
}


//
//	OtWaterClass::setNormalScale
//

OtObject OtWaterClass::setNormalScale(float s) {
	scale = s;
	return shared();
}


//
//	OtWaterClass::update
//

void OtWaterClass::update(OtRenderingContext context) {
	// create/update frame buffers (if required)
	auto aspectRatio = context->getViewAspectRatio();

	if (frameBufferAspectRation != aspectRatio) {
		updateFrameBuffers(aspectRatio);
		frameBufferAspectRation = aspectRatio;
	}

	// update vertices if camera has changed
	auto camera = context->getCamera();

	if (camera->hasChanged()) {
		// determine center
		glm::vec center = camera->getPosition();
		center.y = 0.0;

		// adjust vertices
		for (auto c = 0; c < 4; c ++) {
			waterVertices[c] = templateVertices[c] * size + center;
		}

		// tell GPU about it
		bgfx::update(vertexBuffer, 0, bgfx::makeRef(waterVertices, sizeof(waterVertices) * sizeof(glm::vec3)));
	}

	// reserve views for reflection and refraction
	OtFramework framework = OtFrameworkClass::instance();
	reflectionView = framework->getNextViewID();
	refractionView = framework->getNextViewID();
}


//
//	OtWaterClass::render
//

void OtWaterClass::render(OtRenderingContext context) {
	// water doesn't cause shadows
	// and we don't render while we're creating reflections and refractions
	if (context->inLightingPass()) {
		// render the water's parts
		renderReflection(context);
		renderRefraction(context);
		renderWater(context);
	}
}


//
//	OtWaterClass::renderReflection
//

void OtWaterClass::renderReflection(OtRenderingContext context) {
	// create reflection camera
	auto camera = context->getCamera();
	glm::vec3 position = camera->getPosition();
	glm::vec3 target = camera->getTarget();

	position.y = -position.y;
	target.y = -target.y;

	OtCamera reflectionCamera = OtCameraClass::create(camera);
	reflectionCamera->setPositionVector(position);
	reflectionCamera->setTargetVector(target);

	// update and submit reflection camera
	auto aspectRatio = context->getViewAspectRatio();
	reflectionCamera->update(aspectRatio);
	reflectionCamera->submit(reflectionView);

	// create reflection rendering context
	OtRenderingContextClass reflectionContext;
	reflectionContext.setPass(OtRenderingContextClass::reflectionPass);
	reflectionContext.setView(reflectionView);
	reflectionContext.setViewRect(0, 0, frameBufferWidth, frameBufferWidth / aspectRatio);
	reflectionContext.setCamera(reflectionCamera);
	reflectionContext.setScene(context->getScene());
	reflectionContext.copyLightProperties(context);

	// render reflection
	bgfx::setViewClear(reflectionView, BGFX_CLEAR_COLOR | BGFX_CLEAR_DEPTH);
	bgfx::setViewRect(reflectionView, 0, 0, frameBufferWidth, frameBufferWidth / aspectRatio);
	bgfx::setViewFrameBuffer(reflectionView, reflectionFrameBuffer);
	context->getScene()->renderChildren(&reflectionContext);
}


//
//	OtWaterClass::renderRefraction
//

void OtWaterClass::renderRefraction(OtRenderingContext context) {
}


//
//	OtWaterClass::renderWater
//

void OtWaterClass::renderWater(OtRenderingContext context) {
	// sanity check
	if (!bgfx::isValid(normals)) {
		OtExcept("Normals map not specified for [Water] object");
	}

	// submit vertices and triangles
	bgfx::setVertexBuffer(0, vertexBuffer);
	bgfx::setIndexBuffer(indexBuffer);

	// set normal map, reflection and refraction
	bgfx::setTexture(1, normalsUniform, normals);
	bgfx::setTexture(2, reflectionUniform, reflectionTextures[0]);
	bgfx::setTexture(3, refractionUniform, refractionTextures[0]);

	// update time for water ripples
	time += OtFrameworkClass::instance()->getLoopDuration() / 2500.0;

	// set uniforms
	context->submit(receivesShadow());

	glm::vec4 waterUniforms[2];
	waterUniforms[0].x = time;
	waterUniforms[0].y = scale;
	waterUniforms[0].z = bgfx::getCaps()->originBottomLeft ? -1.0 : 1.0;
	waterUniforms[0].w = shininess;
	waterUniforms[1] = glm::vec4(color, 1.0);
	bgfx::setUniform(waterUniform, waterUniforms, 2);

	// run shader
	bgfx::setState(BGFX_STATE_DEFAULT);
	bgfx::submit(context->getView(), shader);
}


//
//	OtWaterClass::renderGUI
//

void OtWaterClass::renderGUI() {
	ImGui::Checkbox("Enabled", &enabled);
	ImGui::Checkbox("Receives Shadow", &receiveShadowFlag);
	ImGui::SliderFloat("Texture Scale", &scale, 0.1f, 10.0f);
	ImGui::SliderFloat("Shininess", &shininess, 10.0f, 200.0f);
	ImGui::ColorEdit3("Color", glm::value_ptr(color));
}


//
//	OtWaterClass::getMeta
//

OtType OtWaterClass::getMeta() {
	static OtType type;

	if (!type) {
		type = OtTypeClass::create<OtWaterClass>("Water", OtObject3dClass::getMeta());
		type->set("setSize", OtFunctionClass::create(&OtWaterClass::setSize));
		type->set("setNormalMap", OtFunctionClass::create(&OtWaterClass::setNormalMap));
		type->set("setNormalScale", OtFunctionClass::create(&OtWaterClass::setNormalScale));
	}

	return type;
}


//
//	OtWaterClass::create
//

OtWater OtWaterClass::create() {
	OtWater water = std::make_shared<OtWaterClass>();
	water->setType(getMeta());
	return water;
}
