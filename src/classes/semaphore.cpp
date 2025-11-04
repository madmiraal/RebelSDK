// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/semaphore.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Error Semaphore::post() {
    return (Error)rebel_icall_int(
        method_bindings.mb_post,
        (const Object*)this
    );
}

Error Semaphore::wait() {
    return (Error)rebel_icall_int(
        method_bindings.mb_wait,
        (const Object*)this
    );
}

Semaphore* Semaphore::create() {
    return (Semaphore*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"_Semaphore")()
         );
}

void Semaphore::init_method_bindings() {
    method_bindings.mb_post =
        api->rebel_method_bind_get_method(
            "_Semaphore",
            "post"
        );
    method_bindings.mb_wait =
        api->rebel_method_bind_get_method(
            "_Semaphore",
            "wait"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "_Semaphore");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Semaphore::MethodBindings Semaphore::method_bindings = {};
void* Semaphore::class_tag = nullptr;
} // namespace Rebel
