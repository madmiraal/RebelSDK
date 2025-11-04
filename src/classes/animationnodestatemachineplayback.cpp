// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animationnodestatemachineplayback.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t AnimationNodeStateMachinePlayback::get_current_length() const {
    return rebel_icall_float(
        method_bindings.mb_get_current_length,
        (const Object*)this
    );
}

String AnimationNodeStateMachinePlayback::get_current_node() const {
    return rebel_icall_string(
        method_bindings.mb_get_current_node,
        (const Object*)this
    );
}

real_t AnimationNodeStateMachinePlayback::get_current_play_position() const {
    return rebel_icall_float(
        method_bindings.mb_get_current_play_position,
        (const Object*)this
    );
}

PoolStringArray AnimationNodeStateMachinePlayback::get_travel_path() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_travel_path,
        (const Object*)this
    );
}

bool AnimationNodeStateMachinePlayback::is_playing() const {
    return rebel_icall_bool(
        method_bindings.mb_is_playing,
        (const Object*)this
    );
}

void AnimationNodeStateMachinePlayback::start(const String node) {
    rebel_icall_void_string(
        method_bindings.mb_start,
        (const Object*)this,
        node
    );
}

void AnimationNodeStateMachinePlayback::stop() {
    rebel_icall_void(
        method_bindings.mb_stop,
        (const Object*)this
    );
}

void AnimationNodeStateMachinePlayback::travel(const String to_node) {
    rebel_icall_void_string(
        method_bindings.mb_travel,
        (const Object*)this,
        to_node
    );
}

AnimationNodeStateMachinePlayback* AnimationNodeStateMachinePlayback::create() {
    return (AnimationNodeStateMachinePlayback*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AnimationNodeStateMachinePlayback")()
         );
}

void AnimationNodeStateMachinePlayback::init_method_bindings() {
    method_bindings.mb_get_current_length =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachinePlayback",
            "get_current_length"
        );
    method_bindings.mb_get_current_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachinePlayback",
            "get_current_node"
        );
    method_bindings.mb_get_current_play_position =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachinePlayback",
            "get_current_play_position"
        );
    method_bindings.mb_get_travel_path =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachinePlayback",
            "get_travel_path"
        );
    method_bindings.mb_is_playing =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachinePlayback",
            "is_playing"
        );
    method_bindings.mb_start =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachinePlayback",
            "start"
        );
    method_bindings.mb_stop =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachinePlayback",
            "stop"
        );
    method_bindings.mb_travel =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachinePlayback",
            "travel"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AnimationNodeStateMachinePlayback");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AnimationNodeStateMachinePlayback::MethodBindings AnimationNodeStateMachinePlayback::method_bindings = {};
void* AnimationNodeStateMachinePlayback::class_tag = nullptr;
} // namespace Rebel
