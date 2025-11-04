// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/richtextlabel.h"

#include "classes/font.h"
#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/texture.h"
#include "classes/vscrollbar.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void RichTextLabel::_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void RichTextLabel::_scroll_changed(const real_t arg0) {
    rebel_icall_void_float(
        method_bindings.mb__scroll_changed,
        (const Object*)this,
        arg0
    );
}

void RichTextLabel::add_image(const Ref<Texture> image, const int64_t width, const int64_t height) {
    rebel_icall_void_object_int_int(
        method_bindings.mb_add_image,
        (const Object*)this,
        image.ptr(),
        width,
        height
    );
}

void RichTextLabel::add_text(const String text) {
    rebel_icall_void_string(
        method_bindings.mb_add_text,
        (const Object*)this,
        text
    );
}

Error RichTextLabel::append_bbcode(const String bbcode) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_append_bbcode,
        (const Object*)this,
        bbcode
    );
}

void RichTextLabel::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

String RichTextLabel::get_bbcode() const {
    return rebel_icall_string(
        method_bindings.mb_get_bbcode,
        (const Object*)this
    );
}

int64_t RichTextLabel::get_content_height() const {
    return rebel_icall_int(
        method_bindings.mb_get_content_height,
        (const Object*)this
    );
}

Array RichTextLabel::get_effects() {
    return rebel_icall_array(
        method_bindings.mb_get_effects,
        (const Object*)this
    );
}

int64_t RichTextLabel::get_line_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_line_count,
        (const Object*)this
    );
}

real_t RichTextLabel::get_percent_visible() const {
    return rebel_icall_float(
        method_bindings.mb_get_percent_visible,
        (const Object*)this
    );
}

int64_t RichTextLabel::get_tab_size() const {
    return rebel_icall_int(
        method_bindings.mb_get_tab_size,
        (const Object*)this
    );
}

String RichTextLabel::get_text() {
    return rebel_icall_string(
        method_bindings.mb_get_text,
        (const Object*)this
    );
}

int64_t RichTextLabel::get_total_character_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_total_character_count,
        (const Object*)this
    );
}

VScrollBar* RichTextLabel::get_v_scroll() {
    return (VScrollBar*)rebel_icall_object(
        method_bindings.mb_get_v_scroll,
        (const Object*)this
    );
}

int64_t RichTextLabel::get_visible_characters() const {
    return rebel_icall_int(
        method_bindings.mb_get_visible_characters,
        (const Object*)this
    );
}

int64_t RichTextLabel::get_visible_line_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_visible_line_count,
        (const Object*)this
    );
}

void RichTextLabel::install_effect(const Variant effect) {
    rebel_icall_void_variant(
        method_bindings.mb_install_effect,
        (const Object*)this,
        effect
    );
}

bool RichTextLabel::is_fit_content_height_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_fit_content_height_enabled,
        (const Object*)this
    );
}

bool RichTextLabel::is_meta_underlined() const {
    return rebel_icall_bool(
        method_bindings.mb_is_meta_underlined,
        (const Object*)this
    );
}

bool RichTextLabel::is_overriding_selected_font_color() const {
    return rebel_icall_bool(
        method_bindings.mb_is_overriding_selected_font_color,
        (const Object*)this
    );
}

bool RichTextLabel::is_scroll_active() const {
    return rebel_icall_bool(
        method_bindings.mb_is_scroll_active,
        (const Object*)this
    );
}

bool RichTextLabel::is_scroll_following() const {
    return rebel_icall_bool(
        method_bindings.mb_is_scroll_following,
        (const Object*)this
    );
}

bool RichTextLabel::is_selection_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_selection_enabled,
        (const Object*)this
    );
}

bool RichTextLabel::is_using_bbcode() const {
    return rebel_icall_bool(
        method_bindings.mb_is_using_bbcode,
        (const Object*)this
    );
}

void RichTextLabel::newline() {
    rebel_icall_void(
        method_bindings.mb_newline,
        (const Object*)this
    );
}

Error RichTextLabel::parse_bbcode(const String bbcode) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_parse_bbcode,
        (const Object*)this,
        bbcode
    );
}

Dictionary RichTextLabel::parse_expressions_for_values(const PoolStringArray expressions) {
    return rebel_icall_dictionary_poolstringarray(
        method_bindings.mb_parse_expressions_for_values,
        (const Object*)this,
        expressions
    );
}

void RichTextLabel::pop() {
    rebel_icall_void(
        method_bindings.mb_pop,
        (const Object*)this
    );
}

void RichTextLabel::push_align(const int64_t align) {
    rebel_icall_void_int(
        method_bindings.mb_push_align,
        (const Object*)this,
        align
    );
}

void RichTextLabel::push_bold() {
    rebel_icall_void(
        method_bindings.mb_push_bold,
        (const Object*)this
    );
}

void RichTextLabel::push_bold_italics() {
    rebel_icall_void(
        method_bindings.mb_push_bold_italics,
        (const Object*)this
    );
}

void RichTextLabel::push_cell() {
    rebel_icall_void(
        method_bindings.mb_push_cell,
        (const Object*)this
    );
}

void RichTextLabel::push_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_push_color,
        (const Object*)this,
        color
    );
}

void RichTextLabel::push_font(const Ref<Font> font) {
    rebel_icall_void_object(
        method_bindings.mb_push_font,
        (const Object*)this,
        font.ptr()
    );
}

void RichTextLabel::push_indent(const int64_t level) {
    rebel_icall_void_int(
        method_bindings.mb_push_indent,
        (const Object*)this,
        level
    );
}

void RichTextLabel::push_italics() {
    rebel_icall_void(
        method_bindings.mb_push_italics,
        (const Object*)this
    );
}

void RichTextLabel::push_list(const int64_t type) {
    rebel_icall_void_int(
        method_bindings.mb_push_list,
        (const Object*)this,
        type
    );
}

void RichTextLabel::push_meta(const Variant data) {
    rebel_icall_void_variant(
        method_bindings.mb_push_meta,
        (const Object*)this,
        data
    );
}

void RichTextLabel::push_mono() {
    rebel_icall_void(
        method_bindings.mb_push_mono,
        (const Object*)this
    );
}

void RichTextLabel::push_normal() {
    rebel_icall_void(
        method_bindings.mb_push_normal,
        (const Object*)this
    );
}

void RichTextLabel::push_strikethrough() {
    rebel_icall_void(
        method_bindings.mb_push_strikethrough,
        (const Object*)this
    );
}

void RichTextLabel::push_table(const int64_t columns) {
    rebel_icall_void_int(
        method_bindings.mb_push_table,
        (const Object*)this,
        columns
    );
}

void RichTextLabel::push_underline() {
    rebel_icall_void(
        method_bindings.mb_push_underline,
        (const Object*)this
    );
}

bool RichTextLabel::remove_line(const int64_t line) {
    return rebel_icall_bool_int(
        method_bindings.mb_remove_line,
        (const Object*)this,
        line
    );
}

void RichTextLabel::scroll_to_line(const int64_t line) {
    rebel_icall_void_int(
        method_bindings.mb_scroll_to_line,
        (const Object*)this,
        line
    );
}

void RichTextLabel::set_bbcode(const String text) {
    rebel_icall_void_string(
        method_bindings.mb_set_bbcode,
        (const Object*)this,
        text
    );
}

void RichTextLabel::set_effects(const Array effects) {
    rebel_icall_void_array(
        method_bindings.mb_set_effects,
        (const Object*)this,
        effects
    );
}

void RichTextLabel::set_fit_content_height(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_fit_content_height,
        (const Object*)this,
        enabled
    );
}

void RichTextLabel::set_meta_underline(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_meta_underline,
        (const Object*)this,
        enable
    );
}

void RichTextLabel::set_override_selected_font_color(const bool override) {
    rebel_icall_void_bool(
        method_bindings.mb_set_override_selected_font_color,
        (const Object*)this,
        override
    );
}

void RichTextLabel::set_percent_visible(const real_t percent_visible) {
    rebel_icall_void_float(
        method_bindings.mb_set_percent_visible,
        (const Object*)this,
        percent_visible
    );
}

void RichTextLabel::set_scroll_active(const bool active) {
    rebel_icall_void_bool(
        method_bindings.mb_set_scroll_active,
        (const Object*)this,
        active
    );
}

void RichTextLabel::set_scroll_follow(const bool follow) {
    rebel_icall_void_bool(
        method_bindings.mb_set_scroll_follow,
        (const Object*)this,
        follow
    );
}

void RichTextLabel::set_selection_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_selection_enabled,
        (const Object*)this,
        enabled
    );
}

void RichTextLabel::set_tab_size(const int64_t spaces) {
    rebel_icall_void_int(
        method_bindings.mb_set_tab_size,
        (const Object*)this,
        spaces
    );
}

void RichTextLabel::set_table_column_expand(const int64_t column, const bool expand, const int64_t ratio) {
    rebel_icall_void_int_bool_int(
        method_bindings.mb_set_table_column_expand,
        (const Object*)this,
        column,
        expand,
        ratio
    );
}

void RichTextLabel::set_text(const String text) {
    rebel_icall_void_string(
        method_bindings.mb_set_text,
        (const Object*)this,
        text
    );
}

void RichTextLabel::set_use_bbcode(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_bbcode,
        (const Object*)this,
        enable
    );
}

void RichTextLabel::set_visible_characters(const int64_t amount) {
    rebel_icall_void_int(
        method_bindings.mb_set_visible_characters,
        (const Object*)this,
        amount
    );
}

RichTextLabel* RichTextLabel::create() {
    return (RichTextLabel*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"RichTextLabel")()
         );
}

void RichTextLabel::init_method_bindings() {
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "_gui_input"
        );
    method_bindings.mb__scroll_changed =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "_scroll_changed"
        );
    method_bindings.mb_add_image =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "add_image"
        );
    method_bindings.mb_add_text =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "add_text"
        );
    method_bindings.mb_append_bbcode =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "append_bbcode"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "clear"
        );
    method_bindings.mb_get_bbcode =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "get_bbcode"
        );
    method_bindings.mb_get_content_height =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "get_content_height"
        );
    method_bindings.mb_get_effects =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "get_effects"
        );
    method_bindings.mb_get_line_count =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "get_line_count"
        );
    method_bindings.mb_get_percent_visible =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "get_percent_visible"
        );
    method_bindings.mb_get_tab_size =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "get_tab_size"
        );
    method_bindings.mb_get_text =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "get_text"
        );
    method_bindings.mb_get_total_character_count =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "get_total_character_count"
        );
    method_bindings.mb_get_v_scroll =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "get_v_scroll"
        );
    method_bindings.mb_get_visible_characters =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "get_visible_characters"
        );
    method_bindings.mb_get_visible_line_count =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "get_visible_line_count"
        );
    method_bindings.mb_install_effect =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "install_effect"
        );
    method_bindings.mb_is_fit_content_height_enabled =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "is_fit_content_height_enabled"
        );
    method_bindings.mb_is_meta_underlined =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "is_meta_underlined"
        );
    method_bindings.mb_is_overriding_selected_font_color =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "is_overriding_selected_font_color"
        );
    method_bindings.mb_is_scroll_active =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "is_scroll_active"
        );
    method_bindings.mb_is_scroll_following =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "is_scroll_following"
        );
    method_bindings.mb_is_selection_enabled =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "is_selection_enabled"
        );
    method_bindings.mb_is_using_bbcode =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "is_using_bbcode"
        );
    method_bindings.mb_newline =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "newline"
        );
    method_bindings.mb_parse_bbcode =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "parse_bbcode"
        );
    method_bindings.mb_parse_expressions_for_values =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "parse_expressions_for_values"
        );
    method_bindings.mb_pop =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "pop"
        );
    method_bindings.mb_push_align =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "push_align"
        );
    method_bindings.mb_push_bold =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "push_bold"
        );
    method_bindings.mb_push_bold_italics =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "push_bold_italics"
        );
    method_bindings.mb_push_cell =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "push_cell"
        );
    method_bindings.mb_push_color =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "push_color"
        );
    method_bindings.mb_push_font =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "push_font"
        );
    method_bindings.mb_push_indent =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "push_indent"
        );
    method_bindings.mb_push_italics =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "push_italics"
        );
    method_bindings.mb_push_list =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "push_list"
        );
    method_bindings.mb_push_meta =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "push_meta"
        );
    method_bindings.mb_push_mono =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "push_mono"
        );
    method_bindings.mb_push_normal =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "push_normal"
        );
    method_bindings.mb_push_strikethrough =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "push_strikethrough"
        );
    method_bindings.mb_push_table =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "push_table"
        );
    method_bindings.mb_push_underline =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "push_underline"
        );
    method_bindings.mb_remove_line =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "remove_line"
        );
    method_bindings.mb_scroll_to_line =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "scroll_to_line"
        );
    method_bindings.mb_set_bbcode =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "set_bbcode"
        );
    method_bindings.mb_set_effects =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "set_effects"
        );
    method_bindings.mb_set_fit_content_height =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "set_fit_content_height"
        );
    method_bindings.mb_set_meta_underline =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "set_meta_underline"
        );
    method_bindings.mb_set_override_selected_font_color =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "set_override_selected_font_color"
        );
    method_bindings.mb_set_percent_visible =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "set_percent_visible"
        );
    method_bindings.mb_set_scroll_active =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "set_scroll_active"
        );
    method_bindings.mb_set_scroll_follow =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "set_scroll_follow"
        );
    method_bindings.mb_set_selection_enabled =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "set_selection_enabled"
        );
    method_bindings.mb_set_tab_size =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "set_tab_size"
        );
    method_bindings.mb_set_table_column_expand =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "set_table_column_expand"
        );
    method_bindings.mb_set_text =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "set_text"
        );
    method_bindings.mb_set_use_bbcode =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "set_use_bbcode"
        );
    method_bindings.mb_set_visible_characters =
        api->rebel_method_bind_get_method(
            "RichTextLabel",
            "set_visible_characters"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "RichTextLabel");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

RichTextLabel::MethodBindings RichTextLabel::method_bindings = {};
void* RichTextLabel::class_tag = nullptr;
} // namespace Rebel
