// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CANVASITEMMATERIAL_H
#define REBEL_CANVASITEMMATERIAL_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/material.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CanvasItemMaterial : public Material {
public:
    enum LightMode {
        LIGHT_MODE_NORMAL = 0,
        LIGHT_MODE_UNSHADED = 1,
        LIGHT_MODE_LIGHT_ONLY = 2,
    };

    enum BlendMode {
        BLEND_MODE_MIX = 0,
        BLEND_MODE_ADD = 1,
        BLEND_MODE_SUB = 2,
        BLEND_MODE_MUL = 3,
        BLEND_MODE_PREMULT_ALPHA = 4,
    };

    CanvasItemMaterial::BlendMode get_blend_mode() const;
    CanvasItemMaterial::LightMode get_light_mode() const;
    int64_t get_particles_anim_h_frames() const;
    bool get_particles_anim_loop() const;
    int64_t get_particles_anim_v_frames() const;
    bool get_particles_animation() const;
    void set_blend_mode(const int64_t blend_mode);
    void set_light_mode(const int64_t light_mode);
    void set_particles_anim_h_frames(const int64_t frames);
    void set_particles_anim_loop(const bool loop);
    void set_particles_anim_v_frames(const int64_t frames);
    void set_particles_animation(const bool particles_anim);

    static CanvasItemMaterial* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CanvasItemMaterial";
    }

    inline static const char* get_rebel_class_name() {
        return "CanvasItemMaterial";
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
        rebel_method_bind* mb_get_blend_mode;
        rebel_method_bind* mb_get_light_mode;
        rebel_method_bind* mb_get_particles_anim_h_frames;
        rebel_method_bind* mb_get_particles_anim_loop;
        rebel_method_bind* mb_get_particles_anim_v_frames;
        rebel_method_bind* mb_get_particles_animation;
        rebel_method_bind* mb_set_blend_mode;
        rebel_method_bind* mb_set_light_mode;
        rebel_method_bind* mb_set_particles_anim_h_frames;
        rebel_method_bind* mb_set_particles_anim_loop;
        rebel_method_bind* mb_set_particles_anim_v_frames;
        rebel_method_bind* mb_set_particles_animation;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CANVASITEMMATERIAL_H
