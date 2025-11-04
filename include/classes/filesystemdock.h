// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_FILESYSTEMDOCK_H
#define REBEL_FILESYSTEMDOCK_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/vboxcontainer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Control;
class InputEvent;
class Object;
class Texture;

class FileSystemDock : public VBoxContainer {
public:
    void _bw_history();
    void _duplicate_operation_confirm();
    void _feature_profile_changed();
    void _file_list_activate_file(const int64_t arg0);
    void _file_list_gui_input(const Ref<InputEvent> arg0);
    void _file_list_rmb_option(const int64_t option);
    void _file_list_rmb_pressed(const Vector2 arg0);
    void _file_list_rmb_select(const int64_t arg0, const Vector2 arg1);
    void _file_list_thumbnail_done(const String arg0, const Ref<Texture> arg1, const Ref<Texture> arg2, const Variant arg3);
    void _file_multi_selected(const int64_t arg0, const bool arg1);
    void _file_removed(const String arg0);
    void _file_sort_popup(const int64_t arg0);
    void _folder_removed(const String arg0);
    void _fs_changed();
    void _fw_history();
    void _make_dir_confirm();
    void _make_scene_confirm();
    void _move_operation_confirm(const String to_path, const bool overwrite = false);
    void _move_with_overwrite();
    void _navigate_to_path(const String arg0, const bool arg1 = false);
    void _preview_invalidated(const String arg0);
    void _rename_operation_confirm();
    void _rescan();
    void _resource_created() const;
    void _search_changed(const String arg0, const Control* arg1);
    void _select_file(const String arg0, const bool arg1);
    void _toggle_file_display();
    void _toggle_split_mode(const bool arg0);
    void _tree_activate_file();
    void _tree_empty_selected();
    void _tree_gui_input(const Ref<InputEvent> arg0);
    void _tree_multi_selected(const Object* arg0, const int64_t arg1, const bool arg2);
    void _tree_rmb_empty(const Vector2 arg0);
    void _tree_rmb_option(const int64_t option);
    void _tree_rmb_select(const Vector2 arg0);
    void _tree_thumbnail_done(const String arg0, const Ref<Texture> arg1, const Ref<Texture> arg2, const Variant arg3);
    void _update_import_dock();
    void _update_tree(const PoolStringArray arg0, const bool arg1, const bool arg2, const bool arg3);
    bool can_drop_data_fw(const Vector2 point, const Variant data, const Control* from) const;
    void drop_data_fw(const Vector2 point, const Variant data, const Control* from);
    Variant get_drag_data_fw(const Vector2 point, const Control* from);
    void navigate_to_path(const String path);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "FileSystemDock";
    }

    inline static const char* get_rebel_class_name() {
        return "FileSystemDock";
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
        rebel_method_bind* mb__bw_history;
        rebel_method_bind* mb__duplicate_operation_confirm;
        rebel_method_bind* mb__feature_profile_changed;
        rebel_method_bind* mb__file_list_activate_file;
        rebel_method_bind* mb__file_list_gui_input;
        rebel_method_bind* mb__file_list_rmb_option;
        rebel_method_bind* mb__file_list_rmb_pressed;
        rebel_method_bind* mb__file_list_rmb_select;
        rebel_method_bind* mb__file_list_thumbnail_done;
        rebel_method_bind* mb__file_multi_selected;
        rebel_method_bind* mb__file_removed;
        rebel_method_bind* mb__file_sort_popup;
        rebel_method_bind* mb__folder_removed;
        rebel_method_bind* mb__fs_changed;
        rebel_method_bind* mb__fw_history;
        rebel_method_bind* mb__make_dir_confirm;
        rebel_method_bind* mb__make_scene_confirm;
        rebel_method_bind* mb__move_operation_confirm;
        rebel_method_bind* mb__move_with_overwrite;
        rebel_method_bind* mb__navigate_to_path;
        rebel_method_bind* mb__preview_invalidated;
        rebel_method_bind* mb__rename_operation_confirm;
        rebel_method_bind* mb__rescan;
        rebel_method_bind* mb__resource_created;
        rebel_method_bind* mb__search_changed;
        rebel_method_bind* mb__select_file;
        rebel_method_bind* mb__toggle_file_display;
        rebel_method_bind* mb__toggle_split_mode;
        rebel_method_bind* mb__tree_activate_file;
        rebel_method_bind* mb__tree_empty_selected;
        rebel_method_bind* mb__tree_gui_input;
        rebel_method_bind* mb__tree_multi_selected;
        rebel_method_bind* mb__tree_rmb_empty;
        rebel_method_bind* mb__tree_rmb_option;
        rebel_method_bind* mb__tree_rmb_select;
        rebel_method_bind* mb__tree_thumbnail_done;
        rebel_method_bind* mb__update_import_dock;
        rebel_method_bind* mb__update_tree;
        rebel_method_bind* mb_can_drop_data_fw;
        rebel_method_bind* mb_drop_data_fw;
        rebel_method_bind* mb_get_drag_data_fw;
        rebel_method_bind* mb_navigate_to_path;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_FILESYSTEMDOCK_H
