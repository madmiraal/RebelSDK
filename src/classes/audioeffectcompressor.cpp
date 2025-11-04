// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffectcompressor.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t AudioEffectCompressor::get_attack_us() const {
    return rebel_icall_float(
        method_bindings.mb_get_attack_us,
        (const Object*)this
    );
}

real_t AudioEffectCompressor::get_gain() const {
    return rebel_icall_float(
        method_bindings.mb_get_gain,
        (const Object*)this
    );
}

real_t AudioEffectCompressor::get_mix() const {
    return rebel_icall_float(
        method_bindings.mb_get_mix,
        (const Object*)this
    );
}

real_t AudioEffectCompressor::get_ratio() const {
    return rebel_icall_float(
        method_bindings.mb_get_ratio,
        (const Object*)this
    );
}

real_t AudioEffectCompressor::get_release_ms() const {
    return rebel_icall_float(
        method_bindings.mb_get_release_ms,
        (const Object*)this
    );
}

String AudioEffectCompressor::get_sidechain() const {
    return rebel_icall_string(
        method_bindings.mb_get_sidechain,
        (const Object*)this
    );
}

real_t AudioEffectCompressor::get_threshold() const {
    return rebel_icall_float(
        method_bindings.mb_get_threshold,
        (const Object*)this
    );
}

void AudioEffectCompressor::set_attack_us(const real_t attack_us) {
    rebel_icall_void_float(
        method_bindings.mb_set_attack_us,
        (const Object*)this,
        attack_us
    );
}

void AudioEffectCompressor::set_gain(const real_t gain) {
    rebel_icall_void_float(
        method_bindings.mb_set_gain,
        (const Object*)this,
        gain
    );
}

void AudioEffectCompressor::set_mix(const real_t mix) {
    rebel_icall_void_float(
        method_bindings.mb_set_mix,
        (const Object*)this,
        mix
    );
}

void AudioEffectCompressor::set_ratio(const real_t ratio) {
    rebel_icall_void_float(
        method_bindings.mb_set_ratio,
        (const Object*)this,
        ratio
    );
}

void AudioEffectCompressor::set_release_ms(const real_t release_ms) {
    rebel_icall_void_float(
        method_bindings.mb_set_release_ms,
        (const Object*)this,
        release_ms
    );
}

void AudioEffectCompressor::set_sidechain(const String sidechain) {
    rebel_icall_void_string(
        method_bindings.mb_set_sidechain,
        (const Object*)this,
        sidechain
    );
}

void AudioEffectCompressor::set_threshold(const real_t threshold) {
    rebel_icall_void_float(
        method_bindings.mb_set_threshold,
        (const Object*)this,
        threshold
    );
}

AudioEffectCompressor* AudioEffectCompressor::create() {
    return (AudioEffectCompressor*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioEffectCompressor")()
         );
}

void AudioEffectCompressor::init_method_bindings() {
    method_bindings.mb_get_attack_us =
        api->rebel_method_bind_get_method(
            "AudioEffectCompressor",
            "get_attack_us"
        );
    method_bindings.mb_get_gain =
        api->rebel_method_bind_get_method(
            "AudioEffectCompressor",
            "get_gain"
        );
    method_bindings.mb_get_mix =
        api->rebel_method_bind_get_method(
            "AudioEffectCompressor",
            "get_mix"
        );
    method_bindings.mb_get_ratio =
        api->rebel_method_bind_get_method(
            "AudioEffectCompressor",
            "get_ratio"
        );
    method_bindings.mb_get_release_ms =
        api->rebel_method_bind_get_method(
            "AudioEffectCompressor",
            "get_release_ms"
        );
    method_bindings.mb_get_sidechain =
        api->rebel_method_bind_get_method(
            "AudioEffectCompressor",
            "get_sidechain"
        );
    method_bindings.mb_get_threshold =
        api->rebel_method_bind_get_method(
            "AudioEffectCompressor",
            "get_threshold"
        );
    method_bindings.mb_set_attack_us =
        api->rebel_method_bind_get_method(
            "AudioEffectCompressor",
            "set_attack_us"
        );
    method_bindings.mb_set_gain =
        api->rebel_method_bind_get_method(
            "AudioEffectCompressor",
            "set_gain"
        );
    method_bindings.mb_set_mix =
        api->rebel_method_bind_get_method(
            "AudioEffectCompressor",
            "set_mix"
        );
    method_bindings.mb_set_ratio =
        api->rebel_method_bind_get_method(
            "AudioEffectCompressor",
            "set_ratio"
        );
    method_bindings.mb_set_release_ms =
        api->rebel_method_bind_get_method(
            "AudioEffectCompressor",
            "set_release_ms"
        );
    method_bindings.mb_set_sidechain =
        api->rebel_method_bind_get_method(
            "AudioEffectCompressor",
            "set_sidechain"
        );
    method_bindings.mb_set_threshold =
        api->rebel_method_bind_get_method(
            "AudioEffectCompressor",
            "set_threshold"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectCompressor");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectCompressor::MethodBindings AudioEffectCompressor::method_bindings = {};
void* AudioEffectCompressor::class_tag = nullptr;
} // namespace Rebel
