// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animationnodestatemachinetransition.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String AnimationNodeStateMachineTransition::get_advance_condition() const {
    return rebel_icall_string(
        method_bindings.mb_get_advance_condition,
        (const Object*)this
    );
}

int64_t AnimationNodeStateMachineTransition::get_priority() const {
    return rebel_icall_int(
        method_bindings.mb_get_priority,
        (const Object*)this
    );
}

AnimationNodeStateMachineTransition::SwitchMode AnimationNodeStateMachineTransition::get_switch_mode() const {
    return (AnimationNodeStateMachineTransition::SwitchMode)rebel_icall_int(
        method_bindings.mb_get_switch_mode,
        (const Object*)this
    );
}

real_t AnimationNodeStateMachineTransition::get_xfade_time() const {
    return rebel_icall_float(
        method_bindings.mb_get_xfade_time,
        (const Object*)this
    );
}

bool AnimationNodeStateMachineTransition::has_auto_advance() const {
    return rebel_icall_bool(
        method_bindings.mb_has_auto_advance,
        (const Object*)this
    );
}

bool AnimationNodeStateMachineTransition::is_disabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_disabled,
        (const Object*)this
    );
}

void AnimationNodeStateMachineTransition::set_advance_condition(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_advance_condition,
        (const Object*)this,
        name
    );
}

void AnimationNodeStateMachineTransition::set_auto_advance(const bool auto_advance) {
    rebel_icall_void_bool(
        method_bindings.mb_set_auto_advance,
        (const Object*)this,
        auto_advance
    );
}

void AnimationNodeStateMachineTransition::set_disabled(const bool disabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_disabled,
        (const Object*)this,
        disabled
    );
}

void AnimationNodeStateMachineTransition::set_priority(const int64_t priority) {
    rebel_icall_void_int(
        method_bindings.mb_set_priority,
        (const Object*)this,
        priority
    );
}

void AnimationNodeStateMachineTransition::set_switch_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_switch_mode,
        (const Object*)this,
        mode
    );
}

void AnimationNodeStateMachineTransition::set_xfade_time(const real_t secs) {
    rebel_icall_void_float(
        method_bindings.mb_set_xfade_time,
        (const Object*)this,
        secs
    );
}

AnimationNodeStateMachineTransition* AnimationNodeStateMachineTransition::create() {
    return (AnimationNodeStateMachineTransition*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AnimationNodeStateMachineTransition")()
         );
}

void AnimationNodeStateMachineTransition::init_method_bindings() {
    method_bindings.mb_get_advance_condition =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachineTransition",
            "get_advance_condition"
        );
    method_bindings.mb_get_priority =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachineTransition",
            "get_priority"
        );
    method_bindings.mb_get_switch_mode =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachineTransition",
            "get_switch_mode"
        );
    method_bindings.mb_get_xfade_time =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachineTransition",
            "get_xfade_time"
        );
    method_bindings.mb_has_auto_advance =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachineTransition",
            "has_auto_advance"
        );
    method_bindings.mb_is_disabled =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachineTransition",
            "is_disabled"
        );
    method_bindings.mb_set_advance_condition =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachineTransition",
            "set_advance_condition"
        );
    method_bindings.mb_set_auto_advance =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachineTransition",
            "set_auto_advance"
        );
    method_bindings.mb_set_disabled =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachineTransition",
            "set_disabled"
        );
    method_bindings.mb_set_priority =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachineTransition",
            "set_priority"
        );
    method_bindings.mb_set_switch_mode =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachineTransition",
            "set_switch_mode"
        );
    method_bindings.mb_set_xfade_time =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachineTransition",
            "set_xfade_time"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AnimationNodeStateMachineTransition");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AnimationNodeStateMachineTransition::MethodBindings AnimationNodeStateMachineTransition::method_bindings = {};
void* AnimationNodeStateMachineTransition::class_tag = nullptr;
} // namespace Rebel
