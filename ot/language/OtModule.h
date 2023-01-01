//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2022 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include <filesystem>
#include <functional>

#include "OtInternal.h"


//
//	OtModule
//

class OtModuleClass;
typedef std::shared_ptr<OtModuleClass> OtModule;

class OtModuleClass : public OtInternalClass {
public:
	// register an internal module
	static void registerInternal(const std::string& name, std::function<void(OtModule)> creator);

	// load the module
	void load(const std::string& filename);

	// get type definition
	static OtType getMeta();

	// create a new object
	static OtModule create();

	// import a module (either load from disk or get from the memory cash)
	static OtModule import(const std::string& filename);

private:
	// list of directories to search for modules in
	static void buildModulePath();

	// determine full path name for module
	static std::filesystem::path checkPath(std::filesystem::path path);
	static std::filesystem::path getFullPath(std::filesystem::path path);
};
