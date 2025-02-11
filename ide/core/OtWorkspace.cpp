//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include <algorithm>
#include <filesystem>

#include "imgui.h"
#include "ImGuiFileDialog.h"

#include "OtFormat.h"

#include "OtMessageBus.h"
#include "OtUi.h"

#include "OtObjectTalkEditor.h"
#include "OtSceneEditor.h"
#include "OtWorkspace.h"


//
//	OtWorkspace::onSetup
//

void OtWorkspace::onSetup() {
	// set the current directory to examples if we are in development mode
	auto exec = getExecutablePath();
	auto root = exec.parent_path().parent_path();
	auto examples = root.parent_path() / "examples";

	if (std::filesystem::is_directory(examples)) {
		std::filesystem::current_path(examples);
	}

	// listen for message bus events
	OtMessageBus::instance()->listen([this](const std::string& message) {
		onMessage(message);
	});
}


//
//	OtWorkspace::onMessage
//

void OtWorkspace::onMessage(const std::string& message) {
	// split the command
	auto delimiter = message.find(" ");

	if (delimiter != std::string::npos) {
		auto command = message.substr(0, delimiter);
		auto file = message.substr(delimiter + 1);

		// process each command
		if (command == "open") {
			openFile(std::filesystem::path(file));
		}

	} else {
		// process each command
		if (message == "new") {
			newFile();

		} else if (message == "open") {
			openFile();

		} else if (message == "save") {
			saveFile();

		} else if (message == "saveas") {
			saveAsFile();

		} else if (message == "run") {
			runFile();

		} else if (message == "close") {
			closeFile();

		} else if (message == "toggleconsole") {
			consoleAsPanel = !consoleAsPanel;
		}
	}
}


//
//	OtWorkspace::onRender
//

void OtWorkspace::onRender()
{
	// show the "control bar" and the console if required
	if (consoleFullScreen) {
		renderSubProcess();

	} else {
		// show splash screen if we have no editors open
		if (editors.size() == 0) {
			renderSplashScreen();
			activeEditor = nullptr;

		} else {
			// render all editors as tabs
			renderEditors();
		}

		// render any dialog boxes
		if (state == newFileState) {
			renderNewFileType();

		} else if (state == openFileState) {
			renderFileOpen();

		} else if (state == saveFileAsState) {
			renderSaveAs();

		} else if (state == confirmCloseState) {
			renderConfirmClose();

		} else if (state == confirmQuitState) {
			renderConfirmQuit();

		} else if (state == confirmErrorState) {
			renderConfirmError();
		}
	}
}


//
//	OtWorkspace::onTerminate
//

void OtWorkspace::onTerminate() {
	// clear all resource references in order to release them at the right time
	editors.clear();
	activeEditor = nullptr;
	activateEditorTab = nullptr;
	logo = nullptr;
}


//
//	OtWorkspace::onCanQuit
//

bool OtWorkspace::onCanQuit() {
	// are we currently running something?
	if (subprocess.isRunning()) {
		// then we can't quit
		return false;

	// are we showing a dialog box that we shouldn't quit?
	} else if (state == saveFileAsState || state == confirmCloseState || state == confirmQuitState) {
		// then we can't quit
		return false;

	// we can't quit if we still have a "dirty" editor
	} else {
		for (auto& editor : editors) {
			if (editor->isDirty()) {
				state = confirmQuitState;
				return false;
			}
		}

		// nothing stops us now from quiting
		return true;
	}
}


//
//	OtWorkspace::newFile
//

void OtWorkspace::newFile() {
	state = newFileState;
}


//
//	OtWorkspace::getUntitledName
//

std::string OtWorkspace::getUntitledName() {
	static int seqno = 1;
	std::string name;

	while (!name.size()) {
		std::string temp = OtFormat("untitled%d", seqno++);

		if (!findEditor(temp)) {
			name = temp;
		}
	}

	return name;
}


//
//	OtWorkspace::newScript
//

void OtWorkspace::newScript() {
	editors.push_back(OtObjectTalkEditor::create(getUntitledName()));
	state = editState;
}


//
//	OtWorkspace::newScene
//

void OtWorkspace::newScene() {
	editors.push_back(OtSceneEditor::create(getUntitledName()));
	state = editState;
}


//
//	OtWorkspace::openFile
//

void OtWorkspace::openFile() {
	ImGuiFileDialog::Instance()->OpenDialog(
		"workspace-open",
		"Select File to Open...",
		".*",
		std::filesystem::current_path().string(),
		1,
		nullptr,
		ImGuiFileDialogFlags_Modal |
			ImGuiFileDialogFlags_DontShowHiddenFiles |
			ImGuiFileDialogFlags_ReadOnlyFileNameField);

	state = openFileState;
}


//
//	OtWorkspace::openFile
//

void OtWorkspace::openFile(const std::filesystem::path& path) {
	std::shared_ptr<OtEditor> editor;

	// don't reopen if it is already open
	if ((editor = findEditor(path)) == nullptr) {
		// get file extension to determine editor type
		auto extension = path.extension();

		// open correct editor
		if (extension == ".ot") {
			editor = OtObjectTalkEditor::create(path);
			editors.push_back(editor);
			state = editState;

		} else if (extension == ".ots") {
			editor = OtSceneEditor::create(path);
			editors.push_back(editor);
			state = editState;

		} else {
			state = confirmErrorState;
			errorMessage = OtFormat("Can't open file with extension: %s", extension.string().c_str());
		}

	} else {
		// editor already exists, just active it
		activateEditor(editor);
	}
}


//
//	OtWorkspace::saveFile
//

void OtWorkspace::saveFile() {
	activeEditor->save();
}


//
//	OtWorkspace::saveAsFile
//

void OtWorkspace::saveAsFile() {
	ImGuiFileDialog::Instance()->OpenDialog(
		"workspace-saveas",
		"Save File as...",
		activeEditor->getFileExtension().c_str(),
		std::filesystem::current_path().string(),
		activeEditor->getShortName(),
		1,
		nullptr,
		ImGuiFileDialogFlags_Modal |
			ImGuiFileDialogFlags_DontShowHiddenFiles |
			ImGuiFileDialogFlags_ConfirmOverwrite);

	state = saveFileAsState;
}


//
//	OtWorkspace::closeFile
//

void OtWorkspace::closeFile() {
	// see if editor is dirty
	if (activeEditor->isDirty()) {
		state = confirmCloseState;

	} else {
		deleteEditor(activeEditor);
	}
}


//
//	OtWorkspace::runFile
//

void OtWorkspace::runFile() {
	// clear the console, error buffer and all error highlighting
	console.clear();
	exceptionAsJson.clear();

	for (auto editor : editors) {
		auto scriptEditor = std::dynamic_pointer_cast<OtObjectTalkEditor>(editor);

		if (scriptEditor) {
			scriptEditor->clearError();
		}
	}

	// compose the argument array
	std::vector<std::string> args;
	args.push_back("--child");
	currentRunnable = activeEditor->getFileName();
	args.push_back(currentRunnable.string());

	// launch a subprocess
	subprocess.start(
		getExecutablePath(),
		args,
		[this](int64_t status, int signal) {
			if (status || signal != 0) {
				console.writeError(OtFormat("\n[%s] terminated with status %d and signal %d", currentRunnable.string().c_str(), status, signal));

				// highlight error (if required)
				if (exceptionAsJson.size()) {
					std::cout << exceptionAsJson << std::endl;
					highlightError();
					consoleFullScreen = false;
					consoleAsPanel = true;
				}

			} else {
				console.writeHelp(OtFormat("\n[%s] terminated normally", currentRunnable.string().c_str()));

				// hide console after running a scene (user can always bring it back)
				if (currentRunnable.extension() == ".ots") {
						consoleFullScreen = false;
				}
			}
		},

		[this](const std::string& text) {
			console.write(text);
		},

		[this](const std::string& text) {
			// see if we have an exception report
			// (signified by start of text (STX) ASCII code)
			auto stx = text.find('\x02');

			if (stx != std::string::npos) {
				// send first part to console
				console.writeError(text.substr(0, stx));

				// see if we also have an ETX in the same chunk
				auto etx = text.find('\x03');

				if (etx != std::string::npos) {
					// extract the exception expressed as JSON
					exceptionAsJson = text.substr(stx + 1, etx - stx - 1);

					// send the rest of the message to the console
					console.writeError(text.substr(etx + 1));

				} else {
					// extract the partial exception and set a flag
					exceptionAsJson = text.substr(stx + 1);
					partialException = true;
				}

			} else if (partialException) {
				// see if we have the rest of the exception now
				auto etx = text.find('\x03');

				if (etx != std::string::npos) {
					// add to JSON
					exceptionAsJson += text.substr(0, etx);
					partialException = false;

					// send the rest of the message to the console
					console.writeError(text.substr(etx + 1));

				} else {
					// add chunk and keep waiting for the end flag
					exceptionAsJson += text;
				}

			} else {
				console.writeError(text);
			}
		});

	// show the console
	consoleFullScreen = true;
	consoleAsPanel = false;
}


//
//	OtWorkspace::deleteEditor
//

void OtWorkspace::deleteEditor(std::shared_ptr<OtEditor> editor) {
	// remove specified editor from list
	editors.erase(std::remove_if(editors.begin(), editors.end(), [this] (std::shared_ptr<OtEditor> candidate) {
		return candidate == activeEditor;
	}), editors.end());

	if (editors.size() == 0) {
		state = splashState;
	}
}


//
//	OtWorkspace::findEditor
//

std::shared_ptr<OtEditor> OtWorkspace::findEditor(const std::filesystem::path& path) {
	for (auto& editor : editors) {
		if (editor->getFileName() == path.string() || editor->getShortName() == path.string()) {
			return editor;
		}
	}

	return nullptr;
}


//
//	OtWorkspace::activateEditor
//

void OtWorkspace::activateEditor(std::shared_ptr<OtEditor> editor) {
	activateEditorTab = editor;
}


//
//	OtWorkspace::renderSplashScreen
//

void OtWorkspace::renderSplashScreen() {
	// load logo (if required)
	if (!logo) {
		logo = std::make_shared<OtLogo>();
	}

	ImVec2 center = ImGui::GetMainViewport()->GetCenter();
	ImGui::SetNextWindowPos(center, ImGuiCond_Appearing, ImVec2(0.5, 0.5));

	ImGui::Begin(
		"SplashScreen",
		nullptr,
		ImGuiWindowFlags_NoDecoration |
			ImGuiWindowFlags_AlwaysAutoResize |
			ImGuiWindowFlags_NoResize |
			ImGuiWindowFlags_NoMove |
			ImGuiWindowFlags_NoBringToFrontOnFocus |
			ImGuiWindowFlags_NoInputs);

	ImGui::Image((void*)(intptr_t) logo->getTextureIndex(), ImVec2(logo->getWidth(), logo->getHeight()));

	OtUiCenteredText("Welcome to the ObjectTalk");
	OtUiCenteredText("Integrated Development Environment (IDE)");
	OtUiCenteredText("");

	if (ImGui::GetIO().ConfigMacOSXBehaviors) {
		OtUiCenteredText("Use Cmd-N to create a new file");
		OtUiCenteredText("Use Cmd-O to open an existing file");

	} else {
		OtUiCenteredText("Use Ctrl-N to create a new file");
		OtUiCenteredText("Use Ctrl-O to open an existing file");
	}

	ImGui::End();

	// handle shortcuts
	if (ImGui::IsKeyDown(ImGuiMod_Shortcut)) {
		if (ImGui::IsKeyPressed(ImGuiKey_N)) {
			newFile();

		} else if (ImGui::IsKeyPressed(ImGuiKey_O)) {
			openFile();
		}
	}
}


//
//	OtWorkspace::renderEditors
//

void OtWorkspace::renderEditors() {
	// create workspace window
	ImGui::SetNextWindowPos(ImVec2(0.0f, 0.0f));
	ImGui::SetNextWindowSize(ImGui::GetIO().DisplaySize);
	ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 0.0f);

	ImGui::Begin(
		"Workspace",
		nullptr,
		ImGuiWindowFlags_NoDecoration |
		ImGuiWindowFlags_NoResize |
		ImGuiWindowFlags_NoBringToFrontOnFocus);

	if (consoleAsPanel) {
		// split the screen between the editors and the console
		determinePanelHeights();
		auto spacing = ImGui::GetStyle().ItemSpacing;
		ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0.0f, 0.0f));
		ImGui::BeginChild("Editors", ImVec2(0.0f, editorsHeight), false);
		ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, spacing);
	}

	// start a tab bar
	if (ImGui::BeginTabBar("Tabs", ImGuiTabBarFlags_AutoSelectNewTabs)) {
		// make clone of editor list since renderers might change it
		std::vector<std::shared_ptr<OtEditor>> clone = editors;

		// render all editors as tabs
		for (auto& editor : clone) {
			// determine flags for tab
			ImGuiTabItemFlags flags = 0;

			if (activateEditorTab == editor) {
				flags |= ImGuiTabItemFlags_SetSelected;
				activateEditorTab = nullptr;
			}

			if (editor->isDirty()) {
				flags |= ImGuiTabItemFlags_UnsavedDocument;
			}

			// create tab and editor
			ImGui::PushID(this);

			if (ImGui::BeginTabItem(editor->getShortName().c_str(), nullptr, flags)) {
				editor->render(state == editState);
				activeEditor = editor;
				ImGui::EndTabItem();
			}

			ImGui::PopID();
		}

		ImGui::EndTabBar();
	}

	if (consoleAsPanel) {
		// split the screen between the editors and the console
		ImGui::PopStyleVar();
		ImGui::EndChild();
		ImGui::PopStyleVar();
		OtUiSplitterVertical(&editorsHeight, editorsMinHeight, editorsMaxHeight);
		console.render();
	}

	ImGui::End();
	ImGui::PopStyleVar();
}


//
//	OtWorkspace::renderNewFileType
//

void OtWorkspace::renderNewFileType() {
	ImGui::OpenPopup("New File...");
	ImVec2 center = ImGui::GetMainViewport()->GetCenter();
	ImGui::SetNextWindowPos(center, ImGuiCond_Appearing, ImVec2(0.5, 0.5));

	if (ImGui::BeginPopupModal("New File...", NULL, ImGuiWindowFlags_AlwaysAutoResize)) {
		ImGui::Text("Please select a file type:");
		ImGui::Separator();

		if (ImGui::Button("Script", ImVec2(120, 0))) {
			// create a new text editor
			newScript();
			ImGui::CloseCurrentPopup();
		}

		ImGui::SetItemDefaultFocus();
		ImGui::SameLine();

		if (ImGui::Button("Scene", ImVec2(120, 0))) {
			newScene();
			ImGui::CloseCurrentPopup();
		}

		ImGui::SameLine();

		if (ImGui::Button("Cancel", ImVec2(120, 0)) || ImGui::IsKeyPressed(ImGuiKey_Escape, false)) {
			state = editors.size() ? editState : splashState;
			ImGui::CloseCurrentPopup();
		}

		ImGui::EndPopup();
	}
}


//
//	OtWorkspace::renderFileOpen
//

void OtWorkspace::renderFileOpen() {
	// handle file open dialog
	ImVec2 maxSize = ImGui::GetIO().DisplaySize;
	ImVec2 minSize = ImVec2(maxSize.x * 0.5, maxSize.y * 0.5);

	if (ImGuiFileDialog::Instance()->Display("workspace-open", ImGuiWindowFlags_NoCollapse, minSize, maxSize)) {
		// open selected file if required
		if (ImGuiFileDialog::Instance()->IsOk()) {
			auto path = ImGuiFileDialog::Instance()->GetFilePathName();
			openFile(path);

			if (state != confirmErrorState) {
				state = editState;
			}

			std::filesystem::current_path(std::filesystem::path(path).parent_path());

		} else {
			state = editors.size() ? editState : splashState;
		}

		// close dialog
		ImGuiFileDialog::Instance()->Close();
	}
}


//
//	OtWorkspace::renderSaveAs
//

void OtWorkspace::renderSaveAs() {
	// handle saveas dialog
	ImVec2 maxSize = ImGui::GetIO().DisplaySize;
	ImVec2 minSize = ImVec2(maxSize.x * 0.5, maxSize.y * 0.5);

	if (ImGuiFileDialog::Instance()->Display("workspace-saveas", ImGuiWindowFlags_NoCollapse, minSize, maxSize)) {
		// open selected file if required
		if (ImGuiFileDialog::Instance()->IsOk()) {
			auto path = ImGuiFileDialog::Instance()->GetFilePathName();
			activeEditor->setFilePath(path);

			activeEditor->save();
			state = editState;

			std::filesystem::current_path(std::filesystem::path(path).parent_path());

		} else {
			state = editors.size() ? editState : splashState;
		}

		// close dialog
		ImGuiFileDialog::Instance()->Close();
	}
}


//
//	OtWorkspace::renderConfirmClose
//

void OtWorkspace::renderConfirmClose() {
	ImGui::OpenPopup("Delete?");
	ImVec2 center = ImGui::GetMainViewport()->GetCenter();
	ImGui::SetNextWindowPos(center, ImGuiCond_Appearing, ImVec2(0.5, 0.5));

	if (ImGui::BeginPopupModal("Delete?", NULL, ImGuiWindowFlags_AlwaysAutoResize)) {
		ImGui::Text("This file has changed!\nDo you really want to delete it?\n\n");
		ImGui::Separator();

		if (ImGui::Button("OK", ImVec2(120, 0))) {
			deleteEditor(activeEditor);
			state = editors.size() ? editState : splashState;
			ImGui::CloseCurrentPopup();
		}

		ImGui::SetItemDefaultFocus();
		ImGui::SameLine();

		if (ImGui::Button("Cancel", ImVec2(120, 0)) || ImGui::IsKeyPressed(ImGuiKey_Escape, false)) {
			state = editState;
			ImGui::CloseCurrentPopup();
		}

		ImGui::EndPopup();
	}
}


//
//	OtWorkspace::renderConfirmQuit
//

void OtWorkspace::renderConfirmQuit() {
	ImGui::OpenPopup("Quit Application?");
	ImVec2 center = ImGui::GetMainViewport()->GetCenter();
	ImGui::SetNextWindowPos(center, ImGuiCond_Appearing, ImVec2(0.5, 0.5));

	if (ImGui::BeginPopupModal("Quit Application?", NULL, ImGuiWindowFlags_AlwaysAutoResize)) {
		ImGui::Text("You have unsaved files!\nDo you really want to quit?\n\n");
		ImGui::Separator();

		if (ImGui::Button("OK", ImVec2(120, 0))) {
			OtMessageBus::instance()->send("stop");
			state = editState;
			ImGui::CloseCurrentPopup();
		}

		ImGui::SetItemDefaultFocus();
		ImGui::SameLine();

		if (ImGui::Button("Cancel", ImVec2(120, 0)) || ImGui::IsKeyPressed(ImGuiKey_Escape, false)) {
			state = editState;
			ImGui::CloseCurrentPopup();
		}

		ImGui::EndPopup();
	}
}


//
//	OtWorkspace::renderConfirmError
//

void OtWorkspace::renderConfirmError() {
	ImGui::OpenPopup("Error");
	ImVec2 center = ImGui::GetMainViewport()->GetCenter();
	ImGui::SetNextWindowPos(center, ImGuiCond_Appearing, ImVec2(0.5, 0.5));

	if (ImGui::BeginPopupModal("Error", NULL, ImGuiWindowFlags_AlwaysAutoResize)) {
		ImGui::Text("%s\n", errorMessage.c_str());
		ImGui::Separator();

		if (ImGui::Button("OK", ImVec2(120, 0)) || ImGui::IsKeyPressed(ImGuiKey_Escape, false)) {
			state = editors.size() ? editState : splashState;
			ImGui::CloseCurrentPopup();
		}

		ImGui::EndPopup();
	}
}


//
//	OtWorkspace::renderSubProcess
//

void OtWorkspace::renderSubProcess() {
	// create console window
	ImGui::SetNextWindowPos(ImVec2(0.0f, 0.0f));
	ImGui::SetNextWindowSize(ImGui::GetIO().DisplaySize);
	ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 0.0f);

	ImGui::Begin(
		"SubProcess",
		nullptr,
		ImGuiWindowFlags_NoDecoration |
		ImGuiWindowFlags_NoResize |
		ImGuiWindowFlags_NoBringToFrontOnFocus);

	// render the subprocess control bar
	std::string title = OtFormat("Runnning [%s]...", currentRunnable.string().c_str());
	ImGui::TextColored(ImVec4(0.0f, 1.0f, 1.0f, 1.0f), "%s", title.c_str());
	ImGui::SameLine(ImGui::GetWindowContentRegionMax().x - 150.0f);

	if (subprocess.isRunning()) {
		if (ImGui::Button("Kill Process")) {
			subprocess.kill(SIGINT);
		}

	} else {
		if (ImGui::Button("Close Console", ImVec2(150.0f, 0.0f))) {
			consoleFullScreen = false;
		}

		if (ImGui::IsKeyDown(ImGuiMod_Shortcut) && ImGui::IsKeyPressed(ImGuiKey_W, false)) {
			consoleFullScreen = false;
		}
	}

	// render the console
	console.render();

	ImGui::End();
	ImGui::PopStyleVar();
}


//
//	OtWorkspace::getExecutablePath
//

std::filesystem::path OtWorkspace::getExecutablePath() {
	// figure out where we live
	char buffer[1024];
	size_t length = 1024;
	auto status = uv_exepath(buffer, &length);
	UV_CHECK_ERROR("uv_exepath", status);
	buffer[length] = 0;
	return std::filesystem::canonical(std::filesystem::path(buffer));
}


//
//	OtWorkspace::highlightError
//

void OtWorkspace::highlightError() {
	// deserialize the exception
	OtException exception;
	exception.deserialize(exceptionAsJson);

	// see if the module is a valid ObjectTalk file
	auto module = std::filesystem::path(exception.getModule());

	if (std::filesystem::is_regular_file(module) && module.extension() == ".ot") {
		// see of this file is already open in the IDE
		auto editor = findEditor(module);

		if (!editor) {
			// open the editor
			openFile(module);
			editor = findEditor(module);
		}

		// activate the editor
		activateEditor(editor);

		// ask editor to highlight error
		auto scriptEditor = std::dynamic_pointer_cast<OtObjectTalkEditor>(editor);
		assert(scriptEditor);

		scriptEditor->highlightError(exception.getLineNumber(), exception.getShortErrorMessage());
	}
}


//
//	OtWorkspace::determinePanelHeights
//

void OtWorkspace::determinePanelHeights() {
	// get available space in window
	auto available = ImGui::GetContentRegionAvail();

	// determine editors height
	editorsMinHeight = available.y * 0.05f;
	editorsMaxHeight = available.y * 0.9f;

	if (editorsHeight < 0.0) {
		editorsHeight =  available.y * 0.75f;

	} else {
		editorsHeight = std::clamp(editorsHeight, editorsMinHeight, editorsMaxHeight);
	}
}
