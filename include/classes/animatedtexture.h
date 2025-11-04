// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ANIMATEDTEXTURE_H
#define REBEL_ANIMATEDTEXTURE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/texture.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AnimatedTexture : public Texture {
public:
    static const int MAX_FRAMES = 256;

    void _update_proxy();
    int64_t get_current_frame() const;
    real_t get_fps() const;
    real_t get_frame_delay(const int64_t frame) const;
    Ref<Texture> get_frame_texture(const int64_t frame) const;
    int64_t get_frames() const;
    bool get_oneshot() const;
    bool get_pause() const;
    void set_current_frame(const int64_t frame);
    void set_fps(const real_t fps);
    void set_frame_delay(const int64_t frame, const real_t delay);
    void set_frame_texture(const int64_t frame, const Ref<Texture> texture);
    void set_frames(const int64_t frames);
    void set_oneshot(const bool oneshot);
    void set_pause(const bool pause);

    static AnimatedTexture* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AnimatedTexture";
    }

    inline static const char* get_rebel_class_name() {
        return "AnimatedTexture";
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
        rebel_method_bind* mb__update_proxy;
        rebel_method_bind* mb_get_current_frame;
        rebel_method_bind* mb_get_fps;
        rebel_method_bind* mb_get_frame_delay;
        rebel_method_bind* mb_get_frame_texture;
        rebel_method_bind* mb_get_frames;
        rebel_method_bind* mb_get_oneshot;
        rebel_method_bind* mb_get_pause;
        rebel_method_bind* mb_set_current_frame;
        rebel_method_bind* mb_set_fps;
        rebel_method_bind* mb_set_frame_delay;
        rebel_method_bind* mb_set_frame_texture;
        rebel_method_bind* mb_set_frames;
        rebel_method_bind* mb_set_oneshot;
        rebel_method_bind* mb_set_pause;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ANIMATEDTEXTURE_H
