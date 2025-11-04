// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/collisionpolygon2d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
CollisionPolygon2D::BuildMode CollisionPolygon2D::get_build_mode() const {
    return (CollisionPolygon2D::BuildMode)rebel_icall_int(
        method_bindings.mb_get_build_mode,
        (const Object*)this
    );
}

real_t CollisionPolygon2D::get_one_way_collision_margin() const {
    return rebel_icall_float(
        method_bindings.mb_get_one_way_collision_margin,
        (const Object*)this
    );
}

PoolVector2Array CollisionPolygon2D::get_polygon() const {
    return rebel_icall_poolvector2array(
        method_bindings.mb_get_polygon,
        (const Object*)this
    );
}

bool CollisionPolygon2D::is_disabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_disabled,
        (const Object*)this
    );
}

bool CollisionPolygon2D::is_one_way_collision_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_one_way_collision_enabled,
        (const Object*)this
    );
}

void CollisionPolygon2D::set_build_mode(const int64_t build_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_build_mode,
        (const Object*)this,
        build_mode
    );
}

void CollisionPolygon2D::set_disabled(const bool disabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_disabled,
        (const Object*)this,
        disabled
    );
}

void CollisionPolygon2D::set_one_way_collision(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_one_way_collision,
        (const Object*)this,
        enabled
    );
}

void CollisionPolygon2D::set_one_way_collision_margin(const real_t margin) {
    rebel_icall_void_float(
        method_bindings.mb_set_one_way_collision_margin,
        (const Object*)this,
        margin
    );
}

void CollisionPolygon2D::set_polygon(const PoolVector2Array polygon) {
    rebel_icall_void_poolvector2array(
        method_bindings.mb_set_polygon,
        (const Object*)this,
        polygon
    );
}

CollisionPolygon2D* CollisionPolygon2D::create() {
    return (CollisionPolygon2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CollisionPolygon2D")()
         );
}

void CollisionPolygon2D::init_method_bindings() {
    method_bindings.mb_get_build_mode =
        api->rebel_method_bind_get_method(
            "CollisionPolygon2D",
            "get_build_mode"
        );
    method_bindings.mb_get_one_way_collision_margin =
        api->rebel_method_bind_get_method(
            "CollisionPolygon2D",
            "get_one_way_collision_margin"
        );
    method_bindings.mb_get_polygon =
        api->rebel_method_bind_get_method(
            "CollisionPolygon2D",
            "get_polygon"
        );
    method_bindings.mb_is_disabled =
        api->rebel_method_bind_get_method(
            "CollisionPolygon2D",
            "is_disabled"
        );
    method_bindings.mb_is_one_way_collision_enabled =
        api->rebel_method_bind_get_method(
            "CollisionPolygon2D",
            "is_one_way_collision_enabled"
        );
    method_bindings.mb_set_build_mode =
        api->rebel_method_bind_get_method(
            "CollisionPolygon2D",
            "set_build_mode"
        );
    method_bindings.mb_set_disabled =
        api->rebel_method_bind_get_method(
            "CollisionPolygon2D",
            "set_disabled"
        );
    method_bindings.mb_set_one_way_collision =
        api->rebel_method_bind_get_method(
            "CollisionPolygon2D",
            "set_one_way_collision"
        );
    method_bindings.mb_set_one_way_collision_margin =
        api->rebel_method_bind_get_method(
            "CollisionPolygon2D",
            "set_one_way_collision_margin"
        );
    method_bindings.mb_set_polygon =
        api->rebel_method_bind_get_method(
            "CollisionPolygon2D",
            "set_polygon"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CollisionPolygon2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CollisionPolygon2D::MethodBindings CollisionPolygon2D::method_bindings = {};
void* CollisionPolygon2D::class_tag = nullptr;
} // namespace Rebel
