//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include "OtAnimation.h"
#include "OtNode.h"
#include "OtFrameworkApp.h"
#include "OtSimulation.h"
#include "OtWidget.h"


//
//	OtAppClass
//

class OtAppClass;
using OtApp = OtObjectPointer<OtAppClass>;

class OtAppClass : public OtNodeClass, public OtFrameworkApp {
public:
	// ensure specified node is allowed as a child
	void validateChild(OtNode child) override;

	// get frame dimensions
	int getWidth();
	int getHeight();

	// add an animation
	OtObject addAnimation(OtObject animation);

	// add a simulation
	OtObject addSimulation(OtObject simulation);

	// get menubar height
	size_t getMenubarHeight();

	// lifetime events
	void onSetup() override;
	void onUpdate() override;
	void onRender() override;
	void onTerminate() override;

	// mouse and keyboard events
	bool onMouseButton(int button, int action, int mods, float xpos, float ypos) override;
	bool onMouseMove(float xpos, float ypos) override;
	bool onMouseDrag(int button, int mods, float xpos, float ypos) override;
	bool onScrollWheel(float dx, float dy) override;
	bool onKey(int key, int mods) override;
	bool onChar(unsigned int codepoint) override;
	bool onGamepadAxis(int gamepad, int axis, int value) override;
	bool onGamepadButton(int gamepad, int buttom, int action) override;

	// actually run app
	void run();

	// get type definition
	static OtType getMeta();

private:
	// animations
	std::vector<OtAnimation> animations;

	// simulations
	std::vector<OtSimulation> simulations;
};
