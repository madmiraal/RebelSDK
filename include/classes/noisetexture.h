// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_NOISETEXTURE_H
#define REBEL_NOISETEXTURE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/texture.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Image;
class OpenSimplexNoise;

class NoiseTexture : public Texture {
public:
    Ref<Image> _generate_texture();
    void _queue_update();
    void _thread_done(const Ref<Image> image);
    void _update_texture();
    real_t get_bump_strength();
    Ref<OpenSimplexNoise> get_noise();
    Vector2 get_noise_offset() const;
    bool get_seamless();
    bool is_normalmap();
    void set_as_normalmap(const bool as_normalmap);
    void set_bump_strength(const real_t bump_strength);
    void set_height(const int64_t height);
    void set_noise(const Ref<OpenSimplexNoise> noise);
    void set_noise_offset(const Vector2 noise_offset);
    void set_seamless(const bool seamless);
    void set_width(const int64_t width);

    static NoiseTexture* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "NoiseTexture";
    }

    inline static const char* get_rebel_class_name() {
        return "NoiseTexture";
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
        rebel_method_bind* mb__generate_texture;
        rebel_method_bind* mb__queue_update;
        rebel_method_bind* mb__thread_done;
        rebel_method_bind* mb__update_texture;
        rebel_method_bind* mb_get_bump_strength;
        rebel_method_bind* mb_get_noise;
        rebel_method_bind* mb_get_noise_offset;
        rebel_method_bind* mb_get_seamless;
        rebel_method_bind* mb_is_normalmap;
        rebel_method_bind* mb_set_as_normalmap;
        rebel_method_bind* mb_set_bump_strength;
        rebel_method_bind* mb_set_height;
        rebel_method_bind* mb_set_noise;
        rebel_method_bind* mb_set_noise_offset;
        rebel_method_bind* mb_set_seamless;
        rebel_method_bind* mb_set_width;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_NOISETEXTURE_H
