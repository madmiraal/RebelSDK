// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/listener2d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Listener2D::clear_current() {
    rebel_icall_void(
        method_bindings.mb_clear_current,
        (const Object*)this
    );
}

bool Listener2D::is_current() const {
    return rebel_icall_bool(
        method_bindings.mb_is_current,
        (const Object*)this
    );
}

void Listener2D::make_current() {
    rebel_icall_void(
        method_bindings.mb_make_current,
        (const Object*)this
    );
}

Listener2D* Listener2D::create() {
    return (Listener2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Listener2D")()
         );
}

void Listener2D::init_method_bindings() {
    method_bindings.mb_clear_current =
        api->rebel_method_bind_get_method(
            "Listener2D",
            "clear_current"
        );
    method_bindings.mb_is_current =
        api->rebel_method_bind_get_method(
            "Listener2D",
            "is_current"
        );
    method_bindings.mb_make_current =
        api->rebel_method_bind_get_method(
            "Listener2D",
            "make_current"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Listener2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Listener2D::MethodBindings Listener2D::method_bindings = {};
void* Listener2D::class_tag = nullptr;
} // namespace Rebel
