// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/spinbox.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/lineedit.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void SpinBox::_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void SpinBox::_line_edit_focus_exit() {
    rebel_icall_void(
        method_bindings.mb__line_edit_focus_exit,
        (const Object*)this
    );
}

void SpinBox::_line_edit_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__line_edit_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void SpinBox::_range_click_timeout() {
    rebel_icall_void(
        method_bindings.mb__range_click_timeout,
        (const Object*)this
    );
}

void SpinBox::_text_entered(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__text_entered,
        (const Object*)this,
        arg0
    );
}

void SpinBox::apply() {
    rebel_icall_void(
        method_bindings.mb_apply,
        (const Object*)this
    );
}

LineEdit::Align SpinBox::get_align() const {
    return (LineEdit::Align)rebel_icall_int(
        method_bindings.mb_get_align,
        (const Object*)this
    );
}

LineEdit* SpinBox::get_line_edit() {
    return (LineEdit*)rebel_icall_object(
        method_bindings.mb_get_line_edit,
        (const Object*)this
    );
}

String SpinBox::get_prefix() const {
    return rebel_icall_string(
        method_bindings.mb_get_prefix,
        (const Object*)this
    );
}

String SpinBox::get_suffix() const {
    return rebel_icall_string(
        method_bindings.mb_get_suffix,
        (const Object*)this
    );
}

bool SpinBox::is_editable() const {
    return rebel_icall_bool(
        method_bindings.mb_is_editable,
        (const Object*)this
    );
}

void SpinBox::set_align(const int64_t align) {
    rebel_icall_void_int(
        method_bindings.mb_set_align,
        (const Object*)this,
        align
    );
}

void SpinBox::set_editable(const bool editable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_editable,
        (const Object*)this,
        editable
    );
}

void SpinBox::set_prefix(const String prefix) {
    rebel_icall_void_string(
        method_bindings.mb_set_prefix,
        (const Object*)this,
        prefix
    );
}

void SpinBox::set_suffix(const String suffix) {
    rebel_icall_void_string(
        method_bindings.mb_set_suffix,
        (const Object*)this,
        suffix
    );
}

SpinBox* SpinBox::create() {
    return (SpinBox*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"SpinBox")()
         );
}

void SpinBox::init_method_bindings() {
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "SpinBox",
            "_gui_input"
        );
    method_bindings.mb__line_edit_focus_exit =
        api->rebel_method_bind_get_method(
            "SpinBox",
            "_line_edit_focus_exit"
        );
    method_bindings.mb__line_edit_input =
        api->rebel_method_bind_get_method(
            "SpinBox",
            "_line_edit_input"
        );
    method_bindings.mb__range_click_timeout =
        api->rebel_method_bind_get_method(
            "SpinBox",
            "_range_click_timeout"
        );
    method_bindings.mb__text_entered =
        api->rebel_method_bind_get_method(
            "SpinBox",
            "_text_entered"
        );
    method_bindings.mb_apply =
        api->rebel_method_bind_get_method(
            "SpinBox",
            "apply"
        );
    method_bindings.mb_get_align =
        api->rebel_method_bind_get_method(
            "SpinBox",
            "get_align"
        );
    method_bindings.mb_get_line_edit =
        api->rebel_method_bind_get_method(
            "SpinBox",
            "get_line_edit"
        );
    method_bindings.mb_get_prefix =
        api->rebel_method_bind_get_method(
            "SpinBox",
            "get_prefix"
        );
    method_bindings.mb_get_suffix =
        api->rebel_method_bind_get_method(
            "SpinBox",
            "get_suffix"
        );
    method_bindings.mb_is_editable =
        api->rebel_method_bind_get_method(
            "SpinBox",
            "is_editable"
        );
    method_bindings.mb_set_align =
        api->rebel_method_bind_get_method(
            "SpinBox",
            "set_align"
        );
    method_bindings.mb_set_editable =
        api->rebel_method_bind_get_method(
            "SpinBox",
            "set_editable"
        );
    method_bindings.mb_set_prefix =
        api->rebel_method_bind_get_method(
            "SpinBox",
            "set_prefix"
        );
    method_bindings.mb_set_suffix =
        api->rebel_method_bind_get_method(
            "SpinBox",
            "set_suffix"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "SpinBox");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

SpinBox::MethodBindings SpinBox::method_bindings = {};
void* SpinBox::class_tag = nullptr;
} // namespace Rebel
