//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	OtInternal
//

class OtInternalClass;
typedef std::shared_ptr<OtInternalClass> OtInternal;

class OtInternalClass : public OtObjectClass {
public:
	// get type definition
	static OtType getMeta() {
		static OtType type = nullptr;

		if (!type) {
			type = OtTypeClass::create<OtInternalClass>("Internal", OtObjectClass::getMeta());
		}

		return type;
	}
};
