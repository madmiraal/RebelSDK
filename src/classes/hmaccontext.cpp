// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/hmaccontext.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
PoolByteArray HMACContext::finish() {
    return rebel_icall_poolbytearray(
        method_bindings.mb_finish,
        (const Object*)this
    );
}

Error HMACContext::start(const int64_t hash_type, const PoolByteArray key) {
    return (Error)rebel_icall_int_int_poolbytearray(
        method_bindings.mb_start,
        (const Object*)this,
        hash_type,
        key
    );
}

Error HMACContext::update(const PoolByteArray data) {
    return (Error)rebel_icall_int_poolbytearray(
        method_bindings.mb_update,
        (const Object*)this,
        data
    );
}

HMACContext* HMACContext::create() {
    return (HMACContext*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"HMACContext")()
         );
}

void HMACContext::init_method_bindings() {
    method_bindings.mb_finish =
        api->rebel_method_bind_get_method(
            "HMACContext",
            "finish"
        );
    method_bindings.mb_start =
        api->rebel_method_bind_get_method(
            "HMACContext",
            "start"
        );
    method_bindings.mb_update =
        api->rebel_method_bind_get_method(
            "HMACContext",
            "update"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "HMACContext");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

HMACContext::MethodBindings HMACContext::method_bindings = {};
void* HMACContext::class_tag = nullptr;
} // namespace Rebel
