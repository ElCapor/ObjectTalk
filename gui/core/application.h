//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2022 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include <array>
#include <vector>

#include "ot/exception.h"
#include "ot/singleton.h"

#include "animation.h"
#include "appevents.h"
#include "gui.h"
#include "screen.h"
#include "simulation.h"


//
//	OtApplicationClass
//

class OtApplicationClass;
typedef std::shared_ptr<OtApplicationClass> OtApplication;

class OtApplicationClass : public OtGuiClass, public OtObjectSingleton<OtApplicationClass> {
public:
	// run the application
	void run(const std::string& name);
	void runThread2();

	// add an animation
	OtObject animation();

	// add a simulation
	OtObject addSimulation(OtObject simulation);

	// set anti-aliasing
	OtObject setAntiAliasing(int level);

	// (de)activate profiler
	OtObject setProfiler(bool profilerState);

	// get frame dimensions
	int getWidth() { return width; }
	int getHeight() { return height; }

	// add a keyboard shortcut handler
	void addShortcut(int modifier, int keycode, std::function<void(void)> callback);

	// get system time in seconds since application start
	float getTime();

	// get loop duration in milliseconds
	float getLoopDuration() { return loopDuration; }

	// get the current frame number
	size_t getFrameNumber() { return frameNumber; }

	// get the current frame rate
	float getFrameRate() { return 1000.0 / loopDuration; }

	// get the next available view ID
	int getNextViewID() { return nextViewID++; }

	// register function to be called at exit
	void atexit(std::function<void(void)> callback);

	// add enums to specified module
	void addEnumsGLFW(OtObject module);
	void addEnumsIMGUI(OtObject module);

	// get type definition
	static OtType getMeta();

	// create a new object
	static OtApplication create();

private:
#if __APPLE__
	// put the right app name in the menus
	void fixMenuLabels(const std::string& name);

	// create a Metal layer in the narive window
	void createMetalLayer();
#endif

	// render a debugging profiler
	void renderProfiler();

	// initialize, run and terminate libraries
	void initGLFW(const std::string& name);
	bool runningGLFW();
	void eventsGLFW();
	void endGLFW();

	void initBGFX();
	void frameBGFX();
	void renderBGFX();
	void endBGFX();

	void initIMGUI();
	void frameIMGUI(std::vector<OtAppEvent>& events);
	void renderIMGUI();
	void endIMGUI();

	// main window
	GLFWwindow* window;
	void* nativeDisplayHandle;
	void* nativeDisplayType = nullptr;
	int width = 1280;
	int height = 720;
	int nextViewID;

	// keyboard shortcut tracking
	struct OtKeyboardShortcut {
		OtKeyboardShortcut(int m, int k, std::function<void(void)> c) : modifier(m), key(k), callback(c) {}
		int modifier;
		int key;
		std::function<void(void)> callback;
	};

	std::vector<OtKeyboardShortcut> shortcuts;

	// time tracking
	size_t frameNumber;
	int64_t startTime;
	int64_t lastTime;
	int64_t loopTime;
	float loopDuration;
	int64_t cpuDuration;
	int64_t gpuDuration;

	// animations
	std::vector<OtAnimation> animations;

	// simulations
	std::vector<OtSimulation> simulations;

	// end of program callbacks
	std::vector<std::function<void(void)>> atExitCallbacks;

	// to render IMGUI
	bgfx::VertexLayout imguiVertexLayout;
	bgfx::TextureHandle imguiFontTexture = BGFX_INVALID_HANDLE;
	bgfx::UniformHandle imguiFontUniform = BGFX_INVALID_HANDLE;
	bgfx::ProgramHandle imguiProgram = BGFX_INVALID_HANDLE;

	// top level widget
	OtScreen screen;

	// anti-aliasing setting
	int antiAliasing = 0;

	// show/hide profiler
	bool profiler = false;

	// is secondary thread running?
	bool running;

	// bridge between threads
	OtAppEventQueue eventQueue;

	// track keyboard modifier state
	int modifiers = 0;

	// track gamepad status
	struct Gamepad {
		int buttons[8] = {0};
	};

	std::array<Gamepad, 4> gamepads;
};
