//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.



#pragma once


//
//	Include files
//

#include "OtInternal.h"


//
//	OtBoundFunction
//

class OtBoundFunctionClass;
typedef std::shared_ptr<OtBoundFunctionClass> OtBoundFunction;

class OtBoundFunctionClass : public OtInternalClass {
public:
	// constructor
	OtBoundFunctionClass() = default;
	OtBoundFunctionClass(OtObject o, OtObject f) : object(o), function(f) {}

	// debugging support
	std::string describe() override { return object->getType()->getName() + " " + "function"; }

	// call bound function
	OtObject operator () (size_t count, OtObject* parameters) override;

	// get type definition
	static OtType getMeta();

	// create a new object
	static OtBoundFunction create(OtObject o, OtObject f);

private:
	OtObject object;
	OtObject function;
};
