// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/node2d.h"

#include "classes/icalls.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Node2D::apply_scale(const Vector2 ratio) {
    rebel_icall_void_vector2(
        method_bindings.mb_apply_scale,
        (const Object*)this,
        ratio
    );
}

real_t Node2D::get_angle_to(const Vector2 point) const {
    return rebel_icall_float_vector2(
        method_bindings.mb_get_angle_to,
        (const Object*)this,
        point
    );
}

Vector2 Node2D::get_global_position() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_global_position,
        (const Object*)this
    );
}

real_t Node2D::get_global_rotation() const {
    return rebel_icall_float(
        method_bindings.mb_get_global_rotation,
        (const Object*)this
    );
}

real_t Node2D::get_global_rotation_degrees() const {
    return rebel_icall_float(
        method_bindings.mb_get_global_rotation_degrees,
        (const Object*)this
    );
}

Vector2 Node2D::get_global_scale() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_global_scale,
        (const Object*)this
    );
}

Vector2 Node2D::get_position() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_position,
        (const Object*)this
    );
}

Transform2D Node2D::get_relative_transform_to_parent(const Node* parent) const {
    return rebel_icall_transform2d_object(
        method_bindings.mb_get_relative_transform_to_parent,
        (const Object*)this,
        parent
    );
}

real_t Node2D::get_rotation() const {
    return rebel_icall_float(
        method_bindings.mb_get_rotation,
        (const Object*)this
    );
}

real_t Node2D::get_rotation_degrees() const {
    return rebel_icall_float(
        method_bindings.mb_get_rotation_degrees,
        (const Object*)this
    );
}

Vector2 Node2D::get_scale() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_scale,
        (const Object*)this
    );
}

int64_t Node2D::get_z_index() const {
    return rebel_icall_int(
        method_bindings.mb_get_z_index,
        (const Object*)this
    );
}

void Node2D::global_translate(const Vector2 offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_global_translate,
        (const Object*)this,
        offset
    );
}

bool Node2D::is_z_relative() const {
    return rebel_icall_bool(
        method_bindings.mb_is_z_relative,
        (const Object*)this
    );
}

void Node2D::look_at(const Vector2 point) {
    rebel_icall_void_vector2(
        method_bindings.mb_look_at,
        (const Object*)this,
        point
    );
}

void Node2D::move_local_x(const real_t delta, const bool scaled) {
    rebel_icall_void_float_bool(
        method_bindings.mb_move_local_x,
        (const Object*)this,
        delta,
        scaled
    );
}

void Node2D::move_local_y(const real_t delta, const bool scaled) {
    rebel_icall_void_float_bool(
        method_bindings.mb_move_local_y,
        (const Object*)this,
        delta,
        scaled
    );
}

void Node2D::rotate(const real_t radians) {
    rebel_icall_void_float(
        method_bindings.mb_rotate,
        (const Object*)this,
        radians
    );
}

void Node2D::set_global_position(const Vector2 position) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_global_position,
        (const Object*)this,
        position
    );
}

void Node2D::set_global_rotation(const real_t radians) {
    rebel_icall_void_float(
        method_bindings.mb_set_global_rotation,
        (const Object*)this,
        radians
    );
}

void Node2D::set_global_rotation_degrees(const real_t degrees) {
    rebel_icall_void_float(
        method_bindings.mb_set_global_rotation_degrees,
        (const Object*)this,
        degrees
    );
}

void Node2D::set_global_scale(const Vector2 scale) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_global_scale,
        (const Object*)this,
        scale
    );
}

void Node2D::set_global_transform(const Transform2D xform) {
    rebel_icall_void_transform2d(
        method_bindings.mb_set_global_transform,
        (const Object*)this,
        xform
    );
}

void Node2D::set_position(const Vector2 position) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_position,
        (const Object*)this,
        position
    );
}

void Node2D::set_rotation(const real_t radians) {
    rebel_icall_void_float(
        method_bindings.mb_set_rotation,
        (const Object*)this,
        radians
    );
}

void Node2D::set_rotation_degrees(const real_t degrees) {
    rebel_icall_void_float(
        method_bindings.mb_set_rotation_degrees,
        (const Object*)this,
        degrees
    );
}

void Node2D::set_scale(const Vector2 scale) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_scale,
        (const Object*)this,
        scale
    );
}

void Node2D::set_transform(const Transform2D xform) {
    rebel_icall_void_transform2d(
        method_bindings.mb_set_transform,
        (const Object*)this,
        xform
    );
}

void Node2D::set_z_as_relative(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_z_as_relative,
        (const Object*)this,
        enable
    );
}

void Node2D::set_z_index(const int64_t z_index) {
    rebel_icall_void_int(
        method_bindings.mb_set_z_index,
        (const Object*)this,
        z_index
    );
}

Vector2 Node2D::to_global(const Vector2 local_point) const {
    return rebel_icall_vector2_vector2(
        method_bindings.mb_to_global,
        (const Object*)this,
        local_point
    );
}

Vector2 Node2D::to_local(const Vector2 global_point) const {
    return rebel_icall_vector2_vector2(
        method_bindings.mb_to_local,
        (const Object*)this,
        global_point
    );
}

void Node2D::translate(const Vector2 offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_translate,
        (const Object*)this,
        offset
    );
}

Node2D* Node2D::create() {
    return (Node2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Node2D")()
         );
}

void Node2D::init_method_bindings() {
    method_bindings.mb_apply_scale =
        api->rebel_method_bind_get_method(
            "Node2D",
            "apply_scale"
        );
    method_bindings.mb_get_angle_to =
        api->rebel_method_bind_get_method(
            "Node2D",
            "get_angle_to"
        );
    method_bindings.mb_get_global_position =
        api->rebel_method_bind_get_method(
            "Node2D",
            "get_global_position"
        );
    method_bindings.mb_get_global_rotation =
        api->rebel_method_bind_get_method(
            "Node2D",
            "get_global_rotation"
        );
    method_bindings.mb_get_global_rotation_degrees =
        api->rebel_method_bind_get_method(
            "Node2D",
            "get_global_rotation_degrees"
        );
    method_bindings.mb_get_global_scale =
        api->rebel_method_bind_get_method(
            "Node2D",
            "get_global_scale"
        );
    method_bindings.mb_get_position =
        api->rebel_method_bind_get_method(
            "Node2D",
            "get_position"
        );
    method_bindings.mb_get_relative_transform_to_parent =
        api->rebel_method_bind_get_method(
            "Node2D",
            "get_relative_transform_to_parent"
        );
    method_bindings.mb_get_rotation =
        api->rebel_method_bind_get_method(
            "Node2D",
            "get_rotation"
        );
    method_bindings.mb_get_rotation_degrees =
        api->rebel_method_bind_get_method(
            "Node2D",
            "get_rotation_degrees"
        );
    method_bindings.mb_get_scale =
        api->rebel_method_bind_get_method(
            "Node2D",
            "get_scale"
        );
    method_bindings.mb_get_z_index =
        api->rebel_method_bind_get_method(
            "Node2D",
            "get_z_index"
        );
    method_bindings.mb_global_translate =
        api->rebel_method_bind_get_method(
            "Node2D",
            "global_translate"
        );
    method_bindings.mb_is_z_relative =
        api->rebel_method_bind_get_method(
            "Node2D",
            "is_z_relative"
        );
    method_bindings.mb_look_at =
        api->rebel_method_bind_get_method(
            "Node2D",
            "look_at"
        );
    method_bindings.mb_move_local_x =
        api->rebel_method_bind_get_method(
            "Node2D",
            "move_local_x"
        );
    method_bindings.mb_move_local_y =
        api->rebel_method_bind_get_method(
            "Node2D",
            "move_local_y"
        );
    method_bindings.mb_rotate =
        api->rebel_method_bind_get_method(
            "Node2D",
            "rotate"
        );
    method_bindings.mb_set_global_position =
        api->rebel_method_bind_get_method(
            "Node2D",
            "set_global_position"
        );
    method_bindings.mb_set_global_rotation =
        api->rebel_method_bind_get_method(
            "Node2D",
            "set_global_rotation"
        );
    method_bindings.mb_set_global_rotation_degrees =
        api->rebel_method_bind_get_method(
            "Node2D",
            "set_global_rotation_degrees"
        );
    method_bindings.mb_set_global_scale =
        api->rebel_method_bind_get_method(
            "Node2D",
            "set_global_scale"
        );
    method_bindings.mb_set_global_transform =
        api->rebel_method_bind_get_method(
            "Node2D",
            "set_global_transform"
        );
    method_bindings.mb_set_position =
        api->rebel_method_bind_get_method(
            "Node2D",
            "set_position"
        );
    method_bindings.mb_set_rotation =
        api->rebel_method_bind_get_method(
            "Node2D",
            "set_rotation"
        );
    method_bindings.mb_set_rotation_degrees =
        api->rebel_method_bind_get_method(
            "Node2D",
            "set_rotation_degrees"
        );
    method_bindings.mb_set_scale =
        api->rebel_method_bind_get_method(
            "Node2D",
            "set_scale"
        );
    method_bindings.mb_set_transform =
        api->rebel_method_bind_get_method(
            "Node2D",
            "set_transform"
        );
    method_bindings.mb_set_z_as_relative =
        api->rebel_method_bind_get_method(
            "Node2D",
            "set_z_as_relative"
        );
    method_bindings.mb_set_z_index =
        api->rebel_method_bind_get_method(
            "Node2D",
            "set_z_index"
        );
    method_bindings.mb_to_global =
        api->rebel_method_bind_get_method(
            "Node2D",
            "to_global"
        );
    method_bindings.mb_to_local =
        api->rebel_method_bind_get_method(
            "Node2D",
            "to_local"
        );
    method_bindings.mb_translate =
        api->rebel_method_bind_get_method(
            "Node2D",
            "translate"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Node2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Node2D::MethodBindings Node2D::method_bindings = {};
void* Node2D::class_tag = nullptr;
} // namespace Rebel
