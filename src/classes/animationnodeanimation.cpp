// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animationnodeanimation.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String AnimationNodeAnimation::get_animation() const {
    return rebel_icall_string(
        method_bindings.mb_get_animation,
        (const Object*)this
    );
}

void AnimationNodeAnimation::set_animation(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_animation,
        (const Object*)this,
        name
    );
}

AnimationNodeAnimation* AnimationNodeAnimation::create() {
    return (AnimationNodeAnimation*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AnimationNodeAnimation")()
         );
}

void AnimationNodeAnimation::init_method_bindings() {
    method_bindings.mb_get_animation =
        api->rebel_method_bind_get_method(
            "AnimationNodeAnimation",
            "get_animation"
        );
    method_bindings.mb_set_animation =
        api->rebel_method_bind_get_method(
            "AnimationNodeAnimation",
            "set_animation"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AnimationNodeAnimation");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AnimationNodeAnimation::MethodBindings AnimationNodeAnimation::method_bindings = {};
void* AnimationNodeAnimation::class_tag = nullptr;
} // namespace Rebel
