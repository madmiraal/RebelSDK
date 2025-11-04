// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/kinematiccollision.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t KinematicCollision::get_angle(const Vector3 up_direction) const {
    return rebel_icall_float_vector3(
        method_bindings.mb_get_angle,
        (const Object*)this,
        up_direction
    );
}

Object* KinematicCollision::get_collider() const {
    return (Object*)rebel_icall_object(
        method_bindings.mb_get_collider,
        (const Object*)this
    );
}

int64_t KinematicCollision::get_collider_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_collider_id,
        (const Object*)this
    );
}

Variant KinematicCollision::get_collider_metadata() const {
    return rebel_icall_variant(
        method_bindings.mb_get_collider_metadata,
        (const Object*)this
    );
}

RID KinematicCollision::get_collider_rid() const {
    return rebel_icall_rid(
        method_bindings.mb_get_collider_rid,
        (const Object*)this
    );
}

Object* KinematicCollision::get_collider_shape() const {
    return (Object*)rebel_icall_object(
        method_bindings.mb_get_collider_shape,
        (const Object*)this
    );
}

int64_t KinematicCollision::get_collider_shape_index() const {
    return rebel_icall_int(
        method_bindings.mb_get_collider_shape_index,
        (const Object*)this
    );
}

Vector3 KinematicCollision::get_collider_velocity() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_collider_velocity,
        (const Object*)this
    );
}

Object* KinematicCollision::get_local_shape() const {
    return (Object*)rebel_icall_object(
        method_bindings.mb_get_local_shape,
        (const Object*)this
    );
}

Vector3 KinematicCollision::get_normal() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_normal,
        (const Object*)this
    );
}

Vector3 KinematicCollision::get_position() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_position,
        (const Object*)this
    );
}

Vector3 KinematicCollision::get_remainder() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_remainder,
        (const Object*)this
    );
}

Vector3 KinematicCollision::get_travel() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_travel,
        (const Object*)this
    );
}

KinematicCollision* KinematicCollision::create() {
    return (KinematicCollision*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"KinematicCollision")()
         );
}

void KinematicCollision::init_method_bindings() {
    method_bindings.mb_get_angle =
        api->rebel_method_bind_get_method(
            "KinematicCollision",
            "get_angle"
        );
    method_bindings.mb_get_collider =
        api->rebel_method_bind_get_method(
            "KinematicCollision",
            "get_collider"
        );
    method_bindings.mb_get_collider_id =
        api->rebel_method_bind_get_method(
            "KinematicCollision",
            "get_collider_id"
        );
    method_bindings.mb_get_collider_metadata =
        api->rebel_method_bind_get_method(
            "KinematicCollision",
            "get_collider_metadata"
        );
    method_bindings.mb_get_collider_rid =
        api->rebel_method_bind_get_method(
            "KinematicCollision",
            "get_collider_rid"
        );
    method_bindings.mb_get_collider_shape =
        api->rebel_method_bind_get_method(
            "KinematicCollision",
            "get_collider_shape"
        );
    method_bindings.mb_get_collider_shape_index =
        api->rebel_method_bind_get_method(
            "KinematicCollision",
            "get_collider_shape_index"
        );
    method_bindings.mb_get_collider_velocity =
        api->rebel_method_bind_get_method(
            "KinematicCollision",
            "get_collider_velocity"
        );
    method_bindings.mb_get_local_shape =
        api->rebel_method_bind_get_method(
            "KinematicCollision",
            "get_local_shape"
        );
    method_bindings.mb_get_normal =
        api->rebel_method_bind_get_method(
            "KinematicCollision",
            "get_normal"
        );
    method_bindings.mb_get_position =
        api->rebel_method_bind_get_method(
            "KinematicCollision",
            "get_position"
        );
    method_bindings.mb_get_remainder =
        api->rebel_method_bind_get_method(
            "KinematicCollision",
            "get_remainder"
        );
    method_bindings.mb_get_travel =
        api->rebel_method_bind_get_method(
            "KinematicCollision",
            "get_travel"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "KinematicCollision");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

KinematicCollision::MethodBindings KinematicCollision::method_bindings = {};
void* KinematicCollision::class_tag = nullptr;
} // namespace Rebel
