// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/curve3d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Dictionary Curve3D::_get_data() const {
    return rebel_icall_dictionary(
        method_bindings.mb__get_data,
        (const Object*)this
    );
}

void Curve3D::_set_data(const Dictionary arg0) {
    rebel_icall_void_dictionary(
        method_bindings.mb__set_data,
        (const Object*)this,
        arg0
    );
}

void Curve3D::add_point(const Vector3 position, const Vector3 in, const Vector3 out, const int64_t at_position) {
    rebel_icall_void_vector3_vector3_vector3_int(
        method_bindings.mb_add_point,
        (const Object*)this,
        position,
        in,
        out,
        at_position
    );
}

void Curve3D::clear_points() {
    rebel_icall_void(
        method_bindings.mb_clear_points,
        (const Object*)this
    );
}

real_t Curve3D::get_bake_interval() const {
    return rebel_icall_float(
        method_bindings.mb_get_bake_interval,
        (const Object*)this
    );
}

real_t Curve3D::get_baked_length() const {
    return rebel_icall_float(
        method_bindings.mb_get_baked_length,
        (const Object*)this
    );
}

PoolVector3Array Curve3D::get_baked_points() const {
    return rebel_icall_poolvector3array(
        method_bindings.mb_get_baked_points,
        (const Object*)this
    );
}

PoolRealArray Curve3D::get_baked_tilts() const {
    return rebel_icall_poolrealarray(
        method_bindings.mb_get_baked_tilts,
        (const Object*)this
    );
}

PoolVector3Array Curve3D::get_baked_up_vectors() const {
    return rebel_icall_poolvector3array(
        method_bindings.mb_get_baked_up_vectors,
        (const Object*)this
    );
}

real_t Curve3D::get_closest_offset(const Vector3 to_point) const {
    return rebel_icall_float_vector3(
        method_bindings.mb_get_closest_offset,
        (const Object*)this,
        to_point
    );
}

Vector3 Curve3D::get_closest_point(const Vector3 to_point) const {
    return rebel_icall_vector3_vector3(
        method_bindings.mb_get_closest_point,
        (const Object*)this,
        to_point
    );
}

int64_t Curve3D::get_point_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_point_count,
        (const Object*)this
    );
}

Vector3 Curve3D::get_point_in(const int64_t idx) const {
    return rebel_icall_vector3_int(
        method_bindings.mb_get_point_in,
        (const Object*)this,
        idx
    );
}

Vector3 Curve3D::get_point_out(const int64_t idx) const {
    return rebel_icall_vector3_int(
        method_bindings.mb_get_point_out,
        (const Object*)this,
        idx
    );
}

Vector3 Curve3D::get_point_position(const int64_t idx) const {
    return rebel_icall_vector3_int(
        method_bindings.mb_get_point_position,
        (const Object*)this,
        idx
    );
}

real_t Curve3D::get_point_tilt(const int64_t idx) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_point_tilt,
        (const Object*)this,
        idx
    );
}

Vector3 Curve3D::interpolate(const int64_t idx, const real_t t) const {
    return rebel_icall_vector3_int_float(
        method_bindings.mb_interpolate,
        (const Object*)this,
        idx,
        t
    );
}

Vector3 Curve3D::interpolate_baked(const real_t offset, const bool cubic) const {
    return rebel_icall_vector3_float_bool(
        method_bindings.mb_interpolate_baked,
        (const Object*)this,
        offset,
        cubic
    );
}

Vector3 Curve3D::interpolate_baked_up_vector(const real_t offset, const bool apply_tilt) const {
    return rebel_icall_vector3_float_bool(
        method_bindings.mb_interpolate_baked_up_vector,
        (const Object*)this,
        offset,
        apply_tilt
    );
}

Vector3 Curve3D::interpolatef(const real_t fofs) const {
    return rebel_icall_vector3_float(
        method_bindings.mb_interpolatef,
        (const Object*)this,
        fofs
    );
}

bool Curve3D::is_up_vector_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_up_vector_enabled,
        (const Object*)this
    );
}

void Curve3D::remove_point(const int64_t idx) {
    rebel_icall_void_int(
        method_bindings.mb_remove_point,
        (const Object*)this,
        idx
    );
}

void Curve3D::set_bake_interval(const real_t distance) {
    rebel_icall_void_float(
        method_bindings.mb_set_bake_interval,
        (const Object*)this,
        distance
    );
}

void Curve3D::set_point_in(const int64_t idx, const Vector3 position) {
    rebel_icall_void_int_vector3(
        method_bindings.mb_set_point_in,
        (const Object*)this,
        idx,
        position
    );
}

void Curve3D::set_point_out(const int64_t idx, const Vector3 position) {
    rebel_icall_void_int_vector3(
        method_bindings.mb_set_point_out,
        (const Object*)this,
        idx,
        position
    );
}

void Curve3D::set_point_position(const int64_t idx, const Vector3 position) {
    rebel_icall_void_int_vector3(
        method_bindings.mb_set_point_position,
        (const Object*)this,
        idx,
        position
    );
}

void Curve3D::set_point_tilt(const int64_t idx, const real_t tilt) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_point_tilt,
        (const Object*)this,
        idx,
        tilt
    );
}

void Curve3D::set_up_vector_enabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_up_vector_enabled,
        (const Object*)this,
        enable
    );
}

PoolVector3Array Curve3D::tessellate(const int64_t max_stages, const real_t tolerance_degrees) const {
    return rebel_icall_poolvector3array_int_float(
        method_bindings.mb_tessellate,
        (const Object*)this,
        max_stages,
        tolerance_degrees
    );
}

Curve3D* Curve3D::create() {
    return (Curve3D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Curve3D")()
         );
}

void Curve3D::init_method_bindings() {
    method_bindings.mb__get_data =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "_get_data"
        );
    method_bindings.mb__set_data =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "_set_data"
        );
    method_bindings.mb_add_point =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "add_point"
        );
    method_bindings.mb_clear_points =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "clear_points"
        );
    method_bindings.mb_get_bake_interval =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "get_bake_interval"
        );
    method_bindings.mb_get_baked_length =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "get_baked_length"
        );
    method_bindings.mb_get_baked_points =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "get_baked_points"
        );
    method_bindings.mb_get_baked_tilts =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "get_baked_tilts"
        );
    method_bindings.mb_get_baked_up_vectors =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "get_baked_up_vectors"
        );
    method_bindings.mb_get_closest_offset =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "get_closest_offset"
        );
    method_bindings.mb_get_closest_point =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "get_closest_point"
        );
    method_bindings.mb_get_point_count =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "get_point_count"
        );
    method_bindings.mb_get_point_in =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "get_point_in"
        );
    method_bindings.mb_get_point_out =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "get_point_out"
        );
    method_bindings.mb_get_point_position =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "get_point_position"
        );
    method_bindings.mb_get_point_tilt =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "get_point_tilt"
        );
    method_bindings.mb_interpolate =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "interpolate"
        );
    method_bindings.mb_interpolate_baked =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "interpolate_baked"
        );
    method_bindings.mb_interpolate_baked_up_vector =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "interpolate_baked_up_vector"
        );
    method_bindings.mb_interpolatef =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "interpolatef"
        );
    method_bindings.mb_is_up_vector_enabled =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "is_up_vector_enabled"
        );
    method_bindings.mb_remove_point =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "remove_point"
        );
    method_bindings.mb_set_bake_interval =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "set_bake_interval"
        );
    method_bindings.mb_set_point_in =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "set_point_in"
        );
    method_bindings.mb_set_point_out =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "set_point_out"
        );
    method_bindings.mb_set_point_position =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "set_point_position"
        );
    method_bindings.mb_set_point_tilt =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "set_point_tilt"
        );
    method_bindings.mb_set_up_vector_enabled =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "set_up_vector_enabled"
        );
    method_bindings.mb_tessellate =
        api->rebel_method_bind_get_method(
            "Curve3D",
            "tessellate"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Curve3D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Curve3D::MethodBindings Curve3D::method_bindings = {};
void* Curve3D::class_tag = nullptr;
} // namespace Rebel
