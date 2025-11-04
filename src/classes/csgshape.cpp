// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/csgshape.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void CSGShape::_update_shape() {
    rebel_icall_void(
        method_bindings.mb__update_shape,
        (const Object*)this
    );
}

int64_t CSGShape::get_collision_layer() const {
    return rebel_icall_int(
        method_bindings.mb_get_collision_layer,
        (const Object*)this
    );
}

bool CSGShape::get_collision_layer_bit(const int64_t bit) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_collision_layer_bit,
        (const Object*)this,
        bit
    );
}

int64_t CSGShape::get_collision_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_collision_mask,
        (const Object*)this
    );
}

bool CSGShape::get_collision_mask_bit(const int64_t bit) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_collision_mask_bit,
        (const Object*)this,
        bit
    );
}

Array CSGShape::get_meshes() const {
    return rebel_icall_array(
        method_bindings.mb_get_meshes,
        (const Object*)this
    );
}

CSGShape::Operation CSGShape::get_operation() const {
    return (CSGShape::Operation)rebel_icall_int(
        method_bindings.mb_get_operation,
        (const Object*)this
    );
}

real_t CSGShape::get_snap() const {
    return rebel_icall_float(
        method_bindings.mb_get_snap,
        (const Object*)this
    );
}

bool CSGShape::is_calculating_tangents() const {
    return rebel_icall_bool(
        method_bindings.mb_is_calculating_tangents,
        (const Object*)this
    );
}

bool CSGShape::is_root_shape() const {
    return rebel_icall_bool(
        method_bindings.mb_is_root_shape,
        (const Object*)this
    );
}

bool CSGShape::is_using_collision() const {
    return rebel_icall_bool(
        method_bindings.mb_is_using_collision,
        (const Object*)this
    );
}

void CSGShape::set_calculate_tangents(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_calculate_tangents,
        (const Object*)this,
        enabled
    );
}

void CSGShape::set_collision_layer(const int64_t layer) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_layer,
        (const Object*)this,
        layer
    );
}

void CSGShape::set_collision_layer_bit(const int64_t bit, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_collision_layer_bit,
        (const Object*)this,
        bit,
        value
    );
}

void CSGShape::set_collision_mask(const int64_t mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_mask,
        (const Object*)this,
        mask
    );
}

void CSGShape::set_collision_mask_bit(const int64_t bit, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_collision_mask_bit,
        (const Object*)this,
        bit,
        value
    );
}

void CSGShape::set_operation(const int64_t operation) {
    rebel_icall_void_int(
        method_bindings.mb_set_operation,
        (const Object*)this,
        operation
    );
}

void CSGShape::set_snap(const real_t snap) {
    rebel_icall_void_float(
        method_bindings.mb_set_snap,
        (const Object*)this,
        snap
    );
}

void CSGShape::set_use_collision(const bool operation) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_collision,
        (const Object*)this,
        operation
    );
}

void CSGShape::init_method_bindings() {
    method_bindings.mb__update_shape =
        api->rebel_method_bind_get_method(
            "CSGShape",
            "_update_shape"
        );
    method_bindings.mb_get_collision_layer =
        api->rebel_method_bind_get_method(
            "CSGShape",
            "get_collision_layer"
        );
    method_bindings.mb_get_collision_layer_bit =
        api->rebel_method_bind_get_method(
            "CSGShape",
            "get_collision_layer_bit"
        );
    method_bindings.mb_get_collision_mask =
        api->rebel_method_bind_get_method(
            "CSGShape",
            "get_collision_mask"
        );
    method_bindings.mb_get_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "CSGShape",
            "get_collision_mask_bit"
        );
    method_bindings.mb_get_meshes =
        api->rebel_method_bind_get_method(
            "CSGShape",
            "get_meshes"
        );
    method_bindings.mb_get_operation =
        api->rebel_method_bind_get_method(
            "CSGShape",
            "get_operation"
        );
    method_bindings.mb_get_snap =
        api->rebel_method_bind_get_method(
            "CSGShape",
            "get_snap"
        );
    method_bindings.mb_is_calculating_tangents =
        api->rebel_method_bind_get_method(
            "CSGShape",
            "is_calculating_tangents"
        );
    method_bindings.mb_is_root_shape =
        api->rebel_method_bind_get_method(
            "CSGShape",
            "is_root_shape"
        );
    method_bindings.mb_is_using_collision =
        api->rebel_method_bind_get_method(
            "CSGShape",
            "is_using_collision"
        );
    method_bindings.mb_set_calculate_tangents =
        api->rebel_method_bind_get_method(
            "CSGShape",
            "set_calculate_tangents"
        );
    method_bindings.mb_set_collision_layer =
        api->rebel_method_bind_get_method(
            "CSGShape",
            "set_collision_layer"
        );
    method_bindings.mb_set_collision_layer_bit =
        api->rebel_method_bind_get_method(
            "CSGShape",
            "set_collision_layer_bit"
        );
    method_bindings.mb_set_collision_mask =
        api->rebel_method_bind_get_method(
            "CSGShape",
            "set_collision_mask"
        );
    method_bindings.mb_set_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "CSGShape",
            "set_collision_mask_bit"
        );
    method_bindings.mb_set_operation =
        api->rebel_method_bind_get_method(
            "CSGShape",
            "set_operation"
        );
    method_bindings.mb_set_snap =
        api->rebel_method_bind_get_method(
            "CSGShape",
            "set_snap"
        );
    method_bindings.mb_set_use_collision =
        api->rebel_method_bind_get_method(
            "CSGShape",
            "set_use_collision"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CSGShape");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CSGShape::MethodBindings CSGShape::method_bindings = {};
void* CSGShape::class_tag = nullptr;
} // namespace Rebel
