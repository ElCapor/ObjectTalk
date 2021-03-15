//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "ot/iterator.h"


//
//	OtIteratorClass::getMeta
//

OtType OtIteratorClass::getMeta() {
	static OtType type = nullptr;

	if (!type) {
		type = OtTypeClass::create<OtIteratorClass>("Iterator", OtInternalClass::getMeta());
	}

	return type;
}
