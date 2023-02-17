//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include "glm/glm.hpp"

#include "OtBoxGeometry.h"
#include "OtFrameBuffer.h"
#include "OtGbuffer.h"
#include "OtPass.h"
#include "OtSampler.h"
#include "OtShader.h"
#include "OtSphereGeometry.h"
#include "OtUniformMat4.h"
#include "OtUniformVec4.h"

#include "OtEntity.h"
#include "OtScene2.h"


//
//	OtSceneRenderer
//

class OtSceneRenderer {
public:
	// set the properties
	void setCameraPosition(const glm::vec3 pos) { cameraPosition = pos; }
	void setViewMatrix(const glm::mat4& view) { viewMatrix = view; viewProjectionMatrix = projectionMatrix * view; }
	void setProjectionMatrix(const glm::mat4& proj) { projectionMatrix = proj; viewProjectionMatrix = proj * viewMatrix; }
	void setSize(int w, int h) { width = w; height = h; }
	void setGridScale(float gs) { gridScale = gs; }

	// render the specified scene
	int render(OtScene2 scene, OtEntity selected=OtEntityNull);

private:
	// render passes
	// void renderShadowPass(OtScene2 scene);
	void renderGeometryPass(OtScene2 scene);
	void renderBackgroundPass(OtScene2 scene);
	void renderLightingPass(OtScene2 scene);
	void renderTransparentPass(OtScene2 scene);
	void renderGridPass();
	void renderHighlightPass(OtScene2 scene, OtEntity entity);
	void renderPostProcessingPass(OtScene2 scene);

	// render entitities
	void renderSkyBox(OtPass& pass, OtSkyBoxComponent& component);
	void renderSkySphere(OtPass& pass, OtSkySphereComponent& component);
	void renderGeometry(OtPass& pass, OtScene2 scene, OtEntity entity);
	void renderTransparentGeometry(OtPass& pass, OtScene2 scene, OtEntity entity);
	void renderHighlight(OtPass& pass, OtScene2 scene, OtEntity entity);
	void renderBloom(float bloomIntensity);

	// rendering tools
	void submitMaterialUniforms(OtScene2 scene, OtEntity entity);
	void submitLightUniforms(OtScene2 scene);

	// camera information
	glm::vec3 cameraPosition;
	glm::mat4 viewMatrix;
	glm::mat4 projectionMatrix;
	glm::mat4 viewProjectionMatrix;

	// image dimensions
	int width;
	int height;

	// grid scale (0.0 means no grid)
	float gridScale = 0.0f;

	// framebuffers
	OtGbuffer gbuffer;
	OtFrameBuffer compositeBuffer{OtFrameBuffer::rgbaFloat16Texture, OtFrameBuffer::dFloatTexture, 1, true};
	OtFrameBuffer postProcessBuffer{OtFrameBuffer::rgba8Texture, OtFrameBuffer::noTexture};
	OtFrameBuffer selectedBuffer{OtFrameBuffer::r8Texture, OtFrameBuffer::noTexture};

	static constexpr int bloomDepth = 5;
	OtFrameBuffer bloomBuffer[bloomDepth];

	// standard geometries
	OtBoxGeometry unityBoxGeometry;
	OtSphereGeometry unitySphereGeometry;

	// uniforms
	OtUniformVec4 materialUniforms{"u_material", 4};
	OtUniformVec4 backgroundUniforms{"u_background", 1};
	OtUniformVec4 lightingUniforms{"u_lighting", 3};
	OtUniformVec4 gridUniforms{"u_grid", 1};
	OtUniformVec4 outlineUniforms{"u_outline", 1};
	OtUniformVec4 bloomUniforms{"u_bloom", 1};
	OtUniformVec4 postProcessUniforms{"u_postProcess", 1};
	OtUniformMat4 inverseTransform{"u_inverseTransform", 1};

	// samplers
	OtSampler geometryAlbedoSampler{"s_geometryAlbedoTexture"};
	OtSampler geometryNormalSampler{"s_geometryNormalTexture"};
	OtSampler geometryMetallicSampler{"s_geometryMetallicTexture"};
	OtSampler geometryRoughnessSampler{"s_geometryRoughnessTexture"};
	OtSampler geometryEmissiveSampler{"s_geometryEmissiveSampler"};
	OtSampler geometryAoSampler{"s_geometryAoTexture"};

	OtSampler skyBoxSampler{"s_skyBoxTexture"};
	OtSampler skySphereSampler{"s_skySphereTexture"};

	OtSampler lightingAlbedoSampler{"s_lightingAlbedoTexture"};
	OtSampler lightingPositionSampler{"s_lightingPositionTexture"};
	OtSampler lightingNormalSampler{"s_lightingNormalTexture"};
	OtSampler lightingPbrSampler{"s_lightingPbrTexture"};
	OtSampler lightingDepthSampler{"s_lightingDepthTexture"};

	OtSampler selectedSampler{"s_selectedTexture"};

	OtSampler postProcessSampler{"s_postProcessTexture"};
	OtSampler bloomSampler{"s_bloomTexture"};

	// shaders
	OtShader geometryShader{"OtGeometryVS", "OtGeometryFS"};
	OtShader skyBoxShader{"OtSkybox2VS", "OtSkybox2FS"};
	OtShader skySphereShader{"OtSkySphereVS", "OtSkySphereFS"};
	OtShader lightingShader{"OtLightingVS", "OtLightingFS"};
	OtShader transparentShader{"OtTransparentVS", "OtTransparentFS"};
	OtShader gridShader{"OtGridVS", "OtGridFS"};
	OtShader selectShader{"OtSelectVS", "OtSelectFS"};
	OtShader outlineShader{"OtOutlineVS", "OtOutlineFS"};
	OtShader bloomDownSampleShader{"OtBloomDownSampleVS", "OtBloomDownSampleFS"};
	OtShader bloomUpSampleShader{"OtBloomUpSampleVS", "OtBloomUpSampleFS"};
	OtShader postProcessShader{"OtPostProcessVS", "OtPostProcessFS"};
};
