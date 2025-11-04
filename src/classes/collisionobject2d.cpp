// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/collisionobject2d.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/object.h"
#include "classes/shape2d.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void CollisionObject2D::_input_event(const Object* viewport, const Ref<InputEvent> event, const int64_t shape_idx) {
    rebel_icall_void_object_object_int(
        method_bindings.mb__input_event,
        (const Object*)this,
        viewport,
        event.ptr(),
        shape_idx
    );
}

int64_t CollisionObject2D::create_shape_owner(const Object* owner) {
    return rebel_icall_int_object(
        method_bindings.mb_create_shape_owner,
        (const Object*)this,
        owner
    );
}

int64_t CollisionObject2D::get_collision_layer() const {
    return rebel_icall_int(
        method_bindings.mb_get_collision_layer,
        (const Object*)this
    );
}

bool CollisionObject2D::get_collision_layer_bit(const int64_t bit) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_collision_layer_bit,
        (const Object*)this,
        bit
    );
}

int64_t CollisionObject2D::get_collision_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_collision_mask,
        (const Object*)this
    );
}

bool CollisionObject2D::get_collision_mask_bit(const int64_t bit) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_collision_mask_bit,
        (const Object*)this,
        bit
    );
}

RID CollisionObject2D::get_rid() const {
    return rebel_icall_rid(
        method_bindings.mb_get_rid,
        (const Object*)this
    );
}

real_t CollisionObject2D::get_shape_owner_one_way_collision_margin(const int64_t owner_id) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_shape_owner_one_way_collision_margin,
        (const Object*)this,
        owner_id
    );
}

Array CollisionObject2D::get_shape_owners() {
    return rebel_icall_array(
        method_bindings.mb_get_shape_owners,
        (const Object*)this
    );
}

bool CollisionObject2D::is_pickable() const {
    return rebel_icall_bool(
        method_bindings.mb_is_pickable,
        (const Object*)this
    );
}

bool CollisionObject2D::is_shape_owner_disabled(const int64_t owner_id) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_shape_owner_disabled,
        (const Object*)this,
        owner_id
    );
}

bool CollisionObject2D::is_shape_owner_one_way_collision_enabled(const int64_t owner_id) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_shape_owner_one_way_collision_enabled,
        (const Object*)this,
        owner_id
    );
}

void CollisionObject2D::remove_shape_owner(const int64_t owner_id) {
    rebel_icall_void_int(
        method_bindings.mb_remove_shape_owner,
        (const Object*)this,
        owner_id
    );
}

void CollisionObject2D::set_collision_layer(const int64_t layer) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_layer,
        (const Object*)this,
        layer
    );
}

void CollisionObject2D::set_collision_layer_bit(const int64_t bit, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_collision_layer_bit,
        (const Object*)this,
        bit,
        value
    );
}

void CollisionObject2D::set_collision_mask(const int64_t mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_mask,
        (const Object*)this,
        mask
    );
}

void CollisionObject2D::set_collision_mask_bit(const int64_t bit, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_collision_mask_bit,
        (const Object*)this,
        bit,
        value
    );
}

void CollisionObject2D::set_pickable(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_pickable,
        (const Object*)this,
        enabled
    );
}

int64_t CollisionObject2D::shape_find_owner(const int64_t shape_index) const {
    return rebel_icall_int_int(
        method_bindings.mb_shape_find_owner,
        (const Object*)this,
        shape_index
    );
}

void CollisionObject2D::shape_owner_add_shape(const int64_t owner_id, const Ref<Shape2D> shape) {
    rebel_icall_void_int_object(
        method_bindings.mb_shape_owner_add_shape,
        (const Object*)this,
        owner_id,
        shape.ptr()
    );
}

void CollisionObject2D::shape_owner_clear_shapes(const int64_t owner_id) {
    rebel_icall_void_int(
        method_bindings.mb_shape_owner_clear_shapes,
        (const Object*)this,
        owner_id
    );
}

Object* CollisionObject2D::shape_owner_get_owner(const int64_t owner_id) const {
    return (Object*)rebel_icall_object_int(
        method_bindings.mb_shape_owner_get_owner,
        (const Object*)this,
        owner_id
    );
}

Ref<Shape2D> CollisionObject2D::shape_owner_get_shape(const int64_t owner_id, const int64_t shape_id) const {
    return Ref<Shape2D>::create_ref(rebel_icall_object_int_int(
        method_bindings.mb_shape_owner_get_shape,
        (const Object*)this,
        owner_id,
        shape_id
    ));
}

int64_t CollisionObject2D::shape_owner_get_shape_count(const int64_t owner_id) const {
    return rebel_icall_int_int(
        method_bindings.mb_shape_owner_get_shape_count,
        (const Object*)this,
        owner_id
    );
}

int64_t CollisionObject2D::shape_owner_get_shape_index(const int64_t owner_id, const int64_t shape_id) const {
    return rebel_icall_int_int_int(
        method_bindings.mb_shape_owner_get_shape_index,
        (const Object*)this,
        owner_id,
        shape_id
    );
}

Transform2D CollisionObject2D::shape_owner_get_transform(const int64_t owner_id) const {
    return rebel_icall_transform2d_int(
        method_bindings.mb_shape_owner_get_transform,
        (const Object*)this,
        owner_id
    );
}

void CollisionObject2D::shape_owner_remove_shape(const int64_t owner_id, const int64_t shape_id) {
    rebel_icall_void_int_int(
        method_bindings.mb_shape_owner_remove_shape,
        (const Object*)this,
        owner_id,
        shape_id
    );
}

void CollisionObject2D::shape_owner_set_disabled(const int64_t owner_id, const bool disabled) {
    rebel_icall_void_int_bool(
        method_bindings.mb_shape_owner_set_disabled,
        (const Object*)this,
        owner_id,
        disabled
    );
}

void CollisionObject2D::shape_owner_set_one_way_collision(const int64_t owner_id, const bool enable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_shape_owner_set_one_way_collision,
        (const Object*)this,
        owner_id,
        enable
    );
}

void CollisionObject2D::shape_owner_set_one_way_collision_margin(const int64_t owner_id, const real_t margin) {
    rebel_icall_void_int_float(
        method_bindings.mb_shape_owner_set_one_way_collision_margin,
        (const Object*)this,
        owner_id,
        margin
    );
}

void CollisionObject2D::shape_owner_set_transform(const int64_t owner_id, const Transform2D transform) {
    rebel_icall_void_int_transform2d(
        method_bindings.mb_shape_owner_set_transform,
        (const Object*)this,
        owner_id,
        transform
    );
}

void CollisionObject2D::init_method_bindings() {
    method_bindings.mb__input_event =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "_input_event"
        );
    method_bindings.mb_create_shape_owner =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "create_shape_owner"
        );
    method_bindings.mb_get_collision_layer =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "get_collision_layer"
        );
    method_bindings.mb_get_collision_layer_bit =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "get_collision_layer_bit"
        );
    method_bindings.mb_get_collision_mask =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "get_collision_mask"
        );
    method_bindings.mb_get_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "get_collision_mask_bit"
        );
    method_bindings.mb_get_rid =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "get_rid"
        );
    method_bindings.mb_get_shape_owner_one_way_collision_margin =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "get_shape_owner_one_way_collision_margin"
        );
    method_bindings.mb_get_shape_owners =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "get_shape_owners"
        );
    method_bindings.mb_is_pickable =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "is_pickable"
        );
    method_bindings.mb_is_shape_owner_disabled =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "is_shape_owner_disabled"
        );
    method_bindings.mb_is_shape_owner_one_way_collision_enabled =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "is_shape_owner_one_way_collision_enabled"
        );
    method_bindings.mb_remove_shape_owner =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "remove_shape_owner"
        );
    method_bindings.mb_set_collision_layer =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "set_collision_layer"
        );
    method_bindings.mb_set_collision_layer_bit =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "set_collision_layer_bit"
        );
    method_bindings.mb_set_collision_mask =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "set_collision_mask"
        );
    method_bindings.mb_set_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "set_collision_mask_bit"
        );
    method_bindings.mb_set_pickable =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "set_pickable"
        );
    method_bindings.mb_shape_find_owner =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "shape_find_owner"
        );
    method_bindings.mb_shape_owner_add_shape =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "shape_owner_add_shape"
        );
    method_bindings.mb_shape_owner_clear_shapes =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "shape_owner_clear_shapes"
        );
    method_bindings.mb_shape_owner_get_owner =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "shape_owner_get_owner"
        );
    method_bindings.mb_shape_owner_get_shape =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "shape_owner_get_shape"
        );
    method_bindings.mb_shape_owner_get_shape_count =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "shape_owner_get_shape_count"
        );
    method_bindings.mb_shape_owner_get_shape_index =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "shape_owner_get_shape_index"
        );
    method_bindings.mb_shape_owner_get_transform =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "shape_owner_get_transform"
        );
    method_bindings.mb_shape_owner_remove_shape =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "shape_owner_remove_shape"
        );
    method_bindings.mb_shape_owner_set_disabled =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "shape_owner_set_disabled"
        );
    method_bindings.mb_shape_owner_set_one_way_collision =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "shape_owner_set_one_way_collision"
        );
    method_bindings.mb_shape_owner_set_one_way_collision_margin =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "shape_owner_set_one_way_collision_margin"
        );
    method_bindings.mb_shape_owner_set_transform =
        api->rebel_method_bind_get_method(
            "CollisionObject2D",
            "shape_owner_set_transform"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CollisionObject2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CollisionObject2D::MethodBindings CollisionObject2D::method_bindings = {};
void* CollisionObject2D::class_tag = nullptr;
} // namespace Rebel
