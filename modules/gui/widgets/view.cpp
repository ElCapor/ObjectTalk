//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "ot/function.h"
#include "ot/vm.h"

#include "application.h"
#include "renderingcontext.h"
#include "view.h"


//
//	OtViewClass::~OtViewClass
//

OtViewClass::~OtViewClass() {
	// clear our scene (it has circular parent/child relationships)
	if (scene) {
		scene->clear();
	}
}


//
//	OtViewClass::setScreenArea
//

OtObject OtViewClass::setScreenArea(int _x, int _y, int _w, int _h) {
	x = _x;
	y = _y;
	w = _w;
	h = _h;
	return shared();
}


//
//	OtViewClass::setCamera
//

OtObject OtViewClass::setCamera(OtObject object) {
	// ensure object is a camera
	if (object->isKindOf("Camera")) {
		camera = object->cast<OtCameraClass>();

	} else {
		OtExcept("Expected a [Camera] object, not a [%s]", object->getType()->getName().c_str());
	}

	return shared();
}


//
//	OtViewClass::setScene
//

OtObject OtViewClass::setScene(OtObject object) {
	// ensure object is a material
	if (object->isKindOf("Scene")) {
		scene = object->cast<OtSceneClass>();

	} else {
		OtExcept("Expected a [Scene] object, not a [%s]", object->getType()->getName().c_str());
	}

	return shared();
}


//
//	OtViewClass::render
//

void OtViewClass::render() {
	// render view if we have a scene and a camera
	if (scene && camera) {
		// get the next view ID
		int view = OtApplicationClass::getNextViewID();

		// determine dimensions
		float vx = x < 0 ? OtApplicationClass::getWidth() - (x * OtApplicationClass::getWidth() / 100.0) : x * OtApplicationClass::getWidth() / 100.0;
		float vy = y < 0 ? OtApplicationClass::getHeight() - (y * OtApplicationClass::getHeight() / 100.0) : y * OtApplicationClass::getHeight() / 100.0;
		float vw = w * OtApplicationClass::getWidth() / 100.0;
		float vh = h * OtApplicationClass::getHeight() / 100.0;

		// create rendering context
		OtRenderingContext context(view, vw / vh, scene, camera);

		// get camera ready for frame
		camera->update(&context);

		// prerender scene
		scene->preRender(&context);

		// render scene
		bgfx::setViewRect(view, vx, vy, vw, vh);
		camera->submit(&context);
		scene->render(&context);
	}
}


//
//	OtViewClass::onMouseButton
//

bool OtViewClass::onMouseButton(int button, int action, int mods, float xpos, float ypos) {
	if (has("onMouseButton")) {
		// determine dimensions
		float vx = x < 0 ? OtApplicationClass::getWidth() - (x * OtApplicationClass::getWidth() / 100.0) : x * OtApplicationClass::getWidth() / 100.0;
		float vy = y < 0 ? OtApplicationClass::getHeight() - (y * OtApplicationClass::getHeight() / 100.0) : y * OtApplicationClass::getHeight() / 100.0;
		float vw = w * OtApplicationClass::getWidth() / 100.0;
		float vh = h * OtApplicationClass::getHeight() / 100.0;

		// calculate local coordinates
		xpos -= vx;
		ypos -= vy;

		// is click in view?
		if (xpos >= 0 && xpos < vw && ypos >= 0 && ypos < vh) {
			OtVM::callMemberFunction(
				shared(), "onMouseButton",
				OtObjectCreate(button), OtObjectCreate(action), OtObjectCreate(mods),
				OtObjectCreate(xpos), OtObjectCreate(ypos)
			);
		}

		return true;

	} else {
		return false;
	}
}


//
//	OtViewClass::onMouseMove
//

bool OtViewClass::onMouseMove(float xpos, float ypos) {
	// calculate local coordinates
	xpos -= x < 0 ? OtApplicationClass::getWidth() - (x * OtApplicationClass::getWidth() / 100.0) : x * OtApplicationClass::getWidth() / 100.0;
	ypos -= y < 0 ? OtApplicationClass::getHeight() - (y * OtApplicationClass::getHeight() / 100.0) : y * OtApplicationClass::getHeight() / 100.0;

	bool handled = false;

	if (has("onMouseMove")) {
		// call member function
		OtVM::callMemberFunction(shared(), "onMouseMove", OtObjectCreate(xpos), OtObjectCreate(ypos));
		handled = true;
	}
	
	xold = xpos;
	yold = ypos;
	return handled;
}


//
//	OtViewClass::onMouseDrag
//

bool OtViewClass::onMouseDrag(int button, int mods, float xpos, float ypos) {
	// calculate local coordinates
	xpos -= x < 0 ? OtApplicationClass::getWidth() - (x * OtApplicationClass::getWidth() / 100.0) : x * OtApplicationClass::getWidth() / 100.0;
	ypos -= y < 0 ? OtApplicationClass::getHeight() - (y * OtApplicationClass::getHeight() / 100.0) : y * OtApplicationClass::getHeight() / 100.0;

	bool handled = false;

	// only process if camera doesn't want it and  we have a member function
	if (!camera->onMouseDrag(button, mods, xpos - xold, ypos - yold) && has("onMouseDrag")) {
		OtVM::callMemberFunction(shared(), "onMouseDrag", OtObjectCreate(button), OtObjectCreate(mods), OtObjectCreate(xpos - xold), OtObjectCreate(ypos - yold));
		handled = true;
	}

	xold = xpos;
	yold = ypos;
	return handled;
}


//
//	OtViewClass::onScrollWheel
//

bool OtViewClass::onScrollWheel(float dx, float dy) {
	// only process if camera doesn't want event and we have a member function
	if (camera->onScrollWheel(dx, dy)) {
		return true;

	} else if (has("onScrollWheel")) {
		OtVM::callMemberFunction(shared(), "onScrollWheel", OtObjectCreate(dx), OtObjectCreate(dy));
		return true;

	} else {
		return false;
	}
}


//
//	OtViewClass::onKey
//

bool OtViewClass::onKey(int key, int mods) {
	// only process if camera doesn't want event and we have a member function
	if (camera->onKey(key, mods)) {
		return true;

	} else if (has("onKey")) {
		OtVM::callMemberFunction(shared(), "onKey", OtObjectCreate(key), OtObjectCreate(mods));
		return true;

	} else {
		return false;
	}
}


//
//	OtViewClass::onChar
//

bool OtViewClass::onChar(unsigned int codepoint) {
	if (has("onChar")) {
		OtVM::callMemberFunction(shared(), "onChar", OtObjectCreate((int) codepoint));
		return true;

	} else {
		return false;
	}
}


//
//	OtViewClass::getMeta
//

OtType OtViewClass::getMeta() {
	static OtType type = nullptr;

	if (!type) {
		type = OtTypeClass::create<OtViewClass>("View", OtScreenObjectClass::getMeta());

		type->set("setScreenArea", OtFunctionClass::create(&OtViewClass::setScreenArea));
		type->set("setCamera", OtFunctionClass::create(&OtViewClass::setCamera));
		type->set("setScene", OtFunctionClass::create(&OtViewClass::setScene));

		type->set("getCamera", OtFunctionClass::create(&OtViewClass::getCamera));
		type->set("getScene", OtFunctionClass::create(&OtViewClass::getScene));
	}

	return type;
}


//
//	OtViewClass::create
//

OtView OtViewClass::create() {
	OtView view = std::make_shared<OtViewClass>();
	view->setType(getMeta());
	return view;
}
