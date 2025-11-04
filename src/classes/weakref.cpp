// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/weakref.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Variant WeakRef::get_ref() const {
    return rebel_icall_variant(
        method_bindings.mb_get_ref,
        (const Object*)this
    );
}

WeakRef* WeakRef::create() {
    return (WeakRef*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"WeakRef")()
         );
}

void WeakRef::init_method_bindings() {
    method_bindings.mb_get_ref =
        api->rebel_method_bind_get_method(
            "WeakRef",
            "get_ref"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "WeakRef");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

WeakRef::MethodBindings WeakRef::method_bindings = {};
void* WeakRef::class_tag = nullptr;
} // namespace Rebel
