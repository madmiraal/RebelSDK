// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffectchorus.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t AudioEffectChorus::get_dry() const {
    return rebel_icall_float(
        method_bindings.mb_get_dry,
        (const Object*)this
    );
}

int64_t AudioEffectChorus::get_voice_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_voice_count,
        (const Object*)this
    );
}

real_t AudioEffectChorus::get_voice_cutoff_hz(const int64_t voice_idx) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_voice_cutoff_hz,
        (const Object*)this,
        voice_idx
    );
}

real_t AudioEffectChorus::get_voice_delay_ms(const int64_t voice_idx) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_voice_delay_ms,
        (const Object*)this,
        voice_idx
    );
}

real_t AudioEffectChorus::get_voice_depth_ms(const int64_t voice_idx) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_voice_depth_ms,
        (const Object*)this,
        voice_idx
    );
}

real_t AudioEffectChorus::get_voice_level_db(const int64_t voice_idx) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_voice_level_db,
        (const Object*)this,
        voice_idx
    );
}

real_t AudioEffectChorus::get_voice_pan(const int64_t voice_idx) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_voice_pan,
        (const Object*)this,
        voice_idx
    );
}

real_t AudioEffectChorus::get_voice_rate_hz(const int64_t voice_idx) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_voice_rate_hz,
        (const Object*)this,
        voice_idx
    );
}

real_t AudioEffectChorus::get_wet() const {
    return rebel_icall_float(
        method_bindings.mb_get_wet,
        (const Object*)this
    );
}

void AudioEffectChorus::set_dry(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_dry,
        (const Object*)this,
        amount
    );
}

void AudioEffectChorus::set_voice_count(const int64_t voices) {
    rebel_icall_void_int(
        method_bindings.mb_set_voice_count,
        (const Object*)this,
        voices
    );
}

void AudioEffectChorus::set_voice_cutoff_hz(const int64_t voice_idx, const real_t cutoff_hz) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_voice_cutoff_hz,
        (const Object*)this,
        voice_idx,
        cutoff_hz
    );
}

void AudioEffectChorus::set_voice_delay_ms(const int64_t voice_idx, const real_t delay_ms) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_voice_delay_ms,
        (const Object*)this,
        voice_idx,
        delay_ms
    );
}

void AudioEffectChorus::set_voice_depth_ms(const int64_t voice_idx, const real_t depth_ms) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_voice_depth_ms,
        (const Object*)this,
        voice_idx,
        depth_ms
    );
}

void AudioEffectChorus::set_voice_level_db(const int64_t voice_idx, const real_t level_db) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_voice_level_db,
        (const Object*)this,
        voice_idx,
        level_db
    );
}

void AudioEffectChorus::set_voice_pan(const int64_t voice_idx, const real_t pan) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_voice_pan,
        (const Object*)this,
        voice_idx,
        pan
    );
}

void AudioEffectChorus::set_voice_rate_hz(const int64_t voice_idx, const real_t rate_hz) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_voice_rate_hz,
        (const Object*)this,
        voice_idx,
        rate_hz
    );
}

void AudioEffectChorus::set_wet(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_wet,
        (const Object*)this,
        amount
    );
}

AudioEffectChorus* AudioEffectChorus::create() {
    return (AudioEffectChorus*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioEffectChorus")()
         );
}

void AudioEffectChorus::init_method_bindings() {
    method_bindings.mb_get_dry =
        api->rebel_method_bind_get_method(
            "AudioEffectChorus",
            "get_dry"
        );
    method_bindings.mb_get_voice_count =
        api->rebel_method_bind_get_method(
            "AudioEffectChorus",
            "get_voice_count"
        );
    method_bindings.mb_get_voice_cutoff_hz =
        api->rebel_method_bind_get_method(
            "AudioEffectChorus",
            "get_voice_cutoff_hz"
        );
    method_bindings.mb_get_voice_delay_ms =
        api->rebel_method_bind_get_method(
            "AudioEffectChorus",
            "get_voice_delay_ms"
        );
    method_bindings.mb_get_voice_depth_ms =
        api->rebel_method_bind_get_method(
            "AudioEffectChorus",
            "get_voice_depth_ms"
        );
    method_bindings.mb_get_voice_level_db =
        api->rebel_method_bind_get_method(
            "AudioEffectChorus",
            "get_voice_level_db"
        );
    method_bindings.mb_get_voice_pan =
        api->rebel_method_bind_get_method(
            "AudioEffectChorus",
            "get_voice_pan"
        );
    method_bindings.mb_get_voice_rate_hz =
        api->rebel_method_bind_get_method(
            "AudioEffectChorus",
            "get_voice_rate_hz"
        );
    method_bindings.mb_get_wet =
        api->rebel_method_bind_get_method(
            "AudioEffectChorus",
            "get_wet"
        );
    method_bindings.mb_set_dry =
        api->rebel_method_bind_get_method(
            "AudioEffectChorus",
            "set_dry"
        );
    method_bindings.mb_set_voice_count =
        api->rebel_method_bind_get_method(
            "AudioEffectChorus",
            "set_voice_count"
        );
    method_bindings.mb_set_voice_cutoff_hz =
        api->rebel_method_bind_get_method(
            "AudioEffectChorus",
            "set_voice_cutoff_hz"
        );
    method_bindings.mb_set_voice_delay_ms =
        api->rebel_method_bind_get_method(
            "AudioEffectChorus",
            "set_voice_delay_ms"
        );
    method_bindings.mb_set_voice_depth_ms =
        api->rebel_method_bind_get_method(
            "AudioEffectChorus",
            "set_voice_depth_ms"
        );
    method_bindings.mb_set_voice_level_db =
        api->rebel_method_bind_get_method(
            "AudioEffectChorus",
            "set_voice_level_db"
        );
    method_bindings.mb_set_voice_pan =
        api->rebel_method_bind_get_method(
            "AudioEffectChorus",
            "set_voice_pan"
        );
    method_bindings.mb_set_voice_rate_hz =
        api->rebel_method_bind_get_method(
            "AudioEffectChorus",
            "set_voice_rate_hz"
        );
    method_bindings.mb_set_wet =
        api->rebel_method_bind_get_method(
            "AudioEffectChorus",
            "set_wet"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectChorus");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectChorus::MethodBindings AudioEffectChorus::method_bindings = {};
void* AudioEffectChorus::class_tag = nullptr;
} // namespace Rebel
