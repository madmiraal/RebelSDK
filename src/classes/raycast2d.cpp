// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/raycast2d.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void RayCast2D::add_exception(const Object* node) {
    rebel_icall_void_object(
        method_bindings.mb_add_exception,
        (const Object*)this,
        node
    );
}

void RayCast2D::add_exception_rid(const RID rid) {
    rebel_icall_void_rid(
        method_bindings.mb_add_exception_rid,
        (const Object*)this,
        rid
    );
}

void RayCast2D::clear_exceptions() {
    rebel_icall_void(
        method_bindings.mb_clear_exceptions,
        (const Object*)this
    );
}

void RayCast2D::force_raycast_update() {
    rebel_icall_void(
        method_bindings.mb_force_raycast_update,
        (const Object*)this
    );
}

Vector2 RayCast2D::get_cast_to() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_cast_to,
        (const Object*)this
    );
}

Object* RayCast2D::get_collider() const {
    return (Object*)rebel_icall_object(
        method_bindings.mb_get_collider,
        (const Object*)this
    );
}

int64_t RayCast2D::get_collider_shape() const {
    return rebel_icall_int(
        method_bindings.mb_get_collider_shape,
        (const Object*)this
    );
}

int64_t RayCast2D::get_collision_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_collision_mask,
        (const Object*)this
    );
}

bool RayCast2D::get_collision_mask_bit(const int64_t bit) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_collision_mask_bit,
        (const Object*)this,
        bit
    );
}

Vector2 RayCast2D::get_collision_normal() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_collision_normal,
        (const Object*)this
    );
}

Vector2 RayCast2D::get_collision_point() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_collision_point,
        (const Object*)this
    );
}

bool RayCast2D::get_exclude_parent_body() const {
    return rebel_icall_bool(
        method_bindings.mb_get_exclude_parent_body,
        (const Object*)this
    );
}

bool RayCast2D::is_collide_with_areas_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_collide_with_areas_enabled,
        (const Object*)this
    );
}

bool RayCast2D::is_collide_with_bodies_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_collide_with_bodies_enabled,
        (const Object*)this
    );
}

bool RayCast2D::is_colliding() const {
    return rebel_icall_bool(
        method_bindings.mb_is_colliding,
        (const Object*)this
    );
}

bool RayCast2D::is_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_enabled,
        (const Object*)this
    );
}

void RayCast2D::remove_exception(const Object* node) {
    rebel_icall_void_object(
        method_bindings.mb_remove_exception,
        (const Object*)this,
        node
    );
}

void RayCast2D::remove_exception_rid(const RID rid) {
    rebel_icall_void_rid(
        method_bindings.mb_remove_exception_rid,
        (const Object*)this,
        rid
    );
}

void RayCast2D::set_cast_to(const Vector2 local_point) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_cast_to,
        (const Object*)this,
        local_point
    );
}

void RayCast2D::set_collide_with_areas(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_collide_with_areas,
        (const Object*)this,
        enable
    );
}

void RayCast2D::set_collide_with_bodies(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_collide_with_bodies,
        (const Object*)this,
        enable
    );
}

void RayCast2D::set_collision_mask(const int64_t mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_mask,
        (const Object*)this,
        mask
    );
}

void RayCast2D::set_collision_mask_bit(const int64_t bit, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_collision_mask_bit,
        (const Object*)this,
        bit,
        value
    );
}

void RayCast2D::set_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_enabled,
        (const Object*)this,
        enabled
    );
}

void RayCast2D::set_exclude_parent_body(const bool mask) {
    rebel_icall_void_bool(
        method_bindings.mb_set_exclude_parent_body,
        (const Object*)this,
        mask
    );
}

RayCast2D* RayCast2D::create() {
    return (RayCast2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"RayCast2D")()
         );
}

void RayCast2D::init_method_bindings() {
    method_bindings.mb_add_exception =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "add_exception"
        );
    method_bindings.mb_add_exception_rid =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "add_exception_rid"
        );
    method_bindings.mb_clear_exceptions =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "clear_exceptions"
        );
    method_bindings.mb_force_raycast_update =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "force_raycast_update"
        );
    method_bindings.mb_get_cast_to =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "get_cast_to"
        );
    method_bindings.mb_get_collider =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "get_collider"
        );
    method_bindings.mb_get_collider_shape =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "get_collider_shape"
        );
    method_bindings.mb_get_collision_mask =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "get_collision_mask"
        );
    method_bindings.mb_get_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "get_collision_mask_bit"
        );
    method_bindings.mb_get_collision_normal =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "get_collision_normal"
        );
    method_bindings.mb_get_collision_point =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "get_collision_point"
        );
    method_bindings.mb_get_exclude_parent_body =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "get_exclude_parent_body"
        );
    method_bindings.mb_is_collide_with_areas_enabled =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "is_collide_with_areas_enabled"
        );
    method_bindings.mb_is_collide_with_bodies_enabled =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "is_collide_with_bodies_enabled"
        );
    method_bindings.mb_is_colliding =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "is_colliding"
        );
    method_bindings.mb_is_enabled =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "is_enabled"
        );
    method_bindings.mb_remove_exception =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "remove_exception"
        );
    method_bindings.mb_remove_exception_rid =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "remove_exception_rid"
        );
    method_bindings.mb_set_cast_to =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "set_cast_to"
        );
    method_bindings.mb_set_collide_with_areas =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "set_collide_with_areas"
        );
    method_bindings.mb_set_collide_with_bodies =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "set_collide_with_bodies"
        );
    method_bindings.mb_set_collision_mask =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "set_collision_mask"
        );
    method_bindings.mb_set_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "set_collision_mask_bit"
        );
    method_bindings.mb_set_enabled =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "set_enabled"
        );
    method_bindings.mb_set_exclude_parent_body =
        api->rebel_method_bind_get_method(
            "RayCast2D",
            "set_exclude_parent_body"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "RayCast2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

RayCast2D::MethodBindings RayCast2D::method_bindings = {};
void* RayCast2D::class_tag = nullptr;
} // namespace Rebel
