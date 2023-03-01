//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include "OtTexture.h"
#include "OtWidget.h"


//
//	OtPictureClass
//

class OtPictureClass;
using OtPicture = OtObjectPointer<OtPictureClass>;

class OtPictureClass : public OtWidgetClass {
public:
	// initialize
	void init(size_t count, OtObject* parameters);

	// specify a new picture
	OtObject setTexture(const std::string& texture);

	// set the margin around the picture
	OtObject setMargin(int margin);

	// render content
	void render() override;

	// get type definition
	static OtType getMeta();

private:
	// properties
	OtTexture texture;
	int margin = 5;

	size_t width;
	size_t height;
};
