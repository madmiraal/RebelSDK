// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/physicsshapequeryparameters.h"

#include "classes/icalls.h"
#include "classes/resource.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t PhysicsShapeQueryParameters::get_collision_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_collision_mask,
        (const Object*)this
    );
}

Array PhysicsShapeQueryParameters::get_exclude() const {
    return rebel_icall_array(
        method_bindings.mb_get_exclude,
        (const Object*)this
    );
}

real_t PhysicsShapeQueryParameters::get_margin() const {
    return rebel_icall_float(
        method_bindings.mb_get_margin,
        (const Object*)this
    );
}

RID PhysicsShapeQueryParameters::get_shape_rid() const {
    return rebel_icall_rid(
        method_bindings.mb_get_shape_rid,
        (const Object*)this
    );
}

Transform PhysicsShapeQueryParameters::get_transform() const {
    return rebel_icall_transform(
        method_bindings.mb_get_transform,
        (const Object*)this
    );
}

bool PhysicsShapeQueryParameters::is_collide_with_areas_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_collide_with_areas_enabled,
        (const Object*)this
    );
}

bool PhysicsShapeQueryParameters::is_collide_with_bodies_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_collide_with_bodies_enabled,
        (const Object*)this
    );
}

void PhysicsShapeQueryParameters::set_collide_with_areas(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_collide_with_areas,
        (const Object*)this,
        enable
    );
}

void PhysicsShapeQueryParameters::set_collide_with_bodies(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_collide_with_bodies,
        (const Object*)this,
        enable
    );
}

void PhysicsShapeQueryParameters::set_collision_mask(const int64_t collision_mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_mask,
        (const Object*)this,
        collision_mask
    );
}

void PhysicsShapeQueryParameters::set_exclude(const Array exclude) {
    rebel_icall_void_array(
        method_bindings.mb_set_exclude,
        (const Object*)this,
        exclude
    );
}

void PhysicsShapeQueryParameters::set_margin(const real_t margin) {
    rebel_icall_void_float(
        method_bindings.mb_set_margin,
        (const Object*)this,
        margin
    );
}

void PhysicsShapeQueryParameters::set_shape(const Ref<Resource> shape) {
    rebel_icall_void_object(
        method_bindings.mb_set_shape,
        (const Object*)this,
        shape.ptr()
    );
}

void PhysicsShapeQueryParameters::set_shape_rid(const RID shape) {
    rebel_icall_void_rid(
        method_bindings.mb_set_shape_rid,
        (const Object*)this,
        shape
    );
}

void PhysicsShapeQueryParameters::set_transform(const Transform transform) {
    rebel_icall_void_transform(
        method_bindings.mb_set_transform,
        (const Object*)this,
        transform
    );
}

PhysicsShapeQueryParameters* PhysicsShapeQueryParameters::create() {
    return (PhysicsShapeQueryParameters*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PhysicsShapeQueryParameters")()
         );
}

void PhysicsShapeQueryParameters::init_method_bindings() {
    method_bindings.mb_get_collision_mask =
        api->rebel_method_bind_get_method(
            "PhysicsShapeQueryParameters",
            "get_collision_mask"
        );
    method_bindings.mb_get_exclude =
        api->rebel_method_bind_get_method(
            "PhysicsShapeQueryParameters",
            "get_exclude"
        );
    method_bindings.mb_get_margin =
        api->rebel_method_bind_get_method(
            "PhysicsShapeQueryParameters",
            "get_margin"
        );
    method_bindings.mb_get_shape_rid =
        api->rebel_method_bind_get_method(
            "PhysicsShapeQueryParameters",
            "get_shape_rid"
        );
    method_bindings.mb_get_transform =
        api->rebel_method_bind_get_method(
            "PhysicsShapeQueryParameters",
            "get_transform"
        );
    method_bindings.mb_is_collide_with_areas_enabled =
        api->rebel_method_bind_get_method(
            "PhysicsShapeQueryParameters",
            "is_collide_with_areas_enabled"
        );
    method_bindings.mb_is_collide_with_bodies_enabled =
        api->rebel_method_bind_get_method(
            "PhysicsShapeQueryParameters",
            "is_collide_with_bodies_enabled"
        );
    method_bindings.mb_set_collide_with_areas =
        api->rebel_method_bind_get_method(
            "PhysicsShapeQueryParameters",
            "set_collide_with_areas"
        );
    method_bindings.mb_set_collide_with_bodies =
        api->rebel_method_bind_get_method(
            "PhysicsShapeQueryParameters",
            "set_collide_with_bodies"
        );
    method_bindings.mb_set_collision_mask =
        api->rebel_method_bind_get_method(
            "PhysicsShapeQueryParameters",
            "set_collision_mask"
        );
    method_bindings.mb_set_exclude =
        api->rebel_method_bind_get_method(
            "PhysicsShapeQueryParameters",
            "set_exclude"
        );
    method_bindings.mb_set_margin =
        api->rebel_method_bind_get_method(
            "PhysicsShapeQueryParameters",
            "set_margin"
        );
    method_bindings.mb_set_shape =
        api->rebel_method_bind_get_method(
            "PhysicsShapeQueryParameters",
            "set_shape"
        );
    method_bindings.mb_set_shape_rid =
        api->rebel_method_bind_get_method(
            "PhysicsShapeQueryParameters",
            "set_shape_rid"
        );
    method_bindings.mb_set_transform =
        api->rebel_method_bind_get_method(
            "PhysicsShapeQueryParameters",
            "set_transform"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PhysicsShapeQueryParameters");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PhysicsShapeQueryParameters::MethodBindings PhysicsShapeQueryParameters::method_bindings = {};
void* PhysicsShapeQueryParameters::class_tag = nullptr;
} // namespace Rebel
