// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PROCEDURALSKY_H
#define REBEL_PROCEDURALSKY_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/sky.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Image;

class ProceduralSky : public Sky {
public:
    enum TextureSize {
        TEXTURE_SIZE_256 = 0,
        TEXTURE_SIZE_512 = 1,
        TEXTURE_SIZE_1024 = 2,
        TEXTURE_SIZE_2048 = 3,
        TEXTURE_SIZE_4096 = 4,
        TEXTURE_SIZE_MAX = 5,
    };

    void _thread_done(const Ref<Image> image);
    void _update_sky();
    Color get_ground_bottom_color() const;
    real_t get_ground_curve() const;
    real_t get_ground_energy() const;
    Color get_ground_horizon_color() const;
    real_t get_sky_curve() const;
    real_t get_sky_energy() const;
    Color get_sky_horizon_color() const;
    Color get_sky_top_color() const;
    real_t get_sun_angle_max() const;
    real_t get_sun_angle_min() const;
    Color get_sun_color() const;
    real_t get_sun_curve() const;
    real_t get_sun_energy() const;
    real_t get_sun_latitude() const;
    real_t get_sun_longitude() const;
    ProceduralSky::TextureSize get_texture_size() const;
    void set_ground_bottom_color(const Color color);
    void set_ground_curve(const real_t curve);
    void set_ground_energy(const real_t energy);
    void set_ground_horizon_color(const Color color);
    void set_sky_curve(const real_t curve);
    void set_sky_energy(const real_t energy);
    void set_sky_horizon_color(const Color color);
    void set_sky_top_color(const Color color);
    void set_sun_angle_max(const real_t degrees);
    void set_sun_angle_min(const real_t degrees);
    void set_sun_color(const Color color);
    void set_sun_curve(const real_t curve);
    void set_sun_energy(const real_t energy);
    void set_sun_latitude(const real_t degrees);
    void set_sun_longitude(const real_t degrees);
    void set_texture_size(const int64_t size);

    static ProceduralSky* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ProceduralSky";
    }

    inline static const char* get_rebel_class_name() {
        return "ProceduralSky";
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
        rebel_method_bind* mb__thread_done;
        rebel_method_bind* mb__update_sky;
        rebel_method_bind* mb_get_ground_bottom_color;
        rebel_method_bind* mb_get_ground_curve;
        rebel_method_bind* mb_get_ground_energy;
        rebel_method_bind* mb_get_ground_horizon_color;
        rebel_method_bind* mb_get_sky_curve;
        rebel_method_bind* mb_get_sky_energy;
        rebel_method_bind* mb_get_sky_horizon_color;
        rebel_method_bind* mb_get_sky_top_color;
        rebel_method_bind* mb_get_sun_angle_max;
        rebel_method_bind* mb_get_sun_angle_min;
        rebel_method_bind* mb_get_sun_color;
        rebel_method_bind* mb_get_sun_curve;
        rebel_method_bind* mb_get_sun_energy;
        rebel_method_bind* mb_get_sun_latitude;
        rebel_method_bind* mb_get_sun_longitude;
        rebel_method_bind* mb_get_texture_size;
        rebel_method_bind* mb_set_ground_bottom_color;
        rebel_method_bind* mb_set_ground_curve;
        rebel_method_bind* mb_set_ground_energy;
        rebel_method_bind* mb_set_ground_horizon_color;
        rebel_method_bind* mb_set_sky_curve;
        rebel_method_bind* mb_set_sky_energy;
        rebel_method_bind* mb_set_sky_horizon_color;
        rebel_method_bind* mb_set_sky_top_color;
        rebel_method_bind* mb_set_sun_angle_max;
        rebel_method_bind* mb_set_sun_angle_min;
        rebel_method_bind* mb_set_sun_color;
        rebel_method_bind* mb_set_sun_curve;
        rebel_method_bind* mb_set_sun_energy;
        rebel_method_bind* mb_set_sun_latitude;
        rebel_method_bind* mb_set_sun_longitude;
        rebel_method_bind* mb_set_texture_size;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PROCEDURALSKY_H
