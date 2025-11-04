// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/encodedobjectasid.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t EncodedObjectAsID::get_object_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_object_id,
        (const Object*)this
    );
}

void EncodedObjectAsID::set_object_id(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb_set_object_id,
        (const Object*)this,
        id
    );
}

EncodedObjectAsID* EncodedObjectAsID::create() {
    return (EncodedObjectAsID*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"EncodedObjectAsID")()
         );
}

void EncodedObjectAsID::init_method_bindings() {
    method_bindings.mb_get_object_id =
        api->rebel_method_bind_get_method(
            "EncodedObjectAsID",
            "get_object_id"
        );
    method_bindings.mb_set_object_id =
        api->rebel_method_bind_get_method(
            "EncodedObjectAsID",
            "set_object_id"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EncodedObjectAsID");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EncodedObjectAsID::MethodBindings EncodedObjectAsID::method_bindings = {};
void* EncodedObjectAsID::class_tag = nullptr;
} // namespace Rebel
