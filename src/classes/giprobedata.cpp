// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/giprobedata.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t GIProbeData::get_bias() const {
    return rebel_icall_float(
        method_bindings.mb_get_bias,
        (const Object*)this
    );
}

AABB GIProbeData::get_bounds() const {
    return rebel_icall_aabb(
        method_bindings.mb_get_bounds,
        (const Object*)this
    );
}

real_t GIProbeData::get_cell_size() const {
    return rebel_icall_float(
        method_bindings.mb_get_cell_size,
        (const Object*)this
    );
}

PoolIntArray GIProbeData::get_dynamic_data() const {
    return rebel_icall_poolintarray(
        method_bindings.mb_get_dynamic_data,
        (const Object*)this
    );
}

int64_t GIProbeData::get_dynamic_range() const {
    return rebel_icall_int(
        method_bindings.mb_get_dynamic_range,
        (const Object*)this
    );
}

real_t GIProbeData::get_energy() const {
    return rebel_icall_float(
        method_bindings.mb_get_energy,
        (const Object*)this
    );
}

real_t GIProbeData::get_normal_bias() const {
    return rebel_icall_float(
        method_bindings.mb_get_normal_bias,
        (const Object*)this
    );
}

real_t GIProbeData::get_propagation() const {
    return rebel_icall_float(
        method_bindings.mb_get_propagation,
        (const Object*)this
    );
}

Transform GIProbeData::get_to_cell_xform() const {
    return rebel_icall_transform(
        method_bindings.mb_get_to_cell_xform,
        (const Object*)this
    );
}

bool GIProbeData::is_compressed() const {
    return rebel_icall_bool(
        method_bindings.mb_is_compressed,
        (const Object*)this
    );
}

bool GIProbeData::is_interior() const {
    return rebel_icall_bool(
        method_bindings.mb_is_interior,
        (const Object*)this
    );
}

void GIProbeData::set_bias(const real_t bias) {
    rebel_icall_void_float(
        method_bindings.mb_set_bias,
        (const Object*)this,
        bias
    );
}

void GIProbeData::set_bounds(const AABB bounds) {
    rebel_icall_void_aabb(
        method_bindings.mb_set_bounds,
        (const Object*)this,
        bounds
    );
}

void GIProbeData::set_cell_size(const real_t cell_size) {
    rebel_icall_void_float(
        method_bindings.mb_set_cell_size,
        (const Object*)this,
        cell_size
    );
}

void GIProbeData::set_compress(const bool compress) {
    rebel_icall_void_bool(
        method_bindings.mb_set_compress,
        (const Object*)this,
        compress
    );
}

void GIProbeData::set_dynamic_data(const PoolIntArray dynamic_data) {
    rebel_icall_void_poolintarray(
        method_bindings.mb_set_dynamic_data,
        (const Object*)this,
        dynamic_data
    );
}

void GIProbeData::set_dynamic_range(const int64_t dynamic_range) {
    rebel_icall_void_int(
        method_bindings.mb_set_dynamic_range,
        (const Object*)this,
        dynamic_range
    );
}

void GIProbeData::set_energy(const real_t energy) {
    rebel_icall_void_float(
        method_bindings.mb_set_energy,
        (const Object*)this,
        energy
    );
}

void GIProbeData::set_interior(const bool interior) {
    rebel_icall_void_bool(
        method_bindings.mb_set_interior,
        (const Object*)this,
        interior
    );
}

void GIProbeData::set_normal_bias(const real_t bias) {
    rebel_icall_void_float(
        method_bindings.mb_set_normal_bias,
        (const Object*)this,
        bias
    );
}

void GIProbeData::set_propagation(const real_t propagation) {
    rebel_icall_void_float(
        method_bindings.mb_set_propagation,
        (const Object*)this,
        propagation
    );
}

void GIProbeData::set_to_cell_xform(const Transform to_cell_xform) {
    rebel_icall_void_transform(
        method_bindings.mb_set_to_cell_xform,
        (const Object*)this,
        to_cell_xform
    );
}

GIProbeData* GIProbeData::create() {
    return (GIProbeData*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GIProbeData")()
         );
}

void GIProbeData::init_method_bindings() {
    method_bindings.mb_get_bias =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "get_bias"
        );
    method_bindings.mb_get_bounds =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "get_bounds"
        );
    method_bindings.mb_get_cell_size =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "get_cell_size"
        );
    method_bindings.mb_get_dynamic_data =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "get_dynamic_data"
        );
    method_bindings.mb_get_dynamic_range =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "get_dynamic_range"
        );
    method_bindings.mb_get_energy =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "get_energy"
        );
    method_bindings.mb_get_normal_bias =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "get_normal_bias"
        );
    method_bindings.mb_get_propagation =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "get_propagation"
        );
    method_bindings.mb_get_to_cell_xform =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "get_to_cell_xform"
        );
    method_bindings.mb_is_compressed =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "is_compressed"
        );
    method_bindings.mb_is_interior =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "is_interior"
        );
    method_bindings.mb_set_bias =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "set_bias"
        );
    method_bindings.mb_set_bounds =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "set_bounds"
        );
    method_bindings.mb_set_cell_size =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "set_cell_size"
        );
    method_bindings.mb_set_compress =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "set_compress"
        );
    method_bindings.mb_set_dynamic_data =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "set_dynamic_data"
        );
    method_bindings.mb_set_dynamic_range =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "set_dynamic_range"
        );
    method_bindings.mb_set_energy =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "set_energy"
        );
    method_bindings.mb_set_interior =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "set_interior"
        );
    method_bindings.mb_set_normal_bias =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "set_normal_bias"
        );
    method_bindings.mb_set_propagation =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "set_propagation"
        );
    method_bindings.mb_set_to_cell_xform =
        api->rebel_method_bind_get_method(
            "GIProbeData",
            "set_to_cell_xform"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GIProbeData");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GIProbeData::MethodBindings GIProbeData::method_bindings = {};
void* GIProbeData::class_tag = nullptr;
} // namespace Rebel
