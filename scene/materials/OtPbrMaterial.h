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

#include "OtTexture.h"

#include "OtMaterial.h"


//
//	OtMaterial
//

class OtPbrMaterialClass;
using OtPbrMaterial = OtObjectPointer<OtPbrMaterialClass>;

class OtPbrMaterialClass : public OtMaterialClass {
public:
	// update material
	void update() override;

	// GUI to change geometry properties
	bool renderGUI() override;

	// (de)serialize geometry
	nlohmann::json serialize(std::filesystem::path* basedir) override;
	void deserialize(nlohmann::json data, std::filesystem::path* basedir) override;

	// get type name of geometry
	const char* getTypeName() override { return name; }

	// material name
	static constexpr char const* name = "PBR";

	// set the textures
	void setTexture(std::filesystem::path& target, const std::filesystem::path& path, bool& flag);
	void setAlbedoTexture(const std::filesystem::path& path) { setTexture(albedoTexturePath, path, updateAlbedoTexture); }
	void setNormalTexture(const std::filesystem::path& path) { setTexture(normalTexturePath, path, updateNormalTexture); }
	void setMetallicRoughnessTexture(const std::filesystem::path& path) { setTexture(metallicRoughnessTexturePath, path, updateMetallicRoughnessTexture); }
	void setEmissiveTexture(const std::filesystem::path& path) { setTexture(emissiveTexturePath, path, updateEmissiveTexture); }
	void setAoTexture(const std::filesystem::path& path) { setTexture(aoTexturePath, path, updateAoTexture); }

	// get type definition
	static OtType getMeta();

private:
	// the scene renderer needs access to our properties
	friend class OtSceneRenderer;

	// as does the model loader
	friend class OtModelMaterial;

	// stored properties
	glm::vec4 albedo{1.0f};
	float metallic = 0.5f;
	float roughness = 0.5f;
	glm::vec3 emissive{0.0f};
	float ao = 1.0f;

	std::filesystem::path albedoTexturePath;
	std::filesystem::path normalTexturePath;
	std::filesystem::path metallicRoughnessTexturePath;
	std::filesystem::path emissiveTexturePath;
	std::filesystem::path aoTexturePath;

	// runtime properties
	OtTexture albedoTexture;
	OtTexture normalTexture;
	OtTexture metallicRoughnessTexture;
	OtTexture emissiveTexture;
	OtTexture aoTexture;

	bool updateAlbedoTexture = false;
	bool updateNormalTexture = false;
	bool updateMetallicRoughnessTexture = false;
	bool updateEmissiveTexture = false;
	bool updateAoTexture = false;
};
