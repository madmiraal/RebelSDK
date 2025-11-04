// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animationnodeadd3.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool AnimationNodeAdd3::is_using_sync() const {
    return rebel_icall_bool(
        method_bindings.mb_is_using_sync,
        (const Object*)this
    );
}

void AnimationNodeAdd3::set_use_sync(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_sync,
        (const Object*)this,
        enable
    );
}

AnimationNodeAdd3* AnimationNodeAdd3::create() {
    return (AnimationNodeAdd3*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AnimationNodeAdd3")()
         );
}

void AnimationNodeAdd3::init_method_bindings() {
    method_bindings.mb_is_using_sync =
        api->rebel_method_bind_get_method(
            "AnimationNodeAdd3",
            "is_using_sync"
        );
    method_bindings.mb_set_use_sync =
        api->rebel_method_bind_get_method(
            "AnimationNodeAdd3",
            "set_use_sync"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AnimationNodeAdd3");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AnimationNodeAdd3::MethodBindings AnimationNodeAdd3::method_bindings = {};
void* AnimationNodeAdd3::class_tag = nullptr;
} // namespace Rebel
