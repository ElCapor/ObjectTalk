//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2022 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include "OtAppObject.h"
#include "OtCamera.h"
#include "OtScene.h"


//
//	OtViewClass
//

class OtViewClass;
typedef std::shared_ptr<OtViewClass> OtView;

class OtViewClass : public OtAppObjectClass {
public:
	// destructor
	~OtViewClass();

	// initialize
	void init(size_t count, OtObject* parameters);

	// update properties
	OtObject setScreenArea(int x, int y, int w, int h);
	OtObject setCamera(OtObject camera);
	OtObject setScene(OtObject scene);

	// access attributes
	OtObject getCamera() { return camera; }
	OtObject getScene() { return scene; }

	// update state
	void update() override;

	// render content
	void render() override;

	// mouse and keyboard events
	bool onMouseButton(int button, int action, int mods, float xpos, float ypos) override;
	bool onMouseMove(float xpos, float ypos) override;
	bool onMouseDrag(int button, int mods, float xpos, float ypos) override;
	bool onScrollWheel(float dx, float dy) override;
	bool onKey(int key, int mods) override;
	bool onChar(unsigned int codepoint) override;

	// get type definition
	static OtType getMeta();

	// create a new object
	static OtView create();

protected:
	// our camera
	OtCamera camera;

	// the scene we are looking at
	OtScene scene;

	// view geometry (in percentages)
	float x = 0;
	float y = 0;
	float w = 100;
	float h = 100;

	// view geometry (in pixels)
	float vx;
	float vy;
	float vw;
	float vh;

	// old mouse position for drag operation
	float xold = 0.0;
	float yold = 0.0;
};
