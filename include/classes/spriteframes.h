// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SPRITEFRAMES_H
#define REBEL_SPRITEFRAMES_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Texture;

class SpriteFrames : public Resource {
public:
    Array _get_animations() const;
    Array _get_frames() const;
    void _set_animations(const Array arg0);
    void _set_frames(const Array arg0);
    void add_animation(const String anim);
    void add_frame(const String anim, const Ref<Texture> frame, const int64_t at_position = -1);
    void clear(const String anim);
    void clear_all();
    bool get_animation_loop(const String anim) const;
    PoolStringArray get_animation_names() const;
    real_t get_animation_speed(const String anim) const;
    Ref<Texture> get_frame(const String anim, const int64_t idx) const;
    int64_t get_frame_count(const String anim) const;
    bool has_animation(const String anim) const;
    void remove_animation(const String anim);
    void remove_frame(const String anim, const int64_t idx);
    void rename_animation(const String anim, const String newname);
    void set_animation_loop(const String anim, const bool loop);
    void set_animation_speed(const String anim, const real_t speed);
    void set_frame(const String anim, const int64_t idx, const Ref<Texture> txt);

    static SpriteFrames* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "SpriteFrames";
    }

    inline static const char* get_rebel_class_name() {
        return "SpriteFrames";
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
        rebel_method_bind* mb__get_animations;
        rebel_method_bind* mb__get_frames;
        rebel_method_bind* mb__set_animations;
        rebel_method_bind* mb__set_frames;
        rebel_method_bind* mb_add_animation;
        rebel_method_bind* mb_add_frame;
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_clear_all;
        rebel_method_bind* mb_get_animation_loop;
        rebel_method_bind* mb_get_animation_names;
        rebel_method_bind* mb_get_animation_speed;
        rebel_method_bind* mb_get_frame;
        rebel_method_bind* mb_get_frame_count;
        rebel_method_bind* mb_has_animation;
        rebel_method_bind* mb_remove_animation;
        rebel_method_bind* mb_remove_frame;
        rebel_method_bind* mb_rename_animation;
        rebel_method_bind* mb_set_animation_loop;
        rebel_method_bind* mb_set_animation_speed;
        rebel_method_bind* mb_set_frame;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SPRITEFRAMES_H
