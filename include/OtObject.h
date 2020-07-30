//	ObjectTalk Scripting Language
//	Copyright 1993-2020 Johan A. Goossens
//
//	Licensed under the Apache License, Version 2.0 (the "License");
//	you may not use this file except in compliance with the License.
//	You may obtain a copy of the License at
//
//		http://www.apache.org/licenses/LICENSE-2.0
//
//	Unless required by applicable law or agreed to in writing, software
//	distributed under the License is distributed on an "AS IS" BASIS,
//	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//	See the License for the specific language governing permissions and
//	limitations under the License.


//
//	OtObjectClass
//

class OtObjectClass : public std::enable_shared_from_this<OtObjectClass> {
public:
	// constructor/destructor
	OtObjectClass() {}
	virtual ~OtObjectClass() {}

	// type access
	OtObject setType(OtType t) { type = t; return shared_from_this(); }
	OtType getType() { return type; }
	std::wstring getTypeName() { return type->getName(); }

	// see if object "is kind of"
	bool isKindOf(const std::wstring& className) { return type->isKindOf(className); }
	bool isKindOf(OtType t)  { return type->isKindOf(t); }

	// default conversion operators
	virtual operator bool() { return false; }
	virtual operator long() { return 0; }
	virtual operator size_t() { return 0; }
	virtual operator double() { return 0.0; }
	virtual operator std::wstring() { return L""; }
	virtual operator OtObject() { return shared_from_this(); }

	// get object representation (as in source code)
	virtual std::wstring repr() { return operator std::wstring(); }

	// get shared pointer
	OtObject getSharedPtr() { return shared_from_this(); }

	// parent access
	void setParent(OtObject v) { parent = v; }
	OtObject getParent() { return parent; }

	// member acccess
	bool has(const std::wstring& name) {
		if (members && members->count(name)) {
			return true;
		}

		if (parent && parent->has(name)) {
			return true;
		}

		for (auto t = type; t; t = t->getParent()) {
			if (t->has(name)) {
				return true;
			}
		}

		return false;
	}

	virtual OtObject set(const std::wstring& name, OtObject value) {
		if (!members) {
			members = std::make_shared<std::map<std::wstring, OtObject>>();
		}

		members->operator [] (name) = value;
		return value;
	}

	virtual OtObject get(const std::wstring& name) {
		if (members && members->count(name)) {
			return members->operator [] (name);
		}

		if (parent && parent->has(name)) {
			return parent->get(name);
		}

		for (auto t = type; t; t = t->getParent()) {
			if (t->has(name)) {
				return t->get(name);
			}
		}

		OT_EXCEPT(L"Unknown member [%ls] in class [%ls]", name.c_str(), type->getName().c_str());
		return nullptr;
	}

	virtual void eraseMember(const std::wstring& name) { if (members) members->erase(name); }
	virtual void clearMembers() { members = nullptr; }

	// "call" object (context, count, parameters)
	virtual OtObject operator () (OtObject, size_t, OtObject*) { return nullptr; }

	// "call" named object member
	OtObject method(const std::wstring& m, OtObject c, size_t n, OtObject* p) {
		OtObject pars[n + 1];
		pars[0] = shared_from_this();
		std::copy(p, p + n, pars + 1);
		return get(m)->operator ()(c, n + 1, pars);
	}

	// cast shared pointer to specified type
	template <typename T>
	std::shared_ptr<T> cast() { return std::static_pointer_cast<T>(shared_from_this()); }

	// get type definition
	static OtType getMeta();

	// create a new object
	static OtObject create() { return std::make_shared<OtObjectClass>()->setType(getMeta()); }

protected:
	// object type
	OtType type;

	// members
	std::shared_ptr<std::map<std::wstring, OtObject>> members;

	// parent in chain
	OtObject parent;
};


//
//	Overloaded conversion function for ObjectTalk function calls
//

inline OtObject OtObjectCreate() { return OtObjectClass::create(); }
inline OtObject OtObjectCreate(OtObject value) { return value; }


//
//	Forward reference
//

inline OtObject OtObjectCreate(bool value);
inline OtObject OtObjectCreate(long value);
inline OtObject OtObjectCreate(size_t value);
inline OtObject OtObjectCreate(float value);
inline OtObject OtObjectCreate(double value);
inline OtObject OtObjectCreate(const std::wstring& value);
