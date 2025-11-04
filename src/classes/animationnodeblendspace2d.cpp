// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animationnodeblendspace2d.h"

#include "classes/animationrootnode.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void AnimationNodeBlendSpace2D::_add_blend_point(const int64_t index, const Ref<AnimationRootNode> node) {
    rebel_icall_void_int_object(
        method_bindings.mb__add_blend_point,
        (const Object*)this,
        index,
        node.ptr()
    );
}

PoolIntArray AnimationNodeBlendSpace2D::_get_triangles() const {
    return rebel_icall_poolintarray(
        method_bindings.mb__get_triangles,
        (const Object*)this
    );
}

void AnimationNodeBlendSpace2D::_set_triangles(const PoolIntArray triangles) {
    rebel_icall_void_poolintarray(
        method_bindings.mb__set_triangles,
        (const Object*)this,
        triangles
    );
}

void AnimationNodeBlendSpace2D::_tree_changed() {
    rebel_icall_void(
        method_bindings.mb__tree_changed,
        (const Object*)this
    );
}

void AnimationNodeBlendSpace2D::_update_triangles() {
    rebel_icall_void(
        method_bindings.mb__update_triangles,
        (const Object*)this
    );
}

void AnimationNodeBlendSpace2D::add_blend_point(const Ref<AnimationRootNode> node, const Vector2 pos, const int64_t at_index) {
    rebel_icall_void_object_vector2_int(
        method_bindings.mb_add_blend_point,
        (const Object*)this,
        node.ptr(),
        pos,
        at_index
    );
}

void AnimationNodeBlendSpace2D::add_triangle(const int64_t x, const int64_t y, const int64_t z, const int64_t at_index) {
    rebel_icall_void_int_int_int_int(
        method_bindings.mb_add_triangle,
        (const Object*)this,
        x,
        y,
        z,
        at_index
    );
}

bool AnimationNodeBlendSpace2D::get_auto_triangles() const {
    return rebel_icall_bool(
        method_bindings.mb_get_auto_triangles,
        (const Object*)this
    );
}

AnimationNodeBlendSpace2D::BlendMode AnimationNodeBlendSpace2D::get_blend_mode() const {
    return (AnimationNodeBlendSpace2D::BlendMode)rebel_icall_int(
        method_bindings.mb_get_blend_mode,
        (const Object*)this
    );
}

int64_t AnimationNodeBlendSpace2D::get_blend_point_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_blend_point_count,
        (const Object*)this
    );
}

Ref<AnimationRootNode> AnimationNodeBlendSpace2D::get_blend_point_node(const int64_t point) const {
    return Ref<AnimationRootNode>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_blend_point_node,
        (const Object*)this,
        point
    ));
}

Vector2 AnimationNodeBlendSpace2D::get_blend_point_position(const int64_t point) const {
    return rebel_icall_vector2_int(
        method_bindings.mb_get_blend_point_position,
        (const Object*)this,
        point
    );
}

Vector2 AnimationNodeBlendSpace2D::get_max_space() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_max_space,
        (const Object*)this
    );
}

Vector2 AnimationNodeBlendSpace2D::get_min_space() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_min_space,
        (const Object*)this
    );
}

Vector2 AnimationNodeBlendSpace2D::get_snap() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_snap,
        (const Object*)this
    );
}

int64_t AnimationNodeBlendSpace2D::get_triangle_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_triangle_count,
        (const Object*)this
    );
}

int64_t AnimationNodeBlendSpace2D::get_triangle_point(const int64_t triangle, const int64_t point) {
    return rebel_icall_int_int_int(
        method_bindings.mb_get_triangle_point,
        (const Object*)this,
        triangle,
        point
    );
}

String AnimationNodeBlendSpace2D::get_x_label() const {
    return rebel_icall_string(
        method_bindings.mb_get_x_label,
        (const Object*)this
    );
}

String AnimationNodeBlendSpace2D::get_y_label() const {
    return rebel_icall_string(
        method_bindings.mb_get_y_label,
        (const Object*)this
    );
}

void AnimationNodeBlendSpace2D::remove_blend_point(const int64_t point) {
    rebel_icall_void_int(
        method_bindings.mb_remove_blend_point,
        (const Object*)this,
        point
    );
}

void AnimationNodeBlendSpace2D::remove_triangle(const int64_t triangle) {
    rebel_icall_void_int(
        method_bindings.mb_remove_triangle,
        (const Object*)this,
        triangle
    );
}

void AnimationNodeBlendSpace2D::set_auto_triangles(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_auto_triangles,
        (const Object*)this,
        enable
    );
}

void AnimationNodeBlendSpace2D::set_blend_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_blend_mode,
        (const Object*)this,
        mode
    );
}

void AnimationNodeBlendSpace2D::set_blend_point_node(const int64_t point, const Ref<AnimationRootNode> node) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_blend_point_node,
        (const Object*)this,
        point,
        node.ptr()
    );
}

void AnimationNodeBlendSpace2D::set_blend_point_position(const int64_t point, const Vector2 pos) {
    rebel_icall_void_int_vector2(
        method_bindings.mb_set_blend_point_position,
        (const Object*)this,
        point,
        pos
    );
}

void AnimationNodeBlendSpace2D::set_max_space(const Vector2 max_space) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_max_space,
        (const Object*)this,
        max_space
    );
}

void AnimationNodeBlendSpace2D::set_min_space(const Vector2 min_space) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_min_space,
        (const Object*)this,
        min_space
    );
}

void AnimationNodeBlendSpace2D::set_snap(const Vector2 snap) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_snap,
        (const Object*)this,
        snap
    );
}

void AnimationNodeBlendSpace2D::set_x_label(const String text) {
    rebel_icall_void_string(
        method_bindings.mb_set_x_label,
        (const Object*)this,
        text
    );
}

void AnimationNodeBlendSpace2D::set_y_label(const String text) {
    rebel_icall_void_string(
        method_bindings.mb_set_y_label,
        (const Object*)this,
        text
    );
}

AnimationNodeBlendSpace2D* AnimationNodeBlendSpace2D::create() {
    return (AnimationNodeBlendSpace2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AnimationNodeBlendSpace2D")()
         );
}

void AnimationNodeBlendSpace2D::init_method_bindings() {
    method_bindings.mb__add_blend_point =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "_add_blend_point"
        );
    method_bindings.mb__get_triangles =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "_get_triangles"
        );
    method_bindings.mb__set_triangles =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "_set_triangles"
        );
    method_bindings.mb__tree_changed =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "_tree_changed"
        );
    method_bindings.mb__update_triangles =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "_update_triangles"
        );
    method_bindings.mb_add_blend_point =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "add_blend_point"
        );
    method_bindings.mb_add_triangle =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "add_triangle"
        );
    method_bindings.mb_get_auto_triangles =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "get_auto_triangles"
        );
    method_bindings.mb_get_blend_mode =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "get_blend_mode"
        );
    method_bindings.mb_get_blend_point_count =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "get_blend_point_count"
        );
    method_bindings.mb_get_blend_point_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "get_blend_point_node"
        );
    method_bindings.mb_get_blend_point_position =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "get_blend_point_position"
        );
    method_bindings.mb_get_max_space =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "get_max_space"
        );
    method_bindings.mb_get_min_space =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "get_min_space"
        );
    method_bindings.mb_get_snap =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "get_snap"
        );
    method_bindings.mb_get_triangle_count =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "get_triangle_count"
        );
    method_bindings.mb_get_triangle_point =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "get_triangle_point"
        );
    method_bindings.mb_get_x_label =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "get_x_label"
        );
    method_bindings.mb_get_y_label =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "get_y_label"
        );
    method_bindings.mb_remove_blend_point =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "remove_blend_point"
        );
    method_bindings.mb_remove_triangle =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "remove_triangle"
        );
    method_bindings.mb_set_auto_triangles =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "set_auto_triangles"
        );
    method_bindings.mb_set_blend_mode =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "set_blend_mode"
        );
    method_bindings.mb_set_blend_point_node =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "set_blend_point_node"
        );
    method_bindings.mb_set_blend_point_position =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "set_blend_point_position"
        );
    method_bindings.mb_set_max_space =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "set_max_space"
        );
    method_bindings.mb_set_min_space =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "set_min_space"
        );
    method_bindings.mb_set_snap =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "set_snap"
        );
    method_bindings.mb_set_x_label =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "set_x_label"
        );
    method_bindings.mb_set_y_label =
        api->rebel_method_bind_get_method(
            "AnimationNodeBlendSpace2D",
            "set_y_label"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AnimationNodeBlendSpace2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AnimationNodeBlendSpace2D::MethodBindings AnimationNodeBlendSpace2D::method_bindings = {};
void* AnimationNodeBlendSpace2D::class_tag = nullptr;
} // namespace Rebel
