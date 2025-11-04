// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/physics2dshapequeryparameters.h"

#include "classes/icalls.h"
#include "classes/resource.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t Physics2DShapeQueryParameters::get_collision_layer() const {
    return rebel_icall_int(
        method_bindings.mb_get_collision_layer,
        (const Object*)this
    );
}

Array Physics2DShapeQueryParameters::get_exclude() const {
    return rebel_icall_array(
        method_bindings.mb_get_exclude,
        (const Object*)this
    );
}

real_t Physics2DShapeQueryParameters::get_margin() const {
    return rebel_icall_float(
        method_bindings.mb_get_margin,
        (const Object*)this
    );
}

Vector2 Physics2DShapeQueryParameters::get_motion() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_motion,
        (const Object*)this
    );
}

RID Physics2DShapeQueryParameters::get_shape_rid() const {
    return rebel_icall_rid(
        method_bindings.mb_get_shape_rid,
        (const Object*)this
    );
}

Transform2D Physics2DShapeQueryParameters::get_transform() const {
    return rebel_icall_transform2d(
        method_bindings.mb_get_transform,
        (const Object*)this
    );
}

bool Physics2DShapeQueryParameters::is_collide_with_areas_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_collide_with_areas_enabled,
        (const Object*)this
    );
}

bool Physics2DShapeQueryParameters::is_collide_with_bodies_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_collide_with_bodies_enabled,
        (const Object*)this
    );
}

void Physics2DShapeQueryParameters::set_collide_with_areas(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_collide_with_areas,
        (const Object*)this,
        enable
    );
}

void Physics2DShapeQueryParameters::set_collide_with_bodies(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_collide_with_bodies,
        (const Object*)this,
        enable
    );
}

void Physics2DShapeQueryParameters::set_collision_layer(const int64_t collision_layer) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_layer,
        (const Object*)this,
        collision_layer
    );
}

void Physics2DShapeQueryParameters::set_exclude(const Array exclude) {
    rebel_icall_void_array(
        method_bindings.mb_set_exclude,
        (const Object*)this,
        exclude
    );
}

void Physics2DShapeQueryParameters::set_margin(const real_t margin) {
    rebel_icall_void_float(
        method_bindings.mb_set_margin,
        (const Object*)this,
        margin
    );
}

void Physics2DShapeQueryParameters::set_motion(const Vector2 motion) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_motion,
        (const Object*)this,
        motion
    );
}

void Physics2DShapeQueryParameters::set_shape(const Ref<Resource> shape) {
    rebel_icall_void_object(
        method_bindings.mb_set_shape,
        (const Object*)this,
        shape.ptr()
    );
}

void Physics2DShapeQueryParameters::set_shape_rid(const RID shape) {
    rebel_icall_void_rid(
        method_bindings.mb_set_shape_rid,
        (const Object*)this,
        shape
    );
}

void Physics2DShapeQueryParameters::set_transform(const Transform2D transform) {
    rebel_icall_void_transform2d(
        method_bindings.mb_set_transform,
        (const Object*)this,
        transform
    );
}

Physics2DShapeQueryParameters* Physics2DShapeQueryParameters::create() {
    return (Physics2DShapeQueryParameters*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Physics2DShapeQueryParameters")()
         );
}

void Physics2DShapeQueryParameters::init_method_bindings() {
    method_bindings.mb_get_collision_layer =
        api->rebel_method_bind_get_method(
            "Physics2DShapeQueryParameters",
            "get_collision_layer"
        );
    method_bindings.mb_get_exclude =
        api->rebel_method_bind_get_method(
            "Physics2DShapeQueryParameters",
            "get_exclude"
        );
    method_bindings.mb_get_margin =
        api->rebel_method_bind_get_method(
            "Physics2DShapeQueryParameters",
            "get_margin"
        );
    method_bindings.mb_get_motion =
        api->rebel_method_bind_get_method(
            "Physics2DShapeQueryParameters",
            "get_motion"
        );
    method_bindings.mb_get_shape_rid =
        api->rebel_method_bind_get_method(
            "Physics2DShapeQueryParameters",
            "get_shape_rid"
        );
    method_bindings.mb_get_transform =
        api->rebel_method_bind_get_method(
            "Physics2DShapeQueryParameters",
            "get_transform"
        );
    method_bindings.mb_is_collide_with_areas_enabled =
        api->rebel_method_bind_get_method(
            "Physics2DShapeQueryParameters",
            "is_collide_with_areas_enabled"
        );
    method_bindings.mb_is_collide_with_bodies_enabled =
        api->rebel_method_bind_get_method(
            "Physics2DShapeQueryParameters",
            "is_collide_with_bodies_enabled"
        );
    method_bindings.mb_set_collide_with_areas =
        api->rebel_method_bind_get_method(
            "Physics2DShapeQueryParameters",
            "set_collide_with_areas"
        );
    method_bindings.mb_set_collide_with_bodies =
        api->rebel_method_bind_get_method(
            "Physics2DShapeQueryParameters",
            "set_collide_with_bodies"
        );
    method_bindings.mb_set_collision_layer =
        api->rebel_method_bind_get_method(
            "Physics2DShapeQueryParameters",
            "set_collision_layer"
        );
    method_bindings.mb_set_exclude =
        api->rebel_method_bind_get_method(
            "Physics2DShapeQueryParameters",
            "set_exclude"
        );
    method_bindings.mb_set_margin =
        api->rebel_method_bind_get_method(
            "Physics2DShapeQueryParameters",
            "set_margin"
        );
    method_bindings.mb_set_motion =
        api->rebel_method_bind_get_method(
            "Physics2DShapeQueryParameters",
            "set_motion"
        );
    method_bindings.mb_set_shape =
        api->rebel_method_bind_get_method(
            "Physics2DShapeQueryParameters",
            "set_shape"
        );
    method_bindings.mb_set_shape_rid =
        api->rebel_method_bind_get_method(
            "Physics2DShapeQueryParameters",
            "set_shape_rid"
        );
    method_bindings.mb_set_transform =
        api->rebel_method_bind_get_method(
            "Physics2DShapeQueryParameters",
            "set_transform"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Physics2DShapeQueryParameters");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Physics2DShapeQueryParameters::MethodBindings Physics2DShapeQueryParameters::method_bindings = {};
void* Physics2DShapeQueryParameters::class_tag = nullptr;
} // namespace Rebel
