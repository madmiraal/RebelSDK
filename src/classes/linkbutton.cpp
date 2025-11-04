// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/linkbutton.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String LinkButton::get_text() const {
    return rebel_icall_string(
        method_bindings.mb_get_text,
        (const Object*)this
    );
}

LinkButton::UnderlineMode LinkButton::get_underline_mode() const {
    return (LinkButton::UnderlineMode)rebel_icall_int(
        method_bindings.mb_get_underline_mode,
        (const Object*)this
    );
}

void LinkButton::set_text(const String text) {
    rebel_icall_void_string(
        method_bindings.mb_set_text,
        (const Object*)this,
        text
    );
}

void LinkButton::set_underline_mode(const int64_t underline_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_underline_mode,
        (const Object*)this,
        underline_mode
    );
}

LinkButton* LinkButton::create() {
    return (LinkButton*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"LinkButton")()
         );
}

void LinkButton::init_method_bindings() {
    method_bindings.mb_get_text =
        api->rebel_method_bind_get_method(
            "LinkButton",
            "get_text"
        );
    method_bindings.mb_get_underline_mode =
        api->rebel_method_bind_get_method(
            "LinkButton",
            "get_underline_mode"
        );
    method_bindings.mb_set_text =
        api->rebel_method_bind_get_method(
            "LinkButton",
            "set_text"
        );
    method_bindings.mb_set_underline_mode =
        api->rebel_method_bind_get_method(
            "LinkButton",
            "set_underline_mode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "LinkButton");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

LinkButton::MethodBindings LinkButton::method_bindings = {};
void* LinkButton::class_tag = nullptr;
} // namespace Rebel
