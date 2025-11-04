// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ANIMATEDSPRITE3D_H
#define REBEL_ANIMATEDSPRITE3D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spritebase3d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class SpriteFrames;

class AnimatedSprite3D : public SpriteBase3D {
public:
    bool _is_playing() const;
    void _res_changed();
    void _set_playing(const bool playing);
    String get_animation() const;
    int64_t get_frame() const;
    Ref<SpriteFrames> get_sprite_frames() const;
    bool is_playing() const;
    void play(const String anim = "");
    void set_animation(const String animation);
    void set_frame(const int64_t frame);
    void set_sprite_frames(const Ref<SpriteFrames> sprite_frames);
    void stop();

    static AnimatedSprite3D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AnimatedSprite3D";
    }

    inline static const char* get_rebel_class_name() {
        return "AnimatedSprite3D";
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
        rebel_method_bind* mb__is_playing;
        rebel_method_bind* mb__res_changed;
        rebel_method_bind* mb__set_playing;
        rebel_method_bind* mb_get_animation;
        rebel_method_bind* mb_get_frame;
        rebel_method_bind* mb_get_sprite_frames;
        rebel_method_bind* mb_is_playing;
        rebel_method_bind* mb_play;
        rebel_method_bind* mb_set_animation;
        rebel_method_bind* mb_set_frame;
        rebel_method_bind* mb_set_sprite_frames;
        rebel_method_bind* mb_stop;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ANIMATEDSPRITE3D_H
