//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2022 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "ot/function.h"
#include "ot/setiterator.h"


//
//	OtSetIteratorClass::getMeta(
//

OtType OtSetIteratorClass::getMeta() {
	static OtType type;

	if (!type) {
		type = OtTypeClass::create<OtSetIteratorClass>("SetIterator", OtIteratorClass::getMeta());
		type->set("__end__", OtFunctionClass::create(&OtSetIteratorClass::end));
		type->set("__next__", OtFunctionClass::create(&OtSetIteratorClass::next));
	}

	return type;
}

//
//	OtSetIteratorClass::create
//

OtSetIterator OtSetIteratorClass::create(OtSet set) {
	OtSetIterator iterator = std::make_shared<OtSetIteratorClass>(set);
	iterator->setType(getMeta());
	return iterator;
}
