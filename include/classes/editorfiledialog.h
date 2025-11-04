// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORFILEDIALOG_H
#define REBEL_EDITORFILEDIALOG_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/confirmationdialog.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;
class Texture;
class VBoxContainer;

class EditorFileDialog : public ConfirmationDialog {
public:
    enum DisplayMode {
        DISPLAY_THUMBNAILS = 0,
        DISPLAY_LIST = 1,
    };

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
    void _favorite_move_down();
    void _favorite_move_up();
    void _favorite_pressed();
    void _favorite_selected(const int64_t arg0);
    void _file_entered(const String arg0);
    void _filter_selected(const int64_t arg0);
    void _go_back();
    void _go_forward();
    void _go_up();
    void _item_db_selected(const int64_t arg0);
    void _item_list_item_rmb_selected(const int64_t arg0, const Vector2 arg1);
    void _item_list_rmb_clicked(const Vector2 arg0);
    void _item_menu_id_pressed(const int64_t arg0);
    void _item_selected(const int64_t arg0);
    void _items_clear_selection();
    void _make_dir();
    void _make_dir_confirm();
    void _multi_selected(const int64_t arg0, const bool arg1);
    void _recent_selected(const int64_t arg0);
    void _save_confirm_pressed();
    void _select_drive(const int64_t arg0);
    void _thumbnail_done(const String arg0, const Ref<Texture> arg1, const Ref<Texture> arg2, const Variant arg3);
    void _thumbnail_result(const String arg0, const Ref<Texture> arg1, const Ref<Texture> arg2, const Variant arg3);
    void _unhandled_input(const Ref<InputEvent> arg0);
    void _update_dir();
    void _update_file_list();
    void _update_file_name();
    void add_filter(const String filter);
    void clear_filters();
    EditorFileDialog::Access get_access() const;
    String get_current_dir() const;
    String get_current_file() const;
    String get_current_path() const;
    EditorFileDialog::DisplayMode get_display_mode() const;
    EditorFileDialog::Mode get_mode() const;
    VBoxContainer* get_vbox();
    void invalidate();
    bool is_overwrite_warning_disabled() const;
    bool is_showing_hidden_files() const;
    void set_access(const int64_t access);
    void set_current_dir(const String dir);
    void set_current_file(const String file);
    void set_current_path(const String path);
    void set_disable_overwrite_warning(const bool disable);
    void set_display_mode(const int64_t mode);
    void set_mode(const int64_t mode);
    void set_show_hidden_files(const bool show);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorFileDialog";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorFileDialog";
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
        rebel_method_bind* mb__favorite_move_down;
        rebel_method_bind* mb__favorite_move_up;
        rebel_method_bind* mb__favorite_pressed;
        rebel_method_bind* mb__favorite_selected;
        rebel_method_bind* mb__file_entered;
        rebel_method_bind* mb__filter_selected;
        rebel_method_bind* mb__go_back;
        rebel_method_bind* mb__go_forward;
        rebel_method_bind* mb__go_up;
        rebel_method_bind* mb__item_db_selected;
        rebel_method_bind* mb__item_list_item_rmb_selected;
        rebel_method_bind* mb__item_list_rmb_clicked;
        rebel_method_bind* mb__item_menu_id_pressed;
        rebel_method_bind* mb__item_selected;
        rebel_method_bind* mb__items_clear_selection;
        rebel_method_bind* mb__make_dir;
        rebel_method_bind* mb__make_dir_confirm;
        rebel_method_bind* mb__multi_selected;
        rebel_method_bind* mb__recent_selected;
        rebel_method_bind* mb__save_confirm_pressed;
        rebel_method_bind* mb__select_drive;
        rebel_method_bind* mb__thumbnail_done;
        rebel_method_bind* mb__thumbnail_result;
        rebel_method_bind* mb__unhandled_input;
        rebel_method_bind* mb__update_dir;
        rebel_method_bind* mb__update_file_list;
        rebel_method_bind* mb__update_file_name;
        rebel_method_bind* mb_add_filter;
        rebel_method_bind* mb_clear_filters;
        rebel_method_bind* mb_get_access;
        rebel_method_bind* mb_get_current_dir;
        rebel_method_bind* mb_get_current_file;
        rebel_method_bind* mb_get_current_path;
        rebel_method_bind* mb_get_display_mode;
        rebel_method_bind* mb_get_mode;
        rebel_method_bind* mb_get_vbox;
        rebel_method_bind* mb_invalidate;
        rebel_method_bind* mb_is_overwrite_warning_disabled;
        rebel_method_bind* mb_is_showing_hidden_files;
        rebel_method_bind* mb_set_access;
        rebel_method_bind* mb_set_current_dir;
        rebel_method_bind* mb_set_current_file;
        rebel_method_bind* mb_set_current_path;
        rebel_method_bind* mb_set_disable_overwrite_warning;
        rebel_method_bind* mb_set_display_mode;
        rebel_method_bind* mb_set_mode;
        rebel_method_bind* mb_set_show_hidden_files;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORFILEDIALOG_H
