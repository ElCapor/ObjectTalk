//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include "glm/glm.hpp"

#include "sceneobject.h"


//
//	OtObject3dClass
//

class OtObject3dClass;
typedef std::shared_ptr<OtObject3dClass> OtObject3d;

class OtObject3dClass : public OtSceneObjectClass {
public:
	// change geometry
	OtObject rotateX(double angle);
	OtObject rotateY(double angle);
	OtObject rotateZ(double angle);
	OtObject rotateAroundVector(double angle, double x, double y, double z);
	OtObject yawPitchRoll(double yaw, double pitch, double roll);
	OtObject scale(double x, double y, double z);
	OtObject translate(double x, double y, double z);

	// render in BGFX
    virtual void render(int view, OtCamera camera, glm::mat4 parentTransform);

	// get type definition
	static OtType getMeta();

	// create a new object
	static OtObject3d create();

protected:
	// object geometry
	glm::mat4 translating = glm::mat4(1.0);
	glm::mat4 rotating = glm::mat4(1.0);
	glm::mat4 scaling = glm::mat4(1.0);
};
