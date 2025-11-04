// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffectphaser.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t AudioEffectPhaser::get_depth() const {
    return rebel_icall_float(
        method_bindings.mb_get_depth,
        (const Object*)this
    );
}

real_t AudioEffectPhaser::get_feedback() const {
    return rebel_icall_float(
        method_bindings.mb_get_feedback,
        (const Object*)this
    );
}

real_t AudioEffectPhaser::get_range_max_hz() const {
    return rebel_icall_float(
        method_bindings.mb_get_range_max_hz,
        (const Object*)this
    );
}

real_t AudioEffectPhaser::get_range_min_hz() const {
    return rebel_icall_float(
        method_bindings.mb_get_range_min_hz,
        (const Object*)this
    );
}

real_t AudioEffectPhaser::get_rate_hz() const {
    return rebel_icall_float(
        method_bindings.mb_get_rate_hz,
        (const Object*)this
    );
}

void AudioEffectPhaser::set_depth(const real_t depth) {
    rebel_icall_void_float(
        method_bindings.mb_set_depth,
        (const Object*)this,
        depth
    );
}

void AudioEffectPhaser::set_feedback(const real_t fbk) {
    rebel_icall_void_float(
        method_bindings.mb_set_feedback,
        (const Object*)this,
        fbk
    );
}

void AudioEffectPhaser::set_range_max_hz(const real_t hz) {
    rebel_icall_void_float(
        method_bindings.mb_set_range_max_hz,
        (const Object*)this,
        hz
    );
}

void AudioEffectPhaser::set_range_min_hz(const real_t hz) {
    rebel_icall_void_float(
        method_bindings.mb_set_range_min_hz,
        (const Object*)this,
        hz
    );
}

void AudioEffectPhaser::set_rate_hz(const real_t hz) {
    rebel_icall_void_float(
        method_bindings.mb_set_rate_hz,
        (const Object*)this,
        hz
    );
}

AudioEffectPhaser* AudioEffectPhaser::create() {
    return (AudioEffectPhaser*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioEffectPhaser")()
         );
}

void AudioEffectPhaser::init_method_bindings() {
    method_bindings.mb_get_depth =
        api->rebel_method_bind_get_method(
            "AudioEffectPhaser",
            "get_depth"
        );
    method_bindings.mb_get_feedback =
        api->rebel_method_bind_get_method(
            "AudioEffectPhaser",
            "get_feedback"
        );
    method_bindings.mb_get_range_max_hz =
        api->rebel_method_bind_get_method(
            "AudioEffectPhaser",
            "get_range_max_hz"
        );
    method_bindings.mb_get_range_min_hz =
        api->rebel_method_bind_get_method(
            "AudioEffectPhaser",
            "get_range_min_hz"
        );
    method_bindings.mb_get_rate_hz =
        api->rebel_method_bind_get_method(
            "AudioEffectPhaser",
            "get_rate_hz"
        );
    method_bindings.mb_set_depth =
        api->rebel_method_bind_get_method(
            "AudioEffectPhaser",
            "set_depth"
        );
    method_bindings.mb_set_feedback =
        api->rebel_method_bind_get_method(
            "AudioEffectPhaser",
            "set_feedback"
        );
    method_bindings.mb_set_range_max_hz =
        api->rebel_method_bind_get_method(
            "AudioEffectPhaser",
            "set_range_max_hz"
        );
    method_bindings.mb_set_range_min_hz =
        api->rebel_method_bind_get_method(
            "AudioEffectPhaser",
            "set_range_min_hz"
        );
    method_bindings.mb_set_rate_hz =
        api->rebel_method_bind_get_method(
            "AudioEffectPhaser",
            "set_rate_hz"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectPhaser");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectPhaser::MethodBindings AudioEffectPhaser::method_bindings = {};
void* AudioEffectPhaser::class_tag = nullptr;
} // namespace Rebel
