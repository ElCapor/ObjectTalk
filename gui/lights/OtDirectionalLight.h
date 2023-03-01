//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include <array>

#include "glm/glm.hpp"

#include "OtCamera.h"
#include "OtCascadedShadowMap.h"
#include "OtController.h"
#include "OtFrameBuffer.h"
#include "OtLight.h"


//
//	OtDirectionalLightClass
//

class OtDirectionalLightClass;
using OtDirectionalLight = OtObjectPointer<OtDirectionalLightClass>;

class OtDirectionalLightClass : public OtLightClass {
public:
	// initialize
	void init(size_t count, OtObject* parameters);

	// update attributes
	OtObject setDirection(float x, float y, float z);
	OtObject setColor(const std::string& color);
	OtObject setColorRGB(float r, float g, float b);

	void setDirectionVector(const glm::vec3 d) { direction = d; }
	void setColorVector(const glm::vec3 c) { color = c; }

	// add light properties to renderer
	void addPropertiesToRenderer(OtRenderer& renderer) override;

	// GUI to change properties
	void renderGUI();

	// get type definition
	static OtType getMeta();

protected:
	// properties
	glm::vec3 direction = glm::vec3(0.0, 0.0, 1.0);
	glm::vec3 color = glm::vec3(1.0);

	// shadowmaps
	OtCascadedShadowMap csm;
};


//
//	Controller widget
//

OT_CONTROLLER(DirectionalLight)
