// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animationnodetransition.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t AnimationNodeTransition::get_cross_fade_time() const {
    return rebel_icall_float(
        method_bindings.mb_get_cross_fade_time,
        (const Object*)this
    );
}

int64_t AnimationNodeTransition::get_enabled_inputs() {
    return rebel_icall_int(
        method_bindings.mb_get_enabled_inputs,
        (const Object*)this
    );
}

String AnimationNodeTransition::get_input_caption(const int64_t input) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_input_caption,
        (const Object*)this,
        input
    );
}

bool AnimationNodeTransition::is_input_set_as_auto_advance(const int64_t input) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_input_set_as_auto_advance,
        (const Object*)this,
        input
    );
}

void AnimationNodeTransition::set_cross_fade_time(const real_t time) {
    rebel_icall_void_float(
        method_bindings.mb_set_cross_fade_time,
        (const Object*)this,
        time
    );
}

void AnimationNodeTransition::set_enabled_inputs(const int64_t amount) {
    rebel_icall_void_int(
        method_bindings.mb_set_enabled_inputs,
        (const Object*)this,
        amount
    );
}

void AnimationNodeTransition::set_input_as_auto_advance(const int64_t input, const bool enable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_input_as_auto_advance,
        (const Object*)this,
        input,
        enable
    );
}

void AnimationNodeTransition::set_input_caption(const int64_t input, const String caption) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_input_caption,
        (const Object*)this,
        input,
        caption
    );
}

AnimationNodeTransition* AnimationNodeTransition::create() {
    return (AnimationNodeTransition*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AnimationNodeTransition")()
         );
}

void AnimationNodeTransition::init_method_bindings() {
    method_bindings.mb_get_cross_fade_time =
        api->rebel_method_bind_get_method(
            "AnimationNodeTransition",
            "get_cross_fade_time"
        );
    method_bindings.mb_get_enabled_inputs =
        api->rebel_method_bind_get_method(
            "AnimationNodeTransition",
            "get_enabled_inputs"
        );
    method_bindings.mb_get_input_caption =
        api->rebel_method_bind_get_method(
            "AnimationNodeTransition",
            "get_input_caption"
        );
    method_bindings.mb_is_input_set_as_auto_advance =
        api->rebel_method_bind_get_method(
            "AnimationNodeTransition",
            "is_input_set_as_auto_advance"
        );
    method_bindings.mb_set_cross_fade_time =
        api->rebel_method_bind_get_method(
            "AnimationNodeTransition",
            "set_cross_fade_time"
        );
    method_bindings.mb_set_enabled_inputs =
        api->rebel_method_bind_get_method(
            "AnimationNodeTransition",
            "set_enabled_inputs"
        );
    method_bindings.mb_set_input_as_auto_advance =
        api->rebel_method_bind_get_method(
            "AnimationNodeTransition",
            "set_input_as_auto_advance"
        );
    method_bindings.mb_set_input_caption =
        api->rebel_method_bind_get_method(
            "AnimationNodeTransition",
            "set_input_caption"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AnimationNodeTransition");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AnimationNodeTransition::MethodBindings AnimationNodeTransition::method_bindings = {};
void* AnimationNodeTransition::class_tag = nullptr;
} // namespace Rebel
