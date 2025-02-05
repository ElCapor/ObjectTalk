//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	OtFrameworkApp class
//

class OtFrameworkApp {
public:
	// destructor
	virtual ~OtFrameworkApp() {}

	// event handlers
	virtual void onSetup() {}
	virtual void onRender() {}
	virtual void onTerminate() {}
	virtual bool onCanQuit() { return true; }

	virtual bool onMouseButton(int button, int action, int mods, float xpos, float ypos) { return false; }
	virtual bool onMouseMove(float xpos, float ypos) { return false; }
	virtual bool onMouseDrag(int button, int mods, float xpos, float ypos) { return false; }
	virtual bool onScrollWheel(float dx, float dy) { return false; }
	virtual bool onKey(int key, int mods) { return false; }
	virtual bool onChar(unsigned int codepoint) { return false; }
	virtual bool onGamepadAxis(int gamepad, int axis, int value) { return false; }
	virtual bool onGamepadButton(int gamepad, int buttom, int action) { return false; }
};
