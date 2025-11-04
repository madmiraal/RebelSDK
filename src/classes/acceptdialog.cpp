// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/acceptdialog.h"

#include "classes/button.h"
#include "classes/control.h"
#include "classes/icalls.h"
#include "classes/label.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void AcceptDialog::_builtin_text_entered(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__builtin_text_entered,
        (const Object*)this,
        arg0
    );
}

void AcceptDialog::_custom_action(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__custom_action,
        (const Object*)this,
        arg0
    );
}

void AcceptDialog::_ok() {
    rebel_icall_void(
        method_bindings.mb__ok,
        (const Object*)this
    );
}

Button* AcceptDialog::add_button(const String text, const bool right, const String action) {
    return (Button*)rebel_icall_object_string_bool_string(
        method_bindings.mb_add_button,
        (const Object*)this,
        text,
        right,
        action
    );
}

Button* AcceptDialog::add_cancel(const String name) {
    return (Button*)rebel_icall_object_string(
        method_bindings.mb_add_cancel,
        (const Object*)this,
        name
    );
}

bool AcceptDialog::get_hide_on_ok() const {
    return rebel_icall_bool(
        method_bindings.mb_get_hide_on_ok,
        (const Object*)this
    );
}

Label* AcceptDialog::get_label() {
    return (Label*)rebel_icall_object(
        method_bindings.mb_get_label,
        (const Object*)this
    );
}

Button* AcceptDialog::get_ok() {
    return (Button*)rebel_icall_object(
        method_bindings.mb_get_ok,
        (const Object*)this
    );
}

String AcceptDialog::get_text() const {
    return rebel_icall_string(
        method_bindings.mb_get_text,
        (const Object*)this
    );
}

bool AcceptDialog::has_autowrap() {
    return rebel_icall_bool(
        method_bindings.mb_has_autowrap,
        (const Object*)this
    );
}

void AcceptDialog::register_text_enter(const Node* line_edit) {
    rebel_icall_void_object(
        method_bindings.mb_register_text_enter,
        (const Object*)this,
        line_edit
    );
}

void AcceptDialog::remove_button(const Control* button) {
    rebel_icall_void_object(
        method_bindings.mb_remove_button,
        (const Object*)this,
        button
    );
}

void AcceptDialog::set_autowrap(const bool autowrap) {
    rebel_icall_void_bool(
        method_bindings.mb_set_autowrap,
        (const Object*)this,
        autowrap
    );
}

void AcceptDialog::set_hide_on_ok(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_hide_on_ok,
        (const Object*)this,
        enabled
    );
}

void AcceptDialog::set_text(const String text) {
    rebel_icall_void_string(
        method_bindings.mb_set_text,
        (const Object*)this,
        text
    );
}

AcceptDialog* AcceptDialog::create() {
    return (AcceptDialog*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AcceptDialog")()
         );
}

void AcceptDialog::init_method_bindings() {
    method_bindings.mb__builtin_text_entered =
        api->rebel_method_bind_get_method(
            "AcceptDialog",
            "_builtin_text_entered"
        );
    method_bindings.mb__custom_action =
        api->rebel_method_bind_get_method(
            "AcceptDialog",
            "_custom_action"
        );
    method_bindings.mb__ok =
        api->rebel_method_bind_get_method(
            "AcceptDialog",
            "_ok"
        );
    method_bindings.mb_add_button =
        api->rebel_method_bind_get_method(
            "AcceptDialog",
            "add_button"
        );
    method_bindings.mb_add_cancel =
        api->rebel_method_bind_get_method(
            "AcceptDialog",
            "add_cancel"
        );
    method_bindings.mb_get_hide_on_ok =
        api->rebel_method_bind_get_method(
            "AcceptDialog",
            "get_hide_on_ok"
        );
    method_bindings.mb_get_label =
        api->rebel_method_bind_get_method(
            "AcceptDialog",
            "get_label"
        );
    method_bindings.mb_get_ok =
        api->rebel_method_bind_get_method(
            "AcceptDialog",
            "get_ok"
        );
    method_bindings.mb_get_text =
        api->rebel_method_bind_get_method(
            "AcceptDialog",
            "get_text"
        );
    method_bindings.mb_has_autowrap =
        api->rebel_method_bind_get_method(
            "AcceptDialog",
            "has_autowrap"
        );
    method_bindings.mb_register_text_enter =
        api->rebel_method_bind_get_method(
            "AcceptDialog",
            "register_text_enter"
        );
    method_bindings.mb_remove_button =
        api->rebel_method_bind_get_method(
            "AcceptDialog",
            "remove_button"
        );
    method_bindings.mb_set_autowrap =
        api->rebel_method_bind_get_method(
            "AcceptDialog",
            "set_autowrap"
        );
    method_bindings.mb_set_hide_on_ok =
        api->rebel_method_bind_get_method(
            "AcceptDialog",
            "set_hide_on_ok"
        );
    method_bindings.mb_set_text =
        api->rebel_method_bind_get_method(
            "AcceptDialog",
            "set_text"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AcceptDialog");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AcceptDialog::MethodBindings AcceptDialog::method_bindings = {};
void* AcceptDialog::class_tag = nullptr;
} // namespace Rebel
