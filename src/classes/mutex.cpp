// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/mutex.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Mutex::lock() {
    rebel_icall_void(
        method_bindings.mb_lock,
        (const Object*)this
    );
}

Error Mutex::try_lock() {
    return (Error)rebel_icall_int(
        method_bindings.mb_try_lock,
        (const Object*)this
    );
}

void Mutex::unlock() {
    rebel_icall_void(
        method_bindings.mb_unlock,
        (const Object*)this
    );
}

Mutex* Mutex::create() {
    return (Mutex*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"_Mutex")()
         );
}

void Mutex::init_method_bindings() {
    method_bindings.mb_lock =
        api->rebel_method_bind_get_method(
            "_Mutex",
            "lock"
        );
    method_bindings.mb_try_lock =
        api->rebel_method_bind_get_method(
            "_Mutex",
            "try_lock"
        );
    method_bindings.mb_unlock =
        api->rebel_method_bind_get_method(
            "_Mutex",
            "unlock"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "_Mutex");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Mutex::MethodBindings Mutex::method_bindings = {};
void* Mutex::class_tag = nullptr;
} // namespace Rebel
