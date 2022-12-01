//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2022 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include <vector>

#include "OtGeometry.h"
#include "OtMaterial.h"
#include "OtObject3d.h"


//
//	OtMeshClass
//

class OtMeshClass;
typedef std::shared_ptr<OtMeshClass> OtMesh;

class OtMeshClass : public OtObject3dClass {
public:
	// destructor
	~OtMeshClass();

	// initialize
	void init(size_t count, OtObject* parameters);

	// set properties
	OtObject setGeometry(OtObject geometry);
	OtObject setMaterial(OtObject material);
	OtObject setWireframe(bool wireframe);

	// add a new instance to this mesh
	OtObject addInstance(OtObject matrix);

	// render in BGFX
	void render(OtRenderingContext context) override;

	// get type definition
	static OtType getMeta();

	// create a new object
	static OtMesh create();

protected:
	// render with culling
	void render(OtRenderingContext context, long flag);

	// properties
	OtGeometry geometry;
	OtMaterial material;
	int materialType = -1;
	bool wireframe = false;

	// list of instances
	std::vector<glm::mat4> instances;

	// BGFX shader
	bgfx::ProgramHandle shader = BGFX_INVALID_HANDLE;
};
