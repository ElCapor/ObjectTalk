//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//


#include <filesystem>

#include "assimp/material.h"

#include "OtPbrMaterial.h"


//
//	OtModelMaterial
//

class OtModelMaterial {
public:
	// constructor
	OtModelMaterial();

	// clear the material
	void clear();

	// load the material
	void load(const aiMaterial* material, const std::filesystem::path& dir);

	// see if material is valid
	inline bool isValid() { return valid; }

	// access the material
	inline OtPbrMaterial& getPbrMaterial() { return material; }

private:
	// the PBR material
	OtPbrMaterial material;
	bool valid = false;
};
