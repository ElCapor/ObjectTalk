//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include <cstring>
#include <fstream>
#include <functional>
#include <sstream>

#include "glm/ext.hpp"
#include "imgui.h"
#include "imgui_internal.h"
#include "ImGuizmo.h"
#include "nlohmann/json.hpp"

#include "OtGpu.h"
#include "OtUi.h"

#include "OtSceneEditor.h"
#include "OtTaskManager.h"
#include "OtWorkspace.h"

#include "OtCreateEntityTask.h"
#include "OtDeleteEntityTask.h"
#include "OtMoveEntityTask.h"

#include "OtCreateComponentTask.h"
#include "OtDeleteComponentTask.h"
#include "OtEditComponentTask.h"

#include "OtCutEntityTask.h"
#include "OtCopyEntityTask.h"
#include "OtPasteEntityTask.h"
#include "OtDuplicateEntityTask.h"


//
//	createID
//

static inline void* createID(OtEntity entity, uint32_t key) {
	return (void*) ((((uint64_t) key) << 32) | (uint64_t) entity);
}


//
//	OtSceneEditorClass::load
//

void OtSceneEditorClass::load() {
	// load scene from file
	std::stringstream buffer;

	try {
		std::ifstream stream(path.c_str());

		if (stream.fail()) {
			OtExcept("Can't read from file [%s]", path.c_str());
		}

		buffer << stream.rdbuf();
		stream.close();

	} catch (std::exception& e) {
		OtExcept("Can't read from file [%s], error: %s", path.c_str(), e.what());
	}

	// recreate the scene
	auto basedir = path.parent_path();
	scene->deserialize(buffer.str(), &basedir);
}


//
//	OtSceneEditorClass::save
//

void OtSceneEditorClass::save() {
	try {
		// write scene to file
		std::ofstream stream(path.c_str());

		if (stream.fail()) {
			OtExcept("Can't write to file [%s]", path.c_str());
		}

		auto basedir = path.parent_path();
		stream << scene->serialize(1, '\t', &basedir);
		stream.close();

	} catch (std::exception& e) {
		OtExcept("Can't write to file [%s], error: %s", path.c_str(), e.what());
	}

	// reset current version number (marking the content as clean)
	version = taskManager.getUndoCount();
}


//
//	OtSceneEditorClass::render
//

void OtSceneEditorClass::render() {
	// create the window
	ImGui::BeginChild("scene", ImVec2(), true, ImGuiWindowFlags_MenuBar);
	determinePanelSizes();

	// determine button size
	buttonSize = ImGui::GetFrameHeight();

	// render the editor parts
	renderMenu();
	renderPanels();
	OtUiSplitterHorizontal(&panelWidth, minPanelWidth, maxPanelWidth);
	renderViewPort();
	ImGui::EndChild();

	// handle keyboard
	handleShortcuts();

	// perform editing task (if required)
	if (nextTask) {
		taskManager.perform(nextTask);

		// special handling for "new entity" task so we can automatically select the new kid on the block
		auto task = std::dynamic_pointer_cast<OtCreateEntityTask>(nextTask);

		if (task) {
			selectedEntity = task->getEntity();
		}

		// clear task so we don't perform it again
		nextTask = nullptr;
	}
}


//
//	OtSceneEditorClass::setSceneCamera
//

static void makeCameraList(OtScene2 scene, OtEntity entity, OtEntity* list, int& count) {
	if (count < 9) {
		if (scene->hasComponent<OtCameraComponent>(entity) && scene->hasComponent<OtTransformComponent>(entity)) {
			list[count++] = entity;
		}

		auto child = scene->getFirstChild(entity);

		while (scene->isValidEntity(child)) {
			makeCameraList(scene, child, list, count);
			child = scene->getNextSibling(child);
		}
	}
}

void OtSceneEditorClass::setSceneCamera(int cameraNumber) {
	// the default answer is the editor camera
	selectedCamera = OtEntityNull;

	// get a list of cameras
	OtEntity list[9];
	int entries = 0;
	makeCameraList(scene, scene->getRootEntity(), list, entries);

	// see if selected camera is avalable
	if (cameraNumber - 1 < entries) {
		selectedCamera = list[cameraNumber - 1];
	}
}


//
//	OtSceneEditorClass::renderMenu
//

void OtSceneEditorClass::renderMenu() {
	// get status
	bool selected = scene->isValidEntity(selectedEntity);
	bool clipable = clipboard.size() > 0;

#if __APPLE__
#define SHORTCUT "Cmd-"
#else
#define SHORTCUT "Ctrl-"
#endif

	// create menubar
	if (ImGui::BeginMenuBar()) {
		if (ImGui::BeginMenu("File")) {  // shortcuts handled by workspace
			if (ImGui::MenuItem("New", SHORTCUT "N")) { OtWorkspaceClass::instance()->newFile(); }
			if (ImGui::MenuItem("Open...", SHORTCUT "O")) { OtWorkspaceClass::instance()->openFile(); }
			ImGui::Separator();

			if (fileExists()) {
				if (ImGui::MenuItem("Save", SHORTCUT "S", nullptr, isDirty())) { OtWorkspaceClass::instance()->saveFile(); }
				if (ImGui::MenuItem("Save As...")) { OtWorkspaceClass::instance()->saveAsFile(); }

			} else {
				if (ImGui::MenuItem("Save As...", SHORTCUT "S", nullptr, isDirty())) { OtWorkspaceClass::instance()->saveAsFile(); }
			}

			ImGui::Separator();
			if (ImGui::MenuItem("Close", SHORTCUT "W")) { OtWorkspaceClass::instance()->closeFile(); }

			ImGui::EndMenu();
		}

		if (ImGui::BeginMenu("Edit")) {
			if (ImGui::MenuItem("Undo", SHORTCUT "Z", nullptr, taskManager.canUndo())) { taskManager.undo(); }
#if __APPLE__
			if (ImGui::MenuItem("Redo", "^" SHORTCUT "Z", nullptr, taskManager.canRedo())) { taskManager.redo(); }
#else
			if (ImGui::MenuItem("Redo", SHORTCUT "Y", nullptr, taskManager.canRedo())) { taskManager.redo(); }
#endif

			ImGui::Separator();
			if (ImGui::MenuItem("Cut", SHORTCUT "X", nullptr, selected)) { cutEntity(); }
			if (ImGui::MenuItem("Copy", SHORTCUT "C", nullptr, selected)) { copyEntity(); }
			if (ImGui::MenuItem("Paste", SHORTCUT "V", nullptr, selected && clipable)) { pasteEntity(); }
			if (ImGui::MenuItem("Duplicate", SHORTCUT "D", nullptr, selected)) { duplicateEntity(); }
			ImGui::EndMenu();
		}

		if (ImGui::BeginMenu("View")) {
			if (ImGui::BeginMenu("Camera")) {
				if (ImGui::RadioButton("Editor Camera", selectedCamera == OtEntityNull)) {
					selectedCamera = OtEntityNull;
				}

				// get a list of cameras
				OtEntity list[9];
				int entries = 0;
				makeCameraList(scene, scene->getRootEntity(), list, entries);

				for (auto i = 0; i < entries; i++) {
					if (ImGui::RadioButton(scene->getTag(list[i]).c_str(), selectedCamera == list[i])) {
						selectedCamera = list[i];
					}
				}

				ImGui::EndMenu();
			}

			ImGui::Separator();
			ImGui::MenuItem("Grid", SHORTCUT "D", &gridVisible);

			if (ImGui::BeginMenu("Grid Scale", gridVisible)) {
				ImGui::DragFloat("##scale", &gridScale, 0.1, 0.1f, 100.0f, "%.1f");
				ImGui::EndMenu();
			}

			ImGui::Separator();
			ImGui::MenuItem("Gizmo", SHORTCUT "G", &guizmoVisible);

			if (ImGui::BeginMenu("Gizmo Mode", guizmoVisible)) {
				if (ImGui::RadioButton("Translate", guizmoOperation == ImGuizmo::TRANSLATE)) {
					guizmoOperation = ImGuizmo::TRANSLATE;
					guizmoVisible = true;
				}

				ImGui::SameLine();

				if (ImGui::RadioButton("Rotate", guizmoOperation == ImGuizmo::ROTATE)) {
					guizmoOperation = ImGuizmo::ROTATE;
					guizmoVisible = true;
				}

				ImGui::SameLine();

				if (ImGui::RadioButton("Scale", guizmoOperation == ImGuizmo::SCALE)) {
					guizmoOperation = ImGuizmo::SCALE;
					guizmoVisible = true;
				}

				ImGui::EndMenu();
			}

			// render snap control
			if (ImGui::BeginMenu("Gizmo Snap", guizmoVisible)) {
				ImGui::Checkbox("Snaping", &guizmoSnapping);
				OtUiEditVec3("##snap", snap, 0.0f, 0.0f, 0.1f);
				ImGui::EndMenu();
			}

			ImGui::EndMenu();
		}

		if (ImGui::BeginMenu("Program")) {
			if (ImGui::MenuItem("Run", SHORTCUT "R", nullptr, !isDirty() && fileExists())) { run(); }
			ImGui::EndMenu();
		}

		ImGui::EndMenuBar();
	}
}


//
//	OtSceneEditorClass::renderPanels
//

void OtSceneEditorClass::renderPanels() {
	// create a new child window
	ImGui::BeginChild("panels", ImVec2(panelWidth, 0.0f));

	// create the entities panel
	auto spacing = ImGui::GetStyle().ItemSpacing;
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0.0f, 0.0f));
	ImGui::BeginChild("entities", ImVec2(0.0, entityPanelHeight), true);
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, spacing);
	renderEntitiesPanel();
	ImGui::PopStyleVar();
	ImGui::EndChild();
	ImGui::PopStyleVar();

	// render splitter between entity and component panels
	OtUiSplitterVertical(&entityPanelHeight, minEntityPanelHeight, maxEntityPanelHeight);

	// create the components panel
	ImGui::BeginChild("components", ImVec2(), true);
	renderComponentsPanel();
	ImGui::EndChild();

	// close the panels
	ImGui::EndChild();
}


//
//	OtSceneEditorClass::renderEntitiesPanel
//

void OtSceneEditorClass::renderEntitiesPanel() {
	renderPanel(
		"Entities",
		true,
		[this]() {
			// create menu to add entities
			renderNewEntitiesMenu(scene->getRootEntity());
		},
		[this]() {
			// render all root entities
			renderChildEntities(scene->getRootEntity());
		});
}


//
//	OtSceneEditorClass::renderComponentsPanel
//

void OtSceneEditorClass::renderComponentsPanel() {
	// render selected entity info and let user change its properties
	if (scene->isValidEntity(selectedEntity)) {
		OtUiHeader("Selected Entity", ImGui::GetWindowContentRegionMax().x - ImGui::GetCursorPos().x);
		renderComponentEditor<OtCoreComponent>();
	}

	// render the panel
	renderPanel(
		"Components",
		scene->isValidEntity(selectedEntity),
		[this]() {
			// create menu to add components
			renderNewComponents<OtSceneComponents>();
		},
		[this]() {
			// render component editors if we have a selected entity
			if (scene->isValidEntity(selectedEntity)) {
				renderComponents<OtSceneComponents>();
		}
	});
}


//
//	OtSceneEditorClass::renderViewPort
//

void OtSceneEditorClass::renderViewPort() {
	// create the window
	ImGui::BeginChild("viewport", ImVec2(), true);
	auto size = ImGui::GetContentRegionAvail();

	// unset selected entity if it is no longer valid
	if (!scene->isValidEntity(selectedEntity)) {
		selectedEntity = OtEntityNull;
	}

	// ensure we still have a valid selected camera (no valid scene camera means we use the editor camara)
	if (scene->isValidEntity(selectedCamera)) {
		if (!scene->hasComponent<OtCameraComponent>(selectedCamera) || !scene->hasComponent<OtTransformComponent>(selectedCamera)) {
			selectedCamera = OtEntityNull;
		}

	} else {
			selectedCamera = OtEntityNull;
	}

	// get camera information
	glm::vec3 cameraPosition;
	glm::mat4 camerViewMatrix;
	glm::mat4 cameraProjectionMatrix;

	if (scene->isValidEntity(selectedCamera)) {
		auto camera = scene->getComponent<OtCameraComponent>(selectedCamera);
		cameraPosition = glm::vec3(camerViewMatrix[3]);
		cameraProjectionMatrix = camera.getProjectionMatrix(size.x / size.y);
		camerViewMatrix = glm::inverse(scene->getGlobalTransform(selectedCamera));

	} else {
		editorCamera.update();
		cameraPosition = editorCamera.getPosition();
		camerViewMatrix = editorCamera.getViewMatrix();
		cameraProjectionMatrix = editorCamera.getProjectionMatrix(size.x / size.y);
	}

	// render the scene
	renderer.setCameraPosition(cameraPosition);
	renderer.setViewMatrix(camerViewMatrix);
	renderer.setProjectionMatrix(cameraProjectionMatrix);
	renderer.setSize(size.x, size.y);
	renderer.setGridScale(gridVisible ? gridScale : 0.0f);
	auto textureIndex = renderer.render(scene, selectedEntity);

	// show it on the screen
	if (OtGpuHasOriginBottomLeft()) {
		ImGui::Image((void*)(intptr_t) textureIndex, size, ImVec2(0.0f, 1.0f), ImVec2(1.0f, 0.0f));

	} else {
		ImGui::Image((void*)(intptr_t) textureIndex, size);
	}

	// handle mouse and keyboard interactions
	if (ImGui::IsItemHovered() && !scene->isValidEntity(selectedCamera)) {
		editorCamera.handleKeyboardAndMouse();
	}

	// only show guizmo if its visibility is on and the selected entiy has a transform
	if (guizmoVisible && scene->isValidEntity(selectedEntity) && scene->hasComponent<OtTransformComponent>(selectedEntity)) {
		// configure the guizmo
		ImGuizmo::SetOrthographic(false);
		ImGuizmo::SetDrawlist(ImGui::GetWindowDrawList());

		ImGuizmo::SetRect(
			ImGui::GetWindowPos().x,
			ImGui::GetWindowPos().y,
			ImGui::GetWindowWidth(),
			ImGui::GetWindowHeight());

		// get the target transform
		auto& component = scene->getComponent<OtTransformComponent>(selectedEntity);
		auto transform = component.getTransform();

		// show the guizmo
		ImGuizmo::Manipulate(
			glm::value_ptr(camerViewMatrix),
			glm::value_ptr(cameraProjectionMatrix),
			guizmoOperation,
			ImGuizmo::LOCAL,
			glm::value_ptr(transform),
			nullptr,
			guizmoSnapping ? glm::value_ptr(snap) : nullptr);

		if (ImGuizmo::IsUsing()) {
			auto oldValue = component.serialize(nullptr).dump();

			ImGuizmo::DecomposeMatrixToComponents(
				glm::value_ptr(transform),
				glm::value_ptr(component.translation),
				glm::value_ptr(component.rotation),
				glm::value_ptr(component.scale));

			auto newValue = component.serialize(nullptr).dump();
			nextTask = std::make_shared<OtEditComponentTask<OtTransformComponent>>(scene, selectedEntity, oldValue, newValue);
		}
	}

	ImGui::EndChild();
}


//
//	OtSceneEditorClass::determinePanelSizes
//

void OtSceneEditorClass::determinePanelSizes() {
	// get available space in window
	auto available = ImGui::GetContentRegionAvail();

	// determine panel width
	minPanelWidth = available.x * 0.05f;
	maxPanelWidth = available.x * 0.9f;

	if (panelWidth < 0.0) {
		panelWidth =  available.x * 0.25f;

	} else {
		panelWidth = std::clamp(panelWidth, minPanelWidth, maxPanelWidth);
	}

	// determine entity panel height
	minEntityPanelHeight = available.y * 0.05f;
	maxEntityPanelHeight = available.y * 0.9f;

	if (entityPanelHeight < 0.0f) {
		entityPanelHeight =  available.y * 0.3f;

	} else {
		entityPanelHeight = std::clamp(entityPanelHeight, minEntityPanelHeight, maxEntityPanelHeight);
	}
}


//
//	OtSceneEditorClass::renderPanel
//

void OtSceneEditorClass::renderPanel(const std::string& name, bool canAdd, std::function<void()> menu, std::function<void()> content) {
	// render a header
	auto padding = ImGui::GetStyle().FramePadding;
	float buttonSpace = canAdd ? buttonSize + padding.x : 0.0f;
	OtUiHeader(name.c_str(), ImGui::GetWindowContentRegionMax().x - ImGui::GetCursorPos().x - buttonSpace + 1.0f);

	// add a button to add more things (if required)
	if (canAdd) {
		ImGui::SameLine(ImGui::GetWindowContentRegionMax().x - buttonSize);
		auto popupName = name + "Menu";

		if (ImGui::Button("+", ImVec2(buttonSize, buttonSize))) {
			ImGui::OpenPopup((popupName.c_str()));
		}

		// create menu to add things
		if (ImGui::BeginPopup(popupName.c_str())) {
			menu();
			ImGui::EndPopup();
		}
	}

	// render panel context
	ImGui::BeginChild("content");
	ImGui::PushItemWidth(200.0f);
	content();
	ImGui::PopItemWidth();
	ImGui::EndChild();
}


//
//	OtSceneEditorClass::renderEntity
//

void OtSceneEditorClass::renderEntity(OtEntity entity) {
	// determine flags
	ImGuiTreeNodeFlags flags =
	ImGuiTreeNodeFlags_DefaultOpen |
	ImGuiTreeNodeFlags_OpenOnArrow |
	ImGuiTreeNodeFlags_FramePadding |
	ImGuiTreeNodeFlags_SpanAvailWidth |
	ImGuiTreeNodeFlags_AllowItemOverlap;

	if (entity == selectedEntity) {
		flags |= ImGuiTreeNodeFlags_Selected;
	}

	if (!scene->hasChildren(entity)) {
		flags |= ImGuiTreeNodeFlags_Bullet;
	}

	// create a tree node
	ImGui::PushID(createID(entity, 1));
	auto tag = scene->getEntityTag(entity);
	bool open = ImGui::TreeNodeEx("node", flags, "%s", tag.c_str());

	// is this entity selected
	if (entity == selectedEntity) {
		ImGui::GetWindowDrawList()->AddRect(
			ImGui::GetItemRectMin(),
			ImGui::GetItemRectMax(),
			0x8000FF00);
	}

	// entities are drag sources
	if (ImGui::BeginDragDropSource(ImGuiDragDropFlags_None)) {
		ImGui::SetDragDropPayload("entity", &entity, sizeof(entity));
		ImGui::Text("%s", tag.c_str());
		ImGui::EndDragDropSource();
	}

	// entities are drag targets
	OtEntity dragSourceEntity = OtEntityNull;
	ImGui::PushStyleColor(ImGuiCol_DragDropTarget, 0x8000b0b0);

	if (ImGui::BeginDragDropTarget()) {
		if (const ImGuiPayload* payload = ImGui::AcceptDragDropPayload("entity")) {
			OtEntity entityToBeMoved;
			std::memcpy(&entityToBeMoved, payload->Data, sizeof(OtEntity));
			nextTask = std::make_shared<OtMoveEntityTask>(scene, entity, entityToBeMoved, false);
		}

		ImGui::EndDragDropTarget();
	}

	ImGui::PopStyleColor();

	// select/deselect current entity
	if ((ImGui::IsItemClicked() || ImGui::IsItemClicked(1)) && !ImGui::IsItemToggledOpen()) {
		selectedEntity = ImGui::GetIO().KeyShift ? OtEntityNull : entity;
	}

	if (ImGui::BeginPopupContextWindow()) {
		if (ImGui::MenuItem("Cut")) { cutEntity(); }
		if (ImGui::MenuItem("Copy")) { copyEntity(); }
		if (ImGui::MenuItem("Paste")) { pasteEntity(); }
		if (ImGui::MenuItem("Duplicate")) { duplicateEntity(); }
		ImGui::EndPopup();
	}


	// add button to remove an entity
	auto right = ImGui::GetWindowContentRegionMax().x;
	ImGui::SameLine(right - buttonSize * 2.0f - ImGui::GetStyle().FramePadding.y);

	if (ImGui::Button("x##remove", ImVec2(buttonSize, buttonSize))) {
		nextTask = std::make_shared<OtDeleteEntityTask>(scene, entity);
	}

	// add button to add an entity
	ImGui::SameLine(right - buttonSize);

	if (ImGui::Button("+##add", ImVec2(buttonSize, buttonSize))) {
		ImGui::OpenPopup(("addmenu"));
	}

	if (ImGui::BeginPopup("addmenu")) {
		renderNewEntitiesMenu(entity);
		ImGui::EndPopup();
	}

	// render children (if required)
	if (open) {
		renderChildEntities(entity);
		ImGui::TreePop();
	}

	ImGui::PopID();
}


//
//	OtSceneEditorClass::renderChildEntities
//

void OtSceneEditorClass::renderChildEntities(OtEntity entity) {
	// spacing between child is provided by invisible drop targets
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2());

	// process all children
	auto child = scene->getFirstChild(entity);

	while (scene->isValidEntity(child)) {
		// create drop target
		ImGui::PushID(createID(child, 2));
		ImGui::InvisibleButton("##", ImVec2(ImGui::GetWindowContentRegionMax().x - ImGui::GetCursorPos().x, ImGui::GetStyle().FramePadding.y));
		ImGui::PushStyleColor(ImGuiCol_DragDropTarget, 0x8000b0b0);

		if (ImGui::BeginDragDropTarget()) {
			if (const ImGuiPayload* payload = ImGui::AcceptDragDropPayload("entity")) {
				OtEntity entityToBeMoved;
				std::memcpy(&entityToBeMoved, payload->Data, sizeof(OtEntity));
				nextTask = std::make_shared<OtMoveEntityTask>(scene, child, entityToBeMoved, true);
			}

			ImGui::EndDragDropTarget();
		}

		ImGui::PopStyleColor();
		ImGui::PopID();

		// render the child entity
		renderEntity(child);
		child = scene->getNextSibling(child);
	};

	ImGui::PopStyleVar();
}


//
//	OtSceneEditorClass::renderNewEntitiesMenu
//

void OtSceneEditorClass::renderNewEntitiesMenu(OtEntity entity) {
	if (ImGui::MenuItem("Empty Entity")) {
		nextTask = std::make_shared<OtCreateEntityTask>(scene, entity, OtCreateEntityTask::empty);
	}

	if (ImGui::MenuItem("Camera Entity")) {
		nextTask = std::make_shared<OtCreateEntityTask>(scene, entity, OtCreateEntityTask::camera);
	}

	if (ImGui::MenuItem("Directional Light")) {
		nextTask = std::make_shared<OtCreateEntityTask>(scene, entity, OtCreateEntityTask::directionalLight);
	}

	if (ImGui::MenuItem("Geometry Entity")) {
		nextTask = std::make_shared<OtCreateEntityTask>(scene, entity, OtCreateEntityTask::geometry);
	}
}


//
//	OtSceneEditorClass::renderNewComponent
//

template <typename T>
void OtSceneEditorClass::renderNewComponent() {
	if (ImGui::MenuItem(T::name, nullptr, false, !scene->hasComponent<T>(selectedEntity))) {
		nextTask = std::make_shared<OtCreateComponentTask<T>>(scene, selectedEntity);
	}
}


//
//	OtSceneEditorClass::renderComponentEditor
//

template <typename T>
void OtSceneEditorClass::renderComponentEditor() {
	auto& component = scene->getComponent<T>(selectedEntity);
	auto oldValue = component.serialize(nullptr).dump();

	if (component.renderGUI()) {
		auto newValue = component.serialize(nullptr).dump();
		nextTask = std::make_shared<OtEditComponentTask<T>>(scene, selectedEntity, oldValue, newValue);
	}
}


//
//	OtSceneEditorClass::renderComponent
//

template <typename T>
void OtSceneEditorClass::renderComponent(bool canRemove) {
	// only render if entity has this component
	if (scene->hasComponent<T>(selectedEntity)) {
		// add a new ID to the stack to avoid collisions
		ImGui::PushID(reinterpret_cast<void*>(typeid(T).hash_code()));

		// create a tree node for the component
		ImGuiTreeNodeFlags flags =
			ImGuiTreeNodeFlags_DefaultOpen |
			ImGuiTreeNodeFlags_OpenOnArrow |
			ImGuiTreeNodeFlags_FramePadding |
			ImGuiTreeNodeFlags_SpanAvailWidth |
			ImGuiTreeNodeFlags_AllowItemOverlap;

		bool open = ImGui::TreeNodeEx("##header", flags, T::name);
		bool removeComponent = false;

		// add button to remove the component
		if (canRemove) {
			ImGui::SameLine(ImGui::GetWindowContentRegionMax().x - buttonSize);
			removeComponent = ImGui::Button("x##remove", ImVec2(buttonSize, buttonSize));
		}

		// render the component editor (if required)
		if (open) {
			renderComponentEditor<T>();
			ImGui::TreePop();
		}

		// render a seperator line
		ImGui::Separator();

		// remove component (if required)
		if (removeComponent) {
			nextTask = std::make_shared<OtDeleteComponentTask<T>>(scene, selectedEntity);
		}

		// clean ID stack
		ImGui::PopID();
	}
}


//
//	OtSceneEditorClass::handleShortcuts
//

void OtSceneEditorClass::handleShortcuts() {
	// get keyboard state to handle keyboard shortcuts
	ImGuiIO& io = ImGui::GetIO();
	auto isOSX = io.ConfigMacOSXBehaviors;
	auto alt = io.KeyAlt;
	auto ctrl = io.KeyCtrl;
	auto shift = io.KeyShift;
	auto super = io.KeySuper;
	auto isShortcut = isOSX ? super : ctrl;

	// get status
	bool selected = scene->isValidEntity(selectedEntity);
	bool clipable = clipboard.size() > 0;

	// handle keyboard shortcuts
	if (isShortcut) {
		if (shift && ImGui::IsKeyPressed(ImGuiKey_Z, false)) {
			if (taskManager.canRedo()) {
				taskManager.redo();
			}

		} else if (ImGui::IsKeyPressed(ImGuiKey_Z, false) && taskManager.canUndo()) {
			// this is a hack as ImGui's InputText keeps a private copy of its content
			// ClearActiveID() takes the possible focus away and allows undo to work
			// see ImGuiInputTextFlags_NoUndoRedo documentation in imgui.h
			// so much for immediate mode :-)
			ImGui::ClearActiveID();
			taskManager.undo();

		} else if (ImGui::IsKeyPressed(ImGuiKey_X, false) && selected) {
			cutEntity();

		} else if (ImGui::IsKeyPressed(ImGuiKey_C, false) && selected) {
			copyEntity();

		} else if (ImGui::IsKeyPressed(ImGuiKey_V, false) && selected && clipable) {
			pasteEntity();

		} else if (ImGui::IsKeyPressed(ImGuiKey_D, false) && selected) {
			duplicateEntity();

		} else if (ImGui::IsKeyPressed(ImGuiKey_G, false)) {
			guizmoVisible = !guizmoVisible;

		} else if (ImGui::IsKeyPressed(ImGuiKey_T, false)) {
			guizmoOperation = ImGuizmo::TRANSLATE;

		} else if (ImGui::IsKeyPressed(ImGuiKey_R, false)) {
			guizmoOperation = ImGuizmo::ROTATE;

		} else if (ImGui::IsKeyPressed(ImGuiKey_S, false)) {
			guizmoOperation = ImGuizmo::SCALE;
		}

	// handle camera switching shortcuts
	} else if (alt) {
		if (ImGui::IsKeyPressed(ImGuiKey_0, false)) {
			setSceneCamera(0);

		} else if (ImGui::IsKeyPressed(ImGuiKey_1, false)) {
			setSceneCamera(1);

		} else if (ImGui::IsKeyPressed(ImGuiKey_1, false)) {
			setSceneCamera(1);

		} else if (ImGui::IsKeyPressed(ImGuiKey_2, false)) {
			setSceneCamera(2);

		} else if (ImGui::IsKeyPressed(ImGuiKey_3, false)) {
			setSceneCamera(3);

		} else if (ImGui::IsKeyPressed(ImGuiKey_4, false)) {
			setSceneCamera(4);

		} else if (ImGui::IsKeyPressed(ImGuiKey_5, false)) {
			setSceneCamera(5);

		} else if (ImGui::IsKeyPressed(ImGuiKey_6, false)) {
			setSceneCamera(6);

		} else if (ImGui::IsKeyPressed(ImGuiKey_7, false)) {
			setSceneCamera(7);

		} else if (ImGui::IsKeyPressed(ImGuiKey_8, false)) {
			setSceneCamera(8);

		} else if (ImGui::IsKeyPressed(ImGuiKey_9, false)) {
			setSceneCamera(9);
		}
	}
}


//
//	OtSceneEditorClass::run
//

void OtSceneEditorClass::run() {
}


//
//	OtSceneEditorClass::isDirty
//

bool OtSceneEditorClass::isDirty() {
	return version != taskManager.getUndoCount();
}


//
//	OtSceneEditorClass::cutEntity
//

void OtSceneEditorClass::cutEntity() {
	nextTask = std::make_shared<OtCutEntityTask>(scene, selectedEntity, clipboard);
}


//
//	OtSceneEditorClass::copyEntity
//

void OtSceneEditorClass::copyEntity() {
	nextTask = std::make_shared<OtCopyEntityTask>(scene, selectedEntity, clipboard);
}


//
//	OtSceneEditorClass::pasteEntity
//

void OtSceneEditorClass::pasteEntity() {
	nextTask = std::make_shared<OtPasteEntityTask>(scene, selectedEntity, clipboard);
}


//
//	OtSceneEditorClass::duplicateEntity
//

void OtSceneEditorClass::duplicateEntity() {
	nextTask = std::make_shared<OtDuplicateEntityTask>(scene, selectedEntity);
}


//
//	OtSceneEditorClass::create
//

OtSceneEditor OtSceneEditorClass::create(const std::filesystem::path& path) {
	OtSceneEditor editor = std::make_shared<OtSceneEditorClass>();
	editor->setFilePath(path);
	editor->scene = OtScene2Class::create();

	if (editor->fileExists()) {
		editor->load();
	}

	return editor;
}
