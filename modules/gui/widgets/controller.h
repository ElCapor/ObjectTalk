//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include "ot/exception.h"
#include "ot/function.h"

#include "widget.h"


//
//	Generic controller widget
//

#define OT_CONTROLLER_STRINGIFY(x) #x

#define OT_CONTROLLER(type) 															\
																						\
class Ot##type##ControllerClass;														\
typedef std::shared_ptr<Ot##type##ControllerClass> Ot##type##Controller;				\
																						\
class Ot##type##ControllerClass : public OtWidgetClass {								\
public:																					\
	void init(OtObject object)  {														\
		if (!object->isKindOf(#type)) {													\
			OtExcept(																	\
				"Expected an [" #type "] object, not a [%s]",							\
				object->getType()->getName().c_str());									\
		}																				\
																						\
		target = object->cast<Ot##type##Class>();										\
	}																					\
																						\
	void render() {																		\
		target->renderGUI();															\
	}																					\
																						\
	static OtType getMeta() {															\
		static OtType type = nullptr;													\
																						\
		if (!type) {																	\
			type = OtTypeClass::create<Ot##type##ControllerClass>(						\
				OT_CONTROLLER_STRINGIFY(type##Controller),								\
				OtWidgetClass::getMeta());												\
																						\
			type->set("__init__", OtFunctionClass::create(								\
				&Ot##type##ControllerClass::init));										\
		}																				\
																						\
		return type;																	\
	}																					\
																						\
	static Ot##type##Controller create() {												\
		Ot##type##Controller object = std::make_shared<Ot##type##ControllerClass>();	\
		object->setType(getMeta());														\
		return object;																	\
	}																					\
																						\
private:																				\
	Ot##type target;																	\
};
