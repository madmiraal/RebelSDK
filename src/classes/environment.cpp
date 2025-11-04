// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/environment.h"

#include "classes/icalls.h"
#include "classes/sky.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t Environment::get_adjustment_brightness() const {
    return rebel_icall_float(
        method_bindings.mb_get_adjustment_brightness,
        (const Object*)this
    );
}

Ref<Texture> Environment::get_adjustment_color_correction() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_adjustment_color_correction,
        (const Object*)this
    ));
}

real_t Environment::get_adjustment_contrast() const {
    return rebel_icall_float(
        method_bindings.mb_get_adjustment_contrast,
        (const Object*)this
    );
}

real_t Environment::get_adjustment_saturation() const {
    return rebel_icall_float(
        method_bindings.mb_get_adjustment_saturation,
        (const Object*)this
    );
}

Color Environment::get_ambient_light_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_ambient_light_color,
        (const Object*)this
    );
}

real_t Environment::get_ambient_light_energy() const {
    return rebel_icall_float(
        method_bindings.mb_get_ambient_light_energy,
        (const Object*)this
    );
}

real_t Environment::get_ambient_light_sky_contribution() const {
    return rebel_icall_float(
        method_bindings.mb_get_ambient_light_sky_contribution,
        (const Object*)this
    );
}

Environment::BGMode Environment::get_background() const {
    return (Environment::BGMode)rebel_icall_int(
        method_bindings.mb_get_background,
        (const Object*)this
    );
}

Color Environment::get_bg_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_bg_color,
        (const Object*)this
    );
}

real_t Environment::get_bg_energy() const {
    return rebel_icall_float(
        method_bindings.mb_get_bg_energy,
        (const Object*)this
    );
}

int64_t Environment::get_camera_feed_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_camera_feed_id,
        (const Object*)this
    );
}

int64_t Environment::get_canvas_max_layer() const {
    return rebel_icall_int(
        method_bindings.mb_get_canvas_max_layer,
        (const Object*)this
    );
}

real_t Environment::get_dof_blur_far_amount() const {
    return rebel_icall_float(
        method_bindings.mb_get_dof_blur_far_amount,
        (const Object*)this
    );
}

real_t Environment::get_dof_blur_far_distance() const {
    return rebel_icall_float(
        method_bindings.mb_get_dof_blur_far_distance,
        (const Object*)this
    );
}

Environment::DOFBlurQuality Environment::get_dof_blur_far_quality() const {
    return (Environment::DOFBlurQuality)rebel_icall_int(
        method_bindings.mb_get_dof_blur_far_quality,
        (const Object*)this
    );
}

real_t Environment::get_dof_blur_far_transition() const {
    return rebel_icall_float(
        method_bindings.mb_get_dof_blur_far_transition,
        (const Object*)this
    );
}

real_t Environment::get_dof_blur_near_amount() const {
    return rebel_icall_float(
        method_bindings.mb_get_dof_blur_near_amount,
        (const Object*)this
    );
}

real_t Environment::get_dof_blur_near_distance() const {
    return rebel_icall_float(
        method_bindings.mb_get_dof_blur_near_distance,
        (const Object*)this
    );
}

Environment::DOFBlurQuality Environment::get_dof_blur_near_quality() const {
    return (Environment::DOFBlurQuality)rebel_icall_int(
        method_bindings.mb_get_dof_blur_near_quality,
        (const Object*)this
    );
}

real_t Environment::get_dof_blur_near_transition() const {
    return rebel_icall_float(
        method_bindings.mb_get_dof_blur_near_transition,
        (const Object*)this
    );
}

Color Environment::get_fog_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_fog_color,
        (const Object*)this
    );
}

real_t Environment::get_fog_depth_begin() const {
    return rebel_icall_float(
        method_bindings.mb_get_fog_depth_begin,
        (const Object*)this
    );
}

real_t Environment::get_fog_depth_curve() const {
    return rebel_icall_float(
        method_bindings.mb_get_fog_depth_curve,
        (const Object*)this
    );
}

real_t Environment::get_fog_depth_end() const {
    return rebel_icall_float(
        method_bindings.mb_get_fog_depth_end,
        (const Object*)this
    );
}

real_t Environment::get_fog_height_curve() const {
    return rebel_icall_float(
        method_bindings.mb_get_fog_height_curve,
        (const Object*)this
    );
}

real_t Environment::get_fog_height_max() const {
    return rebel_icall_float(
        method_bindings.mb_get_fog_height_max,
        (const Object*)this
    );
}

real_t Environment::get_fog_height_min() const {
    return rebel_icall_float(
        method_bindings.mb_get_fog_height_min,
        (const Object*)this
    );
}

real_t Environment::get_fog_sun_amount() const {
    return rebel_icall_float(
        method_bindings.mb_get_fog_sun_amount,
        (const Object*)this
    );
}

Color Environment::get_fog_sun_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_fog_sun_color,
        (const Object*)this
    );
}

real_t Environment::get_fog_transmit_curve() const {
    return rebel_icall_float(
        method_bindings.mb_get_fog_transmit_curve,
        (const Object*)this
    );
}

Environment::GlowBlendMode Environment::get_glow_blend_mode() const {
    return (Environment::GlowBlendMode)rebel_icall_int(
        method_bindings.mb_get_glow_blend_mode,
        (const Object*)this
    );
}

real_t Environment::get_glow_bloom() const {
    return rebel_icall_float(
        method_bindings.mb_get_glow_bloom,
        (const Object*)this
    );
}

real_t Environment::get_glow_hdr_bleed_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_glow_hdr_bleed_scale,
        (const Object*)this
    );
}

real_t Environment::get_glow_hdr_bleed_threshold() const {
    return rebel_icall_float(
        method_bindings.mb_get_glow_hdr_bleed_threshold,
        (const Object*)this
    );
}

real_t Environment::get_glow_hdr_luminance_cap() const {
    return rebel_icall_float(
        method_bindings.mb_get_glow_hdr_luminance_cap,
        (const Object*)this
    );
}

real_t Environment::get_glow_intensity() const {
    return rebel_icall_float(
        method_bindings.mb_get_glow_intensity,
        (const Object*)this
    );
}

real_t Environment::get_glow_strength() const {
    return rebel_icall_float(
        method_bindings.mb_get_glow_strength,
        (const Object*)this
    );
}

Ref<Sky> Environment::get_sky() const {
    return Ref<Sky>::create_ref(rebel_icall_object(
        method_bindings.mb_get_sky,
        (const Object*)this
    ));
}

real_t Environment::get_sky_custom_fov() const {
    return rebel_icall_float(
        method_bindings.mb_get_sky_custom_fov,
        (const Object*)this
    );
}

Basis Environment::get_sky_orientation() const {
    return rebel_icall_basis(
        method_bindings.mb_get_sky_orientation,
        (const Object*)this
    );
}

Vector3 Environment::get_sky_rotation() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_sky_rotation,
        (const Object*)this
    );
}

Vector3 Environment::get_sky_rotation_degrees() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_sky_rotation_degrees,
        (const Object*)this
    );
}

real_t Environment::get_ssao_ao_channel_affect() const {
    return rebel_icall_float(
        method_bindings.mb_get_ssao_ao_channel_affect,
        (const Object*)this
    );
}

real_t Environment::get_ssao_bias() const {
    return rebel_icall_float(
        method_bindings.mb_get_ssao_bias,
        (const Object*)this
    );
}

Environment::SSAOBlur Environment::get_ssao_blur() const {
    return (Environment::SSAOBlur)rebel_icall_int(
        method_bindings.mb_get_ssao_blur,
        (const Object*)this
    );
}

Color Environment::get_ssao_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_ssao_color,
        (const Object*)this
    );
}

real_t Environment::get_ssao_direct_light_affect() const {
    return rebel_icall_float(
        method_bindings.mb_get_ssao_direct_light_affect,
        (const Object*)this
    );
}

real_t Environment::get_ssao_edge_sharpness() const {
    return rebel_icall_float(
        method_bindings.mb_get_ssao_edge_sharpness,
        (const Object*)this
    );
}

real_t Environment::get_ssao_intensity() const {
    return rebel_icall_float(
        method_bindings.mb_get_ssao_intensity,
        (const Object*)this
    );
}

real_t Environment::get_ssao_intensity2() const {
    return rebel_icall_float(
        method_bindings.mb_get_ssao_intensity2,
        (const Object*)this
    );
}

Environment::SSAOQuality Environment::get_ssao_quality() const {
    return (Environment::SSAOQuality)rebel_icall_int(
        method_bindings.mb_get_ssao_quality,
        (const Object*)this
    );
}

real_t Environment::get_ssao_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_ssao_radius,
        (const Object*)this
    );
}

real_t Environment::get_ssao_radius2() const {
    return rebel_icall_float(
        method_bindings.mb_get_ssao_radius2,
        (const Object*)this
    );
}

real_t Environment::get_ssr_depth_tolerance() const {
    return rebel_icall_float(
        method_bindings.mb_get_ssr_depth_tolerance,
        (const Object*)this
    );
}

real_t Environment::get_ssr_fade_in() const {
    return rebel_icall_float(
        method_bindings.mb_get_ssr_fade_in,
        (const Object*)this
    );
}

real_t Environment::get_ssr_fade_out() const {
    return rebel_icall_float(
        method_bindings.mb_get_ssr_fade_out,
        (const Object*)this
    );
}

int64_t Environment::get_ssr_max_steps() const {
    return rebel_icall_int(
        method_bindings.mb_get_ssr_max_steps,
        (const Object*)this
    );
}

bool Environment::get_tonemap_auto_exposure() const {
    return rebel_icall_bool(
        method_bindings.mb_get_tonemap_auto_exposure,
        (const Object*)this
    );
}

real_t Environment::get_tonemap_auto_exposure_grey() const {
    return rebel_icall_float(
        method_bindings.mb_get_tonemap_auto_exposure_grey,
        (const Object*)this
    );
}

real_t Environment::get_tonemap_auto_exposure_max() const {
    return rebel_icall_float(
        method_bindings.mb_get_tonemap_auto_exposure_max,
        (const Object*)this
    );
}

real_t Environment::get_tonemap_auto_exposure_min() const {
    return rebel_icall_float(
        method_bindings.mb_get_tonemap_auto_exposure_min,
        (const Object*)this
    );
}

real_t Environment::get_tonemap_auto_exposure_speed() const {
    return rebel_icall_float(
        method_bindings.mb_get_tonemap_auto_exposure_speed,
        (const Object*)this
    );
}

real_t Environment::get_tonemap_exposure() const {
    return rebel_icall_float(
        method_bindings.mb_get_tonemap_exposure,
        (const Object*)this
    );
}

real_t Environment::get_tonemap_white() const {
    return rebel_icall_float(
        method_bindings.mb_get_tonemap_white,
        (const Object*)this
    );
}

Environment::ToneMapper Environment::get_tonemapper() const {
    return (Environment::ToneMapper)rebel_icall_int(
        method_bindings.mb_get_tonemapper,
        (const Object*)this
    );
}

bool Environment::is_adjustment_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_adjustment_enabled,
        (const Object*)this
    );
}

bool Environment::is_dof_blur_far_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_dof_blur_far_enabled,
        (const Object*)this
    );
}

bool Environment::is_dof_blur_near_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_dof_blur_near_enabled,
        (const Object*)this
    );
}

bool Environment::is_fog_depth_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_fog_depth_enabled,
        (const Object*)this
    );
}

bool Environment::is_fog_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_fog_enabled,
        (const Object*)this
    );
}

bool Environment::is_fog_height_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_fog_height_enabled,
        (const Object*)this
    );
}

bool Environment::is_fog_transmit_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_fog_transmit_enabled,
        (const Object*)this
    );
}

bool Environment::is_glow_bicubic_upscale_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_glow_bicubic_upscale_enabled,
        (const Object*)this
    );
}

bool Environment::is_glow_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_glow_enabled,
        (const Object*)this
    );
}

bool Environment::is_glow_high_quality_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_glow_high_quality_enabled,
        (const Object*)this
    );
}

bool Environment::is_glow_level_enabled(const int64_t idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_glow_level_enabled,
        (const Object*)this,
        idx
    );
}

bool Environment::is_ssao_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_ssao_enabled,
        (const Object*)this
    );
}

bool Environment::is_ssr_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_ssr_enabled,
        (const Object*)this
    );
}

bool Environment::is_ssr_rough() const {
    return rebel_icall_bool(
        method_bindings.mb_is_ssr_rough,
        (const Object*)this
    );
}

void Environment::set_adjustment_brightness(const real_t brightness) {
    rebel_icall_void_float(
        method_bindings.mb_set_adjustment_brightness,
        (const Object*)this,
        brightness
    );
}

void Environment::set_adjustment_color_correction(const Ref<Texture> color_correction) {
    rebel_icall_void_object(
        method_bindings.mb_set_adjustment_color_correction,
        (const Object*)this,
        color_correction.ptr()
    );
}

void Environment::set_adjustment_contrast(const real_t contrast) {
    rebel_icall_void_float(
        method_bindings.mb_set_adjustment_contrast,
        (const Object*)this,
        contrast
    );
}

void Environment::set_adjustment_enable(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_adjustment_enable,
        (const Object*)this,
        enabled
    );
}

void Environment::set_adjustment_saturation(const real_t saturation) {
    rebel_icall_void_float(
        method_bindings.mb_set_adjustment_saturation,
        (const Object*)this,
        saturation
    );
}

void Environment::set_ambient_light_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_ambient_light_color,
        (const Object*)this,
        color
    );
}

void Environment::set_ambient_light_energy(const real_t energy) {
    rebel_icall_void_float(
        method_bindings.mb_set_ambient_light_energy,
        (const Object*)this,
        energy
    );
}

void Environment::set_ambient_light_sky_contribution(const real_t energy) {
    rebel_icall_void_float(
        method_bindings.mb_set_ambient_light_sky_contribution,
        (const Object*)this,
        energy
    );
}

void Environment::set_background(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_background,
        (const Object*)this,
        mode
    );
}

void Environment::set_bg_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_bg_color,
        (const Object*)this,
        color
    );
}

void Environment::set_bg_energy(const real_t energy) {
    rebel_icall_void_float(
        method_bindings.mb_set_bg_energy,
        (const Object*)this,
        energy
    );
}

void Environment::set_camera_feed_id(const int64_t camera_feed_id) {
    rebel_icall_void_int(
        method_bindings.mb_set_camera_feed_id,
        (const Object*)this,
        camera_feed_id
    );
}

void Environment::set_canvas_max_layer(const int64_t layer) {
    rebel_icall_void_int(
        method_bindings.mb_set_canvas_max_layer,
        (const Object*)this,
        layer
    );
}

void Environment::set_dof_blur_far_amount(const real_t intensity) {
    rebel_icall_void_float(
        method_bindings.mb_set_dof_blur_far_amount,
        (const Object*)this,
        intensity
    );
}

void Environment::set_dof_blur_far_distance(const real_t intensity) {
    rebel_icall_void_float(
        method_bindings.mb_set_dof_blur_far_distance,
        (const Object*)this,
        intensity
    );
}

void Environment::set_dof_blur_far_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_dof_blur_far_enabled,
        (const Object*)this,
        enabled
    );
}

void Environment::set_dof_blur_far_quality(const int64_t intensity) {
    rebel_icall_void_int(
        method_bindings.mb_set_dof_blur_far_quality,
        (const Object*)this,
        intensity
    );
}

void Environment::set_dof_blur_far_transition(const real_t intensity) {
    rebel_icall_void_float(
        method_bindings.mb_set_dof_blur_far_transition,
        (const Object*)this,
        intensity
    );
}

void Environment::set_dof_blur_near_amount(const real_t intensity) {
    rebel_icall_void_float(
        method_bindings.mb_set_dof_blur_near_amount,
        (const Object*)this,
        intensity
    );
}

void Environment::set_dof_blur_near_distance(const real_t intensity) {
    rebel_icall_void_float(
        method_bindings.mb_set_dof_blur_near_distance,
        (const Object*)this,
        intensity
    );
}

void Environment::set_dof_blur_near_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_dof_blur_near_enabled,
        (const Object*)this,
        enabled
    );
}

void Environment::set_dof_blur_near_quality(const int64_t level) {
    rebel_icall_void_int(
        method_bindings.mb_set_dof_blur_near_quality,
        (const Object*)this,
        level
    );
}

void Environment::set_dof_blur_near_transition(const real_t intensity) {
    rebel_icall_void_float(
        method_bindings.mb_set_dof_blur_near_transition,
        (const Object*)this,
        intensity
    );
}

void Environment::set_fog_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_fog_color,
        (const Object*)this,
        color
    );
}

void Environment::set_fog_depth_begin(const real_t distance) {
    rebel_icall_void_float(
        method_bindings.mb_set_fog_depth_begin,
        (const Object*)this,
        distance
    );
}

void Environment::set_fog_depth_curve(const real_t curve) {
    rebel_icall_void_float(
        method_bindings.mb_set_fog_depth_curve,
        (const Object*)this,
        curve
    );
}

void Environment::set_fog_depth_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_fog_depth_enabled,
        (const Object*)this,
        enabled
    );
}

void Environment::set_fog_depth_end(const real_t distance) {
    rebel_icall_void_float(
        method_bindings.mb_set_fog_depth_end,
        (const Object*)this,
        distance
    );
}

void Environment::set_fog_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_fog_enabled,
        (const Object*)this,
        enabled
    );
}

void Environment::set_fog_height_curve(const real_t curve) {
    rebel_icall_void_float(
        method_bindings.mb_set_fog_height_curve,
        (const Object*)this,
        curve
    );
}

void Environment::set_fog_height_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_fog_height_enabled,
        (const Object*)this,
        enabled
    );
}

void Environment::set_fog_height_max(const real_t height) {
    rebel_icall_void_float(
        method_bindings.mb_set_fog_height_max,
        (const Object*)this,
        height
    );
}

void Environment::set_fog_height_min(const real_t height) {
    rebel_icall_void_float(
        method_bindings.mb_set_fog_height_min,
        (const Object*)this,
        height
    );
}

void Environment::set_fog_sun_amount(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_fog_sun_amount,
        (const Object*)this,
        amount
    );
}

void Environment::set_fog_sun_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_fog_sun_color,
        (const Object*)this,
        color
    );
}

void Environment::set_fog_transmit_curve(const real_t curve) {
    rebel_icall_void_float(
        method_bindings.mb_set_fog_transmit_curve,
        (const Object*)this,
        curve
    );
}

void Environment::set_fog_transmit_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_fog_transmit_enabled,
        (const Object*)this,
        enabled
    );
}

void Environment::set_glow_bicubic_upscale(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_glow_bicubic_upscale,
        (const Object*)this,
        enabled
    );
}

void Environment::set_glow_blend_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_glow_blend_mode,
        (const Object*)this,
        mode
    );
}

void Environment::set_glow_bloom(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_glow_bloom,
        (const Object*)this,
        amount
    );
}

void Environment::set_glow_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_glow_enabled,
        (const Object*)this,
        enabled
    );
}

void Environment::set_glow_hdr_bleed_scale(const real_t scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_glow_hdr_bleed_scale,
        (const Object*)this,
        scale
    );
}

void Environment::set_glow_hdr_bleed_threshold(const real_t threshold) {
    rebel_icall_void_float(
        method_bindings.mb_set_glow_hdr_bleed_threshold,
        (const Object*)this,
        threshold
    );
}

void Environment::set_glow_hdr_luminance_cap(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_glow_hdr_luminance_cap,
        (const Object*)this,
        amount
    );
}

void Environment::set_glow_high_quality(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_glow_high_quality,
        (const Object*)this,
        enabled
    );
}

void Environment::set_glow_intensity(const real_t intensity) {
    rebel_icall_void_float(
        method_bindings.mb_set_glow_intensity,
        (const Object*)this,
        intensity
    );
}

void Environment::set_glow_level(const int64_t idx, const bool enabled) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_glow_level,
        (const Object*)this,
        idx,
        enabled
    );
}

void Environment::set_glow_strength(const real_t strength) {
    rebel_icall_void_float(
        method_bindings.mb_set_glow_strength,
        (const Object*)this,
        strength
    );
}

void Environment::set_sky(const Ref<Sky> sky) {
    rebel_icall_void_object(
        method_bindings.mb_set_sky,
        (const Object*)this,
        sky.ptr()
    );
}

void Environment::set_sky_custom_fov(const real_t scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_sky_custom_fov,
        (const Object*)this,
        scale
    );
}

void Environment::set_sky_orientation(const Basis orientation) {
    rebel_icall_void_basis(
        method_bindings.mb_set_sky_orientation,
        (const Object*)this,
        orientation
    );
}

void Environment::set_sky_rotation(const Vector3 euler_radians) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_sky_rotation,
        (const Object*)this,
        euler_radians
    );
}

void Environment::set_sky_rotation_degrees(const Vector3 euler_degrees) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_sky_rotation_degrees,
        (const Object*)this,
        euler_degrees
    );
}

void Environment::set_ssao_ao_channel_affect(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_ssao_ao_channel_affect,
        (const Object*)this,
        amount
    );
}

void Environment::set_ssao_bias(const real_t bias) {
    rebel_icall_void_float(
        method_bindings.mb_set_ssao_bias,
        (const Object*)this,
        bias
    );
}

void Environment::set_ssao_blur(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_ssao_blur,
        (const Object*)this,
        mode
    );
}

void Environment::set_ssao_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_ssao_color,
        (const Object*)this,
        color
    );
}

void Environment::set_ssao_direct_light_affect(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_ssao_direct_light_affect,
        (const Object*)this,
        amount
    );
}

void Environment::set_ssao_edge_sharpness(const real_t edge_sharpness) {
    rebel_icall_void_float(
        method_bindings.mb_set_ssao_edge_sharpness,
        (const Object*)this,
        edge_sharpness
    );
}

void Environment::set_ssao_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_ssao_enabled,
        (const Object*)this,
        enabled
    );
}

void Environment::set_ssao_intensity(const real_t intensity) {
    rebel_icall_void_float(
        method_bindings.mb_set_ssao_intensity,
        (const Object*)this,
        intensity
    );
}

void Environment::set_ssao_intensity2(const real_t intensity) {
    rebel_icall_void_float(
        method_bindings.mb_set_ssao_intensity2,
        (const Object*)this,
        intensity
    );
}

void Environment::set_ssao_quality(const int64_t quality) {
    rebel_icall_void_int(
        method_bindings.mb_set_ssao_quality,
        (const Object*)this,
        quality
    );
}

void Environment::set_ssao_radius(const real_t radius) {
    rebel_icall_void_float(
        method_bindings.mb_set_ssao_radius,
        (const Object*)this,
        radius
    );
}

void Environment::set_ssao_radius2(const real_t radius) {
    rebel_icall_void_float(
        method_bindings.mb_set_ssao_radius2,
        (const Object*)this,
        radius
    );
}

void Environment::set_ssr_depth_tolerance(const real_t depth_tolerance) {
    rebel_icall_void_float(
        method_bindings.mb_set_ssr_depth_tolerance,
        (const Object*)this,
        depth_tolerance
    );
}

void Environment::set_ssr_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_ssr_enabled,
        (const Object*)this,
        enabled
    );
}

void Environment::set_ssr_fade_in(const real_t fade_in) {
    rebel_icall_void_float(
        method_bindings.mb_set_ssr_fade_in,
        (const Object*)this,
        fade_in
    );
}

void Environment::set_ssr_fade_out(const real_t fade_out) {
    rebel_icall_void_float(
        method_bindings.mb_set_ssr_fade_out,
        (const Object*)this,
        fade_out
    );
}

void Environment::set_ssr_max_steps(const int64_t max_steps) {
    rebel_icall_void_int(
        method_bindings.mb_set_ssr_max_steps,
        (const Object*)this,
        max_steps
    );
}

void Environment::set_ssr_rough(const bool rough) {
    rebel_icall_void_bool(
        method_bindings.mb_set_ssr_rough,
        (const Object*)this,
        rough
    );
}

void Environment::set_tonemap_auto_exposure(const bool auto_exposure) {
    rebel_icall_void_bool(
        method_bindings.mb_set_tonemap_auto_exposure,
        (const Object*)this,
        auto_exposure
    );
}

void Environment::set_tonemap_auto_exposure_grey(const real_t exposure_grey) {
    rebel_icall_void_float(
        method_bindings.mb_set_tonemap_auto_exposure_grey,
        (const Object*)this,
        exposure_grey
    );
}

void Environment::set_tonemap_auto_exposure_max(const real_t exposure_max) {
    rebel_icall_void_float(
        method_bindings.mb_set_tonemap_auto_exposure_max,
        (const Object*)this,
        exposure_max
    );
}

void Environment::set_tonemap_auto_exposure_min(const real_t exposure_min) {
    rebel_icall_void_float(
        method_bindings.mb_set_tonemap_auto_exposure_min,
        (const Object*)this,
        exposure_min
    );
}

void Environment::set_tonemap_auto_exposure_speed(const real_t exposure_speed) {
    rebel_icall_void_float(
        method_bindings.mb_set_tonemap_auto_exposure_speed,
        (const Object*)this,
        exposure_speed
    );
}

void Environment::set_tonemap_exposure(const real_t exposure) {
    rebel_icall_void_float(
        method_bindings.mb_set_tonemap_exposure,
        (const Object*)this,
        exposure
    );
}

void Environment::set_tonemap_white(const real_t white) {
    rebel_icall_void_float(
        method_bindings.mb_set_tonemap_white,
        (const Object*)this,
        white
    );
}

void Environment::set_tonemapper(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_tonemapper,
        (const Object*)this,
        mode
    );
}

Environment* Environment::create() {
    return (Environment*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Environment")()
         );
}

void Environment::init_method_bindings() {
    method_bindings.mb_get_adjustment_brightness =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_adjustment_brightness"
        );
    method_bindings.mb_get_adjustment_color_correction =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_adjustment_color_correction"
        );
    method_bindings.mb_get_adjustment_contrast =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_adjustment_contrast"
        );
    method_bindings.mb_get_adjustment_saturation =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_adjustment_saturation"
        );
    method_bindings.mb_get_ambient_light_color =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_ambient_light_color"
        );
    method_bindings.mb_get_ambient_light_energy =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_ambient_light_energy"
        );
    method_bindings.mb_get_ambient_light_sky_contribution =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_ambient_light_sky_contribution"
        );
    method_bindings.mb_get_background =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_background"
        );
    method_bindings.mb_get_bg_color =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_bg_color"
        );
    method_bindings.mb_get_bg_energy =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_bg_energy"
        );
    method_bindings.mb_get_camera_feed_id =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_camera_feed_id"
        );
    method_bindings.mb_get_canvas_max_layer =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_canvas_max_layer"
        );
    method_bindings.mb_get_dof_blur_far_amount =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_dof_blur_far_amount"
        );
    method_bindings.mb_get_dof_blur_far_distance =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_dof_blur_far_distance"
        );
    method_bindings.mb_get_dof_blur_far_quality =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_dof_blur_far_quality"
        );
    method_bindings.mb_get_dof_blur_far_transition =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_dof_blur_far_transition"
        );
    method_bindings.mb_get_dof_blur_near_amount =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_dof_blur_near_amount"
        );
    method_bindings.mb_get_dof_blur_near_distance =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_dof_blur_near_distance"
        );
    method_bindings.mb_get_dof_blur_near_quality =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_dof_blur_near_quality"
        );
    method_bindings.mb_get_dof_blur_near_transition =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_dof_blur_near_transition"
        );
    method_bindings.mb_get_fog_color =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_fog_color"
        );
    method_bindings.mb_get_fog_depth_begin =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_fog_depth_begin"
        );
    method_bindings.mb_get_fog_depth_curve =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_fog_depth_curve"
        );
    method_bindings.mb_get_fog_depth_end =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_fog_depth_end"
        );
    method_bindings.mb_get_fog_height_curve =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_fog_height_curve"
        );
    method_bindings.mb_get_fog_height_max =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_fog_height_max"
        );
    method_bindings.mb_get_fog_height_min =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_fog_height_min"
        );
    method_bindings.mb_get_fog_sun_amount =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_fog_sun_amount"
        );
    method_bindings.mb_get_fog_sun_color =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_fog_sun_color"
        );
    method_bindings.mb_get_fog_transmit_curve =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_fog_transmit_curve"
        );
    method_bindings.mb_get_glow_blend_mode =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_glow_blend_mode"
        );
    method_bindings.mb_get_glow_bloom =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_glow_bloom"
        );
    method_bindings.mb_get_glow_hdr_bleed_scale =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_glow_hdr_bleed_scale"
        );
    method_bindings.mb_get_glow_hdr_bleed_threshold =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_glow_hdr_bleed_threshold"
        );
    method_bindings.mb_get_glow_hdr_luminance_cap =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_glow_hdr_luminance_cap"
        );
    method_bindings.mb_get_glow_intensity =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_glow_intensity"
        );
    method_bindings.mb_get_glow_strength =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_glow_strength"
        );
    method_bindings.mb_get_sky =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_sky"
        );
    method_bindings.mb_get_sky_custom_fov =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_sky_custom_fov"
        );
    method_bindings.mb_get_sky_orientation =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_sky_orientation"
        );
    method_bindings.mb_get_sky_rotation =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_sky_rotation"
        );
    method_bindings.mb_get_sky_rotation_degrees =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_sky_rotation_degrees"
        );
    method_bindings.mb_get_ssao_ao_channel_affect =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_ssao_ao_channel_affect"
        );
    method_bindings.mb_get_ssao_bias =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_ssao_bias"
        );
    method_bindings.mb_get_ssao_blur =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_ssao_blur"
        );
    method_bindings.mb_get_ssao_color =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_ssao_color"
        );
    method_bindings.mb_get_ssao_direct_light_affect =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_ssao_direct_light_affect"
        );
    method_bindings.mb_get_ssao_edge_sharpness =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_ssao_edge_sharpness"
        );
    method_bindings.mb_get_ssao_intensity =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_ssao_intensity"
        );
    method_bindings.mb_get_ssao_intensity2 =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_ssao_intensity2"
        );
    method_bindings.mb_get_ssao_quality =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_ssao_quality"
        );
    method_bindings.mb_get_ssao_radius =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_ssao_radius"
        );
    method_bindings.mb_get_ssao_radius2 =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_ssao_radius2"
        );
    method_bindings.mb_get_ssr_depth_tolerance =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_ssr_depth_tolerance"
        );
    method_bindings.mb_get_ssr_fade_in =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_ssr_fade_in"
        );
    method_bindings.mb_get_ssr_fade_out =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_ssr_fade_out"
        );
    method_bindings.mb_get_ssr_max_steps =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_ssr_max_steps"
        );
    method_bindings.mb_get_tonemap_auto_exposure =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_tonemap_auto_exposure"
        );
    method_bindings.mb_get_tonemap_auto_exposure_grey =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_tonemap_auto_exposure_grey"
        );
    method_bindings.mb_get_tonemap_auto_exposure_max =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_tonemap_auto_exposure_max"
        );
    method_bindings.mb_get_tonemap_auto_exposure_min =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_tonemap_auto_exposure_min"
        );
    method_bindings.mb_get_tonemap_auto_exposure_speed =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_tonemap_auto_exposure_speed"
        );
    method_bindings.mb_get_tonemap_exposure =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_tonemap_exposure"
        );
    method_bindings.mb_get_tonemap_white =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_tonemap_white"
        );
    method_bindings.mb_get_tonemapper =
        api->rebel_method_bind_get_method(
            "Environment",
            "get_tonemapper"
        );
    method_bindings.mb_is_adjustment_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "is_adjustment_enabled"
        );
    method_bindings.mb_is_dof_blur_far_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "is_dof_blur_far_enabled"
        );
    method_bindings.mb_is_dof_blur_near_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "is_dof_blur_near_enabled"
        );
    method_bindings.mb_is_fog_depth_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "is_fog_depth_enabled"
        );
    method_bindings.mb_is_fog_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "is_fog_enabled"
        );
    method_bindings.mb_is_fog_height_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "is_fog_height_enabled"
        );
    method_bindings.mb_is_fog_transmit_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "is_fog_transmit_enabled"
        );
    method_bindings.mb_is_glow_bicubic_upscale_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "is_glow_bicubic_upscale_enabled"
        );
    method_bindings.mb_is_glow_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "is_glow_enabled"
        );
    method_bindings.mb_is_glow_high_quality_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "is_glow_high_quality_enabled"
        );
    method_bindings.mb_is_glow_level_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "is_glow_level_enabled"
        );
    method_bindings.mb_is_ssao_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "is_ssao_enabled"
        );
    method_bindings.mb_is_ssr_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "is_ssr_enabled"
        );
    method_bindings.mb_is_ssr_rough =
        api->rebel_method_bind_get_method(
            "Environment",
            "is_ssr_rough"
        );
    method_bindings.mb_set_adjustment_brightness =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_adjustment_brightness"
        );
    method_bindings.mb_set_adjustment_color_correction =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_adjustment_color_correction"
        );
    method_bindings.mb_set_adjustment_contrast =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_adjustment_contrast"
        );
    method_bindings.mb_set_adjustment_enable =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_adjustment_enable"
        );
    method_bindings.mb_set_adjustment_saturation =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_adjustment_saturation"
        );
    method_bindings.mb_set_ambient_light_color =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ambient_light_color"
        );
    method_bindings.mb_set_ambient_light_energy =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ambient_light_energy"
        );
    method_bindings.mb_set_ambient_light_sky_contribution =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ambient_light_sky_contribution"
        );
    method_bindings.mb_set_background =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_background"
        );
    method_bindings.mb_set_bg_color =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_bg_color"
        );
    method_bindings.mb_set_bg_energy =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_bg_energy"
        );
    method_bindings.mb_set_camera_feed_id =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_camera_feed_id"
        );
    method_bindings.mb_set_canvas_max_layer =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_canvas_max_layer"
        );
    method_bindings.mb_set_dof_blur_far_amount =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_dof_blur_far_amount"
        );
    method_bindings.mb_set_dof_blur_far_distance =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_dof_blur_far_distance"
        );
    method_bindings.mb_set_dof_blur_far_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_dof_blur_far_enabled"
        );
    method_bindings.mb_set_dof_blur_far_quality =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_dof_blur_far_quality"
        );
    method_bindings.mb_set_dof_blur_far_transition =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_dof_blur_far_transition"
        );
    method_bindings.mb_set_dof_blur_near_amount =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_dof_blur_near_amount"
        );
    method_bindings.mb_set_dof_blur_near_distance =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_dof_blur_near_distance"
        );
    method_bindings.mb_set_dof_blur_near_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_dof_blur_near_enabled"
        );
    method_bindings.mb_set_dof_blur_near_quality =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_dof_blur_near_quality"
        );
    method_bindings.mb_set_dof_blur_near_transition =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_dof_blur_near_transition"
        );
    method_bindings.mb_set_fog_color =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_fog_color"
        );
    method_bindings.mb_set_fog_depth_begin =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_fog_depth_begin"
        );
    method_bindings.mb_set_fog_depth_curve =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_fog_depth_curve"
        );
    method_bindings.mb_set_fog_depth_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_fog_depth_enabled"
        );
    method_bindings.mb_set_fog_depth_end =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_fog_depth_end"
        );
    method_bindings.mb_set_fog_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_fog_enabled"
        );
    method_bindings.mb_set_fog_height_curve =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_fog_height_curve"
        );
    method_bindings.mb_set_fog_height_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_fog_height_enabled"
        );
    method_bindings.mb_set_fog_height_max =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_fog_height_max"
        );
    method_bindings.mb_set_fog_height_min =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_fog_height_min"
        );
    method_bindings.mb_set_fog_sun_amount =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_fog_sun_amount"
        );
    method_bindings.mb_set_fog_sun_color =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_fog_sun_color"
        );
    method_bindings.mb_set_fog_transmit_curve =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_fog_transmit_curve"
        );
    method_bindings.mb_set_fog_transmit_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_fog_transmit_enabled"
        );
    method_bindings.mb_set_glow_bicubic_upscale =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_glow_bicubic_upscale"
        );
    method_bindings.mb_set_glow_blend_mode =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_glow_blend_mode"
        );
    method_bindings.mb_set_glow_bloom =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_glow_bloom"
        );
    method_bindings.mb_set_glow_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_glow_enabled"
        );
    method_bindings.mb_set_glow_hdr_bleed_scale =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_glow_hdr_bleed_scale"
        );
    method_bindings.mb_set_glow_hdr_bleed_threshold =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_glow_hdr_bleed_threshold"
        );
    method_bindings.mb_set_glow_hdr_luminance_cap =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_glow_hdr_luminance_cap"
        );
    method_bindings.mb_set_glow_high_quality =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_glow_high_quality"
        );
    method_bindings.mb_set_glow_intensity =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_glow_intensity"
        );
    method_bindings.mb_set_glow_level =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_glow_level"
        );
    method_bindings.mb_set_glow_strength =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_glow_strength"
        );
    method_bindings.mb_set_sky =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_sky"
        );
    method_bindings.mb_set_sky_custom_fov =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_sky_custom_fov"
        );
    method_bindings.mb_set_sky_orientation =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_sky_orientation"
        );
    method_bindings.mb_set_sky_rotation =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_sky_rotation"
        );
    method_bindings.mb_set_sky_rotation_degrees =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_sky_rotation_degrees"
        );
    method_bindings.mb_set_ssao_ao_channel_affect =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ssao_ao_channel_affect"
        );
    method_bindings.mb_set_ssao_bias =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ssao_bias"
        );
    method_bindings.mb_set_ssao_blur =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ssao_blur"
        );
    method_bindings.mb_set_ssao_color =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ssao_color"
        );
    method_bindings.mb_set_ssao_direct_light_affect =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ssao_direct_light_affect"
        );
    method_bindings.mb_set_ssao_edge_sharpness =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ssao_edge_sharpness"
        );
    method_bindings.mb_set_ssao_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ssao_enabled"
        );
    method_bindings.mb_set_ssao_intensity =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ssao_intensity"
        );
    method_bindings.mb_set_ssao_intensity2 =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ssao_intensity2"
        );
    method_bindings.mb_set_ssao_quality =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ssao_quality"
        );
    method_bindings.mb_set_ssao_radius =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ssao_radius"
        );
    method_bindings.mb_set_ssao_radius2 =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ssao_radius2"
        );
    method_bindings.mb_set_ssr_depth_tolerance =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ssr_depth_tolerance"
        );
    method_bindings.mb_set_ssr_enabled =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ssr_enabled"
        );
    method_bindings.mb_set_ssr_fade_in =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ssr_fade_in"
        );
    method_bindings.mb_set_ssr_fade_out =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ssr_fade_out"
        );
    method_bindings.mb_set_ssr_max_steps =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ssr_max_steps"
        );
    method_bindings.mb_set_ssr_rough =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_ssr_rough"
        );
    method_bindings.mb_set_tonemap_auto_exposure =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_tonemap_auto_exposure"
        );
    method_bindings.mb_set_tonemap_auto_exposure_grey =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_tonemap_auto_exposure_grey"
        );
    method_bindings.mb_set_tonemap_auto_exposure_max =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_tonemap_auto_exposure_max"
        );
    method_bindings.mb_set_tonemap_auto_exposure_min =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_tonemap_auto_exposure_min"
        );
    method_bindings.mb_set_tonemap_auto_exposure_speed =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_tonemap_auto_exposure_speed"
        );
    method_bindings.mb_set_tonemap_exposure =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_tonemap_exposure"
        );
    method_bindings.mb_set_tonemap_white =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_tonemap_white"
        );
    method_bindings.mb_set_tonemapper =
        api->rebel_method_bind_get_method(
            "Environment",
            "set_tonemapper"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Environment");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Environment::MethodBindings Environment::method_bindings = {};
void* Environment::class_tag = nullptr;
} // namespace Rebel
