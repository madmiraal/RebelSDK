// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animationnodeblend2.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool AnimationNodeBlend2::is_using_sync() const {
    return rebel_icall_bool(
        method_bindings.mb_is_using_sync,
        (const Object*)this
    );
}

void AnimationNodeBlend2::set_use_sync(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_sync,
        (const Object*)this,
        enable
    );
}

AnimationNodeBlend2* AnimationNodeBlend2::create() {
    return (AnimationNodeBlend2*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AnimationNodeBlend2")()
         );
}

void AnimationNodeBlend2::init_method_bindings() {
    method_bindings.mb_is_using_sync =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlend2",
            "is_using_sync"
        );
    method_bindings.mb_set_use_sync =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlend2",
            "set_use_sync"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AnimationNodeBlend2");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AnimationNodeBlend2::MethodBindings AnimationNodeBlend2::method_bindings = {};
void* AnimationNodeBlend2::class_tag = nullptr;
} // namespace Rebel
