// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/thread.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String Thread::get_id() const {
    return rebel_icall_string(
        method_bindings.mb_get_id,
        (const Object*)this
    );
}

bool Thread::is_active() const {
    return rebel_icall_bool(
        method_bindings.mb_is_active,
        (const Object*)this
    );
}

bool Thread::is_alive() const {
    return rebel_icall_bool(
        method_bindings.mb_is_alive,
        (const Object*)this
    );
}

Error Thread::start(const Object* instance, const String method, const Variant userdata, const int64_t priority) {
    return (Error)rebel_icall_int_object_string_variant_int(
        method_bindings.mb_start,
        (const Object*)this,
        instance,
        method,
        userdata,
        priority
    );
}

Variant Thread::wait_to_finish() {
    return rebel_icall_variant(
        method_bindings.mb_wait_to_finish,
        (const Object*)this
    );
}

Thread* Thread::create() {
    return (Thread*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"_Thread")()
         );
}

void Thread::init_method_bindings() {
    method_bindings.mb_get_id =
        api->rebel_method_bind_get_method(
            "_Thread",
            "get_id"
        );
    method_bindings.mb_is_active =
        api->rebel_method_bind_get_method(
            "_Thread",
            "is_active"
        );
    method_bindings.mb_is_alive =
        api->rebel_method_bind_get_method(
            "_Thread",
            "is_alive"
        );
    method_bindings.mb_start =
        api->rebel_method_bind_get_method(
            "_Thread",
            "start"
        );
    method_bindings.mb_wait_to_finish =
        api->rebel_method_bind_get_method(
            "_Thread",
            "wait_to_finish"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "_Thread");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Thread::MethodBindings Thread::method_bindings = {};
void* Thread::class_tag = nullptr;
} // namespace Rebel
