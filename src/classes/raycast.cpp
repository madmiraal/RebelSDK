// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/raycast.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void RayCast::add_exception(const Object* node) {
    rebel_icall_void_object(
        method_bindings.mb_add_exception,
        (const Object*)this,
        node
    );
}

void RayCast::add_exception_rid(const RID rid) {
    rebel_icall_void_rid(
        method_bindings.mb_add_exception_rid,
        (const Object*)this,
        rid
    );
}

void RayCast::clear_exceptions() {
    rebel_icall_void(
        method_bindings.mb_clear_exceptions,
        (const Object*)this
    );
}

void RayCast::force_raycast_update() {
    rebel_icall_void(
        method_bindings.mb_force_raycast_update,
        (const Object*)this
    );
}

Vector3 RayCast::get_cast_to() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_cast_to,
        (const Object*)this
    );
}

Object* RayCast::get_collider() const {
    return (Object*)rebel_icall_object(
        method_bindings.mb_get_collider,
        (const Object*)this
    );
}

int64_t RayCast::get_collider_shape() const {
    return rebel_icall_int(
        method_bindings.mb_get_collider_shape,
        (const Object*)this
    );
}

int64_t RayCast::get_collision_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_collision_mask,
        (const Object*)this
    );
}

bool RayCast::get_collision_mask_bit(const int64_t bit) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_collision_mask_bit,
        (const Object*)this,
        bit
    );
}

Vector3 RayCast::get_collision_normal() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_collision_normal,
        (const Object*)this
    );
}

Vector3 RayCast::get_collision_point() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_collision_point,
        (const Object*)this
    );
}

Color RayCast::get_debug_shape_custom_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_debug_shape_custom_color,
        (const Object*)this
    );
}

int64_t RayCast::get_debug_shape_thickness() const {
    return rebel_icall_int(
        method_bindings.mb_get_debug_shape_thickness,
        (const Object*)this
    );
}

bool RayCast::get_exclude_parent_body() const {
    return rebel_icall_bool(
        method_bindings.mb_get_exclude_parent_body,
        (const Object*)this
    );
}

bool RayCast::is_collide_with_areas_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_collide_with_areas_enabled,
        (const Object*)this
    );
}

bool RayCast::is_collide_with_bodies_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_collide_with_bodies_enabled,
        (const Object*)this
    );
}

bool RayCast::is_colliding() const {
    return rebel_icall_bool(
        method_bindings.mb_is_colliding,
        (const Object*)this
    );
}

bool RayCast::is_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_enabled,
        (const Object*)this
    );
}

void RayCast::remove_exception(const Object* node) {
    rebel_icall_void_object(
        method_bindings.mb_remove_exception,
        (const Object*)this,
        node
    );
}

void RayCast::remove_exception_rid(const RID rid) {
    rebel_icall_void_rid(
        method_bindings.mb_remove_exception_rid,
        (const Object*)this,
        rid
    );
}

void RayCast::set_cast_to(const Vector3 local_point) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_cast_to,
        (const Object*)this,
        local_point
    );
}

void RayCast::set_collide_with_areas(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_collide_with_areas,
        (const Object*)this,
        enable
    );
}

void RayCast::set_collide_with_bodies(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_collide_with_bodies,
        (const Object*)this,
        enable
    );
}

void RayCast::set_collision_mask(const int64_t mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_mask,
        (const Object*)this,
        mask
    );
}

void RayCast::set_collision_mask_bit(const int64_t bit, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_collision_mask_bit,
        (const Object*)this,
        bit,
        value
    );
}

void RayCast::set_debug_shape_custom_color(const Color debug_shape_custom_color) {
    rebel_icall_void_color(
        method_bindings.mb_set_debug_shape_custom_color,
        (const Object*)this,
        debug_shape_custom_color
    );
}

void RayCast::set_debug_shape_thickness(const int64_t debug_shape_thickness) {
    rebel_icall_void_int(
        method_bindings.mb_set_debug_shape_thickness,
        (const Object*)this,
        debug_shape_thickness
    );
}

void RayCast::set_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_enabled,
        (const Object*)this,
        enabled
    );
}

void RayCast::set_exclude_parent_body(const bool mask) {
    rebel_icall_void_bool(
        method_bindings.mb_set_exclude_parent_body,
        (const Object*)this,
        mask
    );
}

RayCast* RayCast::create() {
    return (RayCast*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"RayCast")()
         );
}

void RayCast::init_method_bindings() {
    method_bindings.mb_add_exception =
        api->rebel_method_bind_get_method(
            "RayCast",
            "add_exception"
        );
    method_bindings.mb_add_exception_rid =
        api->rebel_method_bind_get_method(
            "RayCast",
            "add_exception_rid"
        );
    method_bindings.mb_clear_exceptions =
        api->rebel_method_bind_get_method(
            "RayCast",
            "clear_exceptions"
        );
    method_bindings.mb_force_raycast_update =
        api->rebel_method_bind_get_method(
            "RayCast",
            "force_raycast_update"
        );
    method_bindings.mb_get_cast_to =
        api->rebel_method_bind_get_method(
            "RayCast",
            "get_cast_to"
        );
    method_bindings.mb_get_collider =
        api->rebel_method_bind_get_method(
            "RayCast",
            "get_collider"
        );
    method_bindings.mb_get_collider_shape =
        api->rebel_method_bind_get_method(
            "RayCast",
            "get_collider_shape"
        );
    method_bindings.mb_get_collision_mask =
        api->rebel_method_bind_get_method(
            "RayCast",
            "get_collision_mask"
        );
    method_bindings.mb_get_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "RayCast",
            "get_collision_mask_bit"
        );
    method_bindings.mb_get_collision_normal =
        api->rebel_method_bind_get_method(
            "RayCast",
            "get_collision_normal"
        );
    method_bindings.mb_get_collision_point =
        api->rebel_method_bind_get_method(
            "RayCast",
            "get_collision_point"
        );
    method_bindings.mb_get_debug_shape_custom_color =
        api->rebel_method_bind_get_method(
            "RayCast",
            "get_debug_shape_custom_color"
        );
    method_bindings.mb_get_debug_shape_thickness =
        api->rebel_method_bind_get_method(
            "RayCast",
            "get_debug_shape_thickness"
        );
    method_bindings.mb_get_exclude_parent_body =
        api->rebel_method_bind_get_method(
            "RayCast",
            "get_exclude_parent_body"
        );
    method_bindings.mb_is_collide_with_areas_enabled =
        api->rebel_method_bind_get_method(
            "RayCast",
            "is_collide_with_areas_enabled"
        );
    method_bindings.mb_is_collide_with_bodies_enabled =
        api->rebel_method_bind_get_method(
            "RayCast",
            "is_collide_with_bodies_enabled"
        );
    method_bindings.mb_is_colliding =
        api->rebel_method_bind_get_method(
            "RayCast",
            "is_colliding"
        );
    method_bindings.mb_is_enabled =
        api->rebel_method_bind_get_method(
            "RayCast",
            "is_enabled"
        );
    method_bindings.mb_remove_exception =
        api->rebel_method_bind_get_method(
            "RayCast",
            "remove_exception"
        );
    method_bindings.mb_remove_exception_rid =
        api->rebel_method_bind_get_method(
            "RayCast",
            "remove_exception_rid"
        );
    method_bindings.mb_set_cast_to =
        api->rebel_method_bind_get_method(
            "RayCast",
            "set_cast_to"
        );
    method_bindings.mb_set_collide_with_areas =
        api->rebel_method_bind_get_method(
            "RayCast",
            "set_collide_with_areas"
        );
    method_bindings.mb_set_collide_with_bodies =
        api->rebel_method_bind_get_method(
            "RayCast",
            "set_collide_with_bodies"
        );
    method_bindings.mb_set_collision_mask =
        api->rebel_method_bind_get_method(
            "RayCast",
            "set_collision_mask"
        );
    method_bindings.mb_set_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "RayCast",
            "set_collision_mask_bit"
        );
    method_bindings.mb_set_debug_shape_custom_color =
        api->rebel_method_bind_get_method(
            "RayCast",
            "set_debug_shape_custom_color"
        );
    method_bindings.mb_set_debug_shape_thickness =
        api->rebel_method_bind_get_method(
            "RayCast",
            "set_debug_shape_thickness"
        );
    method_bindings.mb_set_enabled =
        api->rebel_method_bind_get_method(
            "RayCast",
            "set_enabled"
        );
    method_bindings.mb_set_exclude_parent_body =
        api->rebel_method_bind_get_method(
            "RayCast",
            "set_exclude_parent_body"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "RayCast");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

RayCast::MethodBindings RayCast::method_bindings = {};
void* RayCast::class_tag = nullptr;
} // namespace Rebel
