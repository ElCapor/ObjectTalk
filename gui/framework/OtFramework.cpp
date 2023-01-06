//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include <cstdlib>
#include <thread>

#include "OtCerr.h"
#include "OtException.h"
#include "OtFunction.h"
#include "OtLibuv.h"
#include "OtOS.h"
#include "OtVM.h"

#include "OtFramework.h"
#include "OtPass.h"


//
//	OtFrameworkClass::run
//

void OtFrameworkClass::run() {
	// the framework runs in two threads:
	// 1. the main thread handles the rendering and window events (as required by most operating systems)
	// 2. the second thread runs the application logic as well as the asynchronous libuv events
	running = true;

	// initialize window library
	initGLFW();

	// start the second thread
	std::thread thread([this]() {
		this->runThread2();
		return 0;
	});

	// main loop to handle window events
	while (runningGLFW()) {
		eventsGLFW();
	}

	// wait for second thread to finish
	running = false;
	thread.join();

	// close window library
	endGLFW();
}


//
//	OtFrameworkClass::runThread2
//

void OtFrameworkClass::runThread2() {
	try {
		// initialize graphics libraries
		initBGFX();
		initIMGUI();

		// run this thread until we are told to stop
		while (running) {
			// reset view ID
			OtPassReset();

			// collect events
			std::vector<OtFwEvent> events;

			while (!eventQueue.empty()) {
				events.emplace_back(eventQueue.pop());
			}

			// start new frame
			frameBGFX();
			frameIMGUI(events);

			// submit events (if still required; ImGui might take some)
			for (auto& event : events) {
				bool handled = false;

				switch (event.type) {
					case OtFwEvent::customerSetupEvent:
						event.customerSetup.customer->onSetup();
						break;

					case OtFwEvent::customerTerminateEvent:
						event.customerTerminate.customer->onTerminate();
						break;

					case OtFwEvent::mouseButtonEvent:
						for (auto i = customers.begin(); !handled && i < customers.end(); i++) {
							handled = (*i)->onMouseButton(
								event.mouseButton.button,
								event.mouseButton.action,
								event.mouseButton.mods,
								event.mouseButton.x,
								event.mouseButton.y);
						}

						break;

					case OtFwEvent::mouseMoveEvent:
						for (auto i = customers.begin(); !handled && i < customers.end(); i++) {
							handled = (*i)->onMouseMove(event.mouseMove.x, event.mouseMove.y);
						}

						break;

					case OtFwEvent::mouseDragEvent:
						for (auto i = customers.begin(); !handled && i < customers.end(); i++) {
							handled = (*i)->onMouseDrag(
								event.mouseDrag.button,
								event.mouseDrag.mods,
								event.mouseDrag.x,
								event.mouseDrag.y);
						}

						break;

					case OtFwEvent::mouseWheelEvent:
						for (auto i = customers.begin(); !handled && i < customers.end(); i++) {
							handled = (*i)->onScrollWheel(event.mouseWheel.xOffset, event.mouseWheel.yOffset);
						}

						break;

					case OtFwEvent::keyboardEvent:
						if (event.keyboard.action != GLFW_RELEASE) {
							for (auto i = customers.begin(); !handled && i < customers.end(); i++) {
								handled = (*i)->onKey(event.keyboard.key, event.keyboard.mods);
							}
						}

						break;

					case OtFwEvent::characterEvent:
						for (auto i = customers.begin(); !handled && i < customers.end(); i++) {
							handled = (*i)->onChar(event.character.codepoint);
						}

						break;

					case OtFwEvent::gamepadAxisEvent:
						for (auto i = customers.begin(); !handled && i < customers.end(); i++) {
							handled = (*i)->onGamepadAxis(
								event.gamepadAxis.gamepad,
								event.gamepadAxis.axis,
								event.gamepadAxis.value);
						}

						break;

					case OtFwEvent::gamepadButtonEvent:
						for (auto i = customers.begin(); !handled && i < customers.end(); i++) {
							handled = (*i)->onGamepadButton(
								event.gamepadButton.gamepad,
								event.gamepadButton.button,
								event.gamepadButton.action);
						}

						break;
				}
			}

			// call update callbacks
			for (auto& customer : customers) {
				customer->onUpdate();
			}

			// call render callbacks
			for (auto& customer : customers) {
				customer->onRender();
			}

			// show profiler (if required)
			if (profiler) {
				renderProfiler();
			}

			// put results on screen
			renderIMGUI();
			renderBGFX();

			// handle libuv events
			uv_run(uv_default_loop(), UV_RUN_NOWAIT);
		}

		// call termination callbacks
		for (auto& customer : customers) {
			customer->onTerminate();
		}

		// call exit callbacks
		for (auto& callback : atExitCallbacks) {
			callback();
		}

		// terminate libraries
		endIMGUI();
		endBGFX();

	} catch (const OtException& e) {
		// handle all failures
		std::wcerr << "Error: " << e.what() << std::endl;
			std::_Exit(EXIT_FAILURE);
	}
}


//
//	OtFrameworkClass::stop
//

void OtFrameworkClass::stop() {
	// stopping the framework is realized by closing the app's window
	stopGLFW();
}


//
//	OtFrameworkClass::canQuit
//

bool OtFrameworkClass::canQuit() {
	for (auto& customer : customers) {
		if (!customer->onCanQuit()) {
			return false;
		}
	}

	return true;
}


//
//	OtFrameworkClass::addCustomer
//

void OtFrameworkClass::addCustomer(OtFrameworkCustomer* customer) {
	// add to list of customers
	customers.push_back(customer);

	// ensure the setup callback comes from the right thread
	eventQueue.pushCustomerSetupEvent(customer);
}


//
//	OtFrameworkClass::removeCustomer
//

void OtFrameworkClass::removeCustomer(OtFrameworkCustomer* customer) {
	// tell customer they are done
	eventQueue.pushCustomerTerminateEvent(customer);

	// remove from the list
	customers.erase(std::remove_if(customers.begin(), customers.end(), [customer] (OtFrameworkCustomer* c) {
		return c == customer;
	}), customers.end());
}


//
//	OtFrameworkClass::setAntiAliasing
//

void OtFrameworkClass::setAntiAliasing(int aa) {
	if (aa < 0 || aa > 4) {
		OtExcept("Anti-aliasing setting must be between 0 and 4");
	}

	antiAliasing = aa;
}
