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

#include "glm/glm.hpp"
#include "nlohmann/json_fwd.hpp"

#include "OtModule.h"
#include "OtSelector.h"


//
//	OtScriptComponent
//

class OtScriptComponent {
public:
	// GUI to change component properties
	bool renderGUI();

	// load and compile the script
	void load();

	// runtime methods
	void create();
	void update();

	// (de)serialize component
	nlohmann::json serialize(std::filesystem::path* basedir);
	void deserialize(nlohmann::json data, std::filesystem::path* basedir);

	// component name
	static constexpr char const* name = "Script";

	// stored properties
	std::filesystem::path path;

	// runtime properties
	OtModule module;
	OtObject instance;
	size_t createSelector;
	size_t updateSelector;
	bool hasCreateMethod;
	bool hasUpdateMethod;
};
