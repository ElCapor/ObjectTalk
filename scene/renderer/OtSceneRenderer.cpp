//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "OtSceneRenderer.h"


//
//	OtSceneRenderer::render
//

int OtSceneRenderer::render(OtScene* scene, OtEntity selected) {
	// render all passes
	renderPreProcessingPass(scene);

	if (hasOpaqueObjects) {
		renderGeometryPass(scene);
	}

	renderBackgroundPass(scene);

	if (hasSkyObjects) {
		renderSkyPass(scene);
	}

	if (hasOpaqueObjects) {
		renderLightingPass(scene);
	}

	if (hasTransparentObjects) {
		renderTransparentPass(scene);
	}

	if (gridScale > 0.0) {
		renderGridPass();
	}

	if (scene->isValidEntity(selected)) {
		renderHighlightPass(scene, selected);
	}

	renderPostProcessingPass(scene);
	return postProcessBuffer.getColorTextureIndex();
}
