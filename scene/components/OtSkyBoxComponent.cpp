//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "imgui.h"
#include "nlohmann/json.hpp"

#include "OtUi.h"

#include "OtPathTools.h"
#include "OtSkyBoxComponent.h"


//
//	OtSkyBoxComponent::renderGUI
//

bool OtSkyBoxComponent::renderGUI() {
	bool changed = false;
	changed |= cubemap.renderGUI("Cube Map");
	changed |= ImGui::SliderFloat("Brightness", &brightness, 0.1f, 4.0f, "%.2f");
	changed |= ImGui::SliderFloat("Gamma", &gamma, 0.1f, 4.0f, "%.2f");
	return changed;
}


//
//	OtSkyBoxComponent::serialize
//

nlohmann::json OtSkyBoxComponent::serialize(std::filesystem::path* basedir) {
	auto data = nlohmann::json::object();
	data["component"] = name;
	data["cubemap"] = OtPathGetRelative(cubemap.getPath(), basedir);
	data["brightness"] = brightness;
	data["gamma"] = gamma;
	return data;
}


//
//	OtSkyBoxComponent::deserialize
//

void OtSkyBoxComponent::deserialize(nlohmann::json data, std::filesystem::path* basedir) {
	cubemap = OtPathGetAbsolute(data, "cubemap", basedir);
	brightness = data.value("brightness", 1.0f);
	gamma = data.value("gamma", 2.2f);
}
