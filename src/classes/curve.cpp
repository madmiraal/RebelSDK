// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/curve.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array Curve::_get_data() const {
    return rebel_icall_array(
        method_bindings.mb__get_data,
        (const Object*)this
    );
}

void Curve::_set_data(const Array data) {
    rebel_icall_void_array(
        method_bindings.mb__set_data,
        (const Object*)this,
        data
    );
}

int64_t Curve::add_point(const Vector2 position, const real_t left_tangent, const real_t right_tangent, const int64_t left_mode, const int64_t right_mode) {
    return rebel_icall_int_vector2_float_float_int_int(
        method_bindings.mb_add_point,
        (const Object*)this,
        position,
        left_tangent,
        right_tangent,
        left_mode,
        right_mode
    );
}

void Curve::bake() {
    rebel_icall_void(
        method_bindings.mb_bake,
        (const Object*)this
    );
}

void Curve::clean_dupes() {
    rebel_icall_void(
        method_bindings.mb_clean_dupes,
        (const Object*)this
    );
}

void Curve::clear_points() {
    rebel_icall_void(
        method_bindings.mb_clear_points,
        (const Object*)this
    );
}

int64_t Curve::get_bake_resolution() const {
    return rebel_icall_int(
        method_bindings.mb_get_bake_resolution,
        (const Object*)this
    );
}

real_t Curve::get_max_value() const {
    return rebel_icall_float(
        method_bindings.mb_get_max_value,
        (const Object*)this
    );
}

real_t Curve::get_min_value() const {
    return rebel_icall_float(
        method_bindings.mb_get_min_value,
        (const Object*)this
    );
}

int64_t Curve::get_point_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_point_count,
        (const Object*)this
    );
}

Curve::TangentMode Curve::get_point_left_mode(const int64_t index) const {
    return (Curve::TangentMode)rebel_icall_int_int(
        method_bindings.mb_get_point_left_mode,
        (const Object*)this,
        index
    );
}

real_t Curve::get_point_left_tangent(const int64_t index) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_point_left_tangent,
        (const Object*)this,
        index
    );
}

Vector2 Curve::get_point_position(const int64_t index) const {
    return rebel_icall_vector2_int(
        method_bindings.mb_get_point_position,
        (const Object*)this,
        index
    );
}

Curve::TangentMode Curve::get_point_right_mode(const int64_t index) const {
    return (Curve::TangentMode)rebel_icall_int_int(
        method_bindings.mb_get_point_right_mode,
        (const Object*)this,
        index
    );
}

real_t Curve::get_point_right_tangent(const int64_t index) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_point_right_tangent,
        (const Object*)this,
        index
    );
}

real_t Curve::interpolate(const real_t offset) const {
    return rebel_icall_float_float(
        method_bindings.mb_interpolate,
        (const Object*)this,
        offset
    );
}

real_t Curve::interpolate_baked(const real_t offset) {
    return rebel_icall_float_float(
        method_bindings.mb_interpolate_baked,
        (const Object*)this,
        offset
    );
}

void Curve::remove_point(const int64_t index) {
    rebel_icall_void_int(
        method_bindings.mb_remove_point,
        (const Object*)this,
        index
    );
}

void Curve::set_bake_resolution(const int64_t resolution) {
    rebel_icall_void_int(
        method_bindings.mb_set_bake_resolution,
        (const Object*)this,
        resolution
    );
}

void Curve::set_max_value(const real_t max) {
    rebel_icall_void_float(
        method_bindings.mb_set_max_value,
        (const Object*)this,
        max
    );
}

void Curve::set_min_value(const real_t min) {
    rebel_icall_void_float(
        method_bindings.mb_set_min_value,
        (const Object*)this,
        min
    );
}

void Curve::set_point_left_mode(const int64_t index, const int64_t mode) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_point_left_mode,
        (const Object*)this,
        index,
        mode
    );
}

void Curve::set_point_left_tangent(const int64_t index, const real_t tangent) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_point_left_tangent,
        (const Object*)this,
        index,
        tangent
    );
}

int64_t Curve::set_point_offset(const int64_t index, const real_t offset) {
    return rebel_icall_int_int_float(
        method_bindings.mb_set_point_offset,
        (const Object*)this,
        index,
        offset
    );
}

void Curve::set_point_right_mode(const int64_t index, const int64_t mode) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_point_right_mode,
        (const Object*)this,
        index,
        mode
    );
}

void Curve::set_point_right_tangent(const int64_t index, const real_t tangent) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_point_right_tangent,
        (const Object*)this,
        index,
        tangent
    );
}

void Curve::set_point_value(const int64_t index, const real_t y) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_point_value,
        (const Object*)this,
        index,
        y
    );
}

Curve* Curve::create() {
    return (Curve*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Curve")()
         );
}

void Curve::init_method_bindings() {
    method_bindings.mb__get_data =
        api->rebel_method_bind_get_method(
            "Curve",
            "_get_data"
        );
    method_bindings.mb__set_data =
        api->rebel_method_bind_get_method(
            "Curve",
            "_set_data"
        );
    method_bindings.mb_add_point =
        api->rebel_method_bind_get_method(
            "Curve",
            "add_point"
        );
    method_bindings.mb_bake =
        api->rebel_method_bind_get_method(
            "Curve",
            "bake"
        );
    method_bindings.mb_clean_dupes =
        api->rebel_method_bind_get_method(
            "Curve",
            "clean_dupes"
        );
    method_bindings.mb_clear_points =
        api->rebel_method_bind_get_method(
            "Curve",
            "clear_points"
        );
    method_bindings.mb_get_bake_resolution =
        api->rebel_method_bind_get_method(
            "Curve",
            "get_bake_resolution"
        );
    method_bindings.mb_get_max_value =
        api->rebel_method_bind_get_method(
            "Curve",
            "get_max_value"
        );
    method_bindings.mb_get_min_value =
        api->rebel_method_bind_get_method(
            "Curve",
            "get_min_value"
        );
    method_bindings.mb_get_point_count =
        api->rebel_method_bind_get_method(
            "Curve",
            "get_point_count"
        );
    method_bindings.mb_get_point_left_mode =
        api->rebel_method_bind_get_method(
            "Curve",
            "get_point_left_mode"
        );
    method_bindings.mb_get_point_left_tangent =
        api->rebel_method_bind_get_method(
            "Curve",
            "get_point_left_tangent"
        );
    method_bindings.mb_get_point_position =
        api->rebel_method_bind_get_method(
            "Curve",
            "get_point_position"
        );
    method_bindings.mb_get_point_right_mode =
        api->rebel_method_bind_get_method(
            "Curve",
            "get_point_right_mode"
        );
    method_bindings.mb_get_point_right_tangent =
        api->rebel_method_bind_get_method(
            "Curve",
            "get_point_right_tangent"
        );
    method_bindings.mb_interpolate =
        api->rebel_method_bind_get_method(
            "Curve",
            "interpolate"
        );
    method_bindings.mb_interpolate_baked =
        api->rebel_method_bind_get_method(
            "Curve",
            "interpolate_baked"
        );
    method_bindings.mb_remove_point =
        api->rebel_method_bind_get_method(
            "Curve",
            "remove_point"
        );
    method_bindings.mb_set_bake_resolution =
        api->rebel_method_bind_get_method(
            "Curve",
            "set_bake_resolution"
        );
    method_bindings.mb_set_max_value =
        api->rebel_method_bind_get_method(
            "Curve",
            "set_max_value"
        );
    method_bindings.mb_set_min_value =
        api->rebel_method_bind_get_method(
            "Curve",
            "set_min_value"
        );
    method_bindings.mb_set_point_left_mode =
        api->rebel_method_bind_get_method(
            "Curve",
            "set_point_left_mode"
        );
    method_bindings.mb_set_point_left_tangent =
        api->rebel_method_bind_get_method(
            "Curve",
            "set_point_left_tangent"
        );
    method_bindings.mb_set_point_offset =
        api->rebel_method_bind_get_method(
            "Curve",
            "set_point_offset"
        );
    method_bindings.mb_set_point_right_mode =
        api->rebel_method_bind_get_method(
            "Curve",
            "set_point_right_mode"
        );
    method_bindings.mb_set_point_right_tangent =
        api->rebel_method_bind_get_method(
            "Curve",
            "set_point_right_tangent"
        );
    method_bindings.mb_set_point_value =
        api->rebel_method_bind_get_method(
            "Curve",
            "set_point_value"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Curve");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Curve::MethodBindings Curve::method_bindings = {};
void* Curve::class_tag = nullptr;
} // namespace Rebel
