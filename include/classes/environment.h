// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ENVIRONMENT_H
#define REBEL_ENVIRONMENT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Sky;
class Texture;

class Environment : public Resource {
public:
    enum SSAOBlur {
        SSAO_BLUR_DISABLED = 0,
        SSAO_BLUR_1x1 = 1,
        SSAO_BLUR_2x2 = 2,
        SSAO_BLUR_3x3 = 3,
    };

    enum ToneMapper {
        TONE_MAPPER_LINEAR = 0,
        TONE_MAPPER_REINHARDT = 1,
        TONE_MAPPER_FILMIC = 2,
        TONE_MAPPER_ACES = 3,
        TONE_MAPPER_ACES_FITTED = 4,
    };

    enum GlowBlendMode {
        GLOW_BLEND_MODE_ADDITIVE = 0,
        GLOW_BLEND_MODE_SCREEN = 1,
        GLOW_BLEND_MODE_SOFTLIGHT = 2,
        GLOW_BLEND_MODE_REPLACE = 3,
    };

    enum BGMode {
        BG_CLEAR_COLOR = 0,
        BG_COLOR = 1,
        BG_SKY = 2,
        BG_COLOR_SKY = 3,
        BG_CANVAS = 4,
        BG_KEEP = 5,
        BG_CAMERA_FEED = 6,
        BG_MAX = 7,
    };

    enum SSAOQuality {
        SSAO_QUALITY_LOW = 0,
        SSAO_QUALITY_MEDIUM = 1,
        SSAO_QUALITY_HIGH = 2,
    };

    enum DOFBlurQuality {
        DOF_BLUR_QUALITY_LOW = 0,
        DOF_BLUR_QUALITY_MEDIUM = 1,
        DOF_BLUR_QUALITY_HIGH = 2,
    };

    real_t get_adjustment_brightness() const;
    Ref<Texture> get_adjustment_color_correction() const;
    real_t get_adjustment_contrast() const;
    real_t get_adjustment_saturation() const;
    Color get_ambient_light_color() const;
    real_t get_ambient_light_energy() const;
    real_t get_ambient_light_sky_contribution() const;
    Environment::BGMode get_background() const;
    Color get_bg_color() const;
    real_t get_bg_energy() const;
    int64_t get_camera_feed_id() const;
    int64_t get_canvas_max_layer() const;
    real_t get_dof_blur_far_amount() const;
    real_t get_dof_blur_far_distance() const;
    Environment::DOFBlurQuality get_dof_blur_far_quality() const;
    real_t get_dof_blur_far_transition() const;
    real_t get_dof_blur_near_amount() const;
    real_t get_dof_blur_near_distance() const;
    Environment::DOFBlurQuality get_dof_blur_near_quality() const;
    real_t get_dof_blur_near_transition() const;
    Color get_fog_color() const;
    real_t get_fog_depth_begin() const;
    real_t get_fog_depth_curve() const;
    real_t get_fog_depth_end() const;
    real_t get_fog_height_curve() const;
    real_t get_fog_height_max() const;
    real_t get_fog_height_min() const;
    real_t get_fog_sun_amount() const;
    Color get_fog_sun_color() const;
    real_t get_fog_transmit_curve() const;
    Environment::GlowBlendMode get_glow_blend_mode() const;
    real_t get_glow_bloom() const;
    real_t get_glow_hdr_bleed_scale() const;
    real_t get_glow_hdr_bleed_threshold() const;
    real_t get_glow_hdr_luminance_cap() const;
    real_t get_glow_intensity() const;
    real_t get_glow_strength() const;
    Ref<Sky> get_sky() const;
    real_t get_sky_custom_fov() const;
    Basis get_sky_orientation() const;
    Vector3 get_sky_rotation() const;
    Vector3 get_sky_rotation_degrees() const;
    real_t get_ssao_ao_channel_affect() const;
    real_t get_ssao_bias() const;
    Environment::SSAOBlur get_ssao_blur() const;
    Color get_ssao_color() const;
    real_t get_ssao_direct_light_affect() const;
    real_t get_ssao_edge_sharpness() const;
    real_t get_ssao_intensity() const;
    real_t get_ssao_intensity2() const;
    Environment::SSAOQuality get_ssao_quality() const;
    real_t get_ssao_radius() const;
    real_t get_ssao_radius2() const;
    real_t get_ssr_depth_tolerance() const;
    real_t get_ssr_fade_in() const;
    real_t get_ssr_fade_out() const;
    int64_t get_ssr_max_steps() const;
    bool get_tonemap_auto_exposure() const;
    real_t get_tonemap_auto_exposure_grey() const;
    real_t get_tonemap_auto_exposure_max() const;
    real_t get_tonemap_auto_exposure_min() const;
    real_t get_tonemap_auto_exposure_speed() const;
    real_t get_tonemap_exposure() const;
    real_t get_tonemap_white() const;
    Environment::ToneMapper get_tonemapper() const;
    bool is_adjustment_enabled() const;
    bool is_dof_blur_far_enabled() const;
    bool is_dof_blur_near_enabled() const;
    bool is_fog_depth_enabled() const;
    bool is_fog_enabled() const;
    bool is_fog_height_enabled() const;
    bool is_fog_transmit_enabled() const;
    bool is_glow_bicubic_upscale_enabled() const;
    bool is_glow_enabled() const;
    bool is_glow_high_quality_enabled() const;
    bool is_glow_level_enabled(const int64_t idx) const;
    bool is_ssao_enabled() const;
    bool is_ssr_enabled() const;
    bool is_ssr_rough() const;
    void set_adjustment_brightness(const real_t brightness);
    void set_adjustment_color_correction(const Ref<Texture> color_correction);
    void set_adjustment_contrast(const real_t contrast);
    void set_adjustment_enable(const bool enabled);
    void set_adjustment_saturation(const real_t saturation);
    void set_ambient_light_color(const Color color);
    void set_ambient_light_energy(const real_t energy);
    void set_ambient_light_sky_contribution(const real_t energy);
    void set_background(const int64_t mode);
    void set_bg_color(const Color color);
    void set_bg_energy(const real_t energy);
    void set_camera_feed_id(const int64_t camera_feed_id);
    void set_canvas_max_layer(const int64_t layer);
    void set_dof_blur_far_amount(const real_t intensity);
    void set_dof_blur_far_distance(const real_t intensity);
    void set_dof_blur_far_enabled(const bool enabled);
    void set_dof_blur_far_quality(const int64_t intensity);
    void set_dof_blur_far_transition(const real_t intensity);
    void set_dof_blur_near_amount(const real_t intensity);
    void set_dof_blur_near_distance(const real_t intensity);
    void set_dof_blur_near_enabled(const bool enabled);
    void set_dof_blur_near_quality(const int64_t level);
    void set_dof_blur_near_transition(const real_t intensity);
    void set_fog_color(const Color color);
    void set_fog_depth_begin(const real_t distance);
    void set_fog_depth_curve(const real_t curve);
    void set_fog_depth_enabled(const bool enabled);
    void set_fog_depth_end(const real_t distance);
    void set_fog_enabled(const bool enabled);
    void set_fog_height_curve(const real_t curve);
    void set_fog_height_enabled(const bool enabled);
    void set_fog_height_max(const real_t height);
    void set_fog_height_min(const real_t height);
    void set_fog_sun_amount(const real_t amount);
    void set_fog_sun_color(const Color color);
    void set_fog_transmit_curve(const real_t curve);
    void set_fog_transmit_enabled(const bool enabled);
    void set_glow_bicubic_upscale(const bool enabled);
    void set_glow_blend_mode(const int64_t mode);
    void set_glow_bloom(const real_t amount);
    void set_glow_enabled(const bool enabled);
    void set_glow_hdr_bleed_scale(const real_t scale);
    void set_glow_hdr_bleed_threshold(const real_t threshold);
    void set_glow_hdr_luminance_cap(const real_t amount);
    void set_glow_high_quality(const bool enabled);
    void set_glow_intensity(const real_t intensity);
    void set_glow_level(const int64_t idx, const bool enabled);
    void set_glow_strength(const real_t strength);
    void set_sky(const Ref<Sky> sky);
    void set_sky_custom_fov(const real_t scale);
    void set_sky_orientation(const Basis orientation);
    void set_sky_rotation(const Vector3 euler_radians);
    void set_sky_rotation_degrees(const Vector3 euler_degrees);
    void set_ssao_ao_channel_affect(const real_t amount);
    void set_ssao_bias(const real_t bias);
    void set_ssao_blur(const int64_t mode);
    void set_ssao_color(const Color color);
    void set_ssao_direct_light_affect(const real_t amount);
    void set_ssao_edge_sharpness(const real_t edge_sharpness);
    void set_ssao_enabled(const bool enabled);
    void set_ssao_intensity(const real_t intensity);
    void set_ssao_intensity2(const real_t intensity);
    void set_ssao_quality(const int64_t quality);
    void set_ssao_radius(const real_t radius);
    void set_ssao_radius2(const real_t radius);
    void set_ssr_depth_tolerance(const real_t depth_tolerance);
    void set_ssr_enabled(const bool enabled);
    void set_ssr_fade_in(const real_t fade_in);
    void set_ssr_fade_out(const real_t fade_out);
    void set_ssr_max_steps(const int64_t max_steps);
    void set_ssr_rough(const bool rough);
    void set_tonemap_auto_exposure(const bool auto_exposure);
    void set_tonemap_auto_exposure_grey(const real_t exposure_grey);
    void set_tonemap_auto_exposure_max(const real_t exposure_max);
    void set_tonemap_auto_exposure_min(const real_t exposure_min);
    void set_tonemap_auto_exposure_speed(const real_t exposure_speed);
    void set_tonemap_exposure(const real_t exposure);
    void set_tonemap_white(const real_t white);
    void set_tonemapper(const int64_t mode);

    static Environment* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Environment";
    }

    inline static const char* get_rebel_class_name() {
        return "Environment";
    }

    inline static Object* from_variant(Variant variant) {
        rebel_object* object = (rebel_object*)variant;
        if (!object) {
            return nullptr;
        }
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                object
            );
    }

private:
    struct MethodBindings {
        rebel_method_bind* mb_get_adjustment_brightness;
        rebel_method_bind* mb_get_adjustment_color_correction;
        rebel_method_bind* mb_get_adjustment_contrast;
        rebel_method_bind* mb_get_adjustment_saturation;
        rebel_method_bind* mb_get_ambient_light_color;
        rebel_method_bind* mb_get_ambient_light_energy;
        rebel_method_bind* mb_get_ambient_light_sky_contribution;
        rebel_method_bind* mb_get_background;
        rebel_method_bind* mb_get_bg_color;
        rebel_method_bind* mb_get_bg_energy;
        rebel_method_bind* mb_get_camera_feed_id;
        rebel_method_bind* mb_get_canvas_max_layer;
        rebel_method_bind* mb_get_dof_blur_far_amount;
        rebel_method_bind* mb_get_dof_blur_far_distance;
        rebel_method_bind* mb_get_dof_blur_far_quality;
        rebel_method_bind* mb_get_dof_blur_far_transition;
        rebel_method_bind* mb_get_dof_blur_near_amount;
        rebel_method_bind* mb_get_dof_blur_near_distance;
        rebel_method_bind* mb_get_dof_blur_near_quality;
        rebel_method_bind* mb_get_dof_blur_near_transition;
        rebel_method_bind* mb_get_fog_color;
        rebel_method_bind* mb_get_fog_depth_begin;
        rebel_method_bind* mb_get_fog_depth_curve;
        rebel_method_bind* mb_get_fog_depth_end;
        rebel_method_bind* mb_get_fog_height_curve;
        rebel_method_bind* mb_get_fog_height_max;
        rebel_method_bind* mb_get_fog_height_min;
        rebel_method_bind* mb_get_fog_sun_amount;
        rebel_method_bind* mb_get_fog_sun_color;
        rebel_method_bind* mb_get_fog_transmit_curve;
        rebel_method_bind* mb_get_glow_blend_mode;
        rebel_method_bind* mb_get_glow_bloom;
        rebel_method_bind* mb_get_glow_hdr_bleed_scale;
        rebel_method_bind* mb_get_glow_hdr_bleed_threshold;
        rebel_method_bind* mb_get_glow_hdr_luminance_cap;
        rebel_method_bind* mb_get_glow_intensity;
        rebel_method_bind* mb_get_glow_strength;
        rebel_method_bind* mb_get_sky;
        rebel_method_bind* mb_get_sky_custom_fov;
        rebel_method_bind* mb_get_sky_orientation;
        rebel_method_bind* mb_get_sky_rotation;
        rebel_method_bind* mb_get_sky_rotation_degrees;
        rebel_method_bind* mb_get_ssao_ao_channel_affect;
        rebel_method_bind* mb_get_ssao_bias;
        rebel_method_bind* mb_get_ssao_blur;
        rebel_method_bind* mb_get_ssao_color;
        rebel_method_bind* mb_get_ssao_direct_light_affect;
        rebel_method_bind* mb_get_ssao_edge_sharpness;
        rebel_method_bind* mb_get_ssao_intensity;
        rebel_method_bind* mb_get_ssao_intensity2;
        rebel_method_bind* mb_get_ssao_quality;
        rebel_method_bind* mb_get_ssao_radius;
        rebel_method_bind* mb_get_ssao_radius2;
        rebel_method_bind* mb_get_ssr_depth_tolerance;
        rebel_method_bind* mb_get_ssr_fade_in;
        rebel_method_bind* mb_get_ssr_fade_out;
        rebel_method_bind* mb_get_ssr_max_steps;
        rebel_method_bind* mb_get_tonemap_auto_exposure;
        rebel_method_bind* mb_get_tonemap_auto_exposure_grey;
        rebel_method_bind* mb_get_tonemap_auto_exposure_max;
        rebel_method_bind* mb_get_tonemap_auto_exposure_min;
        rebel_method_bind* mb_get_tonemap_auto_exposure_speed;
        rebel_method_bind* mb_get_tonemap_exposure;
        rebel_method_bind* mb_get_tonemap_white;
        rebel_method_bind* mb_get_tonemapper;
        rebel_method_bind* mb_is_adjustment_enabled;
        rebel_method_bind* mb_is_dof_blur_far_enabled;
        rebel_method_bind* mb_is_dof_blur_near_enabled;
        rebel_method_bind* mb_is_fog_depth_enabled;
        rebel_method_bind* mb_is_fog_enabled;
        rebel_method_bind* mb_is_fog_height_enabled;
        rebel_method_bind* mb_is_fog_transmit_enabled;
        rebel_method_bind* mb_is_glow_bicubic_upscale_enabled;
        rebel_method_bind* mb_is_glow_enabled;
        rebel_method_bind* mb_is_glow_high_quality_enabled;
        rebel_method_bind* mb_is_glow_level_enabled;
        rebel_method_bind* mb_is_ssao_enabled;
        rebel_method_bind* mb_is_ssr_enabled;
        rebel_method_bind* mb_is_ssr_rough;
        rebel_method_bind* mb_set_adjustment_brightness;
        rebel_method_bind* mb_set_adjustment_color_correction;
        rebel_method_bind* mb_set_adjustment_contrast;
        rebel_method_bind* mb_set_adjustment_enable;
        rebel_method_bind* mb_set_adjustment_saturation;
        rebel_method_bind* mb_set_ambient_light_color;
        rebel_method_bind* mb_set_ambient_light_energy;
        rebel_method_bind* mb_set_ambient_light_sky_contribution;
        rebel_method_bind* mb_set_background;
        rebel_method_bind* mb_set_bg_color;
        rebel_method_bind* mb_set_bg_energy;
        rebel_method_bind* mb_set_camera_feed_id;
        rebel_method_bind* mb_set_canvas_max_layer;
        rebel_method_bind* mb_set_dof_blur_far_amount;
        rebel_method_bind* mb_set_dof_blur_far_distance;
        rebel_method_bind* mb_set_dof_blur_far_enabled;
        rebel_method_bind* mb_set_dof_blur_far_quality;
        rebel_method_bind* mb_set_dof_blur_far_transition;
        rebel_method_bind* mb_set_dof_blur_near_amount;
        rebel_method_bind* mb_set_dof_blur_near_distance;
        rebel_method_bind* mb_set_dof_blur_near_enabled;
        rebel_method_bind* mb_set_dof_blur_near_quality;
        rebel_method_bind* mb_set_dof_blur_near_transition;
        rebel_method_bind* mb_set_fog_color;
        rebel_method_bind* mb_set_fog_depth_begin;
        rebel_method_bind* mb_set_fog_depth_curve;
        rebel_method_bind* mb_set_fog_depth_enabled;
        rebel_method_bind* mb_set_fog_depth_end;
        rebel_method_bind* mb_set_fog_enabled;
        rebel_method_bind* mb_set_fog_height_curve;
        rebel_method_bind* mb_set_fog_height_enabled;
        rebel_method_bind* mb_set_fog_height_max;
        rebel_method_bind* mb_set_fog_height_min;
        rebel_method_bind* mb_set_fog_sun_amount;
        rebel_method_bind* mb_set_fog_sun_color;
        rebel_method_bind* mb_set_fog_transmit_curve;
        rebel_method_bind* mb_set_fog_transmit_enabled;
        rebel_method_bind* mb_set_glow_bicubic_upscale;
        rebel_method_bind* mb_set_glow_blend_mode;
        rebel_method_bind* mb_set_glow_bloom;
        rebel_method_bind* mb_set_glow_enabled;
        rebel_method_bind* mb_set_glow_hdr_bleed_scale;
        rebel_method_bind* mb_set_glow_hdr_bleed_threshold;
        rebel_method_bind* mb_set_glow_hdr_luminance_cap;
        rebel_method_bind* mb_set_glow_high_quality;
        rebel_method_bind* mb_set_glow_intensity;
        rebel_method_bind* mb_set_glow_level;
        rebel_method_bind* mb_set_glow_strength;
        rebel_method_bind* mb_set_sky;
        rebel_method_bind* mb_set_sky_custom_fov;
        rebel_method_bind* mb_set_sky_orientation;
        rebel_method_bind* mb_set_sky_rotation;
        rebel_method_bind* mb_set_sky_rotation_degrees;
        rebel_method_bind* mb_set_ssao_ao_channel_affect;
        rebel_method_bind* mb_set_ssao_bias;
        rebel_method_bind* mb_set_ssao_blur;
        rebel_method_bind* mb_set_ssao_color;
        rebel_method_bind* mb_set_ssao_direct_light_affect;
        rebel_method_bind* mb_set_ssao_edge_sharpness;
        rebel_method_bind* mb_set_ssao_enabled;
        rebel_method_bind* mb_set_ssao_intensity;
        rebel_method_bind* mb_set_ssao_intensity2;
        rebel_method_bind* mb_set_ssao_quality;
        rebel_method_bind* mb_set_ssao_radius;
        rebel_method_bind* mb_set_ssao_radius2;
        rebel_method_bind* mb_set_ssr_depth_tolerance;
        rebel_method_bind* mb_set_ssr_enabled;
        rebel_method_bind* mb_set_ssr_fade_in;
        rebel_method_bind* mb_set_ssr_fade_out;
        rebel_method_bind* mb_set_ssr_max_steps;
        rebel_method_bind* mb_set_ssr_rough;
        rebel_method_bind* mb_set_tonemap_auto_exposure;
        rebel_method_bind* mb_set_tonemap_auto_exposure_grey;
        rebel_method_bind* mb_set_tonemap_auto_exposure_max;
        rebel_method_bind* mb_set_tonemap_auto_exposure_min;
        rebel_method_bind* mb_set_tonemap_auto_exposure_speed;
        rebel_method_bind* mb_set_tonemap_exposure;
        rebel_method_bind* mb_set_tonemap_white;
        rebel_method_bind* mb_set_tonemapper;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ENVIRONMENT_H
