//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.

//
//	OtClass
//

class OtClassClass : public OtInternalClass {
public:
	// constructors
	OtClassClass() = default;
	OtClassClass(OtType t) : classType(t) {}

	// access member information
	std::string getName() { return classType->getName(); }
	bool hasParent() { return classType->getParent() != nullptr; }
	OtObject getParent() { return OtClassClass::create(classType->getParent()); }

	// create a sub class
	OtObject subClass(const std::string& name) { return OtClassClass::create(classType->subType(name)); }

	// see if class is kind of
	bool isKindOf(const std::string& className) { return classType->isKindOf(className); }

	// special member acccess (so we can add methods to metaclass via class
	OtObject set(const std::string& name, OtObject value) { return classType->set(name, value); }

	// call operator
	OtObject operator () (OtObject context, size_t count, OtObject* parameters) {
		// create new instance
		OtObject value = classType->instantiate();

		// run possible init function
		if (value->has("__init__")) {
			OtObject pars[count + 1];
			pars[0] = value;

			for (size_t c = 0; c < count; c++) {
				pars[c + 1] = parameters[c];
			}

			value->get("__init__")->operator ()(context, count + 1, pars);
		}

		return value;
	}

	// get type definition
	static OtType getMeta() {
		static OtType type = nullptr;

		if (!type) {
			type = OtTypeClass::create<OtClassClass>("Class", OtInternalClass::getMeta());
			type->set("__call__", OtFunctionClass::create(&OtClassClass::operator ()));
			type->set("getName", OtFunctionClass::create(&OtClassClass::getName));
			type->set("hasParent", OtFunctionClass::create(&OtClassClass::hasParent));
			type->set("getParent", OtFunctionClass::create(&OtClassClass::getParent));
			type->set("subClass", OtFunctionClass::create(&OtClassClass::subClass));
			type->set("isKindOf", OtFunctionClass::create(&OtClassClass::isKindOf));
		}

		return type;
	}

	// create a new object
	static OtClass create(OtType type) {
		OtClass cls = std::make_shared<OtClassClass>(type);
		cls->setType(getMeta());
		return cls;
	}

protected:
	OtType classType;
};


//
//	Overloaded conversion function for ObjectTalk function calls
//

OtObject OtObjectCreate(OtType type) { return OtClassClass::create(type); };
