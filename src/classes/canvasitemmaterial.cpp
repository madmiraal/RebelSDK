// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/canvasitemmaterial.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
CanvasItemMaterial::BlendMode CanvasItemMaterial::get_blend_mode() const {
    return (CanvasItemMaterial::BlendMode)rebel_icall_int(
        method_bindings.mb_get_blend_mode,
        (const Object*)this
    );
}

CanvasItemMaterial::LightMode CanvasItemMaterial::get_light_mode() const {
    return (CanvasItemMaterial::LightMode)rebel_icall_int(
        method_bindings.mb_get_light_mode,
        (const Object*)this
    );
}

int64_t CanvasItemMaterial::get_particles_anim_h_frames() const {
    return rebel_icall_int(
        method_bindings.mb_get_particles_anim_h_frames,
        (const Object*)this
    );
}

bool CanvasItemMaterial::get_particles_anim_loop() const {
    return rebel_icall_bool(
        method_bindings.mb_get_particles_anim_loop,
        (const Object*)this
    );
}

int64_t CanvasItemMaterial::get_particles_anim_v_frames() const {
    return rebel_icall_int(
        method_bindings.mb_get_particles_anim_v_frames,
        (const Object*)this
    );
}

bool CanvasItemMaterial::get_particles_animation() const {
    return rebel_icall_bool(
        method_bindings.mb_get_particles_animation,
        (const Object*)this
    );
}

void CanvasItemMaterial::set_blend_mode(const int64_t blend_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_blend_mode,
        (const Object*)this,
        blend_mode
    );
}

void CanvasItemMaterial::set_light_mode(const int64_t light_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_light_mode,
        (const Object*)this,
        light_mode
    );
}

void CanvasItemMaterial::set_particles_anim_h_frames(const int64_t frames) {
    rebel_icall_void_int(
        method_bindings.mb_set_particles_anim_h_frames,
        (const Object*)this,
        frames
    );
}

void CanvasItemMaterial::set_particles_anim_loop(const bool loop) {
    rebel_icall_void_bool(
        method_bindings.mb_set_particles_anim_loop,
        (const Object*)this,
        loop
    );
}

void CanvasItemMaterial::set_particles_anim_v_frames(const int64_t frames) {
    rebel_icall_void_int(
        method_bindings.mb_set_particles_anim_v_frames,
        (const Object*)this,
        frames
    );
}

void CanvasItemMaterial::set_particles_animation(const bool particles_anim) {
    rebel_icall_void_bool(
        method_bindings.mb_set_particles_animation,
        (const Object*)this,
        particles_anim
    );
}

CanvasItemMaterial* CanvasItemMaterial::create() {
    return (CanvasItemMaterial*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CanvasItemMaterial")()
         );
}

void CanvasItemMaterial::init_method_bindings() {
    method_bindings.mb_get_blend_mode =
        api->rebel_method_bind_get_method(
            "CanvasItemMaterial",
            "get_blend_mode"
        );
    method_bindings.mb_get_light_mode =
        api->rebel_method_bind_get_method(
            "CanvasItemMaterial",
            "get_light_mode"
        );
    method_bindings.mb_get_particles_anim_h_frames =
        api->rebel_method_bind_get_method(
            "CanvasItemMaterial",
            "get_particles_anim_h_frames"
        );
    method_bindings.mb_get_particles_anim_loop =
        api->rebel_method_bind_get_method(
            "CanvasItemMaterial",
            "get_particles_anim_loop"
        );
    method_bindings.mb_get_particles_anim_v_frames =
        api->rebel_method_bind_get_method(
            "CanvasItemMaterial",
            "get_particles_anim_v_frames"
        );
    method_bindings.mb_get_particles_animation =
        api->rebel_method_bind_get_method(
            "CanvasItemMaterial",
            "get_particles_animation"
        );
    method_bindings.mb_set_blend_mode =
        api->rebel_method_bind_get_method(
            "CanvasItemMaterial",
            "set_blend_mode"
        );
    method_bindings.mb_set_light_mode =
        api->rebel_method_bind_get_method(
            "CanvasItemMaterial",
            "set_light_mode"
        );
    method_bindings.mb_set_particles_anim_h_frames =
        api->rebel_method_bind_get_method(
            "CanvasItemMaterial",
            "set_particles_anim_h_frames"
        );
    method_bindings.mb_set_particles_anim_loop =
        api->rebel_method_bind_get_method(
            "CanvasItemMaterial",
            "set_particles_anim_loop"
        );
    method_bindings.mb_set_particles_anim_v_frames =
        api->rebel_method_bind_get_method(
            "CanvasItemMaterial",
            "set_particles_anim_v_frames"
        );
    method_bindings.mb_set_particles_animation =
        api->rebel_method_bind_get_method(
            "CanvasItemMaterial",
            "set_particles_animation"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CanvasItemMaterial");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CanvasItemMaterial::MethodBindings CanvasItemMaterial::method_bindings = {};
void* CanvasItemMaterial::class_tag = nullptr;
} // namespace Rebel
