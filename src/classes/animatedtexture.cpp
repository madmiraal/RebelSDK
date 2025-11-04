// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animatedtexture.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void AnimatedTexture::_update_proxy() {
    rebel_icall_void(
        method_bindings.mb__update_proxy,
        (const Object*)this
    );
}

int64_t AnimatedTexture::get_current_frame() const {
    return rebel_icall_int(
        method_bindings.mb_get_current_frame,
        (const Object*)this
    );
}

real_t AnimatedTexture::get_fps() const {
    return rebel_icall_float(
        method_bindings.mb_get_fps,
        (const Object*)this
    );
}

real_t AnimatedTexture::get_frame_delay(const int64_t frame) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_frame_delay,
        (const Object*)this,
        frame
    );
}

Ref<Texture> AnimatedTexture::get_frame_texture(const int64_t frame) const {
    return Ref<Texture>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_frame_texture,
        (const Object*)this,
        frame
    ));
}

int64_t AnimatedTexture::get_frames() const {
    return rebel_icall_int(
        method_bindings.mb_get_frames,
        (const Object*)this
    );
}

bool AnimatedTexture::get_oneshot() const {
    return rebel_icall_bool(
        method_bindings.mb_get_oneshot,
        (const Object*)this
    );
}

bool AnimatedTexture::get_pause() const {
    return rebel_icall_bool(
        method_bindings.mb_get_pause,
        (const Object*)this
    );
}

void AnimatedTexture::set_current_frame(const int64_t frame) {
    rebel_icall_void_int(
        method_bindings.mb_set_current_frame,
        (const Object*)this,
        frame
    );
}

void AnimatedTexture::set_fps(const real_t fps) {
    rebel_icall_void_float(
        method_bindings.mb_set_fps,
        (const Object*)this,
        fps
    );
}

void AnimatedTexture::set_frame_delay(const int64_t frame, const real_t delay) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_frame_delay,
        (const Object*)this,
        frame,
        delay
    );
}

void AnimatedTexture::set_frame_texture(const int64_t frame, const Ref<Texture> texture) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_frame_texture,
        (const Object*)this,
        frame,
        texture.ptr()
    );
}

void AnimatedTexture::set_frames(const int64_t frames) {
    rebel_icall_void_int(
        method_bindings.mb_set_frames,
        (const Object*)this,
        frames
    );
}

void AnimatedTexture::set_oneshot(const bool oneshot) {
    rebel_icall_void_bool(
        method_bindings.mb_set_oneshot,
        (const Object*)this,
        oneshot
    );
}

void AnimatedTexture::set_pause(const bool pause) {
    rebel_icall_void_bool(
        method_bindings.mb_set_pause,
        (const Object*)this,
        pause
    );
}

AnimatedTexture* AnimatedTexture::create() {
    return (AnimatedTexture*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AnimatedTexture")()
         );
}

void AnimatedTexture::init_method_bindings() {
    method_bindings.mb__update_proxy =
        api->rebel_method_bind_get_method(
            "AnimatedTexture",
            "_update_proxy"
        );
    method_bindings.mb_get_current_frame =
        api->rebel_method_bind_get_method(
            "AnimatedTexture",
            "get_current_frame"
        );
    method_bindings.mb_get_fps =
        api->rebel_method_bind_get_method(
            "AnimatedTexture",
            "get_fps"
        );
    method_bindings.mb_get_frame_delay =
        api->rebel_method_bind_get_method(
            "AnimatedTexture",
            "get_frame_delay"
        );
    method_bindings.mb_get_frame_texture =
        api->rebel_method_bind_get_method(
            "AnimatedTexture",
            "get_frame_texture"
        );
    method_bindings.mb_get_frames =
        api->rebel_method_bind_get_method(
            "AnimatedTexture",
            "get_frames"
        );
    method_bindings.mb_get_oneshot =
        api->rebel_method_bind_get_method(
            "AnimatedTexture",
            "get_oneshot"
        );
    method_bindings.mb_get_pause =
        api->rebel_method_bind_get_method(
            "AnimatedTexture",
            "get_pause"
        );
    method_bindings.mb_set_current_frame =
        api->rebel_method_bind_get_method(
            "AnimatedTexture",
            "set_current_frame"
        );
    method_bindings.mb_set_fps =
        api->rebel_method_bind_get_method(
            "AnimatedTexture",
            "set_fps"
        );
    method_bindings.mb_set_frame_delay =
        api->rebel_method_bind_get_method(
            "AnimatedTexture",
            "set_frame_delay"
        );
    method_bindings.mb_set_frame_texture =
        api->rebel_method_bind_get_method(
            "AnimatedTexture",
            "set_frame_texture"
        );
    method_bindings.mb_set_frames =
        api->rebel_method_bind_get_method(
            "AnimatedTexture",
            "set_frames"
        );
    method_bindings.mb_set_oneshot =
        api->rebel_method_bind_get_method(
            "AnimatedTexture",
            "set_oneshot"
        );
    method_bindings.mb_set_pause =
        api->rebel_method_bind_get_method(
            "AnimatedTexture",
            "set_pause"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AnimatedTexture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AnimatedTexture::MethodBindings AnimatedTexture::method_bindings = {};
void* AnimatedTexture::class_tag = nullptr;
} // namespace Rebel
