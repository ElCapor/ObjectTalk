//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include "bgfx/bgfx.h"
#include "glm/glm.hpp"

#include "OtVertex.h"


//
//	OtVertex
//

struct OtVertex {
	// vertex elements
	glm::vec3 position;
	glm::vec3 normal;
	glm::vec3 tangent;
	glm::vec3 bitangent;
	glm::vec2 uv;

	// constructors
	OtVertex() = default;

	OtVertex(const glm::vec3& p, const glm::vec3& n=glm::vec3(0.0f), const glm::vec2& u=glm::vec2(0.0f), const glm::vec3 t=glm::vec3(0.0f), const glm::vec3 b=glm::vec3(0.0f)) :
		position(p), normal(n), uv(u), tangent(t), bitangent(b) {
	}

	// get vertex description
	static bgfx::VertexLayout getLayout() {
		bgfx::VertexLayout layout;

		layout.begin()
			.add(bgfx::Attrib::Position, 3, bgfx::AttribType::Float)
			.add(bgfx::Attrib::Normal, 3, bgfx::AttribType::Float)
			.add(bgfx::Attrib::Tangent, 3, bgfx::AttribType::Float)
			.add(bgfx::Attrib::Bitangent, 3, bgfx::AttribType::Float)
			.add(bgfx::Attrib::TexCoord0, 2, bgfx::AttribType::Float)
			.end();

		return layout;
	}
};


//
//	OtVertexPosUvCol
//

struct OtVertexPosUvCol {
	// vertex elements
	glm::vec3 position;
	glm::vec2 uv;
	uint32_t color;

	// constructors
	OtVertexPosUvCol() = default;
	OtVertexPosUvCol(const glm::vec3& p, const glm::vec2& u=glm::vec2(0.0f), uint32_t c=0) : position(p), uv(u), color(c) {}

	// get vertex description
	static bgfx::VertexLayout getLayout() {
		bgfx::VertexLayout layout;

		layout.begin()
			.add(bgfx::Attrib::Position, 3, bgfx::AttribType::Float)
			.add(bgfx::Attrib::TexCoord0, 2, bgfx::AttribType::Float)
			.add(bgfx::Attrib::Color0, 4, bgfx::AttribType::Uint8, true)
			.end();

		return layout;
	}
};


//
//	OtVertexPosUv
//

struct OtVertexPosUv {
	// vertex elements
	glm::vec3 position;
	glm::vec2 uv;

	// constructors
	OtVertexPosUv() = default;
	OtVertexPosUv(const glm::vec3& p, const glm::vec2& u=glm::vec2(0.0f)) : position(p), uv(u) {}

	// get vertex description
	static bgfx::VertexLayout getLayout() {
		bgfx::VertexLayout layout;

		layout.begin()
			.add(bgfx::Attrib::Position, 3, bgfx::AttribType::Float)
			.add(bgfx::Attrib::TexCoord0, 2, bgfx::AttribType::Float)
			.end();

		return layout;
	}
};


//
//	OtVertexPosNorm
//

struct OtVertexPosNorm {
	// vertex elements
	glm::vec3 position;
	glm::vec3 normal;

	// constructors
	OtVertexPosNorm() = default;
	OtVertexPosNorm(const glm::vec3& p, const glm::vec3& n=glm::vec3(0.0f)) : position(p), normal(n) {}

	// get vertex description
	static bgfx::VertexLayout getLayout() {
		bgfx::VertexLayout layout;

		layout.begin()
			.add(bgfx::Attrib::Position, 3, bgfx::AttribType::Float)
			.add(bgfx::Attrib::Normal, 3, bgfx::AttribType::Float)
			.end();

		return layout;
	}
};


//
//	OtVertexPosCol
//

struct OtVertexPosCol {
	// vertex elements
	glm::vec3 position;
	uint32_t color;

	// constructors
	OtVertexPosCol() = default;
	OtVertexPosCol(const glm::vec3& p, uint32_t c=0) : position(p), color(c) {}

	// get vertex description
	static bgfx::VertexLayout getLayout() {
		bgfx::VertexLayout layout;

		layout.begin()
			.add(bgfx::Attrib::Position, 3, bgfx::AttribType::Float)
			.add(bgfx::Attrib::Color0, 4, bgfx::AttribType::Uint8, true)
			.end();

		return layout;
	}
};


//
//	OtVertexPos
//

struct OtVertexPos {
	// vertex elements
	glm::vec3 position;

	// constructors
	OtVertexPos() = default;
	OtVertexPos(const glm::vec3& p) : position(p) {}

	// get vertex description
	static bgfx::VertexLayout getLayout() {
		bgfx::VertexLayout layout;

		layout.begin()
			.add(bgfx::Attrib::Position, 3, bgfx::AttribType::Float)
			.end();

		return layout;
	}
};


//
//	OtVertexUv
//

struct OtVertexUv {
	// vertex elements
	glm::vec2 uv;

	// constructors
	OtVertexUv() = default;
	OtVertexUv(const glm::vec2& u) : uv(u) {}

	// get vertex description
	static bgfx::VertexLayout getLayout() {
		bgfx::VertexLayout layout;

		layout.begin()
			.add(bgfx::Attrib::TexCoord0, 2, bgfx::AttribType::Float)
			.end();

		return layout;
	}
};
