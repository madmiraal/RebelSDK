// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorinterface.h"

#include "classes/control.h"
#include "classes/editorfilesystem.h"
#include "classes/editorinspector.h"
#include "classes/editorresourcepreview.h"
#include "classes/editorselection.h"
#include "classes/editorsettings.h"
#include "classes/filesystemdock.h"
#include "classes/icalls.h"
#include "classes/node.h"
#include "classes/object.h"
#include "classes/resource.h"
#include "classes/script.h"
#include "classes/scripteditor.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void EditorInterface::edit_node(const Node* node) {
    rebel_icall_void_object(
        method_bindings.mb_edit_node,
        (const Object*)this,
        node
    );
}

void EditorInterface::edit_resource(const Ref<Resource> resource) {
    rebel_icall_void_object(
        method_bindings.mb_edit_resource,
        (const Object*)this,
        resource.ptr()
    );
}

void EditorInterface::edit_script(const Ref<Script> script, const int64_t line, const int64_t column, const bool grab_focus) {
    rebel_icall_void_object_int_int_bool(
        method_bindings.mb_edit_script,
        (const Object*)this,
        script.ptr(),
        line,
        column,
        grab_focus
    );
}

Control* EditorInterface::get_base_control() {
    return (Control*)rebel_icall_object(
        method_bindings.mb_get_base_control,
        (const Object*)this
    );
}

String EditorInterface::get_current_path() const {
    return rebel_icall_string(
        method_bindings.mb_get_current_path,
        (const Object*)this
    );
}

Node* EditorInterface::get_edited_scene_root() {
    return (Node*)rebel_icall_object(
        method_bindings.mb_get_edited_scene_root,
        (const Object*)this
    );
}

real_t EditorInterface::get_editor_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_editor_scale,
        (const Object*)this
    );
}

Ref<EditorSettings> EditorInterface::get_editor_settings() {
    return Ref<EditorSettings>::create_ref(rebel_icall_object(
        method_bindings.mb_get_editor_settings,
        (const Object*)this
    ));
}

Control* EditorInterface::get_editor_viewport() {
    return (Control*)rebel_icall_object(
        method_bindings.mb_get_editor_viewport,
        (const Object*)this
    );
}

FileSystemDock* EditorInterface::get_file_system_dock() {
    return (FileSystemDock*)rebel_icall_object(
        method_bindings.mb_get_file_system_dock,
        (const Object*)this
    );
}

EditorInspector* EditorInterface::get_inspector() const {
    return (EditorInspector*)rebel_icall_object(
        method_bindings.mb_get_inspector,
        (const Object*)this
    );
}

Array EditorInterface::get_open_scenes() const {
    return rebel_icall_array(
        method_bindings.mb_get_open_scenes,
        (const Object*)this
    );
}

String EditorInterface::get_playing_scene() const {
    return rebel_icall_string(
        method_bindings.mb_get_playing_scene,
        (const Object*)this
    );
}

EditorFileSystem* EditorInterface::get_resource_filesystem() {
    return (EditorFileSystem*)rebel_icall_object(
        method_bindings.mb_get_resource_filesystem,
        (const Object*)this
    );
}

EditorResourcePreview* EditorInterface::get_resource_previewer() {
    return (EditorResourcePreview*)rebel_icall_object(
        method_bindings.mb_get_resource_previewer,
        (const Object*)this
    );
}

ScriptEditor* EditorInterface::get_script_editor() {
    return (ScriptEditor*)rebel_icall_object(
        method_bindings.mb_get_script_editor,
        (const Object*)this
    );
}

String EditorInterface::get_selected_path() const {
    return rebel_icall_string(
        method_bindings.mb_get_selected_path,
        (const Object*)this
    );
}

EditorSelection* EditorInterface::get_selection() {
    return (EditorSelection*)rebel_icall_object(
        method_bindings.mb_get_selection,
        (const Object*)this
    );
}

void EditorInterface::inspect_object(const Object* object, const String for_property, const bool inspector_only) {
    rebel_icall_void_object_string_bool(
        method_bindings.mb_inspect_object,
        (const Object*)this,
        object,
        for_property,
        inspector_only
    );
}

bool EditorInterface::is_distraction_free_mode_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_distraction_free_mode_enabled,
        (const Object*)this
    );
}

bool EditorInterface::is_playing_scene() const {
    return rebel_icall_bool(
        method_bindings.mb_is_playing_scene,
        (const Object*)this
    );
}

bool EditorInterface::is_plugin_enabled(const String plugin) const {
    return rebel_icall_bool_string(
        method_bindings.mb_is_plugin_enabled,
        (const Object*)this,
        plugin
    );
}

Array EditorInterface::make_mesh_previews(const Array meshes, const int64_t preview_size) {
    return rebel_icall_array_array_int(
        method_bindings.mb_make_mesh_previews,
        (const Object*)this,
        meshes,
        preview_size
    );
}

void EditorInterface::open_scene_from_path(const String scene_filepath) {
    rebel_icall_void_string(
        method_bindings.mb_open_scene_from_path,
        (const Object*)this,
        scene_filepath
    );
}

void EditorInterface::play_current_scene() {
    rebel_icall_void(
        method_bindings.mb_play_current_scene,
        (const Object*)this
    );
}

void EditorInterface::play_custom_scene(const String scene_filepath) {
    rebel_icall_void_string(
        method_bindings.mb_play_custom_scene,
        (const Object*)this,
        scene_filepath
    );
}

void EditorInterface::play_main_scene() {
    rebel_icall_void(
        method_bindings.mb_play_main_scene,
        (const Object*)this
    );
}

void EditorInterface::reload_scene_from_path(const String scene_filepath) {
    rebel_icall_void_string(
        method_bindings.mb_reload_scene_from_path,
        (const Object*)this,
        scene_filepath
    );
}

Error EditorInterface::save_scene() {
    return (Error)rebel_icall_int(
        method_bindings.mb_save_scene,
        (const Object*)this
    );
}

void EditorInterface::save_scene_as(const String path, const bool with_preview) {
    rebel_icall_void_string_bool(
        method_bindings.mb_save_scene_as,
        (const Object*)this,
        path,
        with_preview
    );
}

void EditorInterface::select_file(const String file) {
    rebel_icall_void_string(
        method_bindings.mb_select_file,
        (const Object*)this,
        file
    );
}

void EditorInterface::set_distraction_free_mode(const bool enter) {
    rebel_icall_void_bool(
        method_bindings.mb_set_distraction_free_mode,
        (const Object*)this,
        enter
    );
}

void EditorInterface::set_main_screen_editor(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_main_screen_editor,
        (const Object*)this,
        name
    );
}

void EditorInterface::set_plugin_enabled(const String plugin, const bool enabled) {
    rebel_icall_void_string_bool(
        method_bindings.mb_set_plugin_enabled,
        (const Object*)this,
        plugin,
        enabled
    );
}

void EditorInterface::stop_playing_scene() {
    rebel_icall_void(
        method_bindings.mb_stop_playing_scene,
        (const Object*)this
    );
}

void EditorInterface::init_method_bindings() {
    method_bindings.mb_edit_node =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "edit_node"
        );
    method_bindings.mb_edit_resource =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "edit_resource"
        );
    method_bindings.mb_edit_script =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "edit_script"
        );
    method_bindings.mb_get_base_control =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "get_base_control"
        );
    method_bindings.mb_get_current_path =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "get_current_path"
        );
    method_bindings.mb_get_edited_scene_root =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "get_edited_scene_root"
        );
    method_bindings.mb_get_editor_scale =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "get_editor_scale"
        );
    method_bindings.mb_get_editor_settings =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "get_editor_settings"
        );
    method_bindings.mb_get_editor_viewport =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "get_editor_viewport"
        );
    method_bindings.mb_get_file_system_dock =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "get_file_system_dock"
        );
    method_bindings.mb_get_inspector =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "get_inspector"
        );
    method_bindings.mb_get_open_scenes =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "get_open_scenes"
        );
    method_bindings.mb_get_playing_scene =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "get_playing_scene"
        );
    method_bindings.mb_get_resource_filesystem =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "get_resource_filesystem"
        );
    method_bindings.mb_get_resource_previewer =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "get_resource_previewer"
        );
    method_bindings.mb_get_script_editor =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "get_script_editor"
        );
    method_bindings.mb_get_selected_path =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "get_selected_path"
        );
    method_bindings.mb_get_selection =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "get_selection"
        );
    method_bindings.mb_inspect_object =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "inspect_object"
        );
    method_bindings.mb_is_distraction_free_mode_enabled =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "is_distraction_free_mode_enabled"
        );
    method_bindings.mb_is_playing_scene =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "is_playing_scene"
        );
    method_bindings.mb_is_plugin_enabled =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "is_plugin_enabled"
        );
    method_bindings.mb_make_mesh_previews =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "make_mesh_previews"
        );
    method_bindings.mb_open_scene_from_path =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "open_scene_from_path"
        );
    method_bindings.mb_play_current_scene =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "play_current_scene"
        );
    method_bindings.mb_play_custom_scene =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "play_custom_scene"
        );
    method_bindings.mb_play_main_scene =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "play_main_scene"
        );
    method_bindings.mb_reload_scene_from_path =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "reload_scene_from_path"
        );
    method_bindings.mb_save_scene =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "save_scene"
        );
    method_bindings.mb_save_scene_as =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "save_scene_as"
        );
    method_bindings.mb_select_file =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "select_file"
        );
    method_bindings.mb_set_distraction_free_mode =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "set_distraction_free_mode"
        );
    method_bindings.mb_set_main_screen_editor =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "set_main_screen_editor"
        );
    method_bindings.mb_set_plugin_enabled =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "set_plugin_enabled"
        );
    method_bindings.mb_stop_playing_scene =
        api->rebel_method_bind_get_method(
            "EditorInterface",
            "stop_playing_scene"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorInterface");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorInterface::MethodBindings EditorInterface::method_bindings = {};
void* EditorInterface::class_tag = nullptr;
} // namespace Rebel
