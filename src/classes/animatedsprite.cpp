// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animatedsprite.h"

#include "classes/icalls.h"
#include "classes/spriteframes.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool AnimatedSprite::_is_playing() const {
    return rebel_icall_bool(
        method_bindings.mb__is_playing,
        (const Object*)this
    );
}

void AnimatedSprite::_res_changed() {
    rebel_icall_void(
        method_bindings.mb__res_changed,
        (const Object*)this
    );
}

void AnimatedSprite::_set_playing(const bool playing) {
    rebel_icall_void_bool(
        method_bindings.mb__set_playing,
        (const Object*)this,
        playing
    );
}

String AnimatedSprite::get_animation() const {
    return rebel_icall_string(
        method_bindings.mb_get_animation,
        (const Object*)this
    );
}

int64_t AnimatedSprite::get_frame() const {
    return rebel_icall_int(
        method_bindings.mb_get_frame,
        (const Object*)this
    );
}

Vector2 AnimatedSprite::get_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_offset,
        (const Object*)this
    );
}

real_t AnimatedSprite::get_speed_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_speed_scale,
        (const Object*)this
    );
}

Ref<SpriteFrames> AnimatedSprite::get_sprite_frames() const {
    return Ref<SpriteFrames>::create_ref(rebel_icall_object(
        method_bindings.mb_get_sprite_frames,
        (const Object*)this
    ));
}

bool AnimatedSprite::is_centered() const {
    return rebel_icall_bool(
        method_bindings.mb_is_centered,
        (const Object*)this
    );
}

bool AnimatedSprite::is_flipped_h() const {
    return rebel_icall_bool(
        method_bindings.mb_is_flipped_h,
        (const Object*)this
    );
}

bool AnimatedSprite::is_flipped_v() const {
    return rebel_icall_bool(
        method_bindings.mb_is_flipped_v,
        (const Object*)this
    );
}

bool AnimatedSprite::is_playing() const {
    return rebel_icall_bool(
        method_bindings.mb_is_playing,
        (const Object*)this
    );
}

void AnimatedSprite::play(const String anim, const bool backwards) {
    rebel_icall_void_string_bool(
        method_bindings.mb_play,
        (const Object*)this,
        anim,
        backwards
    );
}

void AnimatedSprite::set_animation(const String animation) {
    rebel_icall_void_string(
        method_bindings.mb_set_animation,
        (const Object*)this,
        animation
    );
}

void AnimatedSprite::set_centered(const bool centered) {
    rebel_icall_void_bool(
        method_bindings.mb_set_centered,
        (const Object*)this,
        centered
    );
}

void AnimatedSprite::set_flip_h(const bool flip_h) {
    rebel_icall_void_bool(
        method_bindings.mb_set_flip_h,
        (const Object*)this,
        flip_h
    );
}

void AnimatedSprite::set_flip_v(const bool flip_v) {
    rebel_icall_void_bool(
        method_bindings.mb_set_flip_v,
        (const Object*)this,
        flip_v
    );
}

void AnimatedSprite::set_frame(const int64_t frame) {
    rebel_icall_void_int(
        method_bindings.mb_set_frame,
        (const Object*)this,
        frame
    );
}

void AnimatedSprite::set_offset(const Vector2 offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_offset,
        (const Object*)this,
        offset
    );
}

void AnimatedSprite::set_speed_scale(const real_t speed_scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_speed_scale,
        (const Object*)this,
        speed_scale
    );
}

void AnimatedSprite::set_sprite_frames(const Ref<SpriteFrames> sprite_frames) {
    rebel_icall_void_object(
        method_bindings.mb_set_sprite_frames,
        (const Object*)this,
        sprite_frames.ptr()
    );
}

void AnimatedSprite::stop() {
    rebel_icall_void(
        method_bindings.mb_stop,
        (const Object*)this
    );
}

AnimatedSprite* AnimatedSprite::create() {
    return (AnimatedSprite*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AnimatedSprite")()
         );
}

void AnimatedSprite::init_method_bindings() {
    method_bindings.mb__is_playing =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "_is_playing"
        );
    method_bindings.mb__res_changed =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "_res_changed"
        );
    method_bindings.mb__set_playing =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "_set_playing"
        );
    method_bindings.mb_get_animation =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "get_animation"
        );
    method_bindings.mb_get_frame =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "get_frame"
        );
    method_bindings.mb_get_offset =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "get_offset"
        );
    method_bindings.mb_get_speed_scale =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "get_speed_scale"
        );
    method_bindings.mb_get_sprite_frames =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "get_sprite_frames"
        );
    method_bindings.mb_is_centered =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "is_centered"
        );
    method_bindings.mb_is_flipped_h =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "is_flipped_h"
        );
    method_bindings.mb_is_flipped_v =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "is_flipped_v"
        );
    method_bindings.mb_is_playing =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "is_playing"
        );
    method_bindings.mb_play =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "play"
        );
    method_bindings.mb_set_animation =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "set_animation"
        );
    method_bindings.mb_set_centered =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "set_centered"
        );
    method_bindings.mb_set_flip_h =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "set_flip_h"
        );
    method_bindings.mb_set_flip_v =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "set_flip_v"
        );
    method_bindings.mb_set_frame =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "set_frame"
        );
    method_bindings.mb_set_offset =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "set_offset"
        );
    method_bindings.mb_set_speed_scale =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "set_speed_scale"
        );
    method_bindings.mb_set_sprite_frames =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "set_sprite_frames"
        );
    method_bindings.mb_stop =
        api->rebel_method_bind_get_method(
            "AnimatedSprite",
            "stop"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AnimatedSprite");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AnimatedSprite::MethodBindings AnimatedSprite::method_bindings = {};
void* AnimatedSprite::class_tag = nullptr;
} // namespace Rebel
