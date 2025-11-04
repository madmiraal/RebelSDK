// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/reflectionprobe.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool ReflectionProbe::are_shadows_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_are_shadows_enabled,
        (const Object*)this
    );
}

int64_t ReflectionProbe::get_cull_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_cull_mask,
        (const Object*)this
    );
}

Vector3 ReflectionProbe::get_extents() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_extents,
        (const Object*)this
    );
}

real_t ReflectionProbe::get_intensity() const {
    return rebel_icall_float(
        method_bindings.mb_get_intensity,
        (const Object*)this
    );
}

Color ReflectionProbe::get_interior_ambient() const {
    return rebel_icall_color(
        method_bindings.mb_get_interior_ambient,
        (const Object*)this
    );
}

real_t ReflectionProbe::get_interior_ambient_energy() const {
    return rebel_icall_float(
        method_bindings.mb_get_interior_ambient_energy,
        (const Object*)this
    );
}

real_t ReflectionProbe::get_interior_ambient_probe_contribution() const {
    return rebel_icall_float(
        method_bindings.mb_get_interior_ambient_probe_contribution,
        (const Object*)this
    );
}

real_t ReflectionProbe::get_max_distance() const {
    return rebel_icall_float(
        method_bindings.mb_get_max_distance,
        (const Object*)this
    );
}

Vector3 ReflectionProbe::get_origin_offset() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_origin_offset,
        (const Object*)this
    );
}

ReflectionProbe::UpdateMode ReflectionProbe::get_update_mode() const {
    return (ReflectionProbe::UpdateMode)rebel_icall_int(
        method_bindings.mb_get_update_mode,
        (const Object*)this
    );
}

bool ReflectionProbe::is_box_projection_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_box_projection_enabled,
        (const Object*)this
    );
}

bool ReflectionProbe::is_set_as_interior() const {
    return rebel_icall_bool(
        method_bindings.mb_is_set_as_interior,
        (const Object*)this
    );
}

void ReflectionProbe::set_as_interior(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_as_interior,
        (const Object*)this,
        enable
    );
}

void ReflectionProbe::set_cull_mask(const int64_t layers) {
    rebel_icall_void_int(
        method_bindings.mb_set_cull_mask,
        (const Object*)this,
        layers
    );
}

void ReflectionProbe::set_enable_box_projection(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_enable_box_projection,
        (const Object*)this,
        enable
    );
}

void ReflectionProbe::set_enable_shadows(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_enable_shadows,
        (const Object*)this,
        enable
    );
}

void ReflectionProbe::set_extents(const Vector3 extents) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_extents,
        (const Object*)this,
        extents
    );
}

void ReflectionProbe::set_intensity(const real_t intensity) {
    rebel_icall_void_float(
        method_bindings.mb_set_intensity,
        (const Object*)this,
        intensity
    );
}

void ReflectionProbe::set_interior_ambient(const Color ambient) {
    rebel_icall_void_color(
        method_bindings.mb_set_interior_ambient,
        (const Object*)this,
        ambient
    );
}

void ReflectionProbe::set_interior_ambient_energy(const real_t ambient_energy) {
    rebel_icall_void_float(
        method_bindings.mb_set_interior_ambient_energy,
        (const Object*)this,
        ambient_energy
    );
}

void ReflectionProbe::set_interior_ambient_probe_contribution(const real_t ambient_probe_contribution) {
    rebel_icall_void_float(
        method_bindings.mb_set_interior_ambient_probe_contribution,
        (const Object*)this,
        ambient_probe_contribution
    );
}

void ReflectionProbe::set_max_distance(const real_t max_distance) {
    rebel_icall_void_float(
        method_bindings.mb_set_max_distance,
        (const Object*)this,
        max_distance
    );
}

void ReflectionProbe::set_origin_offset(const Vector3 origin_offset) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_origin_offset,
        (const Object*)this,
        origin_offset
    );
}

void ReflectionProbe::set_update_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_update_mode,
        (const Object*)this,
        mode
    );
}

ReflectionProbe* ReflectionProbe::create() {
    return (ReflectionProbe*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ReflectionProbe")()
         );
}

void ReflectionProbe::init_method_bindings() {
    method_bindings.mb_are_shadows_enabled =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "are_shadows_enabled"
        );
    method_bindings.mb_get_cull_mask =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "get_cull_mask"
        );
    method_bindings.mb_get_extents =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "get_extents"
        );
    method_bindings.mb_get_intensity =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "get_intensity"
        );
    method_bindings.mb_get_interior_ambient =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "get_interior_ambient"
        );
    method_bindings.mb_get_interior_ambient_energy =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "get_interior_ambient_energy"
        );
    method_bindings.mb_get_interior_ambient_probe_contribution =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "get_interior_ambient_probe_contribution"
        );
    method_bindings.mb_get_max_distance =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "get_max_distance"
        );
    method_bindings.mb_get_origin_offset =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "get_origin_offset"
        );
    method_bindings.mb_get_update_mode =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "get_update_mode"
        );
    method_bindings.mb_is_box_projection_enabled =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "is_box_projection_enabled"
        );
    method_bindings.mb_is_set_as_interior =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "is_set_as_interior"
        );
    method_bindings.mb_set_as_interior =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "set_as_interior"
        );
    method_bindings.mb_set_cull_mask =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "set_cull_mask"
        );
    method_bindings.mb_set_enable_box_projection =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "set_enable_box_projection"
        );
    method_bindings.mb_set_enable_shadows =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "set_enable_shadows"
        );
    method_bindings.mb_set_extents =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "set_extents"
        );
    method_bindings.mb_set_intensity =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "set_intensity"
        );
    method_bindings.mb_set_interior_ambient =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "set_interior_ambient"
        );
    method_bindings.mb_set_interior_ambient_energy =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "set_interior_ambient_energy"
        );
    method_bindings.mb_set_interior_ambient_probe_contribution =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "set_interior_ambient_probe_contribution"
        );
    method_bindings.mb_set_max_distance =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "set_max_distance"
        );
    method_bindings.mb_set_origin_offset =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "set_origin_offset"
        );
    method_bindings.mb_set_update_mode =
        api->rebel_method_bind_get_method(
            "ReflectionProbe",
            "set_update_mode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ReflectionProbe");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ReflectionProbe::MethodBindings ReflectionProbe::method_bindings = {};
void* ReflectionProbe::class_tag = nullptr;
} // namespace Rebel
