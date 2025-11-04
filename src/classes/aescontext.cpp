// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/aescontext.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void AESContext::finish() {
    rebel_icall_void(
        method_bindings.mb_finish,
        (const Object*)this
    );
}

PoolByteArray AESContext::get_iv_state() {
    return rebel_icall_poolbytearray(
        method_bindings.mb_get_iv_state,
        (const Object*)this
    );
}

Error AESContext::start(const int64_t mode, const PoolByteArray key, const PoolByteArray iv) {
    return (Error)rebel_icall_int_int_poolbytearray_poolbytearray(
        method_bindings.mb_start,
        (const Object*)this,
        mode,
        key,
        iv
    );
}

PoolByteArray AESContext::update(const PoolByteArray src) {
    return rebel_icall_poolbytearray_poolbytearray(
        method_bindings.mb_update,
        (const Object*)this,
        src
    );
}

AESContext* AESContext::create() {
    return (AESContext*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AESContext")()
         );
}

void AESContext::init_method_bindings() {
    method_bindings.mb_finish =
        api->rebel_method_bind_get_method(
            "AESContext",
            "finish"
        );
    method_bindings.mb_get_iv_state =
        api->rebel_method_bind_get_method(
            "AESContext",
            "get_iv_state"
        );
    method_bindings.mb_start =
        api->rebel_method_bind_get_method(
            "AESContext",
            "start"
        );
    method_bindings.mb_update =
        api->rebel_method_bind_get_method(
            "AESContext",
            "update"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AESContext");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AESContext::MethodBindings AESContext::method_bindings = {};
void* AESContext::class_tag = nullptr;
} // namespace Rebel
