// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_FILEDIALOG_H
#define REBEL_FILEDIALOG_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/confirmationdialog.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;
class LineEdit;
class Object;
class VBoxContainer;

class FileDialog : public ConfirmationDialog {
public:
    enum Mode {
        MODE_OPEN_FILE = 0,
        MODE_OPEN_FILES = 1,
        MODE_OPEN_DIR = 2,
        MODE_OPEN_ANY = 3,
        MODE_SAVE_FILE = 4,
    };

    enum Access {
        ACCESS_RESOURCES = 0,
        ACCESS_USERDATA = 1,
        ACCESS_FILESYSTEM = 2,
    };

    void _action_pressed();
    void _cancel_pressed();
    void _dir_entered(const String arg0);
    void _file_entered(const String arg0);
    void _filter_selected(const int64_t arg0);
    void _go_up();
    void _make_dir();
    void _make_dir_confirm();
    void _save_confirm_pressed();
    void _select_drive(const int64_t arg0);
    void _tree_item_activated();
    void _tree_multi_selected(const Object* arg0, const int64_t arg1, const bool arg2);
    void _tree_selected();
    void _unhandled_input(const Ref<InputEvent> arg0);
    void _update_dir();
    void _update_file_list();
    void _update_file_name();
    void add_filter(const String filter);
    void clear_filters();
    void deselect_items();
    FileDialog::Access get_access() const;
    String get_current_dir() const;
    String get_current_file() const;
    String get_current_path() const;
    PoolStringArray get_filters() const;
    LineEdit* get_line_edit();
    FileDialog::Mode get_mode() const;
    VBoxContainer* get_vbox();
    void invalidate();
    bool is_mode_overriding_title() const;
    bool is_showing_hidden_files() const;
    void set_access(const int64_t access);
    void set_current_dir(const String dir);
    void set_current_file(const String file);
    void set_current_path(const String path);
    void set_filters(const PoolStringArray filters);
    void set_mode(const int64_t mode);
    void set_mode_overrides_title(const bool override);
    void set_show_hidden_files(const bool show);

    static FileDialog* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "FileDialog";
    }

    inline static const char* get_rebel_class_name() {
        return "FileDialog";
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
        rebel_method_bind* mb__action_pressed;
        rebel_method_bind* mb__cancel_pressed;
        rebel_method_bind* mb__dir_entered;
        rebel_method_bind* mb__file_entered;
        rebel_method_bind* mb__filter_selected;
        rebel_method_bind* mb__go_up;
        rebel_method_bind* mb__make_dir;
        rebel_method_bind* mb__make_dir_confirm;
        rebel_method_bind* mb__save_confirm_pressed;
        rebel_method_bind* mb__select_drive;
        rebel_method_bind* mb__tree_item_activated;
        rebel_method_bind* mb__tree_multi_selected;
        rebel_method_bind* mb__tree_selected;
        rebel_method_bind* mb__unhandled_input;
        rebel_method_bind* mb__update_dir;
        rebel_method_bind* mb__update_file_list;
        rebel_method_bind* mb__update_file_name;
        rebel_method_bind* mb_add_filter;
        rebel_method_bind* mb_clear_filters;
        rebel_method_bind* mb_deselect_items;
        rebel_method_bind* mb_get_access;
        rebel_method_bind* mb_get_current_dir;
        rebel_method_bind* mb_get_current_file;
        rebel_method_bind* mb_get_current_path;
        rebel_method_bind* mb_get_filters;
        rebel_method_bind* mb_get_line_edit;
        rebel_method_bind* mb_get_mode;
        rebel_method_bind* mb_get_vbox;
        rebel_method_bind* mb_invalidate;
        rebel_method_bind* mb_is_mode_overriding_title;
        rebel_method_bind* mb_is_showing_hidden_files;
        rebel_method_bind* mb_set_access;
        rebel_method_bind* mb_set_current_dir;
        rebel_method_bind* mb_set_current_file;
        rebel_method_bind* mb_set_current_path;
        rebel_method_bind* mb_set_filters;
        rebel_method_bind* mb_set_mode;
        rebel_method_bind* mb_set_mode_overrides_title;
        rebel_method_bind* mb_set_show_hidden_files;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_FILEDIALOG_H
