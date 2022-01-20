//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2022 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include "ot/singleton.h"

#include "console.h"
#include "ide.h"
#include "editor.h"


//
//	OtWorkspaceClass
//

class OtWorkspaceClass;
typedef std::shared_ptr<OtWorkspaceClass> OtWorkspace;

class OtWorkspaceClass : public OtIdeClass, public OtObjectSingleton<OtWorkspaceClass> {
public:
	// initialize IDE
	void init();

	// create a new file
	void newFile();

	// open a file
	void openFile();
	void openFile(const std::string& filename);

	// close editor
	void closeEditor(OtEditor editor);

	// run IDE
	void run();

	// get type definition
	static OtType getMeta();

	// create a new object
	static OtWorkspace create();

private:
	// render all windows
	void render();

	// see if we can close app
	bool close();

	// get default directory
	std::string getDefaultDirectory();

	// get current working directory
	std::string getCWD();

	// our console
	OtConsole console;

	// list of open editors
	std::vector<OtEditor> editors;

	// current working directory
	std::string cwd;

	// quit confirmation
	bool confirmQuit = false;
};
