// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/reference.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool Reference::init_ref() {
    return rebel_icall_bool(
        method_bindings.mb_init_ref,
        (const Object*)this
    );
}

bool Reference::reference() {
    return rebel_icall_bool(
        method_bindings.mb_reference,
        (const Object*)this
    );
}

bool Reference::unreference() {
    return rebel_icall_bool(
        method_bindings.mb_unreference,
        (const Object*)this
    );
}

Reference* Reference::create() {
    return (Reference*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Reference")()
         );
}

void Reference::init_method_bindings() {
    method_bindings.mb_init_ref =
        api->rebel_method_bind_get_method(
            "Reference",
            "init_ref"
        );
    method_bindings.mb_reference =
        api->rebel_method_bind_get_method(
            "Reference",
            "reference"
        );
    method_bindings.mb_unreference =
        api->rebel_method_bind_get_method(
            "Reference",
            "unreference"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Reference");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Reference::MethodBindings Reference::method_bindings = {};
void* Reference::class_tag = nullptr;
} // namespace Rebel
