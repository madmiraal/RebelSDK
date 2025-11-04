// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/filesystemdock.h"

#include "classes/control.h"
#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/object.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void FileSystemDock::_bw_history() {
    rebel_icall_void(
        method_bindings.mb__bw_history,
        (const Object*)this
    );
}

void FileSystemDock::_duplicate_operation_confirm() {
    rebel_icall_void(
        method_bindings.mb__duplicate_operation_confirm,
        (const Object*)this
    );
}

void FileSystemDock::_feature_profile_changed() {
    rebel_icall_void(
        method_bindings.mb__feature_profile_changed,
        (const Object*)this
    );
}

void FileSystemDock::_file_list_activate_file(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__file_list_activate_file,
        (const Object*)this,
        arg0
    );
}

void FileSystemDock::_file_list_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__file_list_gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void FileSystemDock::_file_list_rmb_option(const int64_t option) {
    rebel_icall_void_int(
        method_bindings.mb__file_list_rmb_option,
        (const Object*)this,
        option
    );
}

void FileSystemDock::_file_list_rmb_pressed(const Vector2 arg0) {
    rebel_icall_void_vector2(
        method_bindings.mb__file_list_rmb_pressed,
        (const Object*)this,
        arg0
    );
}

void FileSystemDock::_file_list_rmb_select(const int64_t arg0, const Vector2 arg1) {
    rebel_icall_void_int_vector2(
        method_bindings.mb__file_list_rmb_select,
        (const Object*)this,
        arg0,
        arg1
    );
}

void FileSystemDock::_file_list_thumbnail_done(const String arg0, const Ref<Texture> arg1, const Ref<Texture> arg2, const Variant arg3) {
    rebel_icall_void_string_object_object_variant(
        method_bindings.mb__file_list_thumbnail_done,
        (const Object*)this,
        arg0,
        arg1.ptr(),
        arg2.ptr(),
        arg3
    );
}

void FileSystemDock::_file_multi_selected(const int64_t arg0, const bool arg1) {
    rebel_icall_void_int_bool(
        method_bindings.mb__file_multi_selected,
        (const Object*)this,
        arg0,
        arg1
    );
}

void FileSystemDock::_file_removed(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__file_removed,
        (const Object*)this,
        arg0
    );
}

void FileSystemDock::_file_sort_popup(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__file_sort_popup,
        (const Object*)this,
        arg0
    );
}

void FileSystemDock::_folder_removed(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__folder_removed,
        (const Object*)this,
        arg0
    );
}

void FileSystemDock::_fs_changed() {
    rebel_icall_void(
        method_bindings.mb__fs_changed,
        (const Object*)this
    );
}

void FileSystemDock::_fw_history() {
    rebel_icall_void(
        method_bindings.mb__fw_history,
        (const Object*)this
    );
}

void FileSystemDock::_make_dir_confirm() {
    rebel_icall_void(
        method_bindings.mb__make_dir_confirm,
        (const Object*)this
    );
}

void FileSystemDock::_make_scene_confirm() {
    rebel_icall_void(
        method_bindings.mb__make_scene_confirm,
        (const Object*)this
    );
}

void FileSystemDock::_move_operation_confirm(const String to_path, const bool overwrite) {
    rebel_icall_void_string_bool(
        method_bindings.mb__move_operation_confirm,
        (const Object*)this,
        to_path,
        overwrite
    );
}

void FileSystemDock::_move_with_overwrite() {
    rebel_icall_void(
        method_bindings.mb__move_with_overwrite,
        (const Object*)this
    );
}

void FileSystemDock::_navigate_to_path(const String arg0, const bool arg1) {
    rebel_icall_void_string_bool(
        method_bindings.mb__navigate_to_path,
        (const Object*)this,
        arg0,
        arg1
    );
}

void FileSystemDock::_preview_invalidated(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__preview_invalidated,
        (const Object*)this,
        arg0
    );
}

void FileSystemDock::_rename_operation_confirm() {
    rebel_icall_void(
        method_bindings.mb__rename_operation_confirm,
        (const Object*)this
    );
}

void FileSystemDock::_rescan() {
    rebel_icall_void(
        method_bindings.mb__rescan,
        (const Object*)this
    );
}

void FileSystemDock::_resource_created() const {
    rebel_icall_void(
        method_bindings.mb__resource_created,
        (const Object*)this
    );
}

void FileSystemDock::_search_changed(const String arg0, const Control* arg1) {
    rebel_icall_void_string_object(
        method_bindings.mb__search_changed,
        (const Object*)this,
        arg0,
        arg1
    );
}

void FileSystemDock::_select_file(const String arg0, const bool arg1) {
    rebel_icall_void_string_bool(
        method_bindings.mb__select_file,
        (const Object*)this,
        arg0,
        arg1
    );
}

void FileSystemDock::_toggle_file_display() {
    rebel_icall_void(
        method_bindings.mb__toggle_file_display,
        (const Object*)this
    );
}

void FileSystemDock::_toggle_split_mode(const bool arg0) {
    rebel_icall_void_bool(
        method_bindings.mb__toggle_split_mode,
        (const Object*)this,
        arg0
    );
}

void FileSystemDock::_tree_activate_file() {
    rebel_icall_void(
        method_bindings.mb__tree_activate_file,
        (const Object*)this
    );
}

void FileSystemDock::_tree_empty_selected() {
    rebel_icall_void(
        method_bindings.mb__tree_empty_selected,
        (const Object*)this
    );
}

void FileSystemDock::_tree_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__tree_gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void FileSystemDock::_tree_multi_selected(const Object* arg0, const int64_t arg1, const bool arg2) {
    rebel_icall_void_object_int_bool(
        method_bindings.mb__tree_multi_selected,
        (const Object*)this,
        arg0,
        arg1,
        arg2
    );
}

void FileSystemDock::_tree_rmb_empty(const Vector2 arg0) {
    rebel_icall_void_vector2(
        method_bindings.mb__tree_rmb_empty,
        (const Object*)this,
        arg0
    );
}

void FileSystemDock::_tree_rmb_option(const int64_t option) {
    rebel_icall_void_int(
        method_bindings.mb__tree_rmb_option,
        (const Object*)this,
        option
    );
}

void FileSystemDock::_tree_rmb_select(const Vector2 arg0) {
    rebel_icall_void_vector2(
        method_bindings.mb__tree_rmb_select,
        (const Object*)this,
        arg0
    );
}

void FileSystemDock::_tree_thumbnail_done(const String arg0, const Ref<Texture> arg1, const Ref<Texture> arg2, const Variant arg3) {
    rebel_icall_void_string_object_object_variant(
        method_bindings.mb__tree_thumbnail_done,
        (const Object*)this,
        arg0,
        arg1.ptr(),
        arg2.ptr(),
        arg3
    );
}

void FileSystemDock::_update_import_dock() {
    rebel_icall_void(
        method_bindings.mb__update_import_dock,
        (const Object*)this
    );
}

void FileSystemDock::_update_tree(const PoolStringArray arg0, const bool arg1, const bool arg2, const bool arg3) {
    rebel_icall_void_poolstringarray_bool_bool_bool(
        method_bindings.mb__update_tree,
        (const Object*)this,
        arg0,
        arg1,
        arg2,
        arg3
    );
}

bool FileSystemDock::can_drop_data_fw(const Vector2 point, const Variant data, const Control* from) const {
    return rebel_icall_bool_vector2_variant_object(
        method_bindings.mb_can_drop_data_fw,
        (const Object*)this,
        point,
        data,
        from
    );
}

void FileSystemDock::drop_data_fw(const Vector2 point, const Variant data, const Control* from) {
    rebel_icall_void_vector2_variant_object(
        method_bindings.mb_drop_data_fw,
        (const Object*)this,
        point,
        data,
        from
    );
}

Variant FileSystemDock::get_drag_data_fw(const Vector2 point, const Control* from) {
    return rebel_icall_variant_vector2_object(
        method_bindings.mb_get_drag_data_fw,
        (const Object*)this,
        point,
        from
    );
}

void FileSystemDock::navigate_to_path(const String path) {
    rebel_icall_void_string(
        method_bindings.mb_navigate_to_path,
        (const Object*)this,
        path
    );
}

void FileSystemDock::init_method_bindings() {
    method_bindings.mb__bw_history =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_bw_history"
        );
    method_bindings.mb__duplicate_operation_confirm =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_duplicate_operation_confirm"
        );
    method_bindings.mb__feature_profile_changed =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_feature_profile_changed"
        );
    method_bindings.mb__file_list_activate_file =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_file_list_activate_file"
        );
    method_bindings.mb__file_list_gui_input =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_file_list_gui_input"
        );
    method_bindings.mb__file_list_rmb_option =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_file_list_rmb_option"
        );
    method_bindings.mb__file_list_rmb_pressed =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_file_list_rmb_pressed"
        );
    method_bindings.mb__file_list_rmb_select =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_file_list_rmb_select"
        );
    method_bindings.mb__file_list_thumbnail_done =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_file_list_thumbnail_done"
        );
    method_bindings.mb__file_multi_selected =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_file_multi_selected"
        );
    method_bindings.mb__file_removed =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_file_removed"
        );
    method_bindings.mb__file_sort_popup =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_file_sort_popup"
        );
    method_bindings.mb__folder_removed =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_folder_removed"
        );
    method_bindings.mb__fs_changed =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_fs_changed"
        );
    method_bindings.mb__fw_history =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_fw_history"
        );
    method_bindings.mb__make_dir_confirm =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_make_dir_confirm"
        );
    method_bindings.mb__make_scene_confirm =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_make_scene_confirm"
        );
    method_bindings.mb__move_operation_confirm =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_move_operation_confirm"
        );
    method_bindings.mb__move_with_overwrite =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_move_with_overwrite"
        );
    method_bindings.mb__navigate_to_path =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_navigate_to_path"
        );
    method_bindings.mb__preview_invalidated =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_preview_invalidated"
        );
    method_bindings.mb__rename_operation_confirm =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_rename_operation_confirm"
        );
    method_bindings.mb__rescan =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_rescan"
        );
    method_bindings.mb__resource_created =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_resource_created"
        );
    method_bindings.mb__search_changed =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_search_changed"
        );
    method_bindings.mb__select_file =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_select_file"
        );
    method_bindings.mb__toggle_file_display =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_toggle_file_display"
        );
    method_bindings.mb__toggle_split_mode =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_toggle_split_mode"
        );
    method_bindings.mb__tree_activate_file =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_tree_activate_file"
        );
    method_bindings.mb__tree_empty_selected =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_tree_empty_selected"
        );
    method_bindings.mb__tree_gui_input =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_tree_gui_input"
        );
    method_bindings.mb__tree_multi_selected =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_tree_multi_selected"
        );
    method_bindings.mb__tree_rmb_empty =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_tree_rmb_empty"
        );
    method_bindings.mb__tree_rmb_option =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_tree_rmb_option"
        );
    method_bindings.mb__tree_rmb_select =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_tree_rmb_select"
        );
    method_bindings.mb__tree_thumbnail_done =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_tree_thumbnail_done"
        );
    method_bindings.mb__update_import_dock =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_update_import_dock"
        );
    method_bindings.mb__update_tree =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "_update_tree"
        );
    method_bindings.mb_can_drop_data_fw =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "can_drop_data_fw"
        );
    method_bindings.mb_drop_data_fw =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "drop_data_fw"
        );
    method_bindings.mb_get_drag_data_fw =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "get_drag_data_fw"
        );
    method_bindings.mb_navigate_to_path =
        api->rebel_method_bind_get_method(
            "FileSystemDock",
            "navigate_to_path"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "FileSystemDock");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

FileSystemDock::MethodBindings FileSystemDock::method_bindings = {};
void* FileSystemDock::class_tag = nullptr;
} // namespace Rebel
