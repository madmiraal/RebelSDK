// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/giprobe.h"

#include "classes/giprobedata.h"
#include "classes/icalls.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void GIProbe::bake(const Node* from_node, const bool create_visual_debug) {
    rebel_icall_void_object_bool(
        method_bindings.mb_bake,
        (const Object*)this,
        from_node,
        create_visual_debug
    );
}

void GIProbe::debug_bake() {
    rebel_icall_void(
        method_bindings.mb_debug_bake,
        (const Object*)this
    );
}

real_t GIProbe::get_bias() const {
    return rebel_icall_float(
        method_bindings.mb_get_bias,
        (const Object*)this
    );
}

int64_t GIProbe::get_dynamic_range() const {
    return rebel_icall_int(
        method_bindings.mb_get_dynamic_range,
        (const Object*)this
    );
}

real_t GIProbe::get_energy() const {
    return rebel_icall_float(
        method_bindings.mb_get_energy,
        (const Object*)this
    );
}

Vector3 GIProbe::get_extents() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_extents,
        (const Object*)this
    );
}

real_t GIProbe::get_normal_bias() const {
    return rebel_icall_float(
        method_bindings.mb_get_normal_bias,
        (const Object*)this
    );
}

Ref<GIProbeData> GIProbe::get_probe_data() const {
    return Ref<GIProbeData>::create_ref(rebel_icall_object(
        method_bindings.mb_get_probe_data,
        (const Object*)this
    ));
}

real_t GIProbe::get_propagation() const {
    return rebel_icall_float(
        method_bindings.mb_get_propagation,
        (const Object*)this
    );
}

GIProbe::Subdiv GIProbe::get_subdiv() const {
    return (GIProbe::Subdiv)rebel_icall_int(
        method_bindings.mb_get_subdiv,
        (const Object*)this
    );
}

bool GIProbe::is_compressed() const {
    return rebel_icall_bool(
        method_bindings.mb_is_compressed,
        (const Object*)this
    );
}

bool GIProbe::is_interior() const {
    return rebel_icall_bool(
        method_bindings.mb_is_interior,
        (const Object*)this
    );
}

void GIProbe::set_bias(const real_t max) {
    rebel_icall_void_float(
        method_bindings.mb_set_bias,
        (const Object*)this,
        max
    );
}

void GIProbe::set_compress(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_compress,
        (const Object*)this,
        enable
    );
}

void GIProbe::set_dynamic_range(const int64_t max) {
    rebel_icall_void_int(
        method_bindings.mb_set_dynamic_range,
        (const Object*)this,
        max
    );
}

void GIProbe::set_energy(const real_t max) {
    rebel_icall_void_float(
        method_bindings.mb_set_energy,
        (const Object*)this,
        max
    );
}

void GIProbe::set_extents(const Vector3 extents) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_extents,
        (const Object*)this,
        extents
    );
}

void GIProbe::set_interior(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_interior,
        (const Object*)this,
        enable
    );
}

void GIProbe::set_normal_bias(const real_t max) {
    rebel_icall_void_float(
        method_bindings.mb_set_normal_bias,
        (const Object*)this,
        max
    );
}

void GIProbe::set_probe_data(const Ref<GIProbeData> data) {
    rebel_icall_void_object(
        method_bindings.mb_set_probe_data,
        (const Object*)this,
        data.ptr()
    );
}

void GIProbe::set_propagation(const real_t max) {
    rebel_icall_void_float(
        method_bindings.mb_set_propagation,
        (const Object*)this,
        max
    );
}

void GIProbe::set_subdiv(const int64_t subdiv) {
    rebel_icall_void_int(
        method_bindings.mb_set_subdiv,
        (const Object*)this,
        subdiv
    );
}

GIProbe* GIProbe::create() {
    return (GIProbe*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GIProbe")()
         );
}

void GIProbe::init_method_bindings() {
    method_bindings.mb_bake =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "bake"
        );
    method_bindings.mb_debug_bake =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "debug_bake"
        );
    method_bindings.mb_get_bias =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "get_bias"
        );
    method_bindings.mb_get_dynamic_range =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "get_dynamic_range"
        );
    method_bindings.mb_get_energy =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "get_energy"
        );
    method_bindings.mb_get_extents =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "get_extents"
        );
    method_bindings.mb_get_normal_bias =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "get_normal_bias"
        );
    method_bindings.mb_get_probe_data =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "get_probe_data"
        );
    method_bindings.mb_get_propagation =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "get_propagation"
        );
    method_bindings.mb_get_subdiv =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "get_subdiv"
        );
    method_bindings.mb_is_compressed =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "is_compressed"
        );
    method_bindings.mb_is_interior =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "is_interior"
        );
    method_bindings.mb_set_bias =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "set_bias"
        );
    method_bindings.mb_set_compress =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "set_compress"
        );
    method_bindings.mb_set_dynamic_range =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "set_dynamic_range"
        );
    method_bindings.mb_set_energy =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "set_energy"
        );
    method_bindings.mb_set_extents =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "set_extents"
        );
    method_bindings.mb_set_interior =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "set_interior"
        );
    method_bindings.mb_set_normal_bias =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "set_normal_bias"
        );
    method_bindings.mb_set_probe_data =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "set_probe_data"
        );
    method_bindings.mb_set_propagation =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "set_propagation"
        );
    method_bindings.mb_set_subdiv =
        api->rebel_method_bind_get_method(
            "GIProbe",
            "set_subdiv"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GIProbe");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GIProbe::MethodBindings GIProbe::method_bindings = {};
void* GIProbe::class_tag = nullptr;
} // namespace Rebel
