// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/filedialog.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/lineedit.h"
#include "classes/object.h"
#include "classes/vboxcontainer.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void FileDialog::_action_pressed() {
    rebel_icall_void(
        method_bindings.mb__action_pressed,
        (const Object*)this
    );
}

void FileDialog::_cancel_pressed() {
    rebel_icall_void(
        method_bindings.mb__cancel_pressed,
        (const Object*)this
    );
}

void FileDialog::_dir_entered(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__dir_entered,
        (const Object*)this,
        arg0
    );
}

void FileDialog::_file_entered(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__file_entered,
        (const Object*)this,
        arg0
    );
}

void FileDialog::_filter_selected(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__filter_selected,
        (const Object*)this,
        arg0
    );
}

void FileDialog::_go_up() {
    rebel_icall_void(
        method_bindings.mb__go_up,
        (const Object*)this
    );
}

void FileDialog::_make_dir() {
    rebel_icall_void(
        method_bindings.mb__make_dir,
        (const Object*)this
    );
}

void FileDialog::_make_dir_confirm() {
    rebel_icall_void(
        method_bindings.mb__make_dir_confirm,
        (const Object*)this
    );
}

void FileDialog::_save_confirm_pressed() {
    rebel_icall_void(
        method_bindings.mb__save_confirm_pressed,
        (const Object*)this
    );
}

void FileDialog::_select_drive(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__select_drive,
        (const Object*)this,
        arg0
    );
}

void FileDialog::_tree_item_activated() {
    rebel_icall_void(
        method_bindings.mb__tree_item_activated,
        (const Object*)this
    );
}

void FileDialog::_tree_multi_selected(const Object* arg0, const int64_t arg1, const bool arg2) {
    rebel_icall_void_object_int_bool(
        method_bindings.mb__tree_multi_selected,
        (const Object*)this,
        arg0,
        arg1,
        arg2
    );
}

void FileDialog::_tree_selected() {
    rebel_icall_void(
        method_bindings.mb__tree_selected,
        (const Object*)this
    );
}

void FileDialog::_unhandled_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__unhandled_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void FileDialog::_update_dir() {
    rebel_icall_void(
        method_bindings.mb__update_dir,
        (const Object*)this
    );
}

void FileDialog::_update_file_list() {
    rebel_icall_void(
        method_bindings.mb__update_file_list,
        (const Object*)this
    );
}

void FileDialog::_update_file_name() {
    rebel_icall_void(
        method_bindings.mb__update_file_name,
        (const Object*)this
    );
}

void FileDialog::add_filter(const String filter) {
    rebel_icall_void_string(
        method_bindings.mb_add_filter,
        (const Object*)this,
        filter
    );
}

void FileDialog::clear_filters() {
    rebel_icall_void(
        method_bindings.mb_clear_filters,
        (const Object*)this
    );
}

void FileDialog::deselect_items() {
    rebel_icall_void(
        method_bindings.mb_deselect_items,
        (const Object*)this
    );
}

FileDialog::Access FileDialog::get_access() const {
    return (FileDialog::Access)rebel_icall_int(
        method_bindings.mb_get_access,
        (const Object*)this
    );
}

String FileDialog::get_current_dir() const {
    return rebel_icall_string(
        method_bindings.mb_get_current_dir,
        (const Object*)this
    );
}

String FileDialog::get_current_file() const {
    return rebel_icall_string(
        method_bindings.mb_get_current_file,
        (const Object*)this
    );
}

String FileDialog::get_current_path() const {
    return rebel_icall_string(
        method_bindings.mb_get_current_path,
        (const Object*)this
    );
}

PoolStringArray FileDialog::get_filters() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_filters,
        (const Object*)this
    );
}

LineEdit* FileDialog::get_line_edit() {
    return (LineEdit*)rebel_icall_object(
        method_bindings.mb_get_line_edit,
        (const Object*)this
    );
}

FileDialog::Mode FileDialog::get_mode() const {
    return (FileDialog::Mode)rebel_icall_int(
        method_bindings.mb_get_mode,
        (const Object*)this
    );
}

VBoxContainer* FileDialog::get_vbox() {
    return (VBoxContainer*)rebel_icall_object(
        method_bindings.mb_get_vbox,
        (const Object*)this
    );
}

void FileDialog::invalidate() {
    rebel_icall_void(
        method_bindings.mb_invalidate,
        (const Object*)this
    );
}

bool FileDialog::is_mode_overriding_title() const {
    return rebel_icall_bool(
        method_bindings.mb_is_mode_overriding_title,
        (const Object*)this
    );
}

bool FileDialog::is_showing_hidden_files() const {
    return rebel_icall_bool(
        method_bindings.mb_is_showing_hidden_files,
        (const Object*)this
    );
}

void FileDialog::set_access(const int64_t access) {
    rebel_icall_void_int(
        method_bindings.mb_set_access,
        (const Object*)this,
        access
    );
}

void FileDialog::set_current_dir(const String dir) {
    rebel_icall_void_string(
        method_bindings.mb_set_current_dir,
        (const Object*)this,
        dir
    );
}

void FileDialog::set_current_file(const String file) {
    rebel_icall_void_string(
        method_bindings.mb_set_current_file,
        (const Object*)this,
        file
    );
}

void FileDialog::set_current_path(const String path) {
    rebel_icall_void_string(
        method_bindings.mb_set_current_path,
        (const Object*)this,
        path
    );
}

void FileDialog::set_filters(const PoolStringArray filters) {
    rebel_icall_void_poolstringarray(
        method_bindings.mb_set_filters,
        (const Object*)this,
        filters
    );
}

void FileDialog::set_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_mode,
        (const Object*)this,
        mode
    );
}

void FileDialog::set_mode_overrides_title(const bool override) {
    rebel_icall_void_bool(
        method_bindings.mb_set_mode_overrides_title,
        (const Object*)this,
        override
    );
}

void FileDialog::set_show_hidden_files(const bool show) {
    rebel_icall_void_bool(
        method_bindings.mb_set_show_hidden_files,
        (const Object*)this,
        show
    );
}

FileDialog* FileDialog::create() {
    return (FileDialog*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"FileDialog")()
         );
}

void FileDialog::init_method_bindings() {
    method_bindings.mb__action_pressed =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "_action_pressed"
        );
    method_bindings.mb__cancel_pressed =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "_cancel_pressed"
        );
    method_bindings.mb__dir_entered =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "_dir_entered"
        );
    method_bindings.mb__file_entered =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "_file_entered"
        );
    method_bindings.mb__filter_selected =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "_filter_selected"
        );
    method_bindings.mb__go_up =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "_go_up"
        );
    method_bindings.mb__make_dir =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "_make_dir"
        );
    method_bindings.mb__make_dir_confirm =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "_make_dir_confirm"
        );
    method_bindings.mb__save_confirm_pressed =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "_save_confirm_pressed"
        );
    method_bindings.mb__select_drive =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "_select_drive"
        );
    method_bindings.mb__tree_item_activated =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "_tree_item_activated"
        );
    method_bindings.mb__tree_multi_selected =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "_tree_multi_selected"
        );
    method_bindings.mb__tree_selected =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "_tree_selected"
        );
    method_bindings.mb__unhandled_input =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "_unhandled_input"
        );
    method_bindings.mb__update_dir =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "_update_dir"
        );
    method_bindings.mb__update_file_list =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "_update_file_list"
        );
    method_bindings.mb__update_file_name =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "_update_file_name"
        );
    method_bindings.mb_add_filter =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "add_filter"
        );
    method_bindings.mb_clear_filters =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "clear_filters"
        );
    method_bindings.mb_deselect_items =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "deselect_items"
        );
    method_bindings.mb_get_access =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "get_access"
        );
    method_bindings.mb_get_current_dir =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "get_current_dir"
        );
    method_bindings.mb_get_current_file =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "get_current_file"
        );
    method_bindings.mb_get_current_path =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "get_current_path"
        );
    method_bindings.mb_get_filters =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "get_filters"
        );
    method_bindings.mb_get_line_edit =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "get_line_edit"
        );
    method_bindings.mb_get_mode =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "get_mode"
        );
    method_bindings.mb_get_vbox =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "get_vbox"
        );
    method_bindings.mb_invalidate =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "invalidate"
        );
    method_bindings.mb_is_mode_overriding_title =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "is_mode_overriding_title"
        );
    method_bindings.mb_is_showing_hidden_files =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "is_showing_hidden_files"
        );
    method_bindings.mb_set_access =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "set_access"
        );
    method_bindings.mb_set_current_dir =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "set_current_dir"
        );
    method_bindings.mb_set_current_file =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "set_current_file"
        );
    method_bindings.mb_set_current_path =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "set_current_path"
        );
    method_bindings.mb_set_filters =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "set_filters"
        );
    method_bindings.mb_set_mode =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "set_mode"
        );
    method_bindings.mb_set_mode_overrides_title =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "set_mode_overrides_title"
        );
    method_bindings.mb_set_show_hidden_files =
        api->rebel_method_bind_get_method(
            "FileDialog",
            "set_show_hidden_files"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "FileDialog");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

FileDialog::MethodBindings FileDialog::method_bindings = {};
void* FileDialog::class_tag = nullptr;
} // namespace Rebel
