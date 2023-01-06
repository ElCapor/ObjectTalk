//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "OtFunction.h"
#include "OtCaptureReference.h"
#include "OtClosure.h"
#include "OtVM.h"


//
//	OtCaptureReferenceClass::deref
//

OtObject OtCaptureReferenceClass::deref() {
	return OtVM::instance()->getStack()->getClosure()->cast<OtClosureClass>()->get(name);
}


//
//	OtCaptureReferenceClass::assign
//

OtObject OtCaptureReferenceClass::assign(OtObject value) {
	return OtVM::instance()->getStack()->getClosure()->cast<OtClosureClass>()->set(name, value);
}


//
//	OtCaptureReferenceClass::getMeta
//

OtType OtCaptureReferenceClass::getMeta() {
	static OtType type;

	if (!type) {
		type = OtTypeClass::create<OtCaptureReferenceClass>("CaptureReference", OtReferenceClass::getMeta());
		type->set("__deref__", OtFunctionClass::create(&OtCaptureReferenceClass::deref));
		type->set("__assign__", OtFunctionClass::create(&OtCaptureReferenceClass::assign));
	}

	return type;
}


//
//	OtCaptureReferenceClass::create
//

OtCaptureReference OtCaptureReferenceClass::create(const std::string& name) {
	OtCaptureReference member = std::make_shared<OtCaptureReferenceClass>(name);
	member->setType(getMeta());
	return member;
}
