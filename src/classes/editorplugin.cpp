// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorplugin.h"

#include "classes/camera.h"
#include "classes/configfile.h"
#include "classes/control.h"
#include "classes/editorexportplugin.h"
#include "classes/editorimportplugin.h"
#include "classes/editorinspectorplugin.h"
#include "classes/editorinterface.h"
#include "classes/editorsceneimporter.h"
#include "classes/editorspatialgizmoplugin.h"
#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/object.h"
#include "classes/script.h"
#include "classes/scriptcreatedialog.h"
#include "classes/texture.h"
#include "classes/toolbutton.h"
#include "classes/undoredo.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void EditorPlugin::add_autoload_singleton(const String name, const String path) {
    rebel_icall_void_string_string(
        method_bindings.mb_add_autoload_singleton,
        (const Object*)this,
        name,
        path
    );
}

ToolButton* EditorPlugin::add_control_to_bottom_panel(const Control* control, const String title) {
    return (ToolButton*)rebel_icall_object_object_string(
        method_bindings.mb_add_control_to_bottom_panel,
        (const Object*)this,
        control,
        title
    );
}

void EditorPlugin::add_control_to_container(const int64_t container, const Control* control) {
    rebel_icall_void_int_object(
        method_bindings.mb_add_control_to_container,
        (const Object*)this,
        container,
        control
    );
}

void EditorPlugin::add_control_to_dock(const int64_t slot, const Control* control) {
    rebel_icall_void_int_object(
        method_bindings.mb_add_control_to_dock,
        (const Object*)this,
        slot,
        control
    );
}

void EditorPlugin::add_custom_type(const String type, const String base, const Ref<Script> script, const Ref<Texture> icon) {
    rebel_icall_void_string_string_object_object(
        method_bindings.mb_add_custom_type,
        (const Object*)this,
        type,
        base,
        script.ptr(),
        icon.ptr()
    );
}

void EditorPlugin::add_export_plugin(const Ref<EditorExportPlugin> plugin) {
    rebel_icall_void_object(
        method_bindings.mb_add_export_plugin,
        (const Object*)this,
        plugin.ptr()
    );
}

void EditorPlugin::add_import_plugin(const Ref<EditorImportPlugin> importer) {
    rebel_icall_void_object(
        method_bindings.mb_add_import_plugin,
        (const Object*)this,
        importer.ptr()
    );
}

void EditorPlugin::add_inspector_plugin(const Ref<EditorInspectorPlugin> plugin) {
    rebel_icall_void_object(
        method_bindings.mb_add_inspector_plugin,
        (const Object*)this,
        plugin.ptr()
    );
}

void EditorPlugin::add_scene_import_plugin(const Ref<EditorSceneImporter> scene_importer) {
    rebel_icall_void_object(
        method_bindings.mb_add_scene_import_plugin,
        (const Object*)this,
        scene_importer.ptr()
    );
}

void EditorPlugin::add_spatial_gizmo_plugin(const Ref<EditorSpatialGizmoPlugin> plugin) {
    rebel_icall_void_object(
        method_bindings.mb_add_spatial_gizmo_plugin,
        (const Object*)this,
        plugin.ptr()
    );
}

void EditorPlugin::add_tool_menu_item(const String name, const Object* handler, const String callback, const Variant ud) {
    rebel_icall_void_string_object_string_variant(
        method_bindings.mb_add_tool_menu_item,
        (const Object*)this,
        name,
        handler,
        callback,
        ud
    );
}

void EditorPlugin::add_tool_submenu_item(const String name, const Object* submenu) {
    rebel_icall_void_string_object(
        method_bindings.mb_add_tool_submenu_item,
        (const Object*)this,
        name,
        submenu
    );
}

void EditorPlugin::apply_changes() {
    rebel_icall_void(
        method_bindings.mb_apply_changes,
        (const Object*)this
    );
}

bool EditorPlugin::build() {
    return rebel_icall_bool(
        method_bindings.mb_build,
        (const Object*)this
    );
}

void EditorPlugin::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

void EditorPlugin::disable_plugin() {
    rebel_icall_void(
        method_bindings.mb_disable_plugin,
        (const Object*)this
    );
}

void EditorPlugin::edit(const Object* object) {
    rebel_icall_void_object(
        method_bindings.mb_edit,
        (const Object*)this,
        object
    );
}

void EditorPlugin::enable_plugin() {
    rebel_icall_void(
        method_bindings.mb_enable_plugin,
        (const Object*)this
    );
}

void EditorPlugin::forward_canvas_draw_over_viewport(const Control* overlay) {
    rebel_icall_void_object(
        method_bindings.mb_forward_canvas_draw_over_viewport,
        (const Object*)this,
        overlay
    );
}

void EditorPlugin::forward_canvas_force_draw_over_viewport(const Control* overlay) {
    rebel_icall_void_object(
        method_bindings.mb_forward_canvas_force_draw_over_viewport,
        (const Object*)this,
        overlay
    );
}

bool EditorPlugin::forward_canvas_gui_input(const Ref<InputEvent> event) {
    return rebel_icall_bool_object(
        method_bindings.mb_forward_canvas_gui_input,
        (const Object*)this,
        event.ptr()
    );
}

void EditorPlugin::forward_spatial_draw_over_viewport(const Control* overlay) {
    rebel_icall_void_object(
        method_bindings.mb_forward_spatial_draw_over_viewport,
        (const Object*)this,
        overlay
    );
}

void EditorPlugin::forward_spatial_force_draw_over_viewport(const Control* overlay) {
    rebel_icall_void_object(
        method_bindings.mb_forward_spatial_force_draw_over_viewport,
        (const Object*)this,
        overlay
    );
}

bool EditorPlugin::forward_spatial_gui_input(const Camera* camera, const Ref<InputEvent> event) {
    return rebel_icall_bool_object_object(
        method_bindings.mb_forward_spatial_gui_input,
        (const Object*)this,
        camera,
        event.ptr()
    );
}

PoolStringArray EditorPlugin::get_breakpoints() {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_breakpoints,
        (const Object*)this
    );
}

EditorInterface* EditorPlugin::get_editor_interface() {
    return (EditorInterface*)rebel_icall_object(
        method_bindings.mb_get_editor_interface,
        (const Object*)this
    );
}

Ref<Texture> EditorPlugin::get_plugin_icon() {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_plugin_icon,
        (const Object*)this
    ));
}

String EditorPlugin::get_plugin_name() {
    return rebel_icall_string(
        method_bindings.mb_get_plugin_name,
        (const Object*)this
    );
}

ScriptCreateDialog* EditorPlugin::get_script_create_dialog() {
    return (ScriptCreateDialog*)rebel_icall_object(
        method_bindings.mb_get_script_create_dialog,
        (const Object*)this
    );
}

Dictionary EditorPlugin::get_state() {
    return rebel_icall_dictionary(
        method_bindings.mb_get_state,
        (const Object*)this
    );
}

UndoRedo* EditorPlugin::get_undo_redo() {
    return (UndoRedo*)rebel_icall_object(
        method_bindings.mb_get_undo_redo,
        (const Object*)this
    );
}

void EditorPlugin::get_window_layout(const Ref<ConfigFile> layout) {
    rebel_icall_void_object(
        method_bindings.mb_get_window_layout,
        (const Object*)this,
        layout.ptr()
    );
}

bool EditorPlugin::handles(const Object* object) {
    return rebel_icall_bool_object(
        method_bindings.mb_handles,
        (const Object*)this,
        object
    );
}

bool EditorPlugin::has_main_screen() {
    return rebel_icall_bool(
        method_bindings.mb_has_main_screen,
        (const Object*)this
    );
}

void EditorPlugin::hide_bottom_panel() {
    rebel_icall_void(
        method_bindings.mb_hide_bottom_panel,
        (const Object*)this
    );
}

void EditorPlugin::make_bottom_panel_item_visible(const Control* item) {
    rebel_icall_void_object(
        method_bindings.mb_make_bottom_panel_item_visible,
        (const Object*)this,
        item
    );
}

void EditorPlugin::make_visible(const bool visible) {
    rebel_icall_void_bool(
        method_bindings.mb_make_visible,
        (const Object*)this,
        visible
    );
}

void EditorPlugin::queue_save_layout() const {
    rebel_icall_void(
        method_bindings.mb_queue_save_layout,
        (const Object*)this
    );
}

void EditorPlugin::remove_autoload_singleton(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_remove_autoload_singleton,
        (const Object*)this,
        name
    );
}

void EditorPlugin::remove_control_from_bottom_panel(const Control* control) {
    rebel_icall_void_object(
        method_bindings.mb_remove_control_from_bottom_panel,
        (const Object*)this,
        control
    );
}

void EditorPlugin::remove_control_from_container(const int64_t container, const Control* control) {
    rebel_icall_void_int_object(
        method_bindings.mb_remove_control_from_container,
        (const Object*)this,
        container,
        control
    );
}

void EditorPlugin::remove_control_from_docks(const Control* control) {
    rebel_icall_void_object(
        method_bindings.mb_remove_control_from_docks,
        (const Object*)this,
        control
    );
}

void EditorPlugin::remove_custom_type(const String type) {
    rebel_icall_void_string(
        method_bindings.mb_remove_custom_type,
        (const Object*)this,
        type
    );
}

void EditorPlugin::remove_export_plugin(const Ref<EditorExportPlugin> plugin) {
    rebel_icall_void_object(
        method_bindings.mb_remove_export_plugin,
        (const Object*)this,
        plugin.ptr()
    );
}

void EditorPlugin::remove_import_plugin(const Ref<EditorImportPlugin> importer) {
    rebel_icall_void_object(
        method_bindings.mb_remove_import_plugin,
        (const Object*)this,
        importer.ptr()
    );
}

void EditorPlugin::remove_inspector_plugin(const Ref<EditorInspectorPlugin> plugin) {
    rebel_icall_void_object(
        method_bindings.mb_remove_inspector_plugin,
        (const Object*)this,
        plugin.ptr()
    );
}

void EditorPlugin::remove_scene_import_plugin(const Ref<EditorSceneImporter> scene_importer) {
    rebel_icall_void_object(
        method_bindings.mb_remove_scene_import_plugin,
        (const Object*)this,
        scene_importer.ptr()
    );
}

void EditorPlugin::remove_spatial_gizmo_plugin(const Ref<EditorSpatialGizmoPlugin> plugin) {
    rebel_icall_void_object(
        method_bindings.mb_remove_spatial_gizmo_plugin,
        (const Object*)this,
        plugin.ptr()
    );
}

void EditorPlugin::remove_tool_menu_item(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_remove_tool_menu_item,
        (const Object*)this,
        name
    );
}

void EditorPlugin::save_external_data() {
    rebel_icall_void(
        method_bindings.mb_save_external_data,
        (const Object*)this
    );
}

void EditorPlugin::set_force_draw_over_forwarding_enabled() {
    rebel_icall_void(
        method_bindings.mb_set_force_draw_over_forwarding_enabled,
        (const Object*)this
    );
}

void EditorPlugin::set_input_event_forwarding_always_enabled() {
    rebel_icall_void(
        method_bindings.mb_set_input_event_forwarding_always_enabled,
        (const Object*)this
    );
}

void EditorPlugin::set_state(const Dictionary state) {
    rebel_icall_void_dictionary(
        method_bindings.mb_set_state,
        (const Object*)this,
        state
    );
}

void EditorPlugin::set_window_layout(const Ref<ConfigFile> layout) {
    rebel_icall_void_object(
        method_bindings.mb_set_window_layout,
        (const Object*)this,
        layout.ptr()
    );
}

int64_t EditorPlugin::update_overlays() const {
    return rebel_icall_int(
        method_bindings.mb_update_overlays,
        (const Object*)this
    );
}

void EditorPlugin::init_method_bindings() {
    method_bindings.mb_add_autoload_singleton =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "add_autoload_singleton"
        );
    method_bindings.mb_add_control_to_bottom_panel =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "add_control_to_bottom_panel"
        );
    method_bindings.mb_add_control_to_container =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "add_control_to_container"
        );
    method_bindings.mb_add_control_to_dock =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "add_control_to_dock"
        );
    method_bindings.mb_add_custom_type =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "add_custom_type"
        );
    method_bindings.mb_add_export_plugin =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "add_export_plugin"
        );
    method_bindings.mb_add_import_plugin =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "add_import_plugin"
        );
    method_bindings.mb_add_inspector_plugin =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "add_inspector_plugin"
        );
    method_bindings.mb_add_scene_import_plugin =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "add_scene_import_plugin"
        );
    method_bindings.mb_add_spatial_gizmo_plugin =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "add_spatial_gizmo_plugin"
        );
    method_bindings.mb_add_tool_menu_item =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "add_tool_menu_item"
        );
    method_bindings.mb_add_tool_submenu_item =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "add_tool_submenu_item"
        );
    method_bindings.mb_apply_changes =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "apply_changes"
        );
    method_bindings.mb_build =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "build"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "clear"
        );
    method_bindings.mb_disable_plugin =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "disable_plugin"
        );
    method_bindings.mb_edit =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "edit"
        );
    method_bindings.mb_enable_plugin =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "enable_plugin"
        );
    method_bindings.mb_forward_canvas_draw_over_viewport =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "forward_canvas_draw_over_viewport"
        );
    method_bindings.mb_forward_canvas_force_draw_over_viewport =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "forward_canvas_force_draw_over_viewport"
        );
    method_bindings.mb_forward_canvas_gui_input =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "forward_canvas_gui_input"
        );
    method_bindings.mb_forward_spatial_draw_over_viewport =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "forward_spatial_draw_over_viewport"
        );
    method_bindings.mb_forward_spatial_force_draw_over_viewport =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "forward_spatial_force_draw_over_viewport"
        );
    method_bindings.mb_forward_spatial_gui_input =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "forward_spatial_gui_input"
        );
    method_bindings.mb_get_breakpoints =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "get_breakpoints"
        );
    method_bindings.mb_get_editor_interface =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "get_editor_interface"
        );
    method_bindings.mb_get_plugin_icon =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "get_plugin_icon"
        );
    method_bindings.mb_get_plugin_name =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "get_plugin_name"
        );
    method_bindings.mb_get_script_create_dialog =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "get_script_create_dialog"
        );
    method_bindings.mb_get_state =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "get_state"
        );
    method_bindings.mb_get_undo_redo =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "get_undo_redo"
        );
    method_bindings.mb_get_window_layout =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "get_window_layout"
        );
    method_bindings.mb_handles =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "handles"
        );
    method_bindings.mb_has_main_screen =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "has_main_screen"
        );
    method_bindings.mb_hide_bottom_panel =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "hide_bottom_panel"
        );
    method_bindings.mb_make_bottom_panel_item_visible =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "make_bottom_panel_item_visible"
        );
    method_bindings.mb_make_visible =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "make_visible"
        );
    method_bindings.mb_queue_save_layout =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "queue_save_layout"
        );
    method_bindings.mb_remove_autoload_singleton =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "remove_autoload_singleton"
        );
    method_bindings.mb_remove_control_from_bottom_panel =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "remove_control_from_bottom_panel"
        );
    method_bindings.mb_remove_control_from_container =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "remove_control_from_container"
        );
    method_bindings.mb_remove_control_from_docks =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "remove_control_from_docks"
        );
    method_bindings.mb_remove_custom_type =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "remove_custom_type"
        );
    method_bindings.mb_remove_export_plugin =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "remove_export_plugin"
        );
    method_bindings.mb_remove_import_plugin =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "remove_import_plugin"
        );
    method_bindings.mb_remove_inspector_plugin =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "remove_inspector_plugin"
        );
    method_bindings.mb_remove_scene_import_plugin =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "remove_scene_import_plugin"
        );
    method_bindings.mb_remove_spatial_gizmo_plugin =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "remove_spatial_gizmo_plugin"
        );
    method_bindings.mb_remove_tool_menu_item =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "remove_tool_menu_item"
        );
    method_bindings.mb_save_external_data =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "save_external_data"
        );
    method_bindings.mb_set_force_draw_over_forwarding_enabled =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "set_force_draw_over_forwarding_enabled"
        );
    method_bindings.mb_set_input_event_forwarding_always_enabled =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "set_input_event_forwarding_always_enabled"
        );
    method_bindings.mb_set_state =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "set_state"
        );
    method_bindings.mb_set_window_layout =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "set_window_layout"
        );
    method_bindings.mb_update_overlays =
        api->rebel_method_bind_get_method(
            "EditorPlugin",
            "update_overlays"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorPlugin");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorPlugin::MethodBindings EditorPlugin::method_bindings = {};
void* EditorPlugin::class_tag = nullptr;
} // namespace Rebel
