//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	OtType
//

class OtTypeClass : public std::enable_shared_from_this<OtTypeClass> {
public:
	// constructor
	OtTypeClass(const std::string& n, OtType p, OtConstructor c=nullptr) {
		name = n;
		parent = p;
		constructor = c ? c : parent->constructor;
	}

	// create new instance
	OtObject instantiate();

	// create a sub-type
	OtType subType(const std::string& n, OtConstructor c=nullptr) {
		return std::make_shared<OtTypeClass>(n, getSharedPtr(), c);
	}

	// get shared pointer
	OtType getSharedPtr() { return shared_from_this(); }

	// see if type is kind of
	bool isKindOf(const std::string& className) {
		for (auto p = getSharedPtr(); p; p = p->parent) {
			if (p->name == className) {
				return true;
			}
		}

		return false;
	}

	bool isKindOf(OtType metaclass)  { return isKindOf(metaclass->name); }

	// get information
	std::string getName() { return name; }
	OtType getParent() { return parent; }

	// member access
	bool has(const std::string& name) { return get(name) != nullptr; }
	OtObject set(const std::string& name, OtObject value) { members[name] = value; return value; }
	OtObject get(const std::string& name) { return members.count(name) ? members[name] : nullptr; }

	// create a new type
	template <class T>
	static OtType create(const std::string& name, OtType parent=nullptr) {
		return std::make_shared<OtTypeClass>(name, parent, []() { return std::make_shared<T>(); });
	}

	// cast to different type
	template <class T>
	static std::shared_ptr<T> cast(OtObject object) { return std::dynamic_pointer_cast<T>(object); }

private:
	// attributes
	std::string name;
	OtType parent;
	std::map<std::string, OtObject> members;
	OtConstructor constructor;
};
