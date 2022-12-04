//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2022 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include "bgfx/bgfx.h"

#include "OtHash.h"

#include "OtTerrainMap.h"
#include "OtTerrainVertex.h"


//
//	OtTerrainTileClass
//

class OtTerrainTileClass;
typedef std::shared_ptr<OtTerrainTileClass> OtTerrainTile;

class OtTerrainTileClass {
public:
	// constructor
	OtTerrainTileClass(int _x, int _y, int _l, size_t _v) : x(_x), y(_y), lod(_l), version(_v) {
		OtHash(hash, x, y, lod, version);
	}

	// destructor
	~OtTerrainTileClass();

	// generate tile
	void generate(OtTerrainMap terrainmap);

	// submit to GPU
	void submit();

	// create a new terrain tile
	static OtTerrainTile create(int x, int y, int lod, size_t version) {
		return std::make_shared<OtTerrainTileClass>(x, y,lod, version);
	}

	// properties
	int x, y;
	int lod;
	size_t version;
	size_t hash = 0;
	float lastUsed = 0.0;

private:
	// tile mesh
	std::vector<OtTerrainVertex> vertices;
	std::vector<uint32_t> triangles;

	// BGFX buffers
	bgfx::VertexBufferHandle vertexBuffer = BGFX_INVALID_HANDLE;
	bgfx::IndexBufferHandle indexBuffer = BGFX_INVALID_HANDLE;
};
