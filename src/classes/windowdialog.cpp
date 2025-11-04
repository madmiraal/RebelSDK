// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/windowdialog.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/texturebutton.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void WindowDialog::_closed() {
    rebel_icall_void(
        method_bindings.mb__closed,
        (const Object*)this
    );
}

void WindowDialog::_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

TextureButton* WindowDialog::get_close_button() {
    return (TextureButton*)rebel_icall_object(
        method_bindings.mb_get_close_button,
        (const Object*)this
    );
}

bool WindowDialog::get_resizable() const {
    return rebel_icall_bool(
        method_bindings.mb_get_resizable,
        (const Object*)this
    );
}

String WindowDialog::get_title() const {
    return rebel_icall_string(
        method_bindings.mb_get_title,
        (const Object*)this
    );
}

void WindowDialog::set_resizable(const bool resizable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_resizable,
        (const Object*)this,
        resizable
    );
}

void WindowDialog::set_title(const String title) {
    rebel_icall_void_string(
        method_bindings.mb_set_title,
        (const Object*)this,
        title
    );
}

WindowDialog* WindowDialog::create() {
    return (WindowDialog*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"WindowDialog")()
         );
}

void WindowDialog::init_method_bindings() {
    method_bindings.mb__closed =
        api->rebel_method_bind_get_method(
            "WindowDialog",
            "_closed"
        );
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "WindowDialog",
            "_gui_input"
        );
    method_bindings.mb_get_close_button =
        api->rebel_method_bind_get_method(
            "WindowDialog",
            "get_close_button"
        );
    method_bindings.mb_get_resizable =
        api->rebel_method_bind_get_method(
            "WindowDialog",
            "get_resizable"
        );
    method_bindings.mb_get_title =
        api->rebel_method_bind_get_method(
            "WindowDialog",
            "get_title"
        );
    method_bindings.mb_set_resizable =
        api->rebel_method_bind_get_method(
            "WindowDialog",
            "set_resizable"
        );
    method_bindings.mb_set_title =
        api->rebel_method_bind_get_method(
            "WindowDialog",
            "set_title"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "WindowDialog");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

WindowDialog::MethodBindings WindowDialog::method_bindings = {};
void* WindowDialog::class_tag = nullptr;
} // namespace Rebel
