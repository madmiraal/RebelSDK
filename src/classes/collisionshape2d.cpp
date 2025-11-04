// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/collisionshape2d.h"

#include "classes/icalls.h"
#include "classes/shape2d.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void CollisionShape2D::_shape_changed() {
    rebel_icall_void(
        method_bindings.mb__shape_changed,
        (const Object*)this
    );
}

real_t CollisionShape2D::get_one_way_collision_margin() const {
    return rebel_icall_float(
        method_bindings.mb_get_one_way_collision_margin,
        (const Object*)this
    );
}

Ref<Shape2D> CollisionShape2D::get_shape() const {
    return Ref<Shape2D>::create_ref(rebel_icall_object(
        method_bindings.mb_get_shape,
        (const Object*)this
    ));
}

bool CollisionShape2D::is_disabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_disabled,
        (const Object*)this
    );
}

bool CollisionShape2D::is_one_way_collision_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_one_way_collision_enabled,
        (const Object*)this
    );
}

void CollisionShape2D::set_disabled(const bool disabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_disabled,
        (const Object*)this,
        disabled
    );
}

void CollisionShape2D::set_one_way_collision(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_one_way_collision,
        (const Object*)this,
        enabled
    );
}

void CollisionShape2D::set_one_way_collision_margin(const real_t margin) {
    rebel_icall_void_float(
        method_bindings.mb_set_one_way_collision_margin,
        (const Object*)this,
        margin
    );
}

void CollisionShape2D::set_shape(const Ref<Shape2D> shape) {
    rebel_icall_void_object(
        method_bindings.mb_set_shape,
        (const Object*)this,
        shape.ptr()
    );
}

CollisionShape2D* CollisionShape2D::create() {
    return (CollisionShape2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CollisionShape2D")()
         );
}

void CollisionShape2D::init_method_bindings() {
    method_bindings.mb__shape_changed =
        api->rebel_method_bind_get_method(
            "CollisionShape2D",
            "_shape_changed"
        );
    method_bindings.mb_get_one_way_collision_margin =
        api->rebel_method_bind_get_method(
            "CollisionShape2D",
            "get_one_way_collision_margin"
        );
    method_bindings.mb_get_shape =
        api->rebel_method_bind_get_method(
            "CollisionShape2D",
            "get_shape"
        );
    method_bindings.mb_is_disabled =
        api->rebel_method_bind_get_method(
            "CollisionShape2D",
            "is_disabled"
        );
    method_bindings.mb_is_one_way_collision_enabled =
        api->rebel_method_bind_get_method(
            "CollisionShape2D",
            "is_one_way_collision_enabled"
        );
    method_bindings.mb_set_disabled =
        api->rebel_method_bind_get_method(
            "CollisionShape2D",
            "set_disabled"
        );
    method_bindings.mb_set_one_way_collision =
        api->rebel_method_bind_get_method(
            "CollisionShape2D",
            "set_one_way_collision"
        );
    method_bindings.mb_set_one_way_collision_margin =
        api->rebel_method_bind_get_method(
            "CollisionShape2D",
            "set_one_way_collision_margin"
        );
    method_bindings.mb_set_shape =
        api->rebel_method_bind_get_method(
            "CollisionShape2D",
            "set_shape"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CollisionShape2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CollisionShape2D::MethodBindings CollisionShape2D::method_bindings = {};
void* CollisionShape2D::class_tag = nullptr;
} // namespace Rebel
