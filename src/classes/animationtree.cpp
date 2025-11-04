// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animationtree.h"

#include "classes/animationnode.h"
#include "classes/icalls.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void AnimationTree::_clear_caches() {
    rebel_icall_void(
        method_bindings.mb__clear_caches,
        (const Object*)this
    );
}

void AnimationTree::_node_removed(const Node* arg0) {
    rebel_icall_void_object(
        method_bindings.mb__node_removed,
        (const Object*)this,
        arg0
    );
}

void AnimationTree::_tree_changed() {
    rebel_icall_void(
        method_bindings.mb__tree_changed,
        (const Object*)this
    );
}

void AnimationTree::_update_properties() {
    rebel_icall_void(
        method_bindings.mb__update_properties,
        (const Object*)this
    );
}

void AnimationTree::advance(const real_t delta) {
    rebel_icall_void_float(
        method_bindings.mb_advance,
        (const Object*)this,
        delta
    );
}

NodePath AnimationTree::get_animation_player() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_animation_player,
        (const Object*)this
    );
}

AnimationTree::AnimationProcessMode AnimationTree::get_process_mode() const {
    return (AnimationTree::AnimationProcessMode)rebel_icall_int(
        method_bindings.mb_get_process_mode,
        (const Object*)this
    );
}

NodePath AnimationTree::get_root_motion_track() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_root_motion_track,
        (const Object*)this
    );
}

Transform AnimationTree::get_root_motion_transform() const {
    return rebel_icall_transform(
        method_bindings.mb_get_root_motion_transform,
        (const Object*)this
    );
}

Ref<AnimationNode> AnimationTree::get_tree_root() const {
    return Ref<AnimationNode>::create_ref(rebel_icall_object(
        method_bindings.mb_get_tree_root,
        (const Object*)this
    ));
}

bool AnimationTree::is_active() const {
    return rebel_icall_bool(
        method_bindings.mb_is_active,
        (const Object*)this
    );
}

void AnimationTree::rename_parameter(const String old_name, const String new_name) {
    rebel_icall_void_string_string(
        method_bindings.mb_rename_parameter,
        (const Object*)this,
        old_name,
        new_name
    );
}

void AnimationTree::set_active(const bool active) {
    rebel_icall_void_bool(
        method_bindings.mb_set_active,
        (const Object*)this,
        active
    );
}

void AnimationTree::set_animation_player(const NodePath root) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_animation_player,
        (const Object*)this,
        root
    );
}

void AnimationTree::set_process_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_process_mode,
        (const Object*)this,
        mode
    );
}

void AnimationTree::set_root_motion_track(const NodePath path) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_root_motion_track,
        (const Object*)this,
        path
    );
}

void AnimationTree::set_tree_root(const Ref<AnimationNode> root) {
    rebel_icall_void_object(
        method_bindings.mb_set_tree_root,
        (const Object*)this,
        root.ptr()
    );
}

AnimationTree* AnimationTree::create() {
    return (AnimationTree*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AnimationTree")()
         );
}

void AnimationTree::init_method_bindings() {
    method_bindings.mb__clear_caches =
        api->rebel_method_bind_get_method(
            "AnimationTree",
            "_clear_caches"
        );
    method_bindings.mb__node_removed =
        api->rebel_method_bind_get_method(
            "AnimationTree",
            "_node_removed"
        );
    method_bindings.mb__tree_changed =
        api->rebel_method_bind_get_method(
            "AnimationTree",
            "_tree_changed"
        );
    method_bindings.mb__update_properties =
        api->rebel_method_bind_get_method(
            "AnimationTree",
            "_update_properties"
        );
    method_bindings.mb_advance =
        api->rebel_method_bind_get_method(
            "AnimationTree",
            "advance"
        );
    method_bindings.mb_get_animation_player =
        api->rebel_method_bind_get_method(
            "AnimationTree",
            "get_animation_player"
        );
    method_bindings.mb_get_process_mode =
        api->rebel_method_bind_get_method(
            "AnimationTree",
            "get_process_mode"
        );
    method_bindings.mb_get_root_motion_track =
        api->rebel_method_bind_get_method(
            "AnimationTree",
            "get_root_motion_track"
        );
    method_bindings.mb_get_root_motion_transform =
        api->rebel_method_bind_get_method(
            "AnimationTree",
            "get_root_motion_transform"
        );
    method_bindings.mb_get_tree_root =
        api->rebel_method_bind_get_method(
            "AnimationTree",
            "get_tree_root"
        );
    method_bindings.mb_is_active =
        api->rebel_method_bind_get_method(
            "AnimationTree",
            "is_active"
        );
    method_bindings.mb_rename_parameter =
        api->rebel_method_bind_get_method(
            "AnimationTree",
            "rename_parameter"
        );
    method_bindings.mb_set_active =
        api->rebel_method_bind_get_method(
            "AnimationTree",
            "set_active"
        );
    method_bindings.mb_set_animation_player =
        api->rebel_method_bind_get_method(
            "AnimationTree",
            "set_animation_player"
        );
    method_bindings.mb_set_process_mode =
        api->rebel_method_bind_get_method(
            "AnimationTree",
            "set_process_mode"
        );
    method_bindings.mb_set_root_motion_track =
        api->rebel_method_bind_get_method(
            "AnimationTree",
            "set_root_motion_track"
        );
    method_bindings.mb_set_tree_root =
        api->rebel_method_bind_get_method(
            "AnimationTree",
            "set_tree_root"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AnimationTree");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AnimationTree::MethodBindings AnimationTree::method_bindings = {};
void* AnimationTree::class_tag = nullptr;
} // namespace Rebel
