//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include "entt/entity/registry.hpp"
#include "nlohmann/json_fwd.hpp"


//
//	Entity
//

using OtEntity = entt::entity;
#define OtEntityNull entt::null


//
//	Forward references
//

class OtScene2Class;
typedef std::shared_ptr<OtScene2Class> OtScene2;


//
//	Functions
//

// see if an entity is valid
static inline bool OtEntityIsNull(OtEntity entity) {
	return entity == OtEntityNull;
}

// (de)serialize an entity
nlohmann::json OtEntitySerialize(OtScene2 scene, OtEntity entity);
OtEntity OtEntityDeserialize(OtScene2 scene, nlohmann::json data);
