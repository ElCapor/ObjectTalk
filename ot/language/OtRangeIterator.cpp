//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include "OtFunction.h"
#include "OtRangeIterator.h"


//
//	OtRangeIteratorClass::getMeta(
//

OtType OtRangeIteratorClass::getMeta() {
	static OtType type;

	if (!type) {
		type = OtTypeClass::create<OtRangeIteratorClass>("RangeIterator", OtIteratorClass::getMeta());
		type->set("__iter__", OtFunctionClass::create(&OtRangeIteratorClass::iterate));
		type->set("__end__", OtFunctionClass::create(&OtRangeIteratorClass::end));
		type->set("__next__", OtFunctionClass::create(&OtRangeIteratorClass::next));
	}

	return type;
}

//
//	OtRangeIteratorClass::create
//

OtRangeIterator OtRangeIteratorClass::create(int64_t from, int64_t to, int64_t increment) {
	OtRangeIterator iterator = std::make_shared<OtRangeIteratorClass>(from, to, increment);
	iterator->setType(getMeta());
	return iterator;
}
