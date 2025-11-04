// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animationnodeblendtree.h"

#include "classes/animationnode.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void AnimationNodeBlendTree::_node_changed(const String node) {
    rebel_icall_void_string(
        method_bindings.mb__node_changed,
        (const Object*)this,
        node
    );
}

void AnimationNodeBlendTree::_tree_changed() {
    rebel_icall_void(
        method_bindings.mb__tree_changed,
        (const Object*)this
    );
}

void AnimationNodeBlendTree::add_node(const String name, const Ref<AnimationNode> node, const Vector2 position) {
    rebel_icall_void_string_object_vector2(
        method_bindings.mb_add_node,
        (const Object*)this,
        name,
        node.ptr(),
        position
    );
}

void AnimationNodeBlendTree::connect_node(const String input_node, const int64_t input_index, const String output_node) {
    rebel_icall_void_string_int_string(
        method_bindings.mb_connect_node,
        (const Object*)this,
        input_node,
        input_index,
        output_node
    );
}

void AnimationNodeBlendTree::disconnect_node(const String input_node, const int64_t input_index) {
    rebel_icall_void_string_int(
        method_bindings.mb_disconnect_node,
        (const Object*)this,
        input_node,
        input_index
    );
}

Vector2 AnimationNodeBlendTree::get_graph_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_graph_offset,
        (const Object*)this
    );
}

Ref<AnimationNode> AnimationNodeBlendTree::get_node(const String name) const {
    return Ref<AnimationNode>::create_ref(rebel_icall_object_string(
        method_bindings.mb_get_node,
        (const Object*)this,
        name
    ));
}

Vector2 AnimationNodeBlendTree::get_node_position(const String name) const {
    return rebel_icall_vector2_string(
        method_bindings.mb_get_node_position,
        (const Object*)this,
        name
    );
}

bool AnimationNodeBlendTree::has_node(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_node,
        (const Object*)this,
        name
    );
}

void AnimationNodeBlendTree::remove_node(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_remove_node,
        (const Object*)this,
        name
    );
}

void AnimationNodeBlendTree::rename_node(const String name, const String new_name) {
    rebel_icall_void_string_string(
        method_bindings.mb_rename_node,
        (const Object*)this,
        name,
        new_name
    );
}

void AnimationNodeBlendTree::set_graph_offset(const Vector2 offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_graph_offset,
        (const Object*)this,
        offset
    );
}

void AnimationNodeBlendTree::set_node_position(const String name, const Vector2 position) {
    rebel_icall_void_string_vector2(
        method_bindings.mb_set_node_position,
        (const Object*)this,
        name,
        position
    );
}

AnimationNodeBlendTree* AnimationNodeBlendTree::create() {
    return (AnimationNodeBlendTree*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AnimationNodeBlendTree")()
         );
}

void AnimationNodeBlendTree::init_method_bindings() {
    method_bindings.mb__node_changed =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendTree",
            "_node_changed"
        );
    method_bindings.mb__tree_changed =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendTree",
            "_tree_changed"
        );
    method_bindings.mb_add_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendTree",
            "add_node"
        );
    method_bindings.mb_connect_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendTree",
            "connect_node"
        );
    method_bindings.mb_disconnect_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendTree",
            "disconnect_node"
        );
    method_bindings.mb_get_graph_offset =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendTree",
            "get_graph_offset"
        );
    method_bindings.mb_get_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendTree",
            "get_node"
        );
    method_bindings.mb_get_node_position =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendTree",
            "get_node_position"
        );
    method_bindings.mb_has_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendTree",
            "has_node"
        );
    method_bindings.mb_remove_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendTree",
            "remove_node"
        );
    method_bindings.mb_rename_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendTree",
            "rename_node"
        );
    method_bindings.mb_set_graph_offset =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendTree",
            "set_graph_offset"
        );
    method_bindings.mb_set_node_position =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendTree",
            "set_node_position"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AnimationNodeBlendTree");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AnimationNodeBlendTree::MethodBindings AnimationNodeBlendTree::method_bindings = {};
void* AnimationNodeBlendTree::class_tag = nullptr;
} // namespace Rebel
