// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animationnodeblendspace1d.h"

#include "classes/animationrootnode.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void AnimationNodeBlendSpace1D::_add_blend_point(const int64_t index, const Ref<AnimationRootNode> node) {
    rebel_icall_void_int_object(
        method_bindings.mb__add_blend_point,
        (const Object*)this,
        index,
        node.ptr()
    );
}

void AnimationNodeBlendSpace1D::_tree_changed() {
    rebel_icall_void(
        method_bindings.mb__tree_changed,
        (const Object*)this
    );
}

void AnimationNodeBlendSpace1D::add_blend_point(const Ref<AnimationRootNode> node, const real_t pos, const int64_t at_index) {
    rebel_icall_void_object_float_int(
        method_bindings.mb_add_blend_point,
        (const Object*)this,
        node.ptr(),
        pos,
        at_index
    );
}

int64_t AnimationNodeBlendSpace1D::get_blend_point_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_blend_point_count,
        (const Object*)this
    );
}

Ref<AnimationRootNode> AnimationNodeBlendSpace1D::get_blend_point_node(const int64_t point) const {
    return Ref<AnimationRootNode>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_blend_point_node,
        (const Object*)this,
        point
    ));
}

real_t AnimationNodeBlendSpace1D::get_blend_point_position(const int64_t point) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_blend_point_position,
        (const Object*)this,
        point
    );
}

real_t AnimationNodeBlendSpace1D::get_max_space() const {
    return rebel_icall_float(
        method_bindings.mb_get_max_space,
        (const Object*)this
    );
}

real_t AnimationNodeBlendSpace1D::get_min_space() const {
    return rebel_icall_float(
        method_bindings.mb_get_min_space,
        (const Object*)this
    );
}

real_t AnimationNodeBlendSpace1D::get_snap() const {
    return rebel_icall_float(
        method_bindings.mb_get_snap,
        (const Object*)this
    );
}

String AnimationNodeBlendSpace1D::get_value_label() const {
    return rebel_icall_string(
        method_bindings.mb_get_value_label,
        (const Object*)this
    );
}

void AnimationNodeBlendSpace1D::remove_blend_point(const int64_t point) {
    rebel_icall_void_int(
        method_bindings.mb_remove_blend_point,
        (const Object*)this,
        point
    );
}

void AnimationNodeBlendSpace1D::set_blend_point_node(const int64_t point, const Ref<AnimationRootNode> node) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_blend_point_node,
        (const Object*)this,
        point,
        node.ptr()
    );
}

void AnimationNodeBlendSpace1D::set_blend_point_position(const int64_t point, const real_t pos) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_blend_point_position,
        (const Object*)this,
        point,
        pos
    );
}

void AnimationNodeBlendSpace1D::set_max_space(const real_t max_space) {
    rebel_icall_void_float(
        method_bindings.mb_set_max_space,
        (const Object*)this,
        max_space
    );
}

void AnimationNodeBlendSpace1D::set_min_space(const real_t min_space) {
    rebel_icall_void_float(
        method_bindings.mb_set_min_space,
        (const Object*)this,
        min_space
    );
}

void AnimationNodeBlendSpace1D::set_snap(const real_t snap) {
    rebel_icall_void_float(
        method_bindings.mb_set_snap,
        (const Object*)this,
        snap
    );
}

void AnimationNodeBlendSpace1D::set_value_label(const String text) {
    rebel_icall_void_string(
        method_bindings.mb_set_value_label,
        (const Object*)this,
        text
    );
}

AnimationNodeBlendSpace1D* AnimationNodeBlendSpace1D::create() {
    return (AnimationNodeBlendSpace1D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AnimationNodeBlendSpace1D")()
         );
}

void AnimationNodeBlendSpace1D::init_method_bindings() {
    method_bindings.mb__add_blend_point =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace1D",
            "_add_blend_point"
        );
    method_bindings.mb__tree_changed =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace1D",
            "_tree_changed"
        );
    method_bindings.mb_add_blend_point =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace1D",
            "add_blend_point"
        );
    method_bindings.mb_get_blend_point_count =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace1D",
            "get_blend_point_count"
        );
    method_bindings.mb_get_blend_point_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace1D",
            "get_blend_point_node"
        );
    method_bindings.mb_get_blend_point_position =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace1D",
            "get_blend_point_position"
        );
    method_bindings.mb_get_max_space =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace1D",
            "get_max_space"
        );
    method_bindings.mb_get_min_space =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace1D",
            "get_min_space"
        );
    method_bindings.mb_get_snap =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace1D",
            "get_snap"
        );
    method_bindings.mb_get_value_label =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace1D",
            "get_value_label"
        );
    method_bindings.mb_remove_blend_point =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace1D",
            "remove_blend_point"
        );
    method_bindings.mb_set_blend_point_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace1D",
            "set_blend_point_node"
        );
    method_bindings.mb_set_blend_point_position =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace1D",
            "set_blend_point_position"
        );
    method_bindings.mb_set_max_space =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace1D",
            "set_max_space"
        );
    method_bindings.mb_set_min_space =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace1D",
            "set_min_space"
        );
    method_bindings.mb_set_snap =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace1D",
            "set_snap"
        );
    method_bindings.mb_set_value_label =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace1D",
            "set_value_label"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AnimationNodeBlendSpace1D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AnimationNodeBlendSpace1D::MethodBindings AnimationNodeBlendSpace1D::method_bindings = {};
void* AnimationNodeBlendSpace1D::class_tag = nullptr;
} // namespace Rebel
