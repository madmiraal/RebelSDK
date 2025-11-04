// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animatedsprite3d.h"

#include "classes/icalls.h"
#include "classes/spriteframes.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool AnimatedSprite3D::_is_playing() const {
    return rebel_icall_bool(
        method_bindings.mb__is_playing,
        (const Object*)this
    );
}

void AnimatedSprite3D::_res_changed() {
    rebel_icall_void(
        method_bindings.mb__res_changed,
        (const Object*)this
    );
}

void AnimatedSprite3D::_set_playing(const bool playing) {
    rebel_icall_void_bool(
        method_bindings.mb__set_playing,
        (const Object*)this,
        playing
    );
}

String AnimatedSprite3D::get_animation() const {
    return rebel_icall_string(
        method_bindings.mb_get_animation,
        (const Object*)this
    );
}

int64_t AnimatedSprite3D::get_frame() const {
    return rebel_icall_int(
        method_bindings.mb_get_frame,
        (const Object*)this
    );
}

Ref<SpriteFrames> AnimatedSprite3D::get_sprite_frames() const {
    return Ref<SpriteFrames>::create_ref(rebel_icall_object(
        method_bindings.mb_get_sprite_frames,
        (const Object*)this
    ));
}

bool AnimatedSprite3D::is_playing() const {
    return rebel_icall_bool(
        method_bindings.mb_is_playing,
        (const Object*)this
    );
}

void AnimatedSprite3D::play(const String anim) {
    rebel_icall_void_string(
        method_bindings.mb_play,
        (const Object*)this,
        anim
    );
}

void AnimatedSprite3D::set_animation(const String animation) {
    rebel_icall_void_string(
        method_bindings.mb_set_animation,
        (const Object*)this,
        animation
    );
}

void AnimatedSprite3D::set_frame(const int64_t frame) {
    rebel_icall_void_int(
        method_bindings.mb_set_frame,
        (const Object*)this,
        frame
    );
}

void AnimatedSprite3D::set_sprite_frames(const Ref<SpriteFrames> sprite_frames) {
    rebel_icall_void_object(
        method_bindings.mb_set_sprite_frames,
        (const Object*)this,
        sprite_frames.ptr()
    );
}

void AnimatedSprite3D::stop() {
    rebel_icall_void(
        method_bindings.mb_stop,
        (const Object*)this
    );
}

AnimatedSprite3D* AnimatedSprite3D::create() {
    return (AnimatedSprite3D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AnimatedSprite3D")()
         );
}

void AnimatedSprite3D::init_method_bindings() {
    method_bindings.mb__is_playing =
        api->rebel_method_bind_get_method(
            "AnimatedSprite3D",
            "_is_playing"
        );
    method_bindings.mb__res_changed =
        api->rebel_method_bind_get_method(
            "AnimatedSprite3D",
            "_res_changed"
        );
    method_bindings.mb__set_playing =
        api->rebel_method_bind_get_method(
            "AnimatedSprite3D",
            "_set_playing"
        );
    method_bindings.mb_get_animation =
        api->rebel_method_bind_get_method(
            "AnimatedSprite3D",
            "get_animation"
        );
    method_bindings.mb_get_frame =
        api->rebel_method_bind_get_method(
            "AnimatedSprite3D",
            "get_frame"
        );
    method_bindings.mb_get_sprite_frames =
        api->rebel_method_bind_get_method(
            "AnimatedSprite3D",
            "get_sprite_frames"
        );
    method_bindings.mb_is_playing =
        api->rebel_method_bind_get_method(
            "AnimatedSprite3D",
            "is_playing"
        );
    method_bindings.mb_play =
        api->rebel_method_bind_get_method(
            "AnimatedSprite3D",
            "play"
        );
    method_bindings.mb_set_animation =
        api->rebel_method_bind_get_method(
            "AnimatedSprite3D",
            "set_animation"
        );
    method_bindings.mb_set_frame =
        api->rebel_method_bind_get_method(
            "AnimatedSprite3D",
            "set_frame"
        );
    method_bindings.mb_set_sprite_frames =
        api->rebel_method_bind_get_method(
            "AnimatedSprite3D",
            "set_sprite_frames"
        );
    method_bindings.mb_stop =
        api->rebel_method_bind_get_method(
            "AnimatedSprite3D",
            "stop"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AnimatedSprite3D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AnimatedSprite3D::MethodBindings AnimatedSprite3D::method_bindings = {};
void* AnimatedSprite3D::class_tag = nullptr;
} // namespace Rebel
