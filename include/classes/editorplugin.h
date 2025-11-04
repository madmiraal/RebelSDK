// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORPLUGIN_H
#define REBEL_EDITORPLUGIN_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Camera;
class ConfigFile;
class Control;
class EditorExportPlugin;
class EditorImportPlugin;
class EditorInspectorPlugin;
class EditorInterface;
class EditorSceneImporter;
class EditorSpatialGizmoPlugin;
class InputEvent;
class Object;
class Script;
class ScriptCreateDialog;
class Texture;
class ToolButton;
class UndoRedo;

class EditorPlugin : public Node {
public:
    enum DockSlot {
        DOCK_SLOT_LEFT_UL = 0,
        DOCK_SLOT_LEFT_BL = 1,
        DOCK_SLOT_LEFT_UR = 2,
        DOCK_SLOT_LEFT_BR = 3,
        DOCK_SLOT_RIGHT_UL = 4,
        DOCK_SLOT_RIGHT_BL = 5,
        DOCK_SLOT_RIGHT_UR = 6,
        DOCK_SLOT_RIGHT_BR = 7,
        DOCK_SLOT_MAX = 8,
    };

    enum CustomControlContainer {
        CONTAINER_TOOLBAR = 0,
        CONTAINER_SPATIAL_EDITOR_MENU = 1,
        CONTAINER_SPATIAL_EDITOR_SIDE_LEFT = 2,
        CONTAINER_SPATIAL_EDITOR_SIDE_RIGHT = 3,
        CONTAINER_SPATIAL_EDITOR_BOTTOM = 4,
        CONTAINER_CANVAS_EDITOR_MENU = 5,
        CONTAINER_CANVAS_EDITOR_SIDE_LEFT = 6,
        CONTAINER_CANVAS_EDITOR_SIDE_RIGHT = 7,
        CONTAINER_CANVAS_EDITOR_BOTTOM = 8,
        CONTAINER_PROPERTY_EDITOR_BOTTOM = 9,
        CONTAINER_PROJECT_SETTING_TAB_LEFT = 10,
        CONTAINER_PROJECT_SETTING_TAB_RIGHT = 11,
    };

    void add_autoload_singleton(const String name, const String path);
    ToolButton* add_control_to_bottom_panel(const Control* control, const String title);
    void add_control_to_container(const int64_t container, const Control* control);
    void add_control_to_dock(const int64_t slot, const Control* control);
    void add_custom_type(const String type, const String base, const Ref<Script> script, const Ref<Texture> icon);
    void add_export_plugin(const Ref<EditorExportPlugin> plugin);
    void add_import_plugin(const Ref<EditorImportPlugin> importer);
    void add_inspector_plugin(const Ref<EditorInspectorPlugin> plugin);
    void add_scene_import_plugin(const Ref<EditorSceneImporter> scene_importer);
    void add_spatial_gizmo_plugin(const Ref<EditorSpatialGizmoPlugin> plugin);
    void add_tool_menu_item(const String name, const Object* handler, const String callback, const Variant ud = Variant());
    void add_tool_submenu_item(const String name, const Object* submenu);
    void apply_changes();
    bool build();
    void clear();
    void disable_plugin();
    void edit(const Object* object);
    void enable_plugin();
    void forward_canvas_draw_over_viewport(const Control* overlay);
    void forward_canvas_force_draw_over_viewport(const Control* overlay);
    bool forward_canvas_gui_input(const Ref<InputEvent> event);
    void forward_spatial_draw_over_viewport(const Control* overlay);
    void forward_spatial_force_draw_over_viewport(const Control* overlay);
    bool forward_spatial_gui_input(const Camera* camera, const Ref<InputEvent> event);
    PoolStringArray get_breakpoints();
    EditorInterface* get_editor_interface();
    Ref<Texture> get_plugin_icon();
    String get_plugin_name();
    ScriptCreateDialog* get_script_create_dialog();
    Dictionary get_state();
    UndoRedo* get_undo_redo();
    void get_window_layout(const Ref<ConfigFile> layout);
    bool handles(const Object* object);
    bool has_main_screen();
    void hide_bottom_panel();
    void make_bottom_panel_item_visible(const Control* item);
    void make_visible(const bool visible);
    void queue_save_layout() const;
    void remove_autoload_singleton(const String name);
    void remove_control_from_bottom_panel(const Control* control);
    void remove_control_from_container(const int64_t container, const Control* control);
    void remove_control_from_docks(const Control* control);
    void remove_custom_type(const String type);
    void remove_export_plugin(const Ref<EditorExportPlugin> plugin);
    void remove_import_plugin(const Ref<EditorImportPlugin> importer);
    void remove_inspector_plugin(const Ref<EditorInspectorPlugin> plugin);
    void remove_scene_import_plugin(const Ref<EditorSceneImporter> scene_importer);
    void remove_spatial_gizmo_plugin(const Ref<EditorSpatialGizmoPlugin> plugin);
    void remove_tool_menu_item(const String name);
    void save_external_data();
    void set_force_draw_over_forwarding_enabled();
    void set_input_event_forwarding_always_enabled();
    void set_state(const Dictionary state);
    void set_window_layout(const Ref<ConfigFile> layout);
    int64_t update_overlays() const;

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorPlugin";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorPlugin";
    }

    inline static Object* from_variant(Variant variant) {
        rebel_object* object = (rebel_object*)variant;
        if (!object) {
            return nullptr;
        }
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                object
            );
    }

private:
    struct MethodBindings {
        rebel_method_bind* mb_add_autoload_singleton;
        rebel_method_bind* mb_add_control_to_bottom_panel;
        rebel_method_bind* mb_add_control_to_container;
        rebel_method_bind* mb_add_control_to_dock;
        rebel_method_bind* mb_add_custom_type;
        rebel_method_bind* mb_add_export_plugin;
        rebel_method_bind* mb_add_import_plugin;
        rebel_method_bind* mb_add_inspector_plugin;
        rebel_method_bind* mb_add_scene_import_plugin;
        rebel_method_bind* mb_add_spatial_gizmo_plugin;
        rebel_method_bind* mb_add_tool_menu_item;
        rebel_method_bind* mb_add_tool_submenu_item;
        rebel_method_bind* mb_apply_changes;
        rebel_method_bind* mb_build;
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_disable_plugin;
        rebel_method_bind* mb_edit;
        rebel_method_bind* mb_enable_plugin;
        rebel_method_bind* mb_forward_canvas_draw_over_viewport;
        rebel_method_bind* mb_forward_canvas_force_draw_over_viewport;
        rebel_method_bind* mb_forward_canvas_gui_input;
        rebel_method_bind* mb_forward_spatial_draw_over_viewport;
        rebel_method_bind* mb_forward_spatial_force_draw_over_viewport;
        rebel_method_bind* mb_forward_spatial_gui_input;
        rebel_method_bind* mb_get_breakpoints;
        rebel_method_bind* mb_get_editor_interface;
        rebel_method_bind* mb_get_plugin_icon;
        rebel_method_bind* mb_get_plugin_name;
        rebel_method_bind* mb_get_script_create_dialog;
        rebel_method_bind* mb_get_state;
        rebel_method_bind* mb_get_undo_redo;
        rebel_method_bind* mb_get_window_layout;
        rebel_method_bind* mb_handles;
        rebel_method_bind* mb_has_main_screen;
        rebel_method_bind* mb_hide_bottom_panel;
        rebel_method_bind* mb_make_bottom_panel_item_visible;
        rebel_method_bind* mb_make_visible;
        rebel_method_bind* mb_queue_save_layout;
        rebel_method_bind* mb_remove_autoload_singleton;
        rebel_method_bind* mb_remove_control_from_bottom_panel;
        rebel_method_bind* mb_remove_control_from_container;
        rebel_method_bind* mb_remove_control_from_docks;
        rebel_method_bind* mb_remove_custom_type;
        rebel_method_bind* mb_remove_export_plugin;
        rebel_method_bind* mb_remove_import_plugin;
        rebel_method_bind* mb_remove_inspector_plugin;
        rebel_method_bind* mb_remove_scene_import_plugin;
        rebel_method_bind* mb_remove_spatial_gizmo_plugin;
        rebel_method_bind* mb_remove_tool_menu_item;
        rebel_method_bind* mb_save_external_data;
        rebel_method_bind* mb_set_force_draw_over_forwarding_enabled;
        rebel_method_bind* mb_set_input_event_forwarding_always_enabled;
        rebel_method_bind* mb_set_state;
        rebel_method_bind* mb_set_window_layout;
        rebel_method_bind* mb_update_overlays;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORPLUGIN_H
