// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SCRIPTEDITOR_H
#define REBEL_SCRIPTEDITOR_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/panelcontainer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Control;
class InputEvent;
class Node;
class Object;
class Reference;
class Resource;
class Script;

class ScriptEditor : public PanelContainer {
public:
    void _add_callback(const Object* arg0, const String arg1, const PoolStringArray arg2);
    void _autosave_scripts();
    void _breaked(const bool arg0, const bool arg1);
    void _clear_execution(const Ref<Reference> arg0);
    void _close_all_tabs();
    void _close_current_tab(const bool arg0);
    void _close_discard_current_tab(const String arg0);
    void _close_docs_tab();
    void _close_other_tabs();
    void _copy_script_path();
    void _editor_pause();
    void _editor_play();
    void _editor_settings_changed();
    void _editor_stop();
    void _file_dialog_action(const String arg0);
    void _filter_methods_text_changed(const String arg0);
    void _filter_scripts_text_changed(const String arg0);
    String _get_debug_tooltip(const String arg0, const Node* arg1);
    void _goto_script_line(const Ref<Reference> arg0, const int64_t arg1);
    void _goto_script_line2(const int64_t arg0);
    void _help_class_goto(const String arg0);
    void _help_class_open(const String arg0);
    void _help_overview_selected(const int64_t arg0);
    void _help_search(const String arg0);
    void _history_back();
    void _history_forward();
    void _input(const Ref<InputEvent> arg0);
    void _live_auto_reload_running_scripts();
    void _members_overview_selected(const int64_t arg0);
    void _menu_option(const int64_t arg0);
    void _on_find_in_files_modified_files(const PoolStringArray arg0);
    void _on_find_in_files_requested(const String arg0);
    void _on_find_in_files_result_selected(const String arg0, const int64_t arg1, const int64_t arg2, const int64_t arg3);
    void _open_recent_script(const int64_t arg0);
    void _queue_close_tabs();
    void _reload_scripts();
    void _request_help(const String arg0);
    void _res_saved_callback(const Ref<Resource> arg0);
    void _resave_scripts(const String arg0);
    void _save_history();
    void _script_changed();
    void _script_created(const Ref<Script> arg0);
    void _script_list_gui_input(const Ref<InputEvent> arg0);
    void _script_selected(const int64_t arg0);
    void _script_split_dragged(const real_t arg0);
    void _set_execution(const Ref<Reference> arg0, const int64_t arg1);
    void _show_debugger(const bool arg0);
    void _start_find_in_files(const bool arg0);
    void _tab_changed(const int64_t arg0);
    void _theme_option(const int64_t arg0);
    void _toggle_members_overview_alpha_sort(const bool arg0);
    void _tree_changed();
    void _unhandled_input(const Ref<InputEvent> arg0);
    void _update_autosave_timer();
    void _update_members_overview();
    void _update_recent_scripts();
    void _update_script_connections();
    void _update_script_names();
    bool can_drop_data_fw(const Vector2 point, const Variant data, const Control* from) const;
    void drop_data_fw(const Vector2 point, const Variant data, const Control* from);
    Ref<Script> get_current_script();
    Variant get_drag_data_fw(const Vector2 point, const Control* from);
    Array get_open_scripts() const;
    void goto_line(const int64_t line_number);
    void open_script_create_dialog(const String base_name, const String base_path);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ScriptEditor";
    }

    inline static const char* get_rebel_class_name() {
        return "ScriptEditor";
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
        rebel_method_bind* mb__add_callback;
        rebel_method_bind* mb__autosave_scripts;
        rebel_method_bind* mb__breaked;
        rebel_method_bind* mb__clear_execution;
        rebel_method_bind* mb__close_all_tabs;
        rebel_method_bind* mb__close_current_tab;
        rebel_method_bind* mb__close_discard_current_tab;
        rebel_method_bind* mb__close_docs_tab;
        rebel_method_bind* mb__close_other_tabs;
        rebel_method_bind* mb__copy_script_path;
        rebel_method_bind* mb__editor_pause;
        rebel_method_bind* mb__editor_play;
        rebel_method_bind* mb__editor_settings_changed;
        rebel_method_bind* mb__editor_stop;
        rebel_method_bind* mb__file_dialog_action;
        rebel_method_bind* mb__filter_methods_text_changed;
        rebel_method_bind* mb__filter_scripts_text_changed;
        rebel_method_bind* mb__get_debug_tooltip;
        rebel_method_bind* mb__goto_script_line;
        rebel_method_bind* mb__goto_script_line2;
        rebel_method_bind* mb__help_class_goto;
        rebel_method_bind* mb__help_class_open;
        rebel_method_bind* mb__help_overview_selected;
        rebel_method_bind* mb__help_search;
        rebel_method_bind* mb__history_back;
        rebel_method_bind* mb__history_forward;
        rebel_method_bind* mb__input;
        rebel_method_bind* mb__live_auto_reload_running_scripts;
        rebel_method_bind* mb__members_overview_selected;
        rebel_method_bind* mb__menu_option;
        rebel_method_bind* mb__on_find_in_files_modified_files;
        rebel_method_bind* mb__on_find_in_files_requested;
        rebel_method_bind* mb__on_find_in_files_result_selected;
        rebel_method_bind* mb__open_recent_script;
        rebel_method_bind* mb__queue_close_tabs;
        rebel_method_bind* mb__reload_scripts;
        rebel_method_bind* mb__request_help;
        rebel_method_bind* mb__res_saved_callback;
        rebel_method_bind* mb__resave_scripts;
        rebel_method_bind* mb__save_history;
        rebel_method_bind* mb__script_changed;
        rebel_method_bind* mb__script_created;
        rebel_method_bind* mb__script_list_gui_input;
        rebel_method_bind* mb__script_selected;
        rebel_method_bind* mb__script_split_dragged;
        rebel_method_bind* mb__set_execution;
        rebel_method_bind* mb__show_debugger;
        rebel_method_bind* mb__start_find_in_files;
        rebel_method_bind* mb__tab_changed;
        rebel_method_bind* mb__theme_option;
        rebel_method_bind* mb__toggle_members_overview_alpha_sort;
        rebel_method_bind* mb__tree_changed;
        rebel_method_bind* mb__unhandled_input;
        rebel_method_bind* mb__update_autosave_timer;
        rebel_method_bind* mb__update_members_overview;
        rebel_method_bind* mb__update_recent_scripts;
        rebel_method_bind* mb__update_script_connections;
        rebel_method_bind* mb__update_script_names;
        rebel_method_bind* mb_can_drop_data_fw;
        rebel_method_bind* mb_drop_data_fw;
        rebel_method_bind* mb_get_current_script;
        rebel_method_bind* mb_get_drag_data_fw;
        rebel_method_bind* mb_get_open_scripts;
        rebel_method_bind* mb_goto_line;
        rebel_method_bind* mb_open_script_create_dialog;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SCRIPTEDITOR_H
