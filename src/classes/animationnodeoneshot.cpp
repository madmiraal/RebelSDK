// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animationnodeoneshot.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t AnimationNodeOneShot::get_autorestart_delay() const {
    return rebel_icall_float(
        method_bindings.mb_get_autorestart_delay,
        (const Object*)this
    );
}

real_t AnimationNodeOneShot::get_autorestart_random_delay() const {
    return rebel_icall_float(
        method_bindings.mb_get_autorestart_random_delay,
        (const Object*)this
    );
}

real_t AnimationNodeOneShot::get_fadein_time() const {
    return rebel_icall_float(
        method_bindings.mb_get_fadein_time,
        (const Object*)this
    );
}

real_t AnimationNodeOneShot::get_fadeout_time() const {
    return rebel_icall_float(
        method_bindings.mb_get_fadeout_time,
        (const Object*)this
    );
}

AnimationNodeOneShot::MixMode AnimationNodeOneShot::get_mix_mode() const {
    return (AnimationNodeOneShot::MixMode)rebel_icall_int(
        method_bindings.mb_get_mix_mode,
        (const Object*)this
    );
}

bool AnimationNodeOneShot::has_autorestart() const {
    return rebel_icall_bool(
        method_bindings.mb_has_autorestart,
        (const Object*)this
    );
}

bool AnimationNodeOneShot::is_using_sync() const {
    return rebel_icall_bool(
        method_bindings.mb_is_using_sync,
        (const Object*)this
    );
}

void AnimationNodeOneShot::set_autorestart(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_autorestart,
        (const Object*)this,
        enable
    );
}

void AnimationNodeOneShot::set_autorestart_delay(const real_t enable) {
    rebel_icall_void_float(
        method_bindings.mb_set_autorestart_delay,
        (const Object*)this,
        enable
    );
}

void AnimationNodeOneShot::set_autorestart_random_delay(const real_t enable) {
    rebel_icall_void_float(
        method_bindings.mb_set_autorestart_random_delay,
        (const Object*)this,
        enable
    );
}

void AnimationNodeOneShot::set_fadein_time(const real_t time) {
    rebel_icall_void_float(
        method_bindings.mb_set_fadein_time,
        (const Object*)this,
        time
    );
}

void AnimationNodeOneShot::set_fadeout_time(const real_t time) {
    rebel_icall_void_float(
        method_bindings.mb_set_fadeout_time,
        (const Object*)this,
        time
    );
}

void AnimationNodeOneShot::set_mix_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_mix_mode,
        (const Object*)this,
        mode
    );
}

void AnimationNodeOneShot::set_use_sync(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_sync,
        (const Object*)this,
        enable
    );
}

AnimationNodeOneShot* AnimationNodeOneShot::create() {
    return (AnimationNodeOneShot*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AnimationNodeOneShot")()
         );
}

void AnimationNodeOneShot::init_method_bindings() {
    method_bindings.mb_get_autorestart_delay =
        api->rebel_method_bind_get_method(
            "AnimationNodeOneShot",
            "get_autorestart_delay"
        );
    method_bindings.mb_get_autorestart_random_delay =
        api->rebel_method_bind_get_method(
            "AnimationNodeOneShot",
            "get_autorestart_random_delay"
        );
    method_bindings.mb_get_fadein_time =
        api->rebel_method_bind_get_method(
            "AnimationNodeOneShot",
            "get_fadein_time"
        );
    method_bindings.mb_get_fadeout_time =
        api->rebel_method_bind_get_method(
            "AnimationNodeOneShot",
            "get_fadeout_time"
        );
    method_bindings.mb_get_mix_mode =
        api->rebel_method_bind_get_method(
            "AnimationNodeOneShot",
            "get_mix_mode"
        );
    method_bindings.mb_has_autorestart =
        api->rebel_method_bind_get_method(
            "AnimationNodeOneShot",
            "has_autorestart"
        );
    method_bindings.mb_is_using_sync =
        api->rebel_method_bind_get_method(
            "AnimationNodeOneShot",
            "is_using_sync"
        );
    method_bindings.mb_set_autorestart =
        api->rebel_method_bind_get_method(
            "AnimationNodeOneShot",
            "set_autorestart"
        );
    method_bindings.mb_set_autorestart_delay =
        api->rebel_method_bind_get_method(
            "AnimationNodeOneShot",
            "set_autorestart_delay"
        );
    method_bindings.mb_set_autorestart_random_delay =
        api->rebel_method_bind_get_method(
            "AnimationNodeOneShot",
            "set_autorestart_random_delay"
        );
    method_bindings.mb_set_fadein_time =
        api->rebel_method_bind_get_method(
            "AnimationNodeOneShot",
            "set_fadein_time"
        );
    method_bindings.mb_set_fadeout_time =
        api->rebel_method_bind_get_method(
            "AnimationNodeOneShot",
            "set_fadeout_time"
        );
    method_bindings.mb_set_mix_mode =
        api->rebel_method_bind_get_method(
            "AnimationNodeOneShot",
            "set_mix_mode"
        );
    method_bindings.mb_set_use_sync =
        api->rebel_method_bind_get_method(
            "AnimationNodeOneShot",
            "set_use_sync"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AnimationNodeOneShot");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AnimationNodeOneShot::MethodBindings AnimationNodeOneShot::method_bindings = {};
void* AnimationNodeOneShot::class_tag = nullptr;
} // namespace Rebel
