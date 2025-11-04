// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/spriteframes.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array SpriteFrames::_get_animations() const {
    return rebel_icall_array(
        method_bindings.mb__get_animations,
        (const Object*)this
    );
}

Array SpriteFrames::_get_frames() const {
    return rebel_icall_array(
        method_bindings.mb__get_frames,
        (const Object*)this
    );
}

void SpriteFrames::_set_animations(const Array arg0) {
    rebel_icall_void_array(
        method_bindings.mb__set_animations,
        (const Object*)this,
        arg0
    );
}

void SpriteFrames::_set_frames(const Array arg0) {
    rebel_icall_void_array(
        method_bindings.mb__set_frames,
        (const Object*)this,
        arg0
    );
}

void SpriteFrames::add_animation(const String anim) {
    rebel_icall_void_string(
        method_bindings.mb_add_animation,
        (const Object*)this,
        anim
    );
}

void SpriteFrames::add_frame(const String anim, const Ref<Texture> frame, const int64_t at_position) {
    rebel_icall_void_string_object_int(
        method_bindings.mb_add_frame,
        (const Object*)this,
        anim,
        frame.ptr(),
        at_position
    );
}

void SpriteFrames::clear(const String anim) {
    rebel_icall_void_string(
        method_bindings.mb_clear,
        (const Object*)this,
        anim
    );
}

void SpriteFrames::clear_all() {
    rebel_icall_void(
        method_bindings.mb_clear_all,
        (const Object*)this
    );
}

bool SpriteFrames::get_animation_loop(const String anim) const {
    return rebel_icall_bool_string(
        method_bindings.mb_get_animation_loop,
        (const Object*)this,
        anim
    );
}

PoolStringArray SpriteFrames::get_animation_names() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_animation_names,
        (const Object*)this
    );
}

real_t SpriteFrames::get_animation_speed(const String anim) const {
    return rebel_icall_float_string(
        method_bindings.mb_get_animation_speed,
        (const Object*)this,
        anim
    );
}

Ref<Texture> SpriteFrames::get_frame(const String anim, const int64_t idx) const {
    return Ref<Texture>::create_ref(rebel_icall_object_string_int(
        method_bindings.mb_get_frame,
        (const Object*)this,
        anim,
        idx
    ));
}

int64_t SpriteFrames::get_frame_count(const String anim) const {
    return rebel_icall_int_string(
        method_bindings.mb_get_frame_count,
        (const Object*)this,
        anim
    );
}

bool SpriteFrames::has_animation(const String anim) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_animation,
        (const Object*)this,
        anim
    );
}

void SpriteFrames::remove_animation(const String anim) {
    rebel_icall_void_string(
        method_bindings.mb_remove_animation,
        (const Object*)this,
        anim
    );
}

void SpriteFrames::remove_frame(const String anim, const int64_t idx) {
    rebel_icall_void_string_int(
        method_bindings.mb_remove_frame,
        (const Object*)this,
        anim,
        idx
    );
}

void SpriteFrames::rename_animation(const String anim, const String newname) {
    rebel_icall_void_string_string(
        method_bindings.mb_rename_animation,
        (const Object*)this,
        anim,
        newname
    );
}

void SpriteFrames::set_animation_loop(const String anim, const bool loop) {
    rebel_icall_void_string_bool(
        method_bindings.mb_set_animation_loop,
        (const Object*)this,
        anim,
        loop
    );
}

void SpriteFrames::set_animation_speed(const String anim, const real_t speed) {
    rebel_icall_void_string_float(
        method_bindings.mb_set_animation_speed,
        (const Object*)this,
        anim,
        speed
    );
}

void SpriteFrames::set_frame(const String anim, const int64_t idx, const Ref<Texture> txt) {
    rebel_icall_void_string_int_object(
        method_bindings.mb_set_frame,
        (const Object*)this,
        anim,
        idx,
        txt.ptr()
    );
}

SpriteFrames* SpriteFrames::create() {
    return (SpriteFrames*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"SpriteFrames")()
         );
}

void SpriteFrames::init_method_bindings() {
    method_bindings.mb__get_animations =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "_get_animations"
        );
    method_bindings.mb__get_frames =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "_get_frames"
        );
    method_bindings.mb__set_animations =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "_set_animations"
        );
    method_bindings.mb__set_frames =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "_set_frames"
        );
    method_bindings.mb_add_animation =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "add_animation"
        );
    method_bindings.mb_add_frame =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "add_frame"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "clear"
        );
    method_bindings.mb_clear_all =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "clear_all"
        );
    method_bindings.mb_get_animation_loop =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "get_animation_loop"
        );
    method_bindings.mb_get_animation_names =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "get_animation_names"
        );
    method_bindings.mb_get_animation_speed =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "get_animation_speed"
        );
    method_bindings.mb_get_frame =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "get_frame"
        );
    method_bindings.mb_get_frame_count =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "get_frame_count"
        );
    method_bindings.mb_has_animation =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "has_animation"
        );
    method_bindings.mb_remove_animation =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "remove_animation"
        );
    method_bindings.mb_remove_frame =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "remove_frame"
        );
    method_bindings.mb_rename_animation =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "rename_animation"
        );
    method_bindings.mb_set_animation_loop =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "set_animation_loop"
        );
    method_bindings.mb_set_animation_speed =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "set_animation_speed"
        );
    method_bindings.mb_set_frame =
        api->rebel_method_bind_get_method(
            "SpriteFrames",
            "set_frame"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "SpriteFrames");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

SpriteFrames::MethodBindings SpriteFrames::method_bindings = {};
void* SpriteFrames::class_tag = nullptr;
} // namespace Rebel
