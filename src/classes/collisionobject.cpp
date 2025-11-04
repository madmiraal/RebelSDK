// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/collisionobject.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/object.h"
#include "classes/shape.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void CollisionObject::_input_event(const Object* camera, const Ref<InputEvent> event, const Vector3 position, const Vector3 normal, const int64_t shape_idx) {
    rebel_icall_void_object_object_vector3_vector3_int(
        method_bindings.mb__input_event,
        (const Object*)this,
        camera,
        event.ptr(),
        position,
        normal,
        shape_idx
    );
}

void CollisionObject::_shape_changed(const Ref<Shape> shape) {
    rebel_icall_void_object(
        method_bindings.mb__shape_changed,
        (const Object*)this,
        shape.ptr()
    );
}

void CollisionObject::_update_debug_shapes() {
    rebel_icall_void(
        method_bindings.mb__update_debug_shapes,
        (const Object*)this
    );
}

int64_t CollisionObject::create_shape_owner(const Object* owner) {
    return rebel_icall_int_object(
        method_bindings.mb_create_shape_owner,
        (const Object*)this,
        owner
    );
}

bool CollisionObject::get_capture_input_on_drag() const {
    return rebel_icall_bool(
        method_bindings.mb_get_capture_input_on_drag,
        (const Object*)this
    );
}

int64_t CollisionObject::get_collision_layer() const {
    return rebel_icall_int(
        method_bindings.mb_get_collision_layer,
        (const Object*)this
    );
}

bool CollisionObject::get_collision_layer_bit(const int64_t bit) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_collision_layer_bit,
        (const Object*)this,
        bit
    );
}

int64_t CollisionObject::get_collision_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_collision_mask,
        (const Object*)this
    );
}

bool CollisionObject::get_collision_mask_bit(const int64_t bit) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_collision_mask_bit,
        (const Object*)this,
        bit
    );
}

RID CollisionObject::get_rid() const {
    return rebel_icall_rid(
        method_bindings.mb_get_rid,
        (const Object*)this
    );
}

Array CollisionObject::get_shape_owners() {
    return rebel_icall_array(
        method_bindings.mb_get_shape_owners,
        (const Object*)this
    );
}

bool CollisionObject::is_ray_pickable() const {
    return rebel_icall_bool(
        method_bindings.mb_is_ray_pickable,
        (const Object*)this
    );
}

bool CollisionObject::is_shape_owner_disabled(const int64_t owner_id) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_shape_owner_disabled,
        (const Object*)this,
        owner_id
    );
}

void CollisionObject::remove_shape_owner(const int64_t owner_id) {
    rebel_icall_void_int(
        method_bindings.mb_remove_shape_owner,
        (const Object*)this,
        owner_id
    );
}

void CollisionObject::set_capture_input_on_drag(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_capture_input_on_drag,
        (const Object*)this,
        enable
    );
}

void CollisionObject::set_collision_layer(const int64_t layer) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_layer,
        (const Object*)this,
        layer
    );
}

void CollisionObject::set_collision_layer_bit(const int64_t bit, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_collision_layer_bit,
        (const Object*)this,
        bit,
        value
    );
}

void CollisionObject::set_collision_mask(const int64_t mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_mask,
        (const Object*)this,
        mask
    );
}

void CollisionObject::set_collision_mask_bit(const int64_t bit, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_collision_mask_bit,
        (const Object*)this,
        bit,
        value
    );
}

void CollisionObject::set_ray_pickable(const bool ray_pickable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_ray_pickable,
        (const Object*)this,
        ray_pickable
    );
}

int64_t CollisionObject::shape_find_owner(const int64_t shape_index) const {
    return rebel_icall_int_int(
        method_bindings.mb_shape_find_owner,
        (const Object*)this,
        shape_index
    );
}

void CollisionObject::shape_owner_add_shape(const int64_t owner_id, const Ref<Shape> shape) {
    rebel_icall_void_int_object(
        method_bindings.mb_shape_owner_add_shape,
        (const Object*)this,
        owner_id,
        shape.ptr()
    );
}

void CollisionObject::shape_owner_clear_shapes(const int64_t owner_id) {
    rebel_icall_void_int(
        method_bindings.mb_shape_owner_clear_shapes,
        (const Object*)this,
        owner_id
    );
}

Object* CollisionObject::shape_owner_get_owner(const int64_t owner_id) const {
    return (Object*)rebel_icall_object_int(
        method_bindings.mb_shape_owner_get_owner,
        (const Object*)this,
        owner_id
    );
}

Ref<Shape> CollisionObject::shape_owner_get_shape(const int64_t owner_id, const int64_t shape_id) const {
    return Ref<Shape>::create_ref(rebel_icall_object_int_int(
        method_bindings.mb_shape_owner_get_shape,
        (const Object*)this,
        owner_id,
        shape_id
    ));
}

int64_t CollisionObject::shape_owner_get_shape_count(const int64_t owner_id) const {
    return rebel_icall_int_int(
        method_bindings.mb_shape_owner_get_shape_count,
        (const Object*)this,
        owner_id
    );
}

int64_t CollisionObject::shape_owner_get_shape_index(const int64_t owner_id, const int64_t shape_id) const {
    return rebel_icall_int_int_int(
        method_bindings.mb_shape_owner_get_shape_index,
        (const Object*)this,
        owner_id,
        shape_id
    );
}

Transform CollisionObject::shape_owner_get_transform(const int64_t owner_id) const {
    return rebel_icall_transform_int(
        method_bindings.mb_shape_owner_get_transform,
        (const Object*)this,
        owner_id
    );
}

void CollisionObject::shape_owner_remove_shape(const int64_t owner_id, const int64_t shape_id) {
    rebel_icall_void_int_int(
        method_bindings.mb_shape_owner_remove_shape,
        (const Object*)this,
        owner_id,
        shape_id
    );
}

void CollisionObject::shape_owner_set_disabled(const int64_t owner_id, const bool disabled) {
    rebel_icall_void_int_bool(
        method_bindings.mb_shape_owner_set_disabled,
        (const Object*)this,
        owner_id,
        disabled
    );
}

void CollisionObject::shape_owner_set_transform(const int64_t owner_id, const Transform transform) {
    rebel_icall_void_int_transform(
        method_bindings.mb_shape_owner_set_transform,
        (const Object*)this,
        owner_id,
        transform
    );
}

void CollisionObject::init_method_bindings() {
    method_bindings.mb__input_event =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "_input_event"
        );
    method_bindings.mb__shape_changed =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "_shape_changed"
        );
    method_bindings.mb__update_debug_shapes =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "_update_debug_shapes"
        );
    method_bindings.mb_create_shape_owner =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "create_shape_owner"
        );
    method_bindings.mb_get_capture_input_on_drag =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "get_capture_input_on_drag"
        );
    method_bindings.mb_get_collision_layer =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "get_collision_layer"
        );
    method_bindings.mb_get_collision_layer_bit =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "get_collision_layer_bit"
        );
    method_bindings.mb_get_collision_mask =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "get_collision_mask"
        );
    method_bindings.mb_get_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "get_collision_mask_bit"
        );
    method_bindings.mb_get_rid =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "get_rid"
        );
    method_bindings.mb_get_shape_owners =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "get_shape_owners"
        );
    method_bindings.mb_is_ray_pickable =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "is_ray_pickable"
        );
    method_bindings.mb_is_shape_owner_disabled =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "is_shape_owner_disabled"
        );
    method_bindings.mb_remove_shape_owner =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "remove_shape_owner"
        );
    method_bindings.mb_set_capture_input_on_drag =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "set_capture_input_on_drag"
        );
    method_bindings.mb_set_collision_layer =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "set_collision_layer"
        );
    method_bindings.mb_set_collision_layer_bit =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "set_collision_layer_bit"
        );
    method_bindings.mb_set_collision_mask =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "set_collision_mask"
        );
    method_bindings.mb_set_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "set_collision_mask_bit"
        );
    method_bindings.mb_set_ray_pickable =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "set_ray_pickable"
        );
    method_bindings.mb_shape_find_owner =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "shape_find_owner"
        );
    method_bindings.mb_shape_owner_add_shape =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "shape_owner_add_shape"
        );
    method_bindings.mb_shape_owner_clear_shapes =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "shape_owner_clear_shapes"
        );
    method_bindings.mb_shape_owner_get_owner =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "shape_owner_get_owner"
        );
    method_bindings.mb_shape_owner_get_shape =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "shape_owner_get_shape"
        );
    method_bindings.mb_shape_owner_get_shape_count =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "shape_owner_get_shape_count"
        );
    method_bindings.mb_shape_owner_get_shape_index =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "shape_owner_get_shape_index"
        );
    method_bindings.mb_shape_owner_get_transform =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "shape_owner_get_transform"
        );
    method_bindings.mb_shape_owner_remove_shape =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "shape_owner_remove_shape"
        );
    method_bindings.mb_shape_owner_set_disabled =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "shape_owner_set_disabled"
        );
    method_bindings.mb_shape_owner_set_transform =
        api->rebel_method_bind_get_method(
            "CollisionObject",
            "shape_owner_set_transform"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CollisionObject");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CollisionObject::MethodBindings CollisionObject::method_bindings = {};
void* CollisionObject::class_tag = nullptr;
} // namespace Rebel
