//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include <algorithm>
#include <sstream>

#include "OtArray.h"
#include "OtArrayReference.h"
#include "OtArrayIterator.h"
#include "OtException.h"
#include "OtFunction.h"
#include "OtVM.h"


//
//	OtArrayClass::OtArrayClass
//

OtArrayClass::OtArrayClass(size_t count, OtObject* objects) {
	for (auto c = 0; c < count; c++) {
		append(objects[c]);
	}
}


//
//	OtArrayClass::operator std::string
//

OtArrayClass::operator std::string() {
	std::ostringstream o;
	bool first = true;

	o << "[";

	for (auto& entry : array) {
		if (first) {
			first = false;

		} else {
			o << ",";
		}

		o << entry->json();
	}

	o << "]";
	return o.str();
}


//
//	OtArrayClass::init
//

void OtArrayClass::init(size_t count, OtObject* parameters) {
	for (auto c = 0; c < count; c++) {
		array.push_back(parameters[c]);
	}
}


//
//	OtArrayClass::operator ==
//

bool OtArrayClass::operator == (OtObject operand) {
	OtArray op = OtArray(operand);

	// ensure object is an array
	if (!op) {
		return false;

	// ensure they have the same size
	} else if (array.size() != op->array.size()) {
		return false;
	}

	// compare all elements
	for (auto c = 0; c < array.size(); c++) {
		if (!array[c]->equal(op->array[c])) {
			return false;
		}
	}

	return true;
}


//
//	OtArrayClass::getEntry
//

OtObject OtArrayClass::getEntry(size_t index) {
	// sanity check
	if (index < 0 || index >= array.size()) {
		OtExcept("invalid index [%ld] for array of size [%ld]", index, array.size());
	}

	// return entry
	return array[index];
}


//
//	OtArrayClass::setEntry
//

OtObject OtArrayClass::setEntry(size_t index, OtObject object) {
	// sanity check
	if (index < 0 || index >= array.size()) {
		OtExcept("invalid index [%ld] for array of size [%ld]", index, array.size());
	}

	// set entry
	array[index] = object;
	return object;
}


//
//	OtArrayClass::index
//

OtObject OtArrayClass::index(size_t index) {
	if (index < 0) {
		OtExcept("Negative index [%ld] is not allowed in array", index);

	} else if (index >= array.size()) {
		OtExcept("Index [%ld] is greater than array length [%ld]", index, array.size());

	}

	return OtArrayReference::create(OtArray(this), index);
}


//
//	OtArrayClass::iterate
//

OtObject OtArrayClass::iterate() {
	return OtArrayIterator::create(OtArray(this));
}


//
//	OtArrayClass::add
//

OtObject OtArrayClass::add(OtObject object) {
	OtArray result = OtArray::create();

	for (auto& it : array) {
		result->array.push_back(it);
	}

	result->array.push_back(std::move(object));
	return result;
}


//
//	OtArrayClass::contains
//

bool OtArrayClass::contains(OtObject object) {
	bool result = false;

	for (auto i = array.begin(); !result && i != array.end(); i++) {
		result = (*i)->equal(object);
	}

	return result;
}


//
//	OtArrayClass::find
//

int64_t OtArrayClass::find(OtObject object) {
	int64_t result = -1;
	int64_t c = 0;

	for (auto i = array.begin(); result == -1 && i != array.end(); i++, c++) {
		if ((*i)->equal(object)) {
			result = c;
		}
	}

	return result;
}


//
//	OtArrayClass::clone
//

OtObject OtArrayClass::clone() {
	OtArray result = OtArray::create();

	for (auto& it : array) {
		result->array.push_back(it);
	}

	return result;
}


//
//	OtArrayClass::merge
//

OtObject OtArrayClass::merge(OtObject object) {
	if (!object->isKindOf("Array")) {
		OtExcept("Array merge expects another [array] instance, not a [%s]", object->getType()->getName().c_str());
	}

	OtArray result = OtArray::create();

	for (auto& it : array) {
		result->array.push_back(it);
	}

	for (auto& it : ((OtArray) object)->array) {
		result->array.push_back(it);
	}

	return result;
}


//
//	OtArrayClass::append
//

void OtArrayClass::append(OtObject object) {
	array.push_back(object);
}


//
//	OtArrayClass::insert
//

void OtArrayClass::insert(size_t index, OtObject object) {
	if (index < 0) {
		OtExcept("Negative index [%ld] is not allowed in array", index);

	} else if (index >= size()) {
		OtExcept("Index [%ld] is greater than array length [%ld]", index, size());

	}

	array.insert(array.begin() + index, std::move(object));
}


//
//	OtArrayClass::erase
//

void OtArrayClass::erase(size_t index) {
	if (index < 0) {
		OtExcept("Negative index [%ld] is not allowed in array", index);

	} else if (index >= size()) {
		OtExcept("Index [%ld] is greater than array length [%ld]", index, size());

	}

	array.erase(array.begin() + index);
}


//
//	OtArrayClass::eraseMultiple
//

void OtArrayClass::eraseMultiple(size_t index1, size_t index2) {
	if (index1 < 0) {
		OtExcept("Negative index [%ld] is not allowed in array", index1);

	} else if (index1 >= size()) {
		OtExcept("Index [%ld] is greater than array length [%ld]", index1, size());

	}

	if (index2 < 0) {
		OtExcept("Negative index [%ld] is not allowed in array", index2);

	} else if (index2 >= size()) {
		OtExcept("Index [%ld] is greater than array length [%ld]", index2, size());

	}

	if (index1 > index2) {
		OtExcept("Indexes [%ld and %ld2] are in the wrong order", index1, index2);
	}

	array.erase(array.begin() + index1, array.begin() + index2);
}


//
//	OtArrayClass::sort
//

void OtArrayClass::sort() {
	std::sort(array.begin(), array.end(), [](OtObject a, OtObject b) {
		return *a < *b;
	});
}


//
//	OtArrayClass::rsort
//

void OtArrayClass::rsort() {
	std::sort(array.begin(), array.end(), [](OtObject a, OtObject b) {
		return !(*a < *b);
	});
}


//
//	OtArrayClass::csort
//

void OtArrayClass::csort(OtObject function) {
	std::sort(array.begin(), array.end(), [function](OtObject a, OtObject b) {
		auto result = OtVM::instance()->callMemberFunction(function, "__call__", a, b);
		return result->operator bool();
	});
}


//
//	OtArrayClass::push
//

void OtArrayClass::push(OtObject object) {
	array.push_back(object);
}


//
//	OtArrayClass::pop
//

OtObject OtArrayClass::pop() {
	OtObject object = array.back();
	array.pop_back();
	return object;
}


//
//	OtArrayClass::fill
//

void OtArrayClass::fill(size_t count, OtObject object) {
	array.clear();

	for (auto c = 0; c < count; c++) {
		array.push_back(object);
	}
}


//
//	OtArrayClass::join
//

std::string OtArrayClass::join(const std::string& separator) {
	std::ostringstream o;
	bool first = true;

	for (auto& entry : array) {
		if (first) {
			first = false;

		} else {
			o << separator;
		}

		o << entry->operator std::string();
	}

	return o.str();
}


//
//	OtArrayClass::getMeta
//

OtType OtArrayClass::getMeta() {
	static OtType type;

	if (!type) {
		type = OtTypeClass::create<OtArrayClass>("Array", OtCollectionClass::getMeta());

		type->set("string", OtFunction::create(&OtArrayClass::operator std::string));

		type->set("__init__", OtFunction::create(&OtArrayClass::init));

		type->set("__index__", OtFunction::create(&OtArrayClass::index));
		type->set("__iter__", OtFunction::create(&OtArrayClass::iterate));
		type->set("__add__", OtFunction::create(&OtArrayClass::add));
		type->set("__contains__", OtFunction::create(&OtArrayClass::contains));

		type->set("size", OtFunction::create(&OtArrayClass::size));
		type->set("find", OtFunction::create(&OtArrayClass::find));
		type->set("contains", OtFunction::create(&OtArrayClass::contains));

		type->set("clone", OtFunction::create(&OtArrayClass::clone));
		type->set("merge", OtFunction::create(&OtArrayClass::merge));
		type->set("clear", OtFunction::create(&OtArrayClass::clear));

		type->set("append", OtFunction::create(&OtArrayClass::append));
		type->set("insert", OtFunction::create(&OtArrayClass::insert));

		type->set("erase", OtFunction::create(&OtArrayClass::erase));
		type->set("eraseMultiple", OtFunction::create(&OtArrayClass::eraseMultiple));

		type->set("sort", OtFunction::create(&OtArrayClass::sort));
		type->set("rsort", OtFunction::create(&OtArrayClass::rsort));
		type->set("csort", OtFunction::create(&OtArrayClass::csort));

		type->set("push", OtFunction::create(&OtArrayClass::push));
		type->set("pop", OtFunction::create(&OtArrayClass::pop));

		type->set("fill", OtFunction::create(&OtArrayClass::fill));
		type->set("join", OtFunction::create(&OtArrayClass::join));
	}

	return type;
}
