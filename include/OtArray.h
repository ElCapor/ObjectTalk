//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	OtArray
//

class OtArrayClass;
typedef std::shared_ptr<OtArrayClass> OtArray;

class OtArrayClass : public OtCollectionClass, public std::vector<OtObject> {
public:
	// convert array to string
	operator std::string() {
		std::ostringstream o;
		bool first = true;

		o << "[";

		for (auto const& entry : *this) {
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

	// clear array and add all parameters
	OtObject init(OtObject, size_t count, OtObject* parameters) {
		clear();

		for (auto c = 0; c < count; c++) {
			push_back(parameters[c]);
		}

		return getSharedPtr();
	}

	// support index operations
	class OtArrayReferenceClass;
	typedef std::shared_ptr<OtArrayReferenceClass> OtArrayReference;

	class OtArrayReferenceClass : public OtInternalClass {
	public:
		// constructors
		OtArrayReferenceClass() = default;
		OtArrayReferenceClass(OtArray a, size_t i) : array(a), index(i) {}

		// index operations
		OtObject deref() { return array->operator[] (index); }
		OtObject assign(OtObject value) { array->operator[] (index) = value; return value; }

		// get type definition
		static OtType getMeta() {
			static OtType type = nullptr;

			if (!type) {
				type = OtTypeClass::create<OtArrayReferenceClass>("ArrayReference", OtInternalClass::getMeta());
				type->set("__deref__", OtFunctionClass::create(&OtArrayReferenceClass::deref));
				type->set("__assign__", OtFunctionClass::create(&OtArrayReferenceClass::assign));
			}

			return type;
		}

		// create a new object
		static OtArrayReference create(OtArray a, size_t i) {
			OtArrayReference reference = std::make_shared<OtArrayReferenceClass>(a, i);
			reference->setType(getMeta());
			return reference;
		}

	private:
		OtArray array;
		size_t index;
	};

	// support indexing
	OtObject index(size_t index) {
		return OtArrayReferenceClass::create(cast<OtArrayClass>(), index);
	}

	// support iterator
	class OtArrayIteratorClass;
	typedef std::shared_ptr<OtArrayIteratorClass> OtArrayIterator;

	class OtArrayIteratorClass : public OtInternalClass {
	public:
		// constructors
		OtArrayIteratorClass() = default;
		OtArrayIteratorClass(OtArray a) : array(a) {}

		// iteration operations
		bool end() { return index == array->size(); }
		OtObject next() { return array->operator[](index++); }

		// get type definition
		static OtType getMeta() {
			static OtType type = nullptr;

			if (!type) {
				type = OtTypeClass::create<OtArrayIteratorClass>("ArrayIterator", OtInternalClass::getMeta());
				type->set("__end__", OtFunctionClass::create(&OtArrayIteratorClass::end));
				type->set("__next__", OtFunctionClass::create(&OtArrayIteratorClass::next));
			}

			return type;
		}

		// create a new object
		static OtArrayIterator create(OtArray a) {
			OtArrayIterator iterator = std::make_shared<OtArrayIteratorClass>(a);
			iterator->setType(getMeta());
			return iterator;
		}

	private:
		OtArray array;
		size_t index {0};
	};

	// start iterator
	OtObject iterate() {
		return OtArrayIteratorClass::create(cast<OtArrayClass>());
	}

	// add two arrays
	OtObject add(OtObject value) {
		OtArray result = create();

		for (auto& it : *this) {
			result->push_back(it);
		}

		result->append(value);
		return result;
	}

	// does array contains specified object
	OtObject contains(OtObject value) {
		bool result = false;

		for (auto it = begin(); it != end() && !result; it++) {
			result = value->method("__eq__", OtObjectClass::create(), 1, &(*it))->operator bool();
		}

		return OtBooleanClass::create(result);
	}

	// return number of array members
	size_t mySize() {
		return size();
	}

	// find an array entry and return index (-1 if not found)
	long find(OtObject value) {
		long result = -1;

		for (auto i = 0; i < size() && result == -1; i++) {
			if (value->method("__eq__", OtObjectClass::create(), 1, &(operator[] (i)))->operator bool()) {
				result = i;
			}
		}

		return result;
	}

	// clone an array
	OtObject clone() {
		OtArray result = create();
		for (auto& it : *this) {
			result->push_back(it);
		}

		return result;
	}

	// add new member to the end
	OtObject append(OtObject value) {
		push_back(value);
		return getSharedPtr();
	}

	// insert member at specified location
	OtObject insert(size_t index, OtObject value) {
		std::vector<OtObject>::insert(begin() + index, value);
		return getSharedPtr();
	}

	// remove member at specified location
	OtObject erase(size_t index) {
		std::vector<OtObject>::erase(begin() + index);
		return getSharedPtr();
	}

	// erase member from until specified locations
	OtObject eraseMultiple(size_t index1, size_t index2) {
		std::vector<OtObject>::erase(begin() + index1, begin() + index2);
		return getSharedPtr();
	}

	// push object to end of array
	OtObject push(OtObject value) {
		push_back(value); return value;
	}

	// pop object from and of array
	OtObject pop() {
		OtObject value = back();
		pop_back();
		return value;
	}

	// get type definition
	static OtType getMeta() {
		static OtType type = nullptr;

		if (!type) {
			type = OtTypeClass::create<OtArrayClass>("Array", OtCollectionClass::getMeta());

			type->set("__init__", OtFunctionClass::create(&OtArrayClass::init));
			type->set("__index__", OtFunctionClass::create(&OtArrayClass::index));
			type->set("__iter__", OtFunctionClass::create(&OtArrayClass::iterate));
			type->set("__add__", OtFunctionClass::create(&OtArrayClass::add));
			type->set("__contains__", OtFunctionClass::create(&OtArrayClass::contains));

			type->set("size", OtFunctionClass::create(&OtArrayClass::mySize));
			type->set("find", OtFunctionClass::create(&OtArrayClass::find));

			type->set("clone", OtFunctionClass::create(&OtArrayClass::clone));
			type->set("clear", OtFunctionClass::create(&OtArrayClass::clear));

			type->set("append", OtFunctionClass::create(&OtArrayClass::append));
			type->set("insert", OtFunctionClass::create(&OtArrayClass::insert));

			type->set("erase", OtFunctionClass::create(&OtArrayClass::erase));
			type->set("eraseMultiple", OtFunctionClass::create(&OtArrayClass::eraseMultiple));

			type->set("push", OtFunctionClass::create(&OtArrayClass::push));
			type->set("pop", OtFunctionClass::create(&OtArrayClass::pop));
		}

		return type;
	}

	// create a new object
	static OtArray create() {
		OtArray array = std::make_shared<OtArrayClass>();
		array->setType(getMeta());
		return array;
	}

	static OtArray create(size_t count, OtObject* values) {
		OtArray array = create();

		for (auto c = 0; c < count; c++) {
			array->push_back(values[c]);
		}

		return array;
	}
};
