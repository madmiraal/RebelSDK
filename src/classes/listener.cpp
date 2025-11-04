// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/listener.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Listener::clear_current() {
    rebel_icall_void(
        method_bindings.mb_clear_current,
        (const Object*)this
    );
}

Transform Listener::get_listener_transform() const {
    return rebel_icall_transform(
        method_bindings.mb_get_listener_transform,
        (const Object*)this
    );
}

bool Listener::is_current() const {
    return rebel_icall_bool(
        method_bindings.mb_is_current,
        (const Object*)this
    );
}

void Listener::make_current() {
    rebel_icall_void(
        method_bindings.mb_make_current,
        (const Object*)this
    );
}

Listener* Listener::create() {
    return (Listener*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Listener")()
         );
}

void Listener::init_method_bindings() {
    method_bindings.mb_clear_current =
        api->rebel_method_bind_get_method(
            "Listener",
            "clear_current"
        );
    method_bindings.mb_get_listener_transform =
        api->rebel_method_bind_get_method(
            "Listener",
            "get_listener_transform"
        );
    method_bindings.mb_is_current =
        api->rebel_method_bind_get_method(
            "Listener",
            "is_current"
        );
    method_bindings.mb_make_current =
        api->rebel_method_bind_get_method(
            "Listener",
            "make_current"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Listener");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Listener::MethodBindings Listener::method_bindings = {};
void* Listener::class_tag = nullptr;
} // namespace Rebel
