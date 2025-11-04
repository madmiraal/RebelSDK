// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffectdistortion.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t AudioEffectDistortion::get_drive() const {
    return rebel_icall_float(
        method_bindings.mb_get_drive,
        (const Object*)this
    );
}

real_t AudioEffectDistortion::get_keep_hf_hz() const {
    return rebel_icall_float(
        method_bindings.mb_get_keep_hf_hz,
        (const Object*)this
    );
}

AudioEffectDistortion::Mode AudioEffectDistortion::get_mode() const {
    return (AudioEffectDistortion::Mode)rebel_icall_int(
        method_bindings.mb_get_mode,
        (const Object*)this
    );
}

real_t AudioEffectDistortion::get_post_gain() const {
    return rebel_icall_float(
        method_bindings.mb_get_post_gain,
        (const Object*)this
    );
}

real_t AudioEffectDistortion::get_pre_gain() const {
    return rebel_icall_float(
        method_bindings.mb_get_pre_gain,
        (const Object*)this
    );
}

void AudioEffectDistortion::set_drive(const real_t drive) {
    rebel_icall_void_float(
        method_bindings.mb_set_drive,
        (const Object*)this,
        drive
    );
}

void AudioEffectDistortion::set_keep_hf_hz(const real_t keep_hf_hz) {
    rebel_icall_void_float(
        method_bindings.mb_set_keep_hf_hz,
        (const Object*)this,
        keep_hf_hz
    );
}

void AudioEffectDistortion::set_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_mode,
        (const Object*)this,
        mode
    );
}

void AudioEffectDistortion::set_post_gain(const real_t post_gain) {
    rebel_icall_void_float(
        method_bindings.mb_set_post_gain,
        (const Object*)this,
        post_gain
    );
}

void AudioEffectDistortion::set_pre_gain(const real_t pre_gain) {
    rebel_icall_void_float(
        method_bindings.mb_set_pre_gain,
        (const Object*)this,
        pre_gain
    );
}

AudioEffectDistortion* AudioEffectDistortion::create() {
    return (AudioEffectDistortion*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioEffectDistortion")()
         );
}

void AudioEffectDistortion::init_method_bindings() {
    method_bindings.mb_get_drive =
        api->rebel_method_bind_get_method(
            "AudioEffectDistortion",
            "get_drive"
        );
    method_bindings.mb_get_keep_hf_hz =
        api->rebel_method_bind_get_method(
            "AudioEffectDistortion",
            "get_keep_hf_hz"
        );
    method_bindings.mb_get_mode =
        api->rebel_method_bind_get_method(
            "AudioEffectDistortion",
            "get_mode"
        );
    method_bindings.mb_get_post_gain =
        api->rebel_method_bind_get_method(
            "AudioEffectDistortion",
            "get_post_gain"
        );
    method_bindings.mb_get_pre_gain =
        api->rebel_method_bind_get_method(
            "AudioEffectDistortion",
            "get_pre_gain"
        );
    method_bindings.mb_set_drive =
        api->rebel_method_bind_get_method(
            "AudioEffectDistortion",
            "set_drive"
        );
    method_bindings.mb_set_keep_hf_hz =
        api->rebel_method_bind_get_method(
            "AudioEffectDistortion",
            "set_keep_hf_hz"
        );
    method_bindings.mb_set_mode =
        api->rebel_method_bind_get_method(
            "AudioEffectDistortion",
            "set_mode"
        );
    method_bindings.mb_set_post_gain =
        api->rebel_method_bind_get_method(
            "AudioEffectDistortion",
            "set_post_gain"
        );
    method_bindings.mb_set_pre_gain =
        api->rebel_method_bind_get_method(
            "AudioEffectDistortion",
            "set_pre_gain"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectDistortion");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectDistortion::MethodBindings AudioEffectDistortion::method_bindings = {};
void* AudioEffectDistortion::class_tag = nullptr;
} // namespace Rebel
