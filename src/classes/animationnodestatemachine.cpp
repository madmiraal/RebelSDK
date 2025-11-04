// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animationnodestatemachine.h"

#include "classes/animationnode.h"
#include "classes/animationnodestatemachinetransition.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void AnimationNodeStateMachine::_tree_changed() {
    rebel_icall_void(
        method_bindings.mb__tree_changed,
        (const Object*)this
    );
}

void AnimationNodeStateMachine::add_node(const String name, const Ref<AnimationNode> node, const Vector2 position) {
    rebel_icall_void_string_object_vector2(
        method_bindings.mb_add_node,
        (const Object*)this,
        name,
        node.ptr(),
        position
    );
}

void AnimationNodeStateMachine::add_transition(const String from, const String to, const Ref<AnimationNodeStateMachineTransition> transition) {
    rebel_icall_void_string_string_object(
        method_bindings.mb_add_transition,
        (const Object*)this,
        from,
        to,
        transition.ptr()
    );
}

String AnimationNodeStateMachine::get_end_node() const {
    return rebel_icall_string(
        method_bindings.mb_get_end_node,
        (const Object*)this
    );
}

Vector2 AnimationNodeStateMachine::get_graph_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_graph_offset,
        (const Object*)this
    );
}

Ref<AnimationNode> AnimationNodeStateMachine::get_node(const String name) const {
    return Ref<AnimationNode>::create_ref(rebel_icall_object_string(
        method_bindings.mb_get_node,
        (const Object*)this,
        name
    ));
}

String AnimationNodeStateMachine::get_node_name(const Ref<AnimationNode> node) const {
    return rebel_icall_string_object(
        method_bindings.mb_get_node_name,
        (const Object*)this,
        node.ptr()
    );
}

Vector2 AnimationNodeStateMachine::get_node_position(const String name) const {
    return rebel_icall_vector2_string(
        method_bindings.mb_get_node_position,
        (const Object*)this,
        name
    );
}

String AnimationNodeStateMachine::get_start_node() const {
    return rebel_icall_string(
        method_bindings.mb_get_start_node,
        (const Object*)this
    );
}

Ref<AnimationNodeStateMachineTransition> AnimationNodeStateMachine::get_transition(const int64_t idx) const {
    return Ref<AnimationNodeStateMachineTransition>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_transition,
        (const Object*)this,
        idx
    ));
}

int64_t AnimationNodeStateMachine::get_transition_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_transition_count,
        (const Object*)this
    );
}

String AnimationNodeStateMachine::get_transition_from(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_transition_from,
        (const Object*)this,
        idx
    );
}

String AnimationNodeStateMachine::get_transition_to(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_transition_to,
        (const Object*)this,
        idx
    );
}

bool AnimationNodeStateMachine::has_node(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_node,
        (const Object*)this,
        name
    );
}

bool AnimationNodeStateMachine::has_transition(const String from, const String to) const {
    return rebel_icall_bool_string_string(
        method_bindings.mb_has_transition,
        (const Object*)this,
        from,
        to
    );
}

void AnimationNodeStateMachine::remove_node(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_remove_node,
        (const Object*)this,
        name
    );
}

void AnimationNodeStateMachine::remove_transition(const String from, const String to) {
    rebel_icall_void_string_string(
        method_bindings.mb_remove_transition,
        (const Object*)this,
        from,
        to
    );
}

void AnimationNodeStateMachine::remove_transition_by_index(const int64_t idx) {
    rebel_icall_void_int(
        method_bindings.mb_remove_transition_by_index,
        (const Object*)this,
        idx
    );
}

void AnimationNodeStateMachine::rename_node(const String name, const String new_name) {
    rebel_icall_void_string_string(
        method_bindings.mb_rename_node,
        (const Object*)this,
        name,
        new_name
    );
}

void AnimationNodeStateMachine::replace_node(const String name, const Ref<AnimationNode> node) {
    rebel_icall_void_string_object(
        method_bindings.mb_replace_node,
        (const Object*)this,
        name,
        node.ptr()
    );
}

void AnimationNodeStateMachine::set_end_node(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_end_node,
        (const Object*)this,
        name
    );
}

void AnimationNodeStateMachine::set_graph_offset(const Vector2 offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_graph_offset,
        (const Object*)this,
        offset
    );
}

void AnimationNodeStateMachine::set_node_position(const String name, const Vector2 position) {
    rebel_icall_void_string_vector2(
        method_bindings.mb_set_node_position,
        (const Object*)this,
        name,
        position
    );
}

void AnimationNodeStateMachine::set_start_node(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_start_node,
        (const Object*)this,
        name
    );
}

AnimationNodeStateMachine* AnimationNodeStateMachine::create() {
    return (AnimationNodeStateMachine*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AnimationNodeStateMachine")()
         );
}

void AnimationNodeStateMachine::init_method_bindings() {
    method_bindings.mb__tree_changed =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "_tree_changed"
        );
    method_bindings.mb_add_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "add_node"
        );
    method_bindings.mb_add_transition =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "add_transition"
        );
    method_bindings.mb_get_end_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "get_end_node"
        );
    method_bindings.mb_get_graph_offset =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "get_graph_offset"
        );
    method_bindings.mb_get_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "get_node"
        );
    method_bindings.mb_get_node_name =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "get_node_name"
        );
    method_bindings.mb_get_node_position =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "get_node_position"
        );
    method_bindings.mb_get_start_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "get_start_node"
        );
    method_bindings.mb_get_transition =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "get_transition"
        );
    method_bindings.mb_get_transition_count =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "get_transition_count"
        );
    method_bindings.mb_get_transition_from =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "get_transition_from"
        );
    method_bindings.mb_get_transition_to =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "get_transition_to"
        );
    method_bindings.mb_has_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "has_node"
        );
    method_bindings.mb_has_transition =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "has_transition"
        );
    method_bindings.mb_remove_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "remove_node"
        );
    method_bindings.mb_remove_transition =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "remove_transition"
        );
    method_bindings.mb_remove_transition_by_index =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "remove_transition_by_index"
        );
    method_bindings.mb_rename_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "rename_node"
        );
    method_bindings.mb_replace_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "replace_node"
        );
    method_bindings.mb_set_end_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "set_end_node"
        );
    method_bindings.mb_set_graph_offset =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "set_graph_offset"
        );
    method_bindings.mb_set_node_position =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "set_node_position"
        );
    method_bindings.mb_set_start_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeStateMachine",
            "set_start_node"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AnimationNodeStateMachine");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AnimationNodeStateMachine::MethodBindings AnimationNodeStateMachine::method_bindings = {};
void* AnimationNodeStateMachine::class_tag = nullptr;
} // namespace Rebel
