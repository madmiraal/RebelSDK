// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/spatialmaterial.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Color SpatialMaterial::get_albedo() const {
    return rebel_icall_color(
        method_bindings.mb_get_albedo,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_alpha_scissor_threshold() const {
    return rebel_icall_float(
        method_bindings.mb_get_alpha_scissor_threshold,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_anisotropy() const {
    return rebel_icall_float(
        method_bindings.mb_get_anisotropy,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_ao_light_affect() const {
    return rebel_icall_float(
        method_bindings.mb_get_ao_light_affect,
        (const Object*)this
    );
}

SpatialMaterial::TextureChannel SpatialMaterial::get_ao_texture_channel() const {
    return (SpatialMaterial::TextureChannel)rebel_icall_int(
        method_bindings.mb_get_ao_texture_channel,
        (const Object*)this
    );
}

SpatialMaterial::BillboardMode SpatialMaterial::get_billboard_mode() const {
    return (SpatialMaterial::BillboardMode)rebel_icall_int(
        method_bindings.mb_get_billboard_mode,
        (const Object*)this
    );
}

SpatialMaterial::BlendMode SpatialMaterial::get_blend_mode() const {
    return (SpatialMaterial::BlendMode)rebel_icall_int(
        method_bindings.mb_get_blend_mode,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_clearcoat() const {
    return rebel_icall_float(
        method_bindings.mb_get_clearcoat,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_clearcoat_gloss() const {
    return rebel_icall_float(
        method_bindings.mb_get_clearcoat_gloss,
        (const Object*)this
    );
}

SpatialMaterial::CullMode SpatialMaterial::get_cull_mode() const {
    return (SpatialMaterial::CullMode)rebel_icall_int(
        method_bindings.mb_get_cull_mode,
        (const Object*)this
    );
}

bool SpatialMaterial::get_depth_deep_parallax_flip_binormal() const {
    return rebel_icall_bool(
        method_bindings.mb_get_depth_deep_parallax_flip_binormal,
        (const Object*)this
    );
}

bool SpatialMaterial::get_depth_deep_parallax_flip_tangent() const {
    return rebel_icall_bool(
        method_bindings.mb_get_depth_deep_parallax_flip_tangent,
        (const Object*)this
    );
}

int64_t SpatialMaterial::get_depth_deep_parallax_max_layers() const {
    return rebel_icall_int(
        method_bindings.mb_get_depth_deep_parallax_max_layers,
        (const Object*)this
    );
}

int64_t SpatialMaterial::get_depth_deep_parallax_min_layers() const {
    return rebel_icall_int(
        method_bindings.mb_get_depth_deep_parallax_min_layers,
        (const Object*)this
    );
}

SpatialMaterial::DepthDrawMode SpatialMaterial::get_depth_draw_mode() const {
    return (SpatialMaterial::DepthDrawMode)rebel_icall_int(
        method_bindings.mb_get_depth_draw_mode,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_depth_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_depth_scale,
        (const Object*)this
    );
}

SpatialMaterial::BlendMode SpatialMaterial::get_detail_blend_mode() const {
    return (SpatialMaterial::BlendMode)rebel_icall_int(
        method_bindings.mb_get_detail_blend_mode,
        (const Object*)this
    );
}

SpatialMaterial::DetailUV SpatialMaterial::get_detail_uv() const {
    return (SpatialMaterial::DetailUV)rebel_icall_int(
        method_bindings.mb_get_detail_uv,
        (const Object*)this
    );
}

SpatialMaterial::DiffuseMode SpatialMaterial::get_diffuse_mode() const {
    return (SpatialMaterial::DiffuseMode)rebel_icall_int(
        method_bindings.mb_get_diffuse_mode,
        (const Object*)this
    );
}

SpatialMaterial::DistanceFadeMode SpatialMaterial::get_distance_fade() const {
    return (SpatialMaterial::DistanceFadeMode)rebel_icall_int(
        method_bindings.mb_get_distance_fade,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_distance_fade_max_distance() const {
    return rebel_icall_float(
        method_bindings.mb_get_distance_fade_max_distance,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_distance_fade_min_distance() const {
    return rebel_icall_float(
        method_bindings.mb_get_distance_fade_min_distance,
        (const Object*)this
    );
}

Color SpatialMaterial::get_emission() const {
    return rebel_icall_color(
        method_bindings.mb_get_emission,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_emission_energy() const {
    return rebel_icall_float(
        method_bindings.mb_get_emission_energy,
        (const Object*)this
    );
}

SpatialMaterial::EmissionOperator SpatialMaterial::get_emission_operator() const {
    return (SpatialMaterial::EmissionOperator)rebel_icall_int(
        method_bindings.mb_get_emission_operator,
        (const Object*)this
    );
}

bool SpatialMaterial::get_feature(const int64_t feature) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_feature,
        (const Object*)this,
        feature
    );
}

bool SpatialMaterial::get_flag(const int64_t flag) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_flag,
        (const Object*)this,
        flag
    );
}

real_t SpatialMaterial::get_grow() const {
    return rebel_icall_float(
        method_bindings.mb_get_grow,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_line_width() const {
    return rebel_icall_float(
        method_bindings.mb_get_line_width,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_metallic() const {
    return rebel_icall_float(
        method_bindings.mb_get_metallic,
        (const Object*)this
    );
}

SpatialMaterial::TextureChannel SpatialMaterial::get_metallic_texture_channel() const {
    return (SpatialMaterial::TextureChannel)rebel_icall_int(
        method_bindings.mb_get_metallic_texture_channel,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_normal_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_normal_scale,
        (const Object*)this
    );
}

int64_t SpatialMaterial::get_particles_anim_h_frames() const {
    return rebel_icall_int(
        method_bindings.mb_get_particles_anim_h_frames,
        (const Object*)this
    );
}

bool SpatialMaterial::get_particles_anim_loop() const {
    return rebel_icall_bool(
        method_bindings.mb_get_particles_anim_loop,
        (const Object*)this
    );
}

int64_t SpatialMaterial::get_particles_anim_v_frames() const {
    return rebel_icall_int(
        method_bindings.mb_get_particles_anim_v_frames,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_point_size() const {
    return rebel_icall_float(
        method_bindings.mb_get_point_size,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_proximity_fade_distance() const {
    return rebel_icall_float(
        method_bindings.mb_get_proximity_fade_distance,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_refraction() const {
    return rebel_icall_float(
        method_bindings.mb_get_refraction,
        (const Object*)this
    );
}

SpatialMaterial::TextureChannel SpatialMaterial::get_refraction_texture_channel() const {
    return (SpatialMaterial::TextureChannel)rebel_icall_int(
        method_bindings.mb_get_refraction_texture_channel,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_rim() const {
    return rebel_icall_float(
        method_bindings.mb_get_rim,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_rim_tint() const {
    return rebel_icall_float(
        method_bindings.mb_get_rim_tint,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_roughness() const {
    return rebel_icall_float(
        method_bindings.mb_get_roughness,
        (const Object*)this
    );
}

SpatialMaterial::TextureChannel SpatialMaterial::get_roughness_texture_channel() const {
    return (SpatialMaterial::TextureChannel)rebel_icall_int(
        method_bindings.mb_get_roughness_texture_channel,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_specular() const {
    return rebel_icall_float(
        method_bindings.mb_get_specular,
        (const Object*)this
    );
}

SpatialMaterial::SpecularMode SpatialMaterial::get_specular_mode() const {
    return (SpatialMaterial::SpecularMode)rebel_icall_int(
        method_bindings.mb_get_specular_mode,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_subsurface_scattering_strength() const {
    return rebel_icall_float(
        method_bindings.mb_get_subsurface_scattering_strength,
        (const Object*)this
    );
}

Ref<Texture> SpatialMaterial::get_texture(const int64_t param) const {
    return Ref<Texture>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_texture,
        (const Object*)this,
        param
    ));
}

Color SpatialMaterial::get_transmission() const {
    return rebel_icall_color(
        method_bindings.mb_get_transmission,
        (const Object*)this
    );
}

Vector3 SpatialMaterial::get_uv1_offset() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_uv1_offset,
        (const Object*)this
    );
}

Vector3 SpatialMaterial::get_uv1_scale() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_uv1_scale,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_uv1_triplanar_blend_sharpness() const {
    return rebel_icall_float(
        method_bindings.mb_get_uv1_triplanar_blend_sharpness,
        (const Object*)this
    );
}

Vector3 SpatialMaterial::get_uv2_offset() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_uv2_offset,
        (const Object*)this
    );
}

Vector3 SpatialMaterial::get_uv2_scale() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_uv2_scale,
        (const Object*)this
    );
}

real_t SpatialMaterial::get_uv2_triplanar_blend_sharpness() const {
    return rebel_icall_float(
        method_bindings.mb_get_uv2_triplanar_blend_sharpness,
        (const Object*)this
    );
}

bool SpatialMaterial::is_depth_deep_parallax_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_depth_deep_parallax_enabled,
        (const Object*)this
    );
}

bool SpatialMaterial::is_grow_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_grow_enabled,
        (const Object*)this
    );
}

bool SpatialMaterial::is_proximity_fade_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_proximity_fade_enabled,
        (const Object*)this
    );
}

void SpatialMaterial::set_albedo(const Color albedo) {
    rebel_icall_void_color(
        method_bindings.mb_set_albedo,
        (const Object*)this,
        albedo
    );
}

void SpatialMaterial::set_alpha_scissor_threshold(const real_t threshold) {
    rebel_icall_void_float(
        method_bindings.mb_set_alpha_scissor_threshold,
        (const Object*)this,
        threshold
    );
}

void SpatialMaterial::set_anisotropy(const real_t anisotropy) {
    rebel_icall_void_float(
        method_bindings.mb_set_anisotropy,
        (const Object*)this,
        anisotropy
    );
}

void SpatialMaterial::set_ao_light_affect(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_ao_light_affect,
        (const Object*)this,
        amount
    );
}

void SpatialMaterial::set_ao_texture_channel(const int64_t channel) {
    rebel_icall_void_int(
        method_bindings.mb_set_ao_texture_channel,
        (const Object*)this,
        channel
    );
}

void SpatialMaterial::set_billboard_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_billboard_mode,
        (const Object*)this,
        mode
    );
}

void SpatialMaterial::set_blend_mode(const int64_t blend_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_blend_mode,
        (const Object*)this,
        blend_mode
    );
}

void SpatialMaterial::set_clearcoat(const real_t clearcoat) {
    rebel_icall_void_float(
        method_bindings.mb_set_clearcoat,
        (const Object*)this,
        clearcoat
    );
}

void SpatialMaterial::set_clearcoat_gloss(const real_t clearcoat_gloss) {
    rebel_icall_void_float(
        method_bindings.mb_set_clearcoat_gloss,
        (const Object*)this,
        clearcoat_gloss
    );
}

void SpatialMaterial::set_cull_mode(const int64_t cull_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_cull_mode,
        (const Object*)this,
        cull_mode
    );
}

void SpatialMaterial::set_depth_deep_parallax(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_depth_deep_parallax,
        (const Object*)this,
        enable
    );
}

void SpatialMaterial::set_depth_deep_parallax_flip_binormal(const bool flip) {
    rebel_icall_void_bool(
        method_bindings.mb_set_depth_deep_parallax_flip_binormal,
        (const Object*)this,
        flip
    );
}

void SpatialMaterial::set_depth_deep_parallax_flip_tangent(const bool flip) {
    rebel_icall_void_bool(
        method_bindings.mb_set_depth_deep_parallax_flip_tangent,
        (const Object*)this,
        flip
    );
}

void SpatialMaterial::set_depth_deep_parallax_max_layers(const int64_t layer) {
    rebel_icall_void_int(
        method_bindings.mb_set_depth_deep_parallax_max_layers,
        (const Object*)this,
        layer
    );
}

void SpatialMaterial::set_depth_deep_parallax_min_layers(const int64_t layer) {
    rebel_icall_void_int(
        method_bindings.mb_set_depth_deep_parallax_min_layers,
        (const Object*)this,
        layer
    );
}

void SpatialMaterial::set_depth_draw_mode(const int64_t depth_draw_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_depth_draw_mode,
        (const Object*)this,
        depth_draw_mode
    );
}

void SpatialMaterial::set_depth_scale(const real_t depth_scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_depth_scale,
        (const Object*)this,
        depth_scale
    );
}

void SpatialMaterial::set_detail_blend_mode(const int64_t detail_blend_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_detail_blend_mode,
        (const Object*)this,
        detail_blend_mode
    );
}

void SpatialMaterial::set_detail_uv(const int64_t detail_uv) {
    rebel_icall_void_int(
        method_bindings.mb_set_detail_uv,
        (const Object*)this,
        detail_uv
    );
}

void SpatialMaterial::set_diffuse_mode(const int64_t diffuse_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_diffuse_mode,
        (const Object*)this,
        diffuse_mode
    );
}

void SpatialMaterial::set_distance_fade(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_distance_fade,
        (const Object*)this,
        mode
    );
}

void SpatialMaterial::set_distance_fade_max_distance(const real_t distance) {
    rebel_icall_void_float(
        method_bindings.mb_set_distance_fade_max_distance,
        (const Object*)this,
        distance
    );
}

void SpatialMaterial::set_distance_fade_min_distance(const real_t distance) {
    rebel_icall_void_float(
        method_bindings.mb_set_distance_fade_min_distance,
        (const Object*)this,
        distance
    );
}

void SpatialMaterial::set_emission(const Color emission) {
    rebel_icall_void_color(
        method_bindings.mb_set_emission,
        (const Object*)this,
        emission
    );
}

void SpatialMaterial::set_emission_energy(const real_t emission_energy) {
    rebel_icall_void_float(
        method_bindings.mb_set_emission_energy,
        (const Object*)this,
        emission_energy
    );
}

void SpatialMaterial::set_emission_operator(const int64_t _operator) {
    rebel_icall_void_int(
        method_bindings.mb_set_emission_operator,
        (const Object*)this,
        _operator
    );
}

void SpatialMaterial::set_feature(const int64_t feature, const bool enable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_feature,
        (const Object*)this,
        feature,
        enable
    );
}

void SpatialMaterial::set_flag(const int64_t flag, const bool enable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_flag,
        (const Object*)this,
        flag,
        enable
    );
}

void SpatialMaterial::set_grow(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_grow,
        (const Object*)this,
        amount
    );
}

void SpatialMaterial::set_grow_enabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_grow_enabled,
        (const Object*)this,
        enable
    );
}

void SpatialMaterial::set_line_width(const real_t line_width) {
    rebel_icall_void_float(
        method_bindings.mb_set_line_width,
        (const Object*)this,
        line_width
    );
}

void SpatialMaterial::set_metallic(const real_t metallic) {
    rebel_icall_void_float(
        method_bindings.mb_set_metallic,
        (const Object*)this,
        metallic
    );
}

void SpatialMaterial::set_metallic_texture_channel(const int64_t channel) {
    rebel_icall_void_int(
        method_bindings.mb_set_metallic_texture_channel,
        (const Object*)this,
        channel
    );
}

void SpatialMaterial::set_normal_scale(const real_t normal_scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_normal_scale,
        (const Object*)this,
        normal_scale
    );
}

void SpatialMaterial::set_particles_anim_h_frames(const int64_t frames) {
    rebel_icall_void_int(
        method_bindings.mb_set_particles_anim_h_frames,
        (const Object*)this,
        frames
    );
}

void SpatialMaterial::set_particles_anim_loop(const bool loop) {
    rebel_icall_void_bool(
        method_bindings.mb_set_particles_anim_loop,
        (const Object*)this,
        loop
    );
}

void SpatialMaterial::set_particles_anim_v_frames(const int64_t frames) {
    rebel_icall_void_int(
        method_bindings.mb_set_particles_anim_v_frames,
        (const Object*)this,
        frames
    );
}

void SpatialMaterial::set_point_size(const real_t point_size) {
    rebel_icall_void_float(
        method_bindings.mb_set_point_size,
        (const Object*)this,
        point_size
    );
}

void SpatialMaterial::set_proximity_fade(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_proximity_fade,
        (const Object*)this,
        enabled
    );
}

void SpatialMaterial::set_proximity_fade_distance(const real_t distance) {
    rebel_icall_void_float(
        method_bindings.mb_set_proximity_fade_distance,
        (const Object*)this,
        distance
    );
}

void SpatialMaterial::set_refraction(const real_t refraction) {
    rebel_icall_void_float(
        method_bindings.mb_set_refraction,
        (const Object*)this,
        refraction
    );
}

void SpatialMaterial::set_refraction_texture_channel(const int64_t channel) {
    rebel_icall_void_int(
        method_bindings.mb_set_refraction_texture_channel,
        (const Object*)this,
        channel
    );
}

void SpatialMaterial::set_rim(const real_t rim) {
    rebel_icall_void_float(
        method_bindings.mb_set_rim,
        (const Object*)this,
        rim
    );
}

void SpatialMaterial::set_rim_tint(const real_t rim_tint) {
    rebel_icall_void_float(
        method_bindings.mb_set_rim_tint,
        (const Object*)this,
        rim_tint
    );
}

void SpatialMaterial::set_roughness(const real_t roughness) {
    rebel_icall_void_float(
        method_bindings.mb_set_roughness,
        (const Object*)this,
        roughness
    );
}

void SpatialMaterial::set_roughness_texture_channel(const int64_t channel) {
    rebel_icall_void_int(
        method_bindings.mb_set_roughness_texture_channel,
        (const Object*)this,
        channel
    );
}

void SpatialMaterial::set_specular(const real_t specular) {
    rebel_icall_void_float(
        method_bindings.mb_set_specular,
        (const Object*)this,
        specular
    );
}

void SpatialMaterial::set_specular_mode(const int64_t specular_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_specular_mode,
        (const Object*)this,
        specular_mode
    );
}

void SpatialMaterial::set_subsurface_scattering_strength(const real_t strength) {
    rebel_icall_void_float(
        method_bindings.mb_set_subsurface_scattering_strength,
        (const Object*)this,
        strength
    );
}

void SpatialMaterial::set_texture(const int64_t param, const Ref<Texture> texture) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_texture,
        (const Object*)this,
        param,
        texture.ptr()
    );
}

void SpatialMaterial::set_transmission(const Color transmission) {
    rebel_icall_void_color(
        method_bindings.mb_set_transmission,
        (const Object*)this,
        transmission
    );
}

void SpatialMaterial::set_uv1_offset(const Vector3 offset) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_uv1_offset,
        (const Object*)this,
        offset
    );
}

void SpatialMaterial::set_uv1_scale(const Vector3 scale) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_uv1_scale,
        (const Object*)this,
        scale
    );
}

void SpatialMaterial::set_uv1_triplanar_blend_sharpness(const real_t sharpness) {
    rebel_icall_void_float(
        method_bindings.mb_set_uv1_triplanar_blend_sharpness,
        (const Object*)this,
        sharpness
    );
}

void SpatialMaterial::set_uv2_offset(const Vector3 offset) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_uv2_offset,
        (const Object*)this,
        offset
    );
}

void SpatialMaterial::set_uv2_scale(const Vector3 scale) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_uv2_scale,
        (const Object*)this,
        scale
    );
}

void SpatialMaterial::set_uv2_triplanar_blend_sharpness(const real_t sharpness) {
    rebel_icall_void_float(
        method_bindings.mb_set_uv2_triplanar_blend_sharpness,
        (const Object*)this,
        sharpness
    );
}

SpatialMaterial* SpatialMaterial::create() {
    return (SpatialMaterial*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"SpatialMaterial")()
         );
}

void SpatialMaterial::init_method_bindings() {
    method_bindings.mb_get_albedo =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_albedo"
        );
    method_bindings.mb_get_alpha_scissor_threshold =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_alpha_scissor_threshold"
        );
    method_bindings.mb_get_anisotropy =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_anisotropy"
        );
    method_bindings.mb_get_ao_light_affect =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_ao_light_affect"
        );
    method_bindings.mb_get_ao_texture_channel =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_ao_texture_channel"
        );
    method_bindings.mb_get_billboard_mode =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_billboard_mode"
        );
    method_bindings.mb_get_blend_mode =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_blend_mode"
        );
    method_bindings.mb_get_clearcoat =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_clearcoat"
        );
    method_bindings.mb_get_clearcoat_gloss =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_clearcoat_gloss"
        );
    method_bindings.mb_get_cull_mode =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_cull_mode"
        );
    method_bindings.mb_get_depth_deep_parallax_flip_binormal =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_depth_deep_parallax_flip_binormal"
        );
    method_bindings.mb_get_depth_deep_parallax_flip_tangent =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_depth_deep_parallax_flip_tangent"
        );
    method_bindings.mb_get_depth_deep_parallax_max_layers =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_depth_deep_parallax_max_layers"
        );
    method_bindings.mb_get_depth_deep_parallax_min_layers =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_depth_deep_parallax_min_layers"
        );
    method_bindings.mb_get_depth_draw_mode =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_depth_draw_mode"
        );
    method_bindings.mb_get_depth_scale =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_depth_scale"
        );
    method_bindings.mb_get_detail_blend_mode =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_detail_blend_mode"
        );
    method_bindings.mb_get_detail_uv =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_detail_uv"
        );
    method_bindings.mb_get_diffuse_mode =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_diffuse_mode"
        );
    method_bindings.mb_get_distance_fade =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_distance_fade"
        );
    method_bindings.mb_get_distance_fade_max_distance =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_distance_fade_max_distance"
        );
    method_bindings.mb_get_distance_fade_min_distance =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_distance_fade_min_distance"
        );
    method_bindings.mb_get_emission =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_emission"
        );
    method_bindings.mb_get_emission_energy =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_emission_energy"
        );
    method_bindings.mb_get_emission_operator =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_emission_operator"
        );
    method_bindings.mb_get_feature =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_feature"
        );
    method_bindings.mb_get_flag =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_flag"
        );
    method_bindings.mb_get_grow =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_grow"
        );
    method_bindings.mb_get_line_width =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_line_width"
        );
    method_bindings.mb_get_metallic =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_metallic"
        );
    method_bindings.mb_get_metallic_texture_channel =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_metallic_texture_channel"
        );
    method_bindings.mb_get_normal_scale =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_normal_scale"
        );
    method_bindings.mb_get_particles_anim_h_frames =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_particles_anim_h_frames"
        );
    method_bindings.mb_get_particles_anim_loop =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_particles_anim_loop"
        );
    method_bindings.mb_get_particles_anim_v_frames =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_particles_anim_v_frames"
        );
    method_bindings.mb_get_point_size =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_point_size"
        );
    method_bindings.mb_get_proximity_fade_distance =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_proximity_fade_distance"
        );
    method_bindings.mb_get_refraction =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_refraction"
        );
    method_bindings.mb_get_refraction_texture_channel =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_refraction_texture_channel"
        );
    method_bindings.mb_get_rim =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_rim"
        );
    method_bindings.mb_get_rim_tint =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_rim_tint"
        );
    method_bindings.mb_get_roughness =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_roughness"
        );
    method_bindings.mb_get_roughness_texture_channel =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_roughness_texture_channel"
        );
    method_bindings.mb_get_specular =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_specular"
        );
    method_bindings.mb_get_specular_mode =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_specular_mode"
        );
    method_bindings.mb_get_subsurface_scattering_strength =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_subsurface_scattering_strength"
        );
    method_bindings.mb_get_texture =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_texture"
        );
    method_bindings.mb_get_transmission =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_transmission"
        );
    method_bindings.mb_get_uv1_offset =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_uv1_offset"
        );
    method_bindings.mb_get_uv1_scale =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_uv1_scale"
        );
    method_bindings.mb_get_uv1_triplanar_blend_sharpness =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_uv1_triplanar_blend_sharpness"
        );
    method_bindings.mb_get_uv2_offset =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_uv2_offset"
        );
    method_bindings.mb_get_uv2_scale =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_uv2_scale"
        );
    method_bindings.mb_get_uv2_triplanar_blend_sharpness =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "get_uv2_triplanar_blend_sharpness"
        );
    method_bindings.mb_is_depth_deep_parallax_enabled =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "is_depth_deep_parallax_enabled"
        );
    method_bindings.mb_is_grow_enabled =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "is_grow_enabled"
        );
    method_bindings.mb_is_proximity_fade_enabled =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "is_proximity_fade_enabled"
        );
    method_bindings.mb_set_albedo =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_albedo"
        );
    method_bindings.mb_set_alpha_scissor_threshold =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_alpha_scissor_threshold"
        );
    method_bindings.mb_set_anisotropy =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_anisotropy"
        );
    method_bindings.mb_set_ao_light_affect =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_ao_light_affect"
        );
    method_bindings.mb_set_ao_texture_channel =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_ao_texture_channel"
        );
    method_bindings.mb_set_billboard_mode =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_billboard_mode"
        );
    method_bindings.mb_set_blend_mode =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_blend_mode"
        );
    method_bindings.mb_set_clearcoat =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_clearcoat"
        );
    method_bindings.mb_set_clearcoat_gloss =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_clearcoat_gloss"
        );
    method_bindings.mb_set_cull_mode =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_cull_mode"
        );
    method_bindings.mb_set_depth_deep_parallax =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_depth_deep_parallax"
        );
    method_bindings.mb_set_depth_deep_parallax_flip_binormal =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_depth_deep_parallax_flip_binormal"
        );
    method_bindings.mb_set_depth_deep_parallax_flip_tangent =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_depth_deep_parallax_flip_tangent"
        );
    method_bindings.mb_set_depth_deep_parallax_max_layers =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_depth_deep_parallax_max_layers"
        );
    method_bindings.mb_set_depth_deep_parallax_min_layers =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_depth_deep_parallax_min_layers"
        );
    method_bindings.mb_set_depth_draw_mode =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_depth_draw_mode"
        );
    method_bindings.mb_set_depth_scale =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_depth_scale"
        );
    method_bindings.mb_set_detail_blend_mode =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_detail_blend_mode"
        );
    method_bindings.mb_set_detail_uv =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_detail_uv"
        );
    method_bindings.mb_set_diffuse_mode =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_diffuse_mode"
        );
    method_bindings.mb_set_distance_fade =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_distance_fade"
        );
    method_bindings.mb_set_distance_fade_max_distance =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_distance_fade_max_distance"
        );
    method_bindings.mb_set_distance_fade_min_distance =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_distance_fade_min_distance"
        );
    method_bindings.mb_set_emission =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_emission"
        );
    method_bindings.mb_set_emission_energy =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_emission_energy"
        );
    method_bindings.mb_set_emission_operator =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_emission_operator"
        );
    method_bindings.mb_set_feature =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_feature"
        );
    method_bindings.mb_set_flag =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_flag"
        );
    method_bindings.mb_set_grow =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_grow"
        );
    method_bindings.mb_set_grow_enabled =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_grow_enabled"
        );
    method_bindings.mb_set_line_width =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_line_width"
        );
    method_bindings.mb_set_metallic =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_metallic"
        );
    method_bindings.mb_set_metallic_texture_channel =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_metallic_texture_channel"
        );
    method_bindings.mb_set_normal_scale =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_normal_scale"
        );
    method_bindings.mb_set_particles_anim_h_frames =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_particles_anim_h_frames"
        );
    method_bindings.mb_set_particles_anim_loop =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_particles_anim_loop"
        );
    method_bindings.mb_set_particles_anim_v_frames =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_particles_anim_v_frames"
        );
    method_bindings.mb_set_point_size =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_point_size"
        );
    method_bindings.mb_set_proximity_fade =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_proximity_fade"
        );
    method_bindings.mb_set_proximity_fade_distance =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_proximity_fade_distance"
        );
    method_bindings.mb_set_refraction =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_refraction"
        );
    method_bindings.mb_set_refraction_texture_channel =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_refraction_texture_channel"
        );
    method_bindings.mb_set_rim =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_rim"
        );
    method_bindings.mb_set_rim_tint =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_rim_tint"
        );
    method_bindings.mb_set_roughness =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_roughness"
        );
    method_bindings.mb_set_roughness_texture_channel =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_roughness_texture_channel"
        );
    method_bindings.mb_set_specular =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_specular"
        );
    method_bindings.mb_set_specular_mode =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_specular_mode"
        );
    method_bindings.mb_set_subsurface_scattering_strength =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_subsurface_scattering_strength"
        );
    method_bindings.mb_set_texture =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_texture"
        );
    method_bindings.mb_set_transmission =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_transmission"
        );
    method_bindings.mb_set_uv1_offset =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_uv1_offset"
        );
    method_bindings.mb_set_uv1_scale =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_uv1_scale"
        );
    method_bindings.mb_set_uv1_triplanar_blend_sharpness =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_uv1_triplanar_blend_sharpness"
        );
    method_bindings.mb_set_uv2_offset =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_uv2_offset"
        );
    method_bindings.mb_set_uv2_scale =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_uv2_scale"
        );
    method_bindings.mb_set_uv2_triplanar_blend_sharpness =
        api->rebel_method_bind_get_method(
            "SpatialMaterial",
            "set_uv2_triplanar_blend_sharpness"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "SpatialMaterial");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

SpatialMaterial::MethodBindings SpatialMaterial::method_bindings = {};
void* SpatialMaterial::class_tag = nullptr;
} // namespace Rebel
