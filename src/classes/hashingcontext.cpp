// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/hashingcontext.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
PoolByteArray HashingContext::finish() {
    return rebel_icall_poolbytearray(
        method_bindings.mb_finish,
        (const Object*)this
    );
}

Error HashingContext::start(const int64_t type) {
    return (Error)rebel_icall_int_int(
        method_bindings.mb_start,
        (const Object*)this,
        type
    );
}

Error HashingContext::update(const PoolByteArray chunk) {
    return (Error)rebel_icall_int_poolbytearray(
        method_bindings.mb_update,
        (const Object*)this,
        chunk
    );
}

HashingContext* HashingContext::create() {
    return (HashingContext*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"HashingContext")()
         );
}

void HashingContext::init_method_bindings() {
    method_bindings.mb_finish =
        api->rebel_method_bind_get_method(
            "HashingContext",
            "finish"
        );
    method_bindings.mb_start =
        api->rebel_method_bind_get_method(
            "HashingContext",
            "start"
        );
    method_bindings.mb_update =
        api->rebel_method_bind_get_method(
            "HashingContext",
            "update"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "HashingContext");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

HashingContext::MethodBindings HashingContext::method_bindings = {};
void* HashingContext::class_tag = nullptr;
} // namespace Rebel
