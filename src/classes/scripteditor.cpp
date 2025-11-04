// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/scripteditor.h"

#include "classes/control.h"
#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/node.h"
#include "classes/object.h"
#include "classes/reference.h"
#include "classes/resource.h"
#include "classes/script.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ScriptEditor::_add_callback(const Object* arg0, const String arg1, const PoolStringArray arg2) {
    rebel_icall_void_object_string_poolstringarray(
        method_bindings.mb__add_callback,
        (const Object*)this,
        arg0,
        arg1,
        arg2
    );
}

void ScriptEditor::_autosave_scripts() {
    rebel_icall_void(
        method_bindings.mb__autosave_scripts,
        (const Object*)this
    );
}

void ScriptEditor::_breaked(const bool arg0, const bool arg1) {
    rebel_icall_void_bool_bool(
        method_bindings.mb__breaked,
        (const Object*)this,
        arg0,
        arg1
    );
}

void ScriptEditor::_clear_execution(const Ref<Reference> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__clear_execution,
        (const Object*)this,
        arg0.ptr()
    );
}

void ScriptEditor::_close_all_tabs() {
    rebel_icall_void(
        method_bindings.mb__close_all_tabs,
        (const Object*)this
    );
}

void ScriptEditor::_close_current_tab(const bool arg0) {
    rebel_icall_void_bool(
        method_bindings.mb__close_current_tab,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_close_discard_current_tab(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__close_discard_current_tab,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_close_docs_tab() {
    rebel_icall_void(
        method_bindings.mb__close_docs_tab,
        (const Object*)this
    );
}

void ScriptEditor::_close_other_tabs() {
    rebel_icall_void(
        method_bindings.mb__close_other_tabs,
        (const Object*)this
    );
}

void ScriptEditor::_copy_script_path() {
    rebel_icall_void(
        method_bindings.mb__copy_script_path,
        (const Object*)this
    );
}

void ScriptEditor::_editor_pause() {
    rebel_icall_void(
        method_bindings.mb__editor_pause,
        (const Object*)this
    );
}

void ScriptEditor::_editor_play() {
    rebel_icall_void(
        method_bindings.mb__editor_play,
        (const Object*)this
    );
}

void ScriptEditor::_editor_settings_changed() {
    rebel_icall_void(
        method_bindings.mb__editor_settings_changed,
        (const Object*)this
    );
}

void ScriptEditor::_editor_stop() {
    rebel_icall_void(
        method_bindings.mb__editor_stop,
        (const Object*)this
    );
}

void ScriptEditor::_file_dialog_action(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__file_dialog_action,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_filter_methods_text_changed(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__filter_methods_text_changed,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_filter_scripts_text_changed(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__filter_scripts_text_changed,
        (const Object*)this,
        arg0
    );
}

String ScriptEditor::_get_debug_tooltip(const String arg0, const Node* arg1) {
    return rebel_icall_string_string_object(
        method_bindings.mb__get_debug_tooltip,
        (const Object*)this,
        arg0,
        arg1
    );
}

void ScriptEditor::_goto_script_line(const Ref<Reference> arg0, const int64_t arg1) {
    rebel_icall_void_object_int(
        method_bindings.mb__goto_script_line,
        (const Object*)this,
        arg0.ptr(),
        arg1
    );
}

void ScriptEditor::_goto_script_line2(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__goto_script_line2,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_help_class_goto(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__help_class_goto,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_help_class_open(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__help_class_open,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_help_overview_selected(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__help_overview_selected,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_help_search(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__help_search,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_history_back() {
    rebel_icall_void(
        method_bindings.mb__history_back,
        (const Object*)this
    );
}

void ScriptEditor::_history_forward() {
    rebel_icall_void(
        method_bindings.mb__history_forward,
        (const Object*)this
    );
}

void ScriptEditor::_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__input,
        (const Object*)this,
        arg0.ptr()
    );
}

void ScriptEditor::_live_auto_reload_running_scripts() {
    rebel_icall_void(
        method_bindings.mb__live_auto_reload_running_scripts,
        (const Object*)this
    );
}

void ScriptEditor::_members_overview_selected(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__members_overview_selected,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_menu_option(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__menu_option,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_on_find_in_files_modified_files(const PoolStringArray arg0) {
    rebel_icall_void_poolstringarray(
        method_bindings.mb__on_find_in_files_modified_files,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_on_find_in_files_requested(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__on_find_in_files_requested,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_on_find_in_files_result_selected(const String arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3) {
    rebel_icall_void_string_int_int_int(
        method_bindings.mb__on_find_in_files_result_selected,
        (const Object*)this,
        arg0,
        arg1,
        arg2,
        arg3
    );
}

void ScriptEditor::_open_recent_script(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__open_recent_script,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_queue_close_tabs() {
    rebel_icall_void(
        method_bindings.mb__queue_close_tabs,
        (const Object*)this
    );
}

void ScriptEditor::_reload_scripts() {
    rebel_icall_void(
        method_bindings.mb__reload_scripts,
        (const Object*)this
    );
}

void ScriptEditor::_request_help(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__request_help,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_res_saved_callback(const Ref<Resource> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__res_saved_callback,
        (const Object*)this,
        arg0.ptr()
    );
}

void ScriptEditor::_resave_scripts(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__resave_scripts,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_save_history() {
    rebel_icall_void(
        method_bindings.mb__save_history,
        (const Object*)this
    );
}

void ScriptEditor::_script_changed() {
    rebel_icall_void(
        method_bindings.mb__script_changed,
        (const Object*)this
    );
}

void ScriptEditor::_script_created(const Ref<Script> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__script_created,
        (const Object*)this,
        arg0.ptr()
    );
}

void ScriptEditor::_script_list_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__script_list_gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void ScriptEditor::_script_selected(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__script_selected,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_script_split_dragged(const real_t arg0) {
    rebel_icall_void_float(
        method_bindings.mb__script_split_dragged,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_set_execution(const Ref<Reference> arg0, const int64_t arg1) {
    rebel_icall_void_object_int(
        method_bindings.mb__set_execution,
        (const Object*)this,
        arg0.ptr(),
        arg1
    );
}

void ScriptEditor::_show_debugger(const bool arg0) {
    rebel_icall_void_bool(
        method_bindings.mb__show_debugger,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_start_find_in_files(const bool arg0) {
    rebel_icall_void_bool(
        method_bindings.mb__start_find_in_files,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_tab_changed(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__tab_changed,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_theme_option(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__theme_option,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_toggle_members_overview_alpha_sort(const bool arg0) {
    rebel_icall_void_bool(
        method_bindings.mb__toggle_members_overview_alpha_sort,
        (const Object*)this,
        arg0
    );
}

void ScriptEditor::_tree_changed() {
    rebel_icall_void(
        method_bindings.mb__tree_changed,
        (const Object*)this
    );
}

void ScriptEditor::_unhandled_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__unhandled_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void ScriptEditor::_update_autosave_timer() {
    rebel_icall_void(
        method_bindings.mb__update_autosave_timer,
        (const Object*)this
    );
}

void ScriptEditor::_update_members_overview() {
    rebel_icall_void(
        method_bindings.mb__update_members_overview,
        (const Object*)this
    );
}

void ScriptEditor::_update_recent_scripts() {
    rebel_icall_void(
        method_bindings.mb__update_recent_scripts,
        (const Object*)this
    );
}

void ScriptEditor::_update_script_connections() {
    rebel_icall_void(
        method_bindings.mb__update_script_connections,
        (const Object*)this
    );
}

void ScriptEditor::_update_script_names() {
    rebel_icall_void(
        method_bindings.mb__update_script_names,
        (const Object*)this
    );
}

bool ScriptEditor::can_drop_data_fw(const Vector2 point, const Variant data, const Control* from) const {
    return rebel_icall_bool_vector2_variant_object(
        method_bindings.mb_can_drop_data_fw,
        (const Object*)this,
        point,
        data,
        from
    );
}

void ScriptEditor::drop_data_fw(const Vector2 point, const Variant data, const Control* from) {
    rebel_icall_void_vector2_variant_object(
        method_bindings.mb_drop_data_fw,
        (const Object*)this,
        point,
        data,
        from
    );
}

Ref<Script> ScriptEditor::get_current_script() {
    return Ref<Script>::create_ref(rebel_icall_object(
        method_bindings.mb_get_current_script,
        (const Object*)this
    ));
}

Variant ScriptEditor::get_drag_data_fw(const Vector2 point, const Control* from) {
    return rebel_icall_variant_vector2_object(
        method_bindings.mb_get_drag_data_fw,
        (const Object*)this,
        point,
        from
    );
}

Array ScriptEditor::get_open_scripts() const {
    return rebel_icall_array(
        method_bindings.mb_get_open_scripts,
        (const Object*)this
    );
}

void ScriptEditor::goto_line(const int64_t line_number) {
    rebel_icall_void_int(
        method_bindings.mb_goto_line,
        (const Object*)this,
        line_number
    );
}

void ScriptEditor::open_script_create_dialog(const String base_name, const String base_path) {
    rebel_icall_void_string_string(
        method_bindings.mb_open_script_create_dialog,
        (const Object*)this,
        base_name,
        base_path
    );
}

void ScriptEditor::init_method_bindings() {
    method_bindings.mb__add_callback =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_add_callback"
        );
    method_bindings.mb__autosave_scripts =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_autosave_scripts"
        );
    method_bindings.mb__breaked =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_breaked"
        );
    method_bindings.mb__clear_execution =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_clear_execution"
        );
    method_bindings.mb__close_all_tabs =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_close_all_tabs"
        );
    method_bindings.mb__close_current_tab =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_close_current_tab"
        );
    method_bindings.mb__close_discard_current_tab =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_close_discard_current_tab"
        );
    method_bindings.mb__close_docs_tab =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_close_docs_tab"
        );
    method_bindings.mb__close_other_tabs =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_close_other_tabs"
        );
    method_bindings.mb__copy_script_path =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_copy_script_path"
        );
    method_bindings.mb__editor_pause =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_editor_pause"
        );
    method_bindings.mb__editor_play =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_editor_play"
        );
    method_bindings.mb__editor_settings_changed =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_editor_settings_changed"
        );
    method_bindings.mb__editor_stop =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_editor_stop"
        );
    method_bindings.mb__file_dialog_action =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_file_dialog_action"
        );
    method_bindings.mb__filter_methods_text_changed =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_filter_methods_text_changed"
        );
    method_bindings.mb__filter_scripts_text_changed =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_filter_scripts_text_changed"
        );
    method_bindings.mb__get_debug_tooltip =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_get_debug_tooltip"
        );
    method_bindings.mb__goto_script_line =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_goto_script_line"
        );
    method_bindings.mb__goto_script_line2 =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_goto_script_line2"
        );
    method_bindings.mb__help_class_goto =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_help_class_goto"
        );
    method_bindings.mb__help_class_open =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_help_class_open"
        );
    method_bindings.mb__help_overview_selected =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_help_overview_selected"
        );
    method_bindings.mb__help_search =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_help_search"
        );
    method_bindings.mb__history_back =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_history_back"
        );
    method_bindings.mb__history_forward =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_history_forward"
        );
    method_bindings.mb__input =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_input"
        );
    method_bindings.mb__live_auto_reload_running_scripts =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_live_auto_reload_running_scripts"
        );
    method_bindings.mb__members_overview_selected =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_members_overview_selected"
        );
    method_bindings.mb__menu_option =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_menu_option"
        );
    method_bindings.mb__on_find_in_files_modified_files =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_on_find_in_files_modified_files"
        );
    method_bindings.mb__on_find_in_files_requested =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_on_find_in_files_requested"
        );
    method_bindings.mb__on_find_in_files_result_selected =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_on_find_in_files_result_selected"
        );
    method_bindings.mb__open_recent_script =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_open_recent_script"
        );
    method_bindings.mb__queue_close_tabs =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_queue_close_tabs"
        );
    method_bindings.mb__reload_scripts =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_reload_scripts"
        );
    method_bindings.mb__request_help =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_request_help"
        );
    method_bindings.mb__res_saved_callback =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_res_saved_callback"
        );
    method_bindings.mb__resave_scripts =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_resave_scripts"
        );
    method_bindings.mb__save_history =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_save_history"
        );
    method_bindings.mb__script_changed =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_script_changed"
        );
    method_bindings.mb__script_created =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_script_created"
        );
    method_bindings.mb__script_list_gui_input =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_script_list_gui_input"
        );
    method_bindings.mb__script_selected =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_script_selected"
        );
    method_bindings.mb__script_split_dragged =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_script_split_dragged"
        );
    method_bindings.mb__set_execution =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_set_execution"
        );
    method_bindings.mb__show_debugger =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_show_debugger"
        );
    method_bindings.mb__start_find_in_files =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_start_find_in_files"
        );
    method_bindings.mb__tab_changed =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_tab_changed"
        );
    method_bindings.mb__theme_option =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_theme_option"
        );
    method_bindings.mb__toggle_members_overview_alpha_sort =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_toggle_members_overview_alpha_sort"
        );
    method_bindings.mb__tree_changed =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_tree_changed"
        );
    method_bindings.mb__unhandled_input =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_unhandled_input"
        );
    method_bindings.mb__update_autosave_timer =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_update_autosave_timer"
        );
    method_bindings.mb__update_members_overview =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_update_members_overview"
        );
    method_bindings.mb__update_recent_scripts =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_update_recent_scripts"
        );
    method_bindings.mb__update_script_connections =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_update_script_connections"
        );
    method_bindings.mb__update_script_names =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "_update_script_names"
        );
    method_bindings.mb_can_drop_data_fw =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "can_drop_data_fw"
        );
    method_bindings.mb_drop_data_fw =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "drop_data_fw"
        );
    method_bindings.mb_get_current_script =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "get_current_script"
        );
    method_bindings.mb_get_drag_data_fw =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "get_drag_data_fw"
        );
    method_bindings.mb_get_open_scripts =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "get_open_scripts"
        );
    method_bindings.mb_goto_line =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "goto_line"
        );
    method_bindings.mb_open_script_create_dialog =
        api->rebel_method_bind_get_method(
            "ScriptEditor",
            "open_script_create_dialog"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ScriptEditor");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ScriptEditor::MethodBindings ScriptEditor::method_bindings = {};
void* ScriptEditor::class_tag = nullptr;
} // namespace Rebel
