//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "OtLog.h"

#include "OtUniformVec4.h"


//
//	OtUniformVec4::OtUniformVec4
//

OtUniformVec4::OtUniformVec4(const char *name, size_t size) {
	initialize(name, size);
}


//
//	OtUniformVec4::~OtUniformVec4
//

OtUniformVec4::~OtUniformVec4() {
	clear();
}


//
//	OtUniformVec4::initialize
//

void OtUniformVec4::initialize(const char *name, size_t s) {
	// remember size
	size = s;

	// register uniform
	uniform = bgfx::createUniform(name, bgfx::UniformType::Vec4, size);

	// allocate space for uniform values
	values = new glm::vec4[size];
}


//
//	OtUniformVec4::clear
//

void OtUniformVec4::clear() {
		// release values
	if (values) {
		delete [] values;
		values = nullptr;
	}

	// release uniform
	uniform.clear();
}


//
//	OtUniformVec4::submit
//

void OtUniformVec4::submit() {
	// sanity check
	if (!size) {
		OtLogFatal("Internal error: Uniform not initialized");
	}

	// submit uniform to GPU
	bgfx::setUniform(uniform.getHandle(), values, size);
}
