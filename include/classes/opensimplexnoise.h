// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_OPENSIMPLEXNOISE_H
#define REBEL_OPENSIMPLEXNOISE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Image;

class OpenSimplexNoise : public Resource {
public:
    Ref<Image> get_image(const int64_t width, const int64_t height, const Vector2 noise_offset = Vector2(0, 0)) const;
    real_t get_lacunarity() const;
    real_t get_noise_1d(const real_t x) const;
    real_t get_noise_2d(const real_t x, const real_t y) const;
    real_t get_noise_2dv(const Vector2 pos) const;
    real_t get_noise_3d(const real_t x, const real_t y, const real_t z) const;
    real_t get_noise_3dv(const Vector3 pos) const;
    real_t get_noise_4d(const real_t x, const real_t y, const real_t z, const real_t w) const;
    int64_t get_octaves() const;
    real_t get_period() const;
    real_t get_persistence() const;
    Ref<Image> get_seamless_image(const int64_t size) const;
    int64_t get_seed() const;
    void set_lacunarity(const real_t lacunarity);
    void set_octaves(const int64_t octave_count);
    void set_period(const real_t period);
    void set_persistence(const real_t persistence);
    void set_seed(const int64_t seed);

    static OpenSimplexNoise* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "OpenSimplexNoise";
    }

    inline static const char* get_rebel_class_name() {
        return "OpenSimplexNoise";
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
        rebel_method_bind* mb_get_image;
        rebel_method_bind* mb_get_lacunarity;
        rebel_method_bind* mb_get_noise_1d;
        rebel_method_bind* mb_get_noise_2d;
        rebel_method_bind* mb_get_noise_2dv;
        rebel_method_bind* mb_get_noise_3d;
        rebel_method_bind* mb_get_noise_3dv;
        rebel_method_bind* mb_get_noise_4d;
        rebel_method_bind* mb_get_octaves;
        rebel_method_bind* mb_get_period;
        rebel_method_bind* mb_get_persistence;
        rebel_method_bind* mb_get_seamless_image;
        rebel_method_bind* mb_get_seed;
        rebel_method_bind* mb_set_lacunarity;
        rebel_method_bind* mb_set_octaves;
        rebel_method_bind* mb_set_period;
        rebel_method_bind* mb_set_persistence;
        rebel_method_bind* mb_set_seed;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_OPENSIMPLEXNOISE_H
