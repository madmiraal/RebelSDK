// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/lineedit.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/popupmenu.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void LineEdit::_editor_settings_changed() {
    rebel_icall_void(
        method_bindings.mb__editor_settings_changed,
        (const Object*)this
    );
}

void LineEdit::_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void LineEdit::_text_changed() {
    rebel_icall_void(
        method_bindings.mb__text_changed,
        (const Object*)this
    );
}

void LineEdit::_toggle_draw_caret() {
    rebel_icall_void(
        method_bindings.mb__toggle_draw_caret,
        (const Object*)this
    );
}

void LineEdit::append_at_cursor(const String text) {
    rebel_icall_void_string(
        method_bindings.mb_append_at_cursor,
        (const Object*)this,
        text
    );
}

void LineEdit::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

bool LineEdit::cursor_get_blink_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_cursor_get_blink_enabled,
        (const Object*)this
    );
}

real_t LineEdit::cursor_get_blink_speed() const {
    return rebel_icall_float(
        method_bindings.mb_cursor_get_blink_speed,
        (const Object*)this
    );
}

void LineEdit::cursor_set_blink_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_cursor_set_blink_enabled,
        (const Object*)this,
        enabled
    );
}

void LineEdit::cursor_set_blink_speed(const real_t blink_speed) {
    rebel_icall_void_float(
        method_bindings.mb_cursor_set_blink_speed,
        (const Object*)this,
        blink_speed
    );
}

void LineEdit::delete_char_at_cursor() {
    rebel_icall_void(
        method_bindings.mb_delete_char_at_cursor,
        (const Object*)this
    );
}

void LineEdit::delete_text(const int64_t from_column, const int64_t to_column) {
    rebel_icall_void_int_int(
        method_bindings.mb_delete_text,
        (const Object*)this,
        from_column,
        to_column
    );
}

void LineEdit::deselect() {
    rebel_icall_void(
        method_bindings.mb_deselect,
        (const Object*)this
    );
}

LineEdit::Align LineEdit::get_align() const {
    return (LineEdit::Align)rebel_icall_int(
        method_bindings.mb_get_align,
        (const Object*)this
    );
}

int64_t LineEdit::get_cursor_position() const {
    return rebel_icall_int(
        method_bindings.mb_get_cursor_position,
        (const Object*)this
    );
}

bool LineEdit::get_expand_to_text_length() const {
    return rebel_icall_bool(
        method_bindings.mb_get_expand_to_text_length,
        (const Object*)this
    );
}

int64_t LineEdit::get_max_length() const {
    return rebel_icall_int(
        method_bindings.mb_get_max_length,
        (const Object*)this
    );
}

PopupMenu* LineEdit::get_menu() const {
    return (PopupMenu*)rebel_icall_object(
        method_bindings.mb_get_menu,
        (const Object*)this
    );
}

String LineEdit::get_placeholder() const {
    return rebel_icall_string(
        method_bindings.mb_get_placeholder,
        (const Object*)this
    );
}

real_t LineEdit::get_placeholder_alpha() const {
    return rebel_icall_float(
        method_bindings.mb_get_placeholder_alpha,
        (const Object*)this
    );
}

Ref<Texture> LineEdit::get_right_icon() {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_right_icon,
        (const Object*)this
    ));
}

int64_t LineEdit::get_scroll_offset() const {
    return rebel_icall_int(
        method_bindings.mb_get_scroll_offset,
        (const Object*)this
    );
}

String LineEdit::get_secret_character() const {
    return rebel_icall_string(
        method_bindings.mb_get_secret_character,
        (const Object*)this
    );
}

String LineEdit::get_text() const {
    return rebel_icall_string(
        method_bindings.mb_get_text,
        (const Object*)this
    );
}

bool LineEdit::is_clear_button_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_clear_button_enabled,
        (const Object*)this
    );
}

bool LineEdit::is_context_menu_enabled() {
    return rebel_icall_bool(
        method_bindings.mb_is_context_menu_enabled,
        (const Object*)this
    );
}

bool LineEdit::is_editable() const {
    return rebel_icall_bool(
        method_bindings.mb_is_editable,
        (const Object*)this
    );
}

bool LineEdit::is_secret() const {
    return rebel_icall_bool(
        method_bindings.mb_is_secret,
        (const Object*)this
    );
}

bool LineEdit::is_selecting_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_selecting_enabled,
        (const Object*)this
    );
}

bool LineEdit::is_shortcut_keys_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_shortcut_keys_enabled,
        (const Object*)this
    );
}

bool LineEdit::is_virtual_keyboard_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_virtual_keyboard_enabled,
        (const Object*)this
    );
}

void LineEdit::menu_option(const int64_t option) {
    rebel_icall_void_int(
        method_bindings.mb_menu_option,
        (const Object*)this,
        option
    );
}

void LineEdit::select(const int64_t from, const int64_t to) {
    rebel_icall_void_int_int(
        method_bindings.mb_select,
        (const Object*)this,
        from,
        to
    );
}

void LineEdit::select_all() {
    rebel_icall_void(
        method_bindings.mb_select_all,
        (const Object*)this
    );
}

void LineEdit::set_align(const int64_t align) {
    rebel_icall_void_int(
        method_bindings.mb_set_align,
        (const Object*)this,
        align
    );
}

void LineEdit::set_clear_button_enabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_clear_button_enabled,
        (const Object*)this,
        enable
    );
}

void LineEdit::set_context_menu_enabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_context_menu_enabled,
        (const Object*)this,
        enable
    );
}

void LineEdit::set_cursor_position(const int64_t position) {
    rebel_icall_void_int(
        method_bindings.mb_set_cursor_position,
        (const Object*)this,
        position
    );
}

void LineEdit::set_editable(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_editable,
        (const Object*)this,
        enabled
    );
}

void LineEdit::set_expand_to_text_length(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_expand_to_text_length,
        (const Object*)this,
        enabled
    );
}

void LineEdit::set_max_length(const int64_t chars) {
    rebel_icall_void_int(
        method_bindings.mb_set_max_length,
        (const Object*)this,
        chars
    );
}

void LineEdit::set_placeholder(const String text) {
    rebel_icall_void_string(
        method_bindings.mb_set_placeholder,
        (const Object*)this,
        text
    );
}

void LineEdit::set_placeholder_alpha(const real_t alpha) {
    rebel_icall_void_float(
        method_bindings.mb_set_placeholder_alpha,
        (const Object*)this,
        alpha
    );
}

void LineEdit::set_right_icon(const Ref<Texture> icon) {
    rebel_icall_void_object(
        method_bindings.mb_set_right_icon,
        (const Object*)this,
        icon.ptr()
    );
}

void LineEdit::set_secret(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_secret,
        (const Object*)this,
        enabled
    );
}

void LineEdit::set_secret_character(const String character) {
    rebel_icall_void_string(
        method_bindings.mb_set_secret_character,
        (const Object*)this,
        character
    );
}

void LineEdit::set_selecting_enabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_selecting_enabled,
        (const Object*)this,
        enable
    );
}

void LineEdit::set_shortcut_keys_enabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_shortcut_keys_enabled,
        (const Object*)this,
        enable
    );
}

void LineEdit::set_text(const String text) {
    rebel_icall_void_string(
        method_bindings.mb_set_text,
        (const Object*)this,
        text
    );
}

void LineEdit::set_virtual_keyboard_enabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_virtual_keyboard_enabled,
        (const Object*)this,
        enable
    );
}

LineEdit* LineEdit::create() {
    return (LineEdit*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"LineEdit")()
         );
}

void LineEdit::init_method_bindings() {
    method_bindings.mb__editor_settings_changed =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "_editor_settings_changed"
        );
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "_gui_input"
        );
    method_bindings.mb__text_changed =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "_text_changed"
        );
    method_bindings.mb__toggle_draw_caret =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "_toggle_draw_caret"
        );
    method_bindings.mb_append_at_cursor =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "append_at_cursor"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "clear"
        );
    method_bindings.mb_cursor_get_blink_enabled =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "cursor_get_blink_enabled"
        );
    method_bindings.mb_cursor_get_blink_speed =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "cursor_get_blink_speed"
        );
    method_bindings.mb_cursor_set_blink_enabled =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "cursor_set_blink_enabled"
        );
    method_bindings.mb_cursor_set_blink_speed =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "cursor_set_blink_speed"
        );
    method_bindings.mb_delete_char_at_cursor =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "delete_char_at_cursor"
        );
    method_bindings.mb_delete_text =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "delete_text"
        );
    method_bindings.mb_deselect =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "deselect"
        );
    method_bindings.mb_get_align =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "get_align"
        );
    method_bindings.mb_get_cursor_position =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "get_cursor_position"
        );
    method_bindings.mb_get_expand_to_text_length =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "get_expand_to_text_length"
        );
    method_bindings.mb_get_max_length =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "get_max_length"
        );
    method_bindings.mb_get_menu =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "get_menu"
        );
    method_bindings.mb_get_placeholder =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "get_placeholder"
        );
    method_bindings.mb_get_placeholder_alpha =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "get_placeholder_alpha"
        );
    method_bindings.mb_get_right_icon =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "get_right_icon"
        );
    method_bindings.mb_get_scroll_offset =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "get_scroll_offset"
        );
    method_bindings.mb_get_secret_character =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "get_secret_character"
        );
    method_bindings.mb_get_text =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "get_text"
        );
    method_bindings.mb_is_clear_button_enabled =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "is_clear_button_enabled"
        );
    method_bindings.mb_is_context_menu_enabled =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "is_context_menu_enabled"
        );
    method_bindings.mb_is_editable =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "is_editable"
        );
    method_bindings.mb_is_secret =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "is_secret"
        );
    method_bindings.mb_is_selecting_enabled =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "is_selecting_enabled"
        );
    method_bindings.mb_is_shortcut_keys_enabled =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "is_shortcut_keys_enabled"
        );
    method_bindings.mb_is_virtual_keyboard_enabled =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "is_virtual_keyboard_enabled"
        );
    method_bindings.mb_menu_option =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "menu_option"
        );
    method_bindings.mb_select =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "select"
        );
    method_bindings.mb_select_all =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "select_all"
        );
    method_bindings.mb_set_align =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "set_align"
        );
    method_bindings.mb_set_clear_button_enabled =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "set_clear_button_enabled"
        );
    method_bindings.mb_set_context_menu_enabled =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "set_context_menu_enabled"
        );
    method_bindings.mb_set_cursor_position =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "set_cursor_position"
        );
    method_bindings.mb_set_editable =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "set_editable"
        );
    method_bindings.mb_set_expand_to_text_length =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "set_expand_to_text_length"
        );
    method_bindings.mb_set_max_length =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "set_max_length"
        );
    method_bindings.mb_set_placeholder =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "set_placeholder"
        );
    method_bindings.mb_set_placeholder_alpha =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "set_placeholder_alpha"
        );
    method_bindings.mb_set_right_icon =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "set_right_icon"
        );
    method_bindings.mb_set_secret =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "set_secret"
        );
    method_bindings.mb_set_secret_character =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "set_secret_character"
        );
    method_bindings.mb_set_selecting_enabled =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "set_selecting_enabled"
        );
    method_bindings.mb_set_shortcut_keys_enabled =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "set_shortcut_keys_enabled"
        );
    method_bindings.mb_set_text =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "set_text"
        );
    method_bindings.mb_set_virtual_keyboard_enabled =
        api->rebel_method_bind_get_method(
            "LineEdit",
            "set_virtual_keyboard_enabled"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "LineEdit");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

LineEdit::MethodBindings LineEdit::method_bindings = {};
void* LineEdit::class_tag = nullptr;
} // namespace Rebel
