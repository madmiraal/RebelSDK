// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/label.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Label::Align Label::get_align() const {
    return (Label::Align)rebel_icall_int(
        method_bindings.mb_get_align,
        (const Object*)this
    );
}

int64_t Label::get_line_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_line_count,
        (const Object*)this
    );
}

int64_t Label::get_line_height() const {
    return rebel_icall_int(
        method_bindings.mb_get_line_height,
        (const Object*)this
    );
}

int64_t Label::get_lines_skipped() const {
    return rebel_icall_int(
        method_bindings.mb_get_lines_skipped,
        (const Object*)this
    );
}

int64_t Label::get_max_lines_visible() const {
    return rebel_icall_int(
        method_bindings.mb_get_max_lines_visible,
        (const Object*)this
    );
}

real_t Label::get_percent_visible() const {
    return rebel_icall_float(
        method_bindings.mb_get_percent_visible,
        (const Object*)this
    );
}

String Label::get_text() const {
    return rebel_icall_string(
        method_bindings.mb_get_text,
        (const Object*)this
    );
}

int64_t Label::get_total_character_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_total_character_count,
        (const Object*)this
    );
}

Label::VAlign Label::get_valign() const {
    return (Label::VAlign)rebel_icall_int(
        method_bindings.mb_get_valign,
        (const Object*)this
    );
}

int64_t Label::get_visible_characters() const {
    return rebel_icall_int(
        method_bindings.mb_get_visible_characters,
        (const Object*)this
    );
}

int64_t Label::get_visible_line_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_visible_line_count,
        (const Object*)this
    );
}

bool Label::has_autowrap() const {
    return rebel_icall_bool(
        method_bindings.mb_has_autowrap,
        (const Object*)this
    );
}

bool Label::is_clipping_text() const {
    return rebel_icall_bool(
        method_bindings.mb_is_clipping_text,
        (const Object*)this
    );
}

bool Label::is_uppercase() const {
    return rebel_icall_bool(
        method_bindings.mb_is_uppercase,
        (const Object*)this
    );
}

void Label::set_align(const int64_t align) {
    rebel_icall_void_int(
        method_bindings.mb_set_align,
        (const Object*)this,
        align
    );
}

void Label::set_autowrap(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_autowrap,
        (const Object*)this,
        enable
    );
}

void Label::set_clip_text(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_clip_text,
        (const Object*)this,
        enable
    );
}

void Label::set_lines_skipped(const int64_t lines_skipped) {
    rebel_icall_void_int(
        method_bindings.mb_set_lines_skipped,
        (const Object*)this,
        lines_skipped
    );
}

void Label::set_max_lines_visible(const int64_t lines_visible) {
    rebel_icall_void_int(
        method_bindings.mb_set_max_lines_visible,
        (const Object*)this,
        lines_visible
    );
}

void Label::set_percent_visible(const real_t percent_visible) {
    rebel_icall_void_float(
        method_bindings.mb_set_percent_visible,
        (const Object*)this,
        percent_visible
    );
}

void Label::set_text(const String text) {
    rebel_icall_void_string(
        method_bindings.mb_set_text,
        (const Object*)this,
        text
    );
}

void Label::set_uppercase(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_uppercase,
        (const Object*)this,
        enable
    );
}

void Label::set_valign(const int64_t valign) {
    rebel_icall_void_int(
        method_bindings.mb_set_valign,
        (const Object*)this,
        valign
    );
}

void Label::set_visible_characters(const int64_t amount) {
    rebel_icall_void_int(
        method_bindings.mb_set_visible_characters,
        (const Object*)this,
        amount
    );
}

Label* Label::create() {
    return (Label*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Label")()
         );
}

void Label::init_method_bindings() {
    method_bindings.mb_get_align =
        api->rebel_method_bind_get_method(
            "Label",
            "get_align"
        );
    method_bindings.mb_get_line_count =
        api->rebel_method_bind_get_method(
            "Label",
            "get_line_count"
        );
    method_bindings.mb_get_line_height =
        api->rebel_method_bind_get_method(
            "Label",
            "get_line_height"
        );
    method_bindings.mb_get_lines_skipped =
        api->rebel_method_bind_get_method(
            "Label",
            "get_lines_skipped"
        );
    method_bindings.mb_get_max_lines_visible =
        api->rebel_method_bind_get_method(
            "Label",
            "get_max_lines_visible"
        );
    method_bindings.mb_get_percent_visible =
        api->rebel_method_bind_get_method(
            "Label",
            "get_percent_visible"
        );
    method_bindings.mb_get_text =
        api->rebel_method_bind_get_method(
            "Label",
            "get_text"
        );
    method_bindings.mb_get_total_character_count =
        api->rebel_method_bind_get_method(
            "Label",
            "get_total_character_count"
        );
    method_bindings.mb_get_valign =
        api->rebel_method_bind_get_method(
            "Label",
            "get_valign"
        );
    method_bindings.mb_get_visible_characters =
        api->rebel_method_bind_get_method(
            "Label",
            "get_visible_characters"
        );
    method_bindings.mb_get_visible_line_count =
        api->rebel_method_bind_get_method(
            "Label",
            "get_visible_line_count"
        );
    method_bindings.mb_has_autowrap =
        api->rebel_method_bind_get_method(
            "Label",
            "has_autowrap"
        );
    method_bindings.mb_is_clipping_text =
        api->rebel_method_bind_get_method(
            "Label",
            "is_clipping_text"
        );
    method_bindings.mb_is_uppercase =
        api->rebel_method_bind_get_method(
            "Label",
            "is_uppercase"
        );
    method_bindings.mb_set_align =
        api->rebel_method_bind_get_method(
            "Label",
            "set_align"
        );
    method_bindings.mb_set_autowrap =
        api->rebel_method_bind_get_method(
            "Label",
            "set_autowrap"
        );
    method_bindings.mb_set_clip_text =
        api->rebel_method_bind_get_method(
            "Label",
            "set_clip_text"
        );
    method_bindings.mb_set_lines_skipped =
        api->rebel_method_bind_get_method(
            "Label",
            "set_lines_skipped"
        );
    method_bindings.mb_set_max_lines_visible =
        api->rebel_method_bind_get_method(
            "Label",
            "set_max_lines_visible"
        );
    method_bindings.mb_set_percent_visible =
        api->rebel_method_bind_get_method(
            "Label",
            "set_percent_visible"
        );
    method_bindings.mb_set_text =
        api->rebel_method_bind_get_method(
            "Label",
            "set_text"
        );
    method_bindings.mb_set_uppercase =
        api->rebel_method_bind_get_method(
            "Label",
            "set_uppercase"
        );
    method_bindings.mb_set_valign =
        api->rebel_method_bind_get_method(
            "Label",
            "set_valign"
        );
    method_bindings.mb_set_visible_characters =
        api->rebel_method_bind_get_method(
            "Label",
            "set_visible_characters"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Label");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Label::MethodBindings Label::method_bindings = {};
void* Label::class_tag = nullptr;
} // namespace Rebel
