// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORINTERFACE_H
#define REBEL_EDITORINTERFACE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Control;
class EditorFileSystem;
class EditorInspector;
class EditorResourcePreview;
class EditorSelection;
class EditorSettings;
class FileSystemDock;
class Object;
class Resource;
class Script;
class ScriptEditor;

class EditorInterface : public Node {
public:
    void edit_node(const Node* node);
    void edit_resource(const Ref<Resource> resource);
    void edit_script(const Ref<Script> script, const int64_t line = -1, const int64_t column = 0, const bool grab_focus = true);
    Control* get_base_control();
    String get_current_path() const;
    Node* get_edited_scene_root();
    real_t get_editor_scale() const;
    Ref<EditorSettings> get_editor_settings();
    Control* get_editor_viewport();
    FileSystemDock* get_file_system_dock();
    EditorInspector* get_inspector() const;
    Array get_open_scenes() const;
    String get_playing_scene() const;
    EditorFileSystem* get_resource_filesystem();
    EditorResourcePreview* get_resource_previewer();
    ScriptEditor* get_script_editor();
    String get_selected_path() const;
    EditorSelection* get_selection();
    void inspect_object(const Object* object, const String for_property = "", const bool inspector_only = false);
    bool is_distraction_free_mode_enabled() const;
    bool is_playing_scene() const;
    bool is_plugin_enabled(const String plugin) const;
    Array make_mesh_previews(const Array meshes, const int64_t preview_size);
    void open_scene_from_path(const String scene_filepath);
    void play_current_scene();
    void play_custom_scene(const String scene_filepath);
    void play_main_scene();
    void reload_scene_from_path(const String scene_filepath);
    Error save_scene();
    void save_scene_as(const String path, const bool with_preview = true);
    void select_file(const String file);
    void set_distraction_free_mode(const bool enter);
    void set_main_screen_editor(const String name);
    void set_plugin_enabled(const String plugin, const bool enabled);
    void stop_playing_scene();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorInterface";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorInterface";
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
        rebel_method_bind* mb_edit_node;
        rebel_method_bind* mb_edit_resource;
        rebel_method_bind* mb_edit_script;
        rebel_method_bind* mb_get_base_control;
        rebel_method_bind* mb_get_current_path;
        rebel_method_bind* mb_get_edited_scene_root;
        rebel_method_bind* mb_get_editor_scale;
        rebel_method_bind* mb_get_editor_settings;
        rebel_method_bind* mb_get_editor_viewport;
        rebel_method_bind* mb_get_file_system_dock;
        rebel_method_bind* mb_get_inspector;
        rebel_method_bind* mb_get_open_scenes;
        rebel_method_bind* mb_get_playing_scene;
        rebel_method_bind* mb_get_resource_filesystem;
        rebel_method_bind* mb_get_resource_previewer;
        rebel_method_bind* mb_get_script_editor;
        rebel_method_bind* mb_get_selected_path;
        rebel_method_bind* mb_get_selection;
        rebel_method_bind* mb_inspect_object;
        rebel_method_bind* mb_is_distraction_free_mode_enabled;
        rebel_method_bind* mb_is_playing_scene;
        rebel_method_bind* mb_is_plugin_enabled;
        rebel_method_bind* mb_make_mesh_previews;
        rebel_method_bind* mb_open_scene_from_path;
        rebel_method_bind* mb_play_current_scene;
        rebel_method_bind* mb_play_custom_scene;
        rebel_method_bind* mb_play_main_scene;
        rebel_method_bind* mb_reload_scene_from_path;
        rebel_method_bind* mb_save_scene;
        rebel_method_bind* mb_save_scene_as;
        rebel_method_bind* mb_select_file;
        rebel_method_bind* mb_set_distraction_free_mode;
        rebel_method_bind* mb_set_main_screen_editor;
        rebel_method_bind* mb_set_plugin_enabled;
        rebel_method_bind* mb_stop_playing_scene;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORINTERFACE_H
