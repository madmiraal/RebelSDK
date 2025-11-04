// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/arvrorigin.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t ARVROrigin::get_world_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_world_scale,
        (const Object*)this
    );
}

void ARVROrigin::set_world_scale(const real_t world_scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_world_scale,
        (const Object*)this,
        world_scale
    );
}

ARVROrigin* ARVROrigin::create() {
    return (ARVROrigin*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ARVROrigin")()
         );
}

void ARVROrigin::init_method_bindings() {
    method_bindings.mb_get_world_scale =
        api->rebel_method_bind_get_method(
            "ARVROrigin",
            "get_world_scale"
        );
    method_bindings.mb_set_world_scale =
        api->rebel_method_bind_get_method(
            "ARVROrigin",
            "set_world_scale"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ARVROrigin");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ARVROrigin::MethodBindings ARVROrigin::method_bindings = {};
void* ARVROrigin::class_tag = nullptr;
} // namespace Rebel
