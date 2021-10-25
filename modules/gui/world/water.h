//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include "bgfx/bgfx.h"
#include "bimg/decode.h"

#include "glm/glm.hpp"

#include "controller.h"
#include "sceneobject.h"
#include "texture.h"


//
//	OtWaterClass
//

class OtWaterClass;
typedef std::shared_ptr<OtWaterClass> OtWater;

class OtWaterClass : public OtSceneObjectClass {
public:
	// constructor/destructor
	OtWaterClass();
	~OtWaterClass();

	// initialize
	OtObject init(size_t count, OtObject* parameters);

	// set the size of the water object
	OtObject setSize(int size);

	// set normal map
	OtObject setNormalMap(OtObject normals);

	// set the scale of the normals
	OtObject setNormalScale(float scale);

	// GUI to change water properties
	void renderGUI();

	// render in BGFX
	void preRender(OtScene scene, float viewAspect, OtCamera camera);
    void render(int view, OtCamera camera, glm::mat4 parentTransform);

	// get type definition
	static OtType getMeta();

	// create a new object
	static OtWater create();

protected:
	// create/update frame buffers
	void updateFrameBuffers(float viewAspect);

	// normal map
	OtTexture normals;

	// size of water plane
	float size = 1000.0;

	// water properties
	glm::vec4 color = { 0.0, 0.05, 0.2, 1.0 };
	float time = 0.0;
	float scale = 5.0;
	float shininess = 50.0;

	// Frame buffers
	float frameBufferAspect = -1;
	OtCamera reflectionCamera;
	bgfx::TextureHandle reflectionTextures[2];
	bgfx::FrameBufferHandle reflectionFrameBuffer= BGFX_INVALID_HANDLE;;

	OtCamera refractionCamera;
	bgfx::TextureHandle refractionTextures[2];
	bgfx::FrameBufferHandle refractionFrameBuffer= BGFX_INVALID_HANDLE;;

	// BGFX buffers
	glm::vec3 waterVertices[4];
	bgfx::VertexBufferHandle vertexBuffer = BGFX_INVALID_HANDLE;
	bgfx::IndexBufferHandle indexBuffer = BGFX_INVALID_HANDLE;

	// BGFX shader
	bgfx::UniformHandle materialUniform = BGFX_INVALID_HANDLE;
	bgfx::UniformHandle waterUniform = BGFX_INVALID_HANDLE;
	bgfx::UniformHandle normalsUniform = BGFX_INVALID_HANDLE;
	bgfx::UniformHandle reflectionUniform = BGFX_INVALID_HANDLE;
	bgfx::UniformHandle refractionUniform = BGFX_INVALID_HANDLE;
	bgfx::ProgramHandle shader = BGFX_INVALID_HANDLE;
};


//
//	Controller widget
//

OT_CONTROLLER(Water)
