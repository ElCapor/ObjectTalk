//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include "OtObject.h"


//
//	OtHttp
//

class OtHttpClass;
typedef std::shared_ptr<OtHttpClass> OtHttp;

class OtHttpClass : public OtObjectClass {
public:
	// register GUI module
	static void registerModule();

	// get type definition
	static OtType getMeta();
};
