// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/geometryinstance.h"

#include "classes/icalls.h"
#include "classes/material.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
GeometryInstance::ShadowCastingSetting GeometryInstance::get_cast_shadows_setting() const {
    return (GeometryInstance::ShadowCastingSetting)rebel_icall_int(
        method_bindings.mb_get_cast_shadows_setting,
        (const Object*)this
    );
}

real_t GeometryInstance::get_extra_cull_margin() const {
    return rebel_icall_float(
        method_bindings.mb_get_extra_cull_margin,
        (const Object*)this
    );
}

bool GeometryInstance::get_flag(const int64_t flag) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_flag,
        (const Object*)this,
        flag
    );
}

bool GeometryInstance::get_generate_lightmap() {
    return rebel_icall_bool(
        method_bindings.mb_get_generate_lightmap,
        (const Object*)this
    );
}

GeometryInstance::LightmapScale GeometryInstance::get_lightmap_scale() const {
    return (GeometryInstance::LightmapScale)rebel_icall_int(
        method_bindings.mb_get_lightmap_scale,
        (const Object*)this
    );
}

real_t GeometryInstance::get_lod_max_distance() const {
    return rebel_icall_float(
        method_bindings.mb_get_lod_max_distance,
        (const Object*)this
    );
}

real_t GeometryInstance::get_lod_max_hysteresis() const {
    return rebel_icall_float(
        method_bindings.mb_get_lod_max_hysteresis,
        (const Object*)this
    );
}

real_t GeometryInstance::get_lod_min_distance() const {
    return rebel_icall_float(
        method_bindings.mb_get_lod_min_distance,
        (const Object*)this
    );
}

real_t GeometryInstance::get_lod_min_hysteresis() const {
    return rebel_icall_float(
        method_bindings.mb_get_lod_min_hysteresis,
        (const Object*)this
    );
}

Ref<Material> GeometryInstance::get_material_override() const {
    return Ref<Material>::create_ref(rebel_icall_object(
        method_bindings.mb_get_material_override,
        (const Object*)this
    ));
}

void GeometryInstance::set_cast_shadows_setting(const int64_t shadow_casting_setting) {
    rebel_icall_void_int(
        method_bindings.mb_set_cast_shadows_setting,
        (const Object*)this,
        shadow_casting_setting
    );
}

void GeometryInstance::set_custom_aabb(const AABB aabb) {
    rebel_icall_void_aabb(
        method_bindings.mb_set_custom_aabb,
        (const Object*)this,
        aabb
    );
}

void GeometryInstance::set_extra_cull_margin(const real_t margin) {
    rebel_icall_void_float(
        method_bindings.mb_set_extra_cull_margin,
        (const Object*)this,
        margin
    );
}

void GeometryInstance::set_flag(const int64_t flag, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_flag,
        (const Object*)this,
        flag,
        value
    );
}

void GeometryInstance::set_generate_lightmap(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_generate_lightmap,
        (const Object*)this,
        enabled
    );
}

void GeometryInstance::set_lightmap_scale(const int64_t scale) {
    rebel_icall_void_int(
        method_bindings.mb_set_lightmap_scale,
        (const Object*)this,
        scale
    );
}

void GeometryInstance::set_lod_max_distance(const real_t mode) {
    rebel_icall_void_float(
        method_bindings.mb_set_lod_max_distance,
        (const Object*)this,
        mode
    );
}

void GeometryInstance::set_lod_max_hysteresis(const real_t mode) {
    rebel_icall_void_float(
        method_bindings.mb_set_lod_max_hysteresis,
        (const Object*)this,
        mode
    );
}

void GeometryInstance::set_lod_min_distance(const real_t mode) {
    rebel_icall_void_float(
        method_bindings.mb_set_lod_min_distance,
        (const Object*)this,
        mode
    );
}

void GeometryInstance::set_lod_min_hysteresis(const real_t mode) {
    rebel_icall_void_float(
        method_bindings.mb_set_lod_min_hysteresis,
        (const Object*)this,
        mode
    );
}

void GeometryInstance::set_material_override(const Ref<Material> material) {
    rebel_icall_void_object(
        method_bindings.mb_set_material_override,
        (const Object*)this,
        material.ptr()
    );
}

void GeometryInstance::init_method_bindings() {
    method_bindings.mb_get_cast_shadows_setting =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "get_cast_shadows_setting"
        );
    method_bindings.mb_get_extra_cull_margin =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "get_extra_cull_margin"
        );
    method_bindings.mb_get_flag =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "get_flag"
        );
    method_bindings.mb_get_generate_lightmap =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "get_generate_lightmap"
        );
    method_bindings.mb_get_lightmap_scale =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "get_lightmap_scale"
        );
    method_bindings.mb_get_lod_max_distance =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "get_lod_max_distance"
        );
    method_bindings.mb_get_lod_max_hysteresis =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "get_lod_max_hysteresis"
        );
    method_bindings.mb_get_lod_min_distance =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "get_lod_min_distance"
        );
    method_bindings.mb_get_lod_min_hysteresis =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "get_lod_min_hysteresis"
        );
    method_bindings.mb_get_material_override =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "get_material_override"
        );
    method_bindings.mb_set_cast_shadows_setting =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "set_cast_shadows_setting"
        );
    method_bindings.mb_set_custom_aabb =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "set_custom_aabb"
        );
    method_bindings.mb_set_extra_cull_margin =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "set_extra_cull_margin"
        );
    method_bindings.mb_set_flag =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "set_flag"
        );
    method_bindings.mb_set_generate_lightmap =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "set_generate_lightmap"
        );
    method_bindings.mb_set_lightmap_scale =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "set_lightmap_scale"
        );
    method_bindings.mb_set_lod_max_distance =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "set_lod_max_distance"
        );
    method_bindings.mb_set_lod_max_hysteresis =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "set_lod_max_hysteresis"
        );
    method_bindings.mb_set_lod_min_distance =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "set_lod_min_distance"
        );
    method_bindings.mb_set_lod_min_hysteresis =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "set_lod_min_hysteresis"
        );
    method_bindings.mb_set_material_override =
        api->rebel_method_bind_get_method(
            "GeometryInstance",
            "set_material_override"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GeometryInstance");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GeometryInstance::MethodBindings GeometryInstance::method_bindings = {};
void* GeometryInstance::class_tag = nullptr;
} // namespace Rebel
