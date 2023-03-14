//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include <vector>

#include "nlohmann/json_fwd.hpp"

#include "OtAABB.h"
#include "OtIndexBuffer.h"
#include "OtObject.h"
#include "OtVertex.h"
#include "OtVertexBuffer.h"


//
//	OtGeometryClass
//

class OtGeometryClass;
using OtGeometry = OtObjectPointer<OtGeometryClass>;

class OtGeometryClass : public OtObjectClass {
public:
	// ensure tangents are automatically generated
	OtObject computeTangents();

	// force updates
	void forceGeometryRefresh() { refreshGeometry = true; }
	void forceBufferRefresh() { refreshBuffers = true; }

	// access vertices and indices
	size_t getVertexCount() { validateGeometry(); return vertices.size(); }
	size_t getTriangleIndexCount() { validateGeometry(); return triangles.size(); }
	size_t getLineIndexCount() { validateGeometry(); return lines.size(); }
	std::vector<OtVertex>& getVertexes() { validateGeometry(); return vertices; }
	std::vector<uint32_t>& getTriangles() { validateGeometry(); return triangles; }
	std::vector<uint32_t>& getLines() { validateGeometry();return lines; }
	OtVertex& getVertex(size_t offset) { validateGeometry(); return vertices[offset]; }
	uint32_t getTriangleIndex(size_t offset) { validateGeometry(); return triangles[offset]; }
	uint32_t getLineIndex(size_t offset) { validateGeometry(); return lines[offset]; }

	// access bounding box
	OtAABB& getAABB() { validateGeometry(); return aabb; }

	// submit to GPU
	void submitTriangles();
	void submitLines();

	// GUI to change geometry properties
	virtual bool renderGUI();

	// (de)serialize geometry
	virtual nlohmann::json serialize();
	virtual void deserialize(nlohmann::json data);

	std::string serializeToString();
	void deserializeFromString(const std::string& data);

	// get type name of geometry
	virtual const char* getTypeName() { return name; }

	// geometry name
	static constexpr char const* name = "Geometry";

	// get type definition
	static OtType getMeta();

protected:
	// handle geometry
	void updateGeometry();
	void validateGeometry();
	virtual void fillGeometry() {}
	bool refreshGeometry = true;

	// add vertices/triangles/lines to the geometry
	void addVertex(const OtVertex& vertex) {
		vertices.emplace_back(vertex);
		aabb.addPoint(vertex.position);
	}

	void addTriangle(uint32_t p1, uint32_t p2, uint32_t p3) {
		triangles.emplace_back(p1);
		triangles.emplace_back(p2);
		triangles.emplace_back(p3);
	}

	void addLine(uint32_t p1, uint32_t p2) {
		lines.emplace_back(p1);
		lines.emplace_back(p2);
	}

	void addIndex(uint32_t p1, uint32_t p2, uint32_t p3) {
		addTriangle(p1, p2, p3);
		addLine(p1, p2);
		addLine(p2, p3);
		addLine(p3, p1);
	}

	// quick way to add complete faces
	virtual void addFace(const glm::vec3& a, const glm::vec3& b, const glm::vec3& c) {
		auto n = glm::normalize(glm::cross(c - b, a - b));
		auto offset = (uint32_t) vertices.size();

		addVertex(OtVertex(a, n));
		addVertex(OtVertex(b, n));
		addVertex(OtVertex(c, n));

		addTriangle(offset, offset + 1, offset + 2);

		addLine(offset, offset + 1);
		addLine(offset + 1, offset + 2);
		addLine(offset + 2, offset);
	}

	virtual void addFace(const glm::vec3& a, const glm::vec3& b, const glm::vec3& c, const glm::vec3& d) {
		auto n = glm::normalize(glm::cross(c - b, a - b));
		auto offset = (uint32_t) vertices.size();

		addVertex(OtVertex(a, n));
		addVertex(OtVertex(b, n));
		addVertex(OtVertex(c, n));
		addVertex(OtVertex(d, n));

		addTriangle(offset, offset + 1, offset + 2);
		addTriangle(offset, offset + 2, offset + 3);

		addLine(offset, offset + 1);
		addLine(offset + 1, offset + 2);
		addLine(offset + 2, offset);

		addLine(offset, offset + 2);
		addLine(offset + 2, offset + 3);
		addLine(offset + 3, offset);
	}

	// geometry data
	std::vector<OtVertex> vertices;
	std::vector<uint32_t> triangles;
	std::vector<uint32_t> lines;

	// Axis-aligned Bounding Box (AABB)
	OtAABB aabb;

	// tangent generation flag
	bool tangent = false;

	// handle buffers
	void updateBuffers();
	void validateBuffers();
	bool refreshBuffers = true;

	// GPU assets
	OtVertexBuffer vertexBuffer;
	OtIndexBuffer triangleIndexBuffer;
	OtIndexBuffer lineIndexBuffer;
};
