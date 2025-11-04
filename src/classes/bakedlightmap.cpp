// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/bakedlightmap.h"

#include "classes/bakedlightmapdata.h"
#include "classes/icalls.h"
#include "classes/node.h"
#include "classes/sky.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
BakedLightmap::BakeError BakedLightmap::bake(const Node* from_node, const String data_save_path) {
    return (BakedLightmap::BakeError)rebel_icall_int_object_string(
        method_bindings.mb_bake,
        (const Object*)this,
        from_node,
        data_save_path
    );
}

BakedLightmap::BakeQuality BakedLightmap::get_bake_quality() const {
    return (BakedLightmap::BakeQuality)rebel_icall_int(
        method_bindings.mb_get_bake_quality,
        (const Object*)this
    );
}

real_t BakedLightmap::get_bias() const {
    return rebel_icall_float(
        method_bindings.mb_get_bias,
        (const Object*)this
    );
}

real_t BakedLightmap::get_bounce_indirect_energy() const {
    return rebel_icall_float(
        method_bindings.mb_get_bounce_indirect_energy,
        (const Object*)this
    );
}

int64_t BakedLightmap::get_bounces() const {
    return rebel_icall_int(
        method_bindings.mb_get_bounces,
        (const Object*)this
    );
}

real_t BakedLightmap::get_capture_cell_size() const {
    return rebel_icall_float(
        method_bindings.mb_get_capture_cell_size,
        (const Object*)this
    );
}

bool BakedLightmap::get_capture_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_get_capture_enabled,
        (const Object*)this
    );
}

real_t BakedLightmap::get_capture_propagation() const {
    return rebel_icall_float(
        method_bindings.mb_get_capture_propagation,
        (const Object*)this
    );
}

BakedLightmap::BakeQuality BakedLightmap::get_capture_quality() const {
    return (BakedLightmap::BakeQuality)rebel_icall_int(
        method_bindings.mb_get_capture_quality,
        (const Object*)this
    );
}

real_t BakedLightmap::get_default_texels_per_unit() const {
    return rebel_icall_float(
        method_bindings.mb_get_default_texels_per_unit,
        (const Object*)this
    );
}

Color BakedLightmap::get_environment_custom_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_environment_custom_color,
        (const Object*)this
    );
}

real_t BakedLightmap::get_environment_custom_energy() const {
    return rebel_icall_float(
        method_bindings.mb_get_environment_custom_energy,
        (const Object*)this
    );
}

Ref<Sky> BakedLightmap::get_environment_custom_sky() const {
    return Ref<Sky>::create_ref(rebel_icall_object(
        method_bindings.mb_get_environment_custom_sky,
        (const Object*)this
    ));
}

Vector3 BakedLightmap::get_environment_custom_sky_rotation_degrees() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_environment_custom_sky_rotation_degrees,
        (const Object*)this
    );
}

Color BakedLightmap::get_environment_min_light() const {
    return rebel_icall_color(
        method_bindings.mb_get_environment_min_light,
        (const Object*)this
    );
}

BakedLightmap::EnvironmentMode BakedLightmap::get_environment_mode() const {
    return (BakedLightmap::EnvironmentMode)rebel_icall_int(
        method_bindings.mb_get_environment_mode,
        (const Object*)this
    );
}

Vector3 BakedLightmap::get_extents() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_extents,
        (const Object*)this
    );
}

String BakedLightmap::get_image_path() const {
    return rebel_icall_string(
        method_bindings.mb_get_image_path,
        (const Object*)this
    );
}

Ref<BakedLightmapData> BakedLightmap::get_light_data() const {
    return Ref<BakedLightmapData>::create_ref(rebel_icall_object(
        method_bindings.mb_get_light_data,
        (const Object*)this
    ));
}

int64_t BakedLightmap::get_max_atlas_size() const {
    return rebel_icall_int(
        method_bindings.mb_get_max_atlas_size,
        (const Object*)this
    );
}

bool BakedLightmap::is_generate_atlas_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_generate_atlas_enabled,
        (const Object*)this
    );
}

bool BakedLightmap::is_using_color() const {
    return rebel_icall_bool(
        method_bindings.mb_is_using_color,
        (const Object*)this
    );
}

bool BakedLightmap::is_using_denoiser() const {
    return rebel_icall_bool(
        method_bindings.mb_is_using_denoiser,
        (const Object*)this
    );
}

bool BakedLightmap::is_using_hdr() const {
    return rebel_icall_bool(
        method_bindings.mb_is_using_hdr,
        (const Object*)this
    );
}

void BakedLightmap::set_bake_quality(const int64_t quality) {
    rebel_icall_void_int(
        method_bindings.mb_set_bake_quality,
        (const Object*)this,
        quality
    );
}

void BakedLightmap::set_bias(const real_t bias) {
    rebel_icall_void_float(
        method_bindings.mb_set_bias,
        (const Object*)this,
        bias
    );
}

void BakedLightmap::set_bounce_indirect_energy(const real_t bounce_indirect_energy) {
    rebel_icall_void_float(
        method_bindings.mb_set_bounce_indirect_energy,
        (const Object*)this,
        bounce_indirect_energy
    );
}

void BakedLightmap::set_bounces(const int64_t bounces) {
    rebel_icall_void_int(
        method_bindings.mb_set_bounces,
        (const Object*)this,
        bounces
    );
}

void BakedLightmap::set_capture_cell_size(const real_t capture_cell_size) {
    rebel_icall_void_float(
        method_bindings.mb_set_capture_cell_size,
        (const Object*)this,
        capture_cell_size
    );
}

void BakedLightmap::set_capture_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_capture_enabled,
        (const Object*)this,
        enabled
    );
}

void BakedLightmap::set_capture_propagation(const real_t propagation) {
    rebel_icall_void_float(
        method_bindings.mb_set_capture_propagation,
        (const Object*)this,
        propagation
    );
}

void BakedLightmap::set_capture_quality(const int64_t capture_quality) {
    rebel_icall_void_int(
        method_bindings.mb_set_capture_quality,
        (const Object*)this,
        capture_quality
    );
}

void BakedLightmap::set_default_texels_per_unit(const real_t texels) {
    rebel_icall_void_float(
        method_bindings.mb_set_default_texels_per_unit,
        (const Object*)this,
        texels
    );
}

void BakedLightmap::set_environment_custom_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_environment_custom_color,
        (const Object*)this,
        color
    );
}

void BakedLightmap::set_environment_custom_energy(const real_t energy) {
    rebel_icall_void_float(
        method_bindings.mb_set_environment_custom_energy,
        (const Object*)this,
        energy
    );
}

void BakedLightmap::set_environment_custom_sky(const Ref<Sky> sky) {
    rebel_icall_void_object(
        method_bindings.mb_set_environment_custom_sky,
        (const Object*)this,
        sky.ptr()
    );
}

void BakedLightmap::set_environment_custom_sky_rotation_degrees(const Vector3 rotation) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_environment_custom_sky_rotation_degrees,
        (const Object*)this,
        rotation
    );
}

void BakedLightmap::set_environment_min_light(const Color min_light) {
    rebel_icall_void_color(
        method_bindings.mb_set_environment_min_light,
        (const Object*)this,
        min_light
    );
}

void BakedLightmap::set_environment_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_environment_mode,
        (const Object*)this,
        mode
    );
}

void BakedLightmap::set_extents(const Vector3 extents) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_extents,
        (const Object*)this,
        extents
    );
}

void BakedLightmap::set_generate_atlas(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_generate_atlas,
        (const Object*)this,
        enabled
    );
}

void BakedLightmap::set_image_path(const String image_path) {
    rebel_icall_void_string(
        method_bindings.mb_set_image_path,
        (const Object*)this,
        image_path
    );
}

void BakedLightmap::set_light_data(const Ref<BakedLightmapData> data) {
    rebel_icall_void_object(
        method_bindings.mb_set_light_data,
        (const Object*)this,
        data.ptr()
    );
}

void BakedLightmap::set_max_atlas_size(const int64_t max_atlas_size) {
    rebel_icall_void_int(
        method_bindings.mb_set_max_atlas_size,
        (const Object*)this,
        max_atlas_size
    );
}

void BakedLightmap::set_use_color(const bool use_denoiser) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_color,
        (const Object*)this,
        use_denoiser
    );
}

void BakedLightmap::set_use_denoiser(const bool use_denoiser) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_denoiser,
        (const Object*)this,
        use_denoiser
    );
}

void BakedLightmap::set_use_hdr(const bool use_denoiser) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_hdr,
        (const Object*)this,
        use_denoiser
    );
}

BakedLightmap* BakedLightmap::create() {
    return (BakedLightmap*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"BakedLightmap")()
         );
}

void BakedLightmap::init_method_bindings() {
    method_bindings.mb_bake =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "bake"
        );
    method_bindings.mb_get_bake_quality =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "get_bake_quality"
        );
    method_bindings.mb_get_bias =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "get_bias"
        );
    method_bindings.mb_get_bounce_indirect_energy =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "get_bounce_indirect_energy"
        );
    method_bindings.mb_get_bounces =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "get_bounces"
        );
    method_bindings.mb_get_capture_cell_size =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "get_capture_cell_size"
        );
    method_bindings.mb_get_capture_enabled =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "get_capture_enabled"
        );
    method_bindings.mb_get_capture_propagation =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "get_capture_propagation"
        );
    method_bindings.mb_get_capture_quality =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "get_capture_quality"
        );
    method_bindings.mb_get_default_texels_per_unit =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "get_default_texels_per_unit"
        );
    method_bindings.mb_get_environment_custom_color =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "get_environment_custom_color"
        );
    method_bindings.mb_get_environment_custom_energy =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "get_environment_custom_energy"
        );
    method_bindings.mb_get_environment_custom_sky =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "get_environment_custom_sky"
        );
    method_bindings.mb_get_environment_custom_sky_rotation_degrees =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "get_environment_custom_sky_rotation_degrees"
        );
    method_bindings.mb_get_environment_min_light =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "get_environment_min_light"
        );
    method_bindings.mb_get_environment_mode =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "get_environment_mode"
        );
    method_bindings.mb_get_extents =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "get_extents"
        );
    method_bindings.mb_get_image_path =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "get_image_path"
        );
    method_bindings.mb_get_light_data =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "get_light_data"
        );
    method_bindings.mb_get_max_atlas_size =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "get_max_atlas_size"
        );
    method_bindings.mb_is_generate_atlas_enabled =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "is_generate_atlas_enabled"
        );
    method_bindings.mb_is_using_color =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "is_using_color"
        );
    method_bindings.mb_is_using_denoiser =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "is_using_denoiser"
        );
    method_bindings.mb_is_using_hdr =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "is_using_hdr"
        );
    method_bindings.mb_set_bake_quality =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_bake_quality"
        );
    method_bindings.mb_set_bias =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_bias"
        );
    method_bindings.mb_set_bounce_indirect_energy =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_bounce_indirect_energy"
        );
    method_bindings.mb_set_bounces =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_bounces"
        );
    method_bindings.mb_set_capture_cell_size =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_capture_cell_size"
        );
    method_bindings.mb_set_capture_enabled =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_capture_enabled"
        );
    method_bindings.mb_set_capture_propagation =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_capture_propagation"
        );
    method_bindings.mb_set_capture_quality =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_capture_quality"
        );
    method_bindings.mb_set_default_texels_per_unit =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_default_texels_per_unit"
        );
    method_bindings.mb_set_environment_custom_color =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_environment_custom_color"
        );
    method_bindings.mb_set_environment_custom_energy =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_environment_custom_energy"
        );
    method_bindings.mb_set_environment_custom_sky =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_environment_custom_sky"
        );
    method_bindings.mb_set_environment_custom_sky_rotation_degrees =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_environment_custom_sky_rotation_degrees"
        );
    method_bindings.mb_set_environment_min_light =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_environment_min_light"
        );
    method_bindings.mb_set_environment_mode =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_environment_mode"
        );
    method_bindings.mb_set_extents =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_extents"
        );
    method_bindings.mb_set_generate_atlas =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_generate_atlas"
        );
    method_bindings.mb_set_image_path =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_image_path"
        );
    method_bindings.mb_set_light_data =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_light_data"
        );
    method_bindings.mb_set_max_atlas_size =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_max_atlas_size"
        );
    method_bindings.mb_set_use_color =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_use_color"
        );
    method_bindings.mb_set_use_denoiser =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_use_denoiser"
        );
    method_bindings.mb_set_use_hdr =
        api->rebel_method_bind_get_method(
            "BakedLightmap",
            "set_use_hdr"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "BakedLightmap");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

BakedLightmap::MethodBindings BakedLightmap::method_bindings = {};
void* BakedLightmap::class_tag = nullptr;
} // namespace Rebel
