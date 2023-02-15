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

int OtSceneRenderer::render(OtScene2 scene, OtEntity selected) {
	// render all passes
	renderGeometryPass(scene);
	renderBackgroundPass(scene);
	renderLightingPass(scene);

	if (gridScale > 0.0) {
		renderGridPass();
	}

	if (!OtEntityIsNull(selected)) {
		renderHighlightPass(scene, selected);
	}

	renderPostProcessingPass(scene);

	return postProcessBuffer.getColorTextureIndex();
}
