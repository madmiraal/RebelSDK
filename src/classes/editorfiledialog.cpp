// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorfiledialog.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/texture.h"
#include "classes/vboxcontainer.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void EditorFileDialog::_action_pressed() {
    rebel_icall_void(
        method_bindings.mb__action_pressed,
        (const Object*)this
    );
}

void EditorFileDialog::_cancel_pressed() {
    rebel_icall_void(
        method_bindings.mb__cancel_pressed,
        (const Object*)this
    );
}

void EditorFileDialog::_dir_entered(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__dir_entered,
        (const Object*)this,
        arg0
    );
}

void EditorFileDialog::_favorite_move_down() {
    rebel_icall_void(
        method_bindings.mb__favorite_move_down,
        (const Object*)this
    );
}

void EditorFileDialog::_favorite_move_up() {
    rebel_icall_void(
        method_bindings.mb__favorite_move_up,
        (const Object*)this
    );
}

void EditorFileDialog::_favorite_pressed() {
    rebel_icall_void(
        method_bindings.mb__favorite_pressed,
        (const Object*)this
    );
}

void EditorFileDialog::_favorite_selected(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__favorite_selected,
        (const Object*)this,
        arg0
    );
}

void EditorFileDialog::_file_entered(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__file_entered,
        (const Object*)this,
        arg0
    );
}

void EditorFileDialog::_filter_selected(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__filter_selected,
        (const Object*)this,
        arg0
    );
}

void EditorFileDialog::_go_back() {
    rebel_icall_void(
        method_bindings.mb__go_back,
        (const Object*)this
    );
}

void EditorFileDialog::_go_forward() {
    rebel_icall_void(
        method_bindings.mb__go_forward,
        (const Object*)this
    );
}

void EditorFileDialog::_go_up() {
    rebel_icall_void(
        method_bindings.mb__go_up,
        (const Object*)this
    );
}

void EditorFileDialog::_item_db_selected(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__item_db_selected,
        (const Object*)this,
        arg0
    );
}

void EditorFileDialog::_item_list_item_rmb_selected(const int64_t arg0, const Vector2 arg1) {
    rebel_icall_void_int_vector2(
        method_bindings.mb__item_list_item_rmb_selected,
        (const Object*)this,
        arg0,
        arg1
    );
}

void EditorFileDialog::_item_list_rmb_clicked(const Vector2 arg0) {
    rebel_icall_void_vector2(
        method_bindings.mb__item_list_rmb_clicked,
        (const Object*)this,
        arg0
    );
}

void EditorFileDialog::_item_menu_id_pressed(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__item_menu_id_pressed,
        (const Object*)this,
        arg0
    );
}

void EditorFileDialog::_item_selected(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__item_selected,
        (const Object*)this,
        arg0
    );
}

void EditorFileDialog::_items_clear_selection() {
    rebel_icall_void(
        method_bindings.mb__items_clear_selection,
        (const Object*)this
    );
}

void EditorFileDialog::_make_dir() {
    rebel_icall_void(
        method_bindings.mb__make_dir,
        (const Object*)this
    );
}

void EditorFileDialog::_make_dir_confirm() {
    rebel_icall_void(
        method_bindings.mb__make_dir_confirm,
        (const Object*)this
    );
}

void EditorFileDialog::_multi_selected(const int64_t arg0, const bool arg1) {
    rebel_icall_void_int_bool(
        method_bindings.mb__multi_selected,
        (const Object*)this,
        arg0,
        arg1
    );
}

void EditorFileDialog::_recent_selected(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__recent_selected,
        (const Object*)this,
        arg0
    );
}

void EditorFileDialog::_save_confirm_pressed() {
    rebel_icall_void(
        method_bindings.mb__save_confirm_pressed,
        (const Object*)this
    );
}

void EditorFileDialog::_select_drive(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__select_drive,
        (const Object*)this,
        arg0
    );
}

void EditorFileDialog::_thumbnail_done(const String arg0, const Ref<Texture> arg1, const Ref<Texture> arg2, const Variant arg3) {
    rebel_icall_void_string_object_object_variant(
        method_bindings.mb__thumbnail_done,
        (const Object*)this,
        arg0,
        arg1.ptr(),
        arg2.ptr(),
        arg3
    );
}

void EditorFileDialog::_thumbnail_result(const String arg0, const Ref<Texture> arg1, const Ref<Texture> arg2, const Variant arg3) {
    rebel_icall_void_string_object_object_variant(
        method_bindings.mb__thumbnail_result,
        (const Object*)this,
        arg0,
        arg1.ptr(),
        arg2.ptr(),
        arg3
    );
}

void EditorFileDialog::_unhandled_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__unhandled_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void EditorFileDialog::_update_dir() {
    rebel_icall_void(
        method_bindings.mb__update_dir,
        (const Object*)this
    );
}

void EditorFileDialog::_update_file_list() {
    rebel_icall_void(
        method_bindings.mb__update_file_list,
        (const Object*)this
    );
}

void EditorFileDialog::_update_file_name() {
    rebel_icall_void(
        method_bindings.mb__update_file_name,
        (const Object*)this
    );
}

void EditorFileDialog::add_filter(const String filter) {
    rebel_icall_void_string(
        method_bindings.mb_add_filter,
        (const Object*)this,
        filter
    );
}

void EditorFileDialog::clear_filters() {
    rebel_icall_void(
        method_bindings.mb_clear_filters,
        (const Object*)this
    );
}

EditorFileDialog::Access EditorFileDialog::get_access() const {
    return (EditorFileDialog::Access)rebel_icall_int(
        method_bindings.mb_get_access,
        (const Object*)this
    );
}

String EditorFileDialog::get_current_dir() const {
    return rebel_icall_string(
        method_bindings.mb_get_current_dir,
        (const Object*)this
    );
}

String EditorFileDialog::get_current_file() const {
    return rebel_icall_string(
        method_bindings.mb_get_current_file,
        (const Object*)this
    );
}

String EditorFileDialog::get_current_path() const {
    return rebel_icall_string(
        method_bindings.mb_get_current_path,
        (const Object*)this
    );
}

EditorFileDialog::DisplayMode EditorFileDialog::get_display_mode() const {
    return (EditorFileDialog::DisplayMode)rebel_icall_int(
        method_bindings.mb_get_display_mode,
        (const Object*)this
    );
}

EditorFileDialog::Mode EditorFileDialog::get_mode() const {
    return (EditorFileDialog::Mode)rebel_icall_int(
        method_bindings.mb_get_mode,
        (const Object*)this
    );
}

VBoxContainer* EditorFileDialog::get_vbox() {
    return (VBoxContainer*)rebel_icall_object(
        method_bindings.mb_get_vbox,
        (const Object*)this
    );
}

void EditorFileDialog::invalidate() {
    rebel_icall_void(
        method_bindings.mb_invalidate,
        (const Object*)this
    );
}

bool EditorFileDialog::is_overwrite_warning_disabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_overwrite_warning_disabled,
        (const Object*)this
    );
}

bool EditorFileDialog::is_showing_hidden_files() const {
    return rebel_icall_bool(
        method_bindings.mb_is_showing_hidden_files,
        (const Object*)this
    );
}

void EditorFileDialog::set_access(const int64_t access) {
    rebel_icall_void_int(
        method_bindings.mb_set_access,
        (const Object*)this,
        access
    );
}

void EditorFileDialog::set_current_dir(const String dir) {
    rebel_icall_void_string(
        method_bindings.mb_set_current_dir,
        (const Object*)this,
        dir
    );
}

void EditorFileDialog::set_current_file(const String file) {
    rebel_icall_void_string(
        method_bindings.mb_set_current_file,
        (const Object*)this,
        file
    );
}

void EditorFileDialog::set_current_path(const String path) {
    rebel_icall_void_string(
        method_bindings.mb_set_current_path,
        (const Object*)this,
        path
    );
}

void EditorFileDialog::set_disable_overwrite_warning(const bool disable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_disable_overwrite_warning,
        (const Object*)this,
        disable
    );
}

void EditorFileDialog::set_display_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_display_mode,
        (const Object*)this,
        mode
    );
}

void EditorFileDialog::set_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_mode,
        (const Object*)this,
        mode
    );
}

void EditorFileDialog::set_show_hidden_files(const bool show) {
    rebel_icall_void_bool(
        method_bindings.mb_set_show_hidden_files,
        (const Object*)this,
        show
    );
}

void EditorFileDialog::init_method_bindings() {
    method_bindings.mb__action_pressed =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_action_pressed"
        );
    method_bindings.mb__cancel_pressed =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_cancel_pressed"
        );
    method_bindings.mb__dir_entered =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_dir_entered"
        );
    method_bindings.mb__favorite_move_down =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_favorite_move_down"
        );
    method_bindings.mb__favorite_move_up =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_favorite_move_up"
        );
    method_bindings.mb__favorite_pressed =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_favorite_pressed"
        );
    method_bindings.mb__favorite_selected =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_favorite_selected"
        );
    method_bindings.mb__file_entered =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_file_entered"
        );
    method_bindings.mb__filter_selected =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_filter_selected"
        );
    method_bindings.mb__go_back =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_go_back"
        );
    method_bindings.mb__go_forward =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_go_forward"
        );
    method_bindings.mb__go_up =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_go_up"
        );
    method_bindings.mb__item_db_selected =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_item_db_selected"
        );
    method_bindings.mb__item_list_item_rmb_selected =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_item_list_item_rmb_selected"
        );
    method_bindings.mb__item_list_rmb_clicked =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_item_list_rmb_clicked"
        );
    method_bindings.mb__item_menu_id_pressed =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_item_menu_id_pressed"
        );
    method_bindings.mb__item_selected =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_item_selected"
        );
    method_bindings.mb__items_clear_selection =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_items_clear_selection"
        );
    method_bindings.mb__make_dir =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_make_dir"
        );
    method_bindings.mb__make_dir_confirm =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_make_dir_confirm"
        );
    method_bindings.mb__multi_selected =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_multi_selected"
        );
    method_bindings.mb__recent_selected =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_recent_selected"
        );
    method_bindings.mb__save_confirm_pressed =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_save_confirm_pressed"
        );
    method_bindings.mb__select_drive =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_select_drive"
        );
    method_bindings.mb__thumbnail_done =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_thumbnail_done"
        );
    method_bindings.mb__thumbnail_result =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_thumbnail_result"
        );
    method_bindings.mb__unhandled_input =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_unhandled_input"
        );
    method_bindings.mb__update_dir =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_update_dir"
        );
    method_bindings.mb__update_file_list =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_update_file_list"
        );
    method_bindings.mb__update_file_name =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "_update_file_name"
        );
    method_bindings.mb_add_filter =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "add_filter"
        );
    method_bindings.mb_clear_filters =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "clear_filters"
        );
    method_bindings.mb_get_access =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "get_access"
        );
    method_bindings.mb_get_current_dir =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "get_current_dir"
        );
    method_bindings.mb_get_current_file =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "get_current_file"
        );
    method_bindings.mb_get_current_path =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "get_current_path"
        );
    method_bindings.mb_get_display_mode =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "get_display_mode"
        );
    method_bindings.mb_get_mode =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "get_mode"
        );
    method_bindings.mb_get_vbox =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "get_vbox"
        );
    method_bindings.mb_invalidate =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "invalidate"
        );
    method_bindings.mb_is_overwrite_warning_disabled =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "is_overwrite_warning_disabled"
        );
    method_bindings.mb_is_showing_hidden_files =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "is_showing_hidden_files"
        );
    method_bindings.mb_set_access =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "set_access"
        );
    method_bindings.mb_set_current_dir =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "set_current_dir"
        );
    method_bindings.mb_set_current_file =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "set_current_file"
        );
    method_bindings.mb_set_current_path =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "set_current_path"
        );
    method_bindings.mb_set_disable_overwrite_warning =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "set_disable_overwrite_warning"
        );
    method_bindings.mb_set_display_mode =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "set_display_mode"
        );
    method_bindings.mb_set_mode =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "set_mode"
        );
    method_bindings.mb_set_show_hidden_files =
        api->rebel_method_bind_get_method(
            "EditorFileDialog",
            "set_show_hidden_files"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorFileDialog");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorFileDialog::MethodBindings EditorFileDialog::method_bindings = {};
void* EditorFileDialog::class_tag = nullptr;
} // namespace Rebel
