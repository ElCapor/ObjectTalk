#	ObjectTalk Scripting Language
#	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
#
#	This work is licensed under the terms of the MIT license.
#	For a copy, see <https://opensource.org/licenses/MIT>.

#FetchContent_Declare(imguifd GIT_REPOSITORY "https://github.com/aiekick/ImGuiFileDialog" GIT_TAG "v0.6.5")
FetchContent_Declare(imguifd GIT_REPOSITORY "https://github.com/aiekick/ImGuiFileDialog")
FetchContent_Populate(imguifd)

set(IMGUIFD_SOURCES
	${imguifd_SOURCE_DIR}/ImGuiFileDialog.h
	${imguifd_SOURCE_DIR}/ImGuiFileDialogConfig.h
	${imguifd_SOURCE_DIR}/ImGuiFileDialog.cpp)

add_library(imguifd STATIC ${IMGUIFD_SOURCES})
add_dependencies(imguifd imgui)

target_compile_definitions(imguifd PRIVATE ImGuiButtonFlags_AllowItemOverlap=ImGuiButtonFlags_AllowOverlap)
target_compile_definitions(imguifd PRIVATE ImGuiSelectableFlags_AllowItemOverlap=ImGuiSelectableFlags_AllowOverlap)
target_compile_definitions(imguifd PRIVATE SetItemAllowOverlap=SetNextItemAllowOverlap)

target_compile_definitions(imguifd PUBLIC CUSTOM_IMGUIFILEDIALOG_CONFIG="IgfdConfig.h")
target_include_directories(imguifd PUBLIC ${imguifd_SOURCE_DIR} ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(imguifd imgui)

set_target_properties(imguifd PROPERTIES FOLDER deps)
