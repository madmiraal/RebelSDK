// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffectreverb.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t AudioEffectReverb::get_damping() const {
    return rebel_icall_float(
        method_bindings.mb_get_damping,
        (const Object*)this
    );
}

real_t AudioEffectReverb::get_dry() const {
    return rebel_icall_float(
        method_bindings.mb_get_dry,
        (const Object*)this
    );
}

real_t AudioEffectReverb::get_hpf() const {
    return rebel_icall_float(
        method_bindings.mb_get_hpf,
        (const Object*)this
    );
}

real_t AudioEffectReverb::get_predelay_feedback() const {
    return rebel_icall_float(
        method_bindings.mb_get_predelay_feedback,
        (const Object*)this
    );
}

real_t AudioEffectReverb::get_predelay_msec() const {
    return rebel_icall_float(
        method_bindings.mb_get_predelay_msec,
        (const Object*)this
    );
}

real_t AudioEffectReverb::get_room_size() const {
    return rebel_icall_float(
        method_bindings.mb_get_room_size,
        (const Object*)this
    );
}

real_t AudioEffectReverb::get_spread() const {
    return rebel_icall_float(
        method_bindings.mb_get_spread,
        (const Object*)this
    );
}

real_t AudioEffectReverb::get_wet() const {
    return rebel_icall_float(
        method_bindings.mb_get_wet,
        (const Object*)this
    );
}

void AudioEffectReverb::set_damping(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_damping,
        (const Object*)this,
        amount
    );
}

void AudioEffectReverb::set_dry(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_dry,
        (const Object*)this,
        amount
    );
}

void AudioEffectReverb::set_hpf(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_hpf,
        (const Object*)this,
        amount
    );
}

void AudioEffectReverb::set_predelay_feedback(const real_t feedback) {
    rebel_icall_void_float(
        method_bindings.mb_set_predelay_feedback,
        (const Object*)this,
        feedback
    );
}

void AudioEffectReverb::set_predelay_msec(const real_t msec) {
    rebel_icall_void_float(
        method_bindings.mb_set_predelay_msec,
        (const Object*)this,
        msec
    );
}

void AudioEffectReverb::set_room_size(const real_t size) {
    rebel_icall_void_float(
        method_bindings.mb_set_room_size,
        (const Object*)this,
        size
    );
}

void AudioEffectReverb::set_spread(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_spread,
        (const Object*)this,
        amount
    );
}

void AudioEffectReverb::set_wet(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_wet,
        (const Object*)this,
        amount
    );
}

AudioEffectReverb* AudioEffectReverb::create() {
    return (AudioEffectReverb*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioEffectReverb")()
         );
}

void AudioEffectReverb::init_method_bindings() {
    method_bindings.mb_get_damping =
        api->rebel_method_bind_get_method(
            "AudioEffectReverb",
            "get_damping"
        );
    method_bindings.mb_get_dry =
        api->rebel_method_bind_get_method(
            "AudioEffectReverb",
            "get_dry"
        );
    method_bindings.mb_get_hpf =
        api->rebel_method_bind_get_method(
            "AudioEffectReverb",
            "get_hpf"
        );
    method_bindings.mb_get_predelay_feedback =
        api->rebel_method_bind_get_method(
            "AudioEffectReverb",
            "get_predelay_feedback"
        );
    method_bindings.mb_get_predelay_msec =
        api->rebel_method_bind_get_method(
            "AudioEffectReverb",
            "get_predelay_msec"
        );
    method_bindings.mb_get_room_size =
        api->rebel_method_bind_get_method(
            "AudioEffectReverb",
            "get_room_size"
        );
    method_bindings.mb_get_spread =
        api->rebel_method_bind_get_method(
            "AudioEffectReverb",
            "get_spread"
        );
    method_bindings.mb_get_wet =
        api->rebel_method_bind_get_method(
            "AudioEffectReverb",
            "get_wet"
        );
    method_bindings.mb_set_damping =
        api->rebel_method_bind_get_method(
            "AudioEffectReverb",
            "set_damping"
        );
    method_bindings.mb_set_dry =
        api->rebel_method_bind_get_method(
            "AudioEffectReverb",
            "set_dry"
        );
    method_bindings.mb_set_hpf =
        api->rebel_method_bind_get_method(
            "AudioEffectReverb",
            "set_hpf"
        );
    method_bindings.mb_set_predelay_feedback =
        api->rebel_method_bind_get_method(
            "AudioEffectReverb",
            "set_predelay_feedback"
        );
    method_bindings.mb_set_predelay_msec =
        api->rebel_method_bind_get_method(
            "AudioEffectReverb",
            "set_predelay_msec"
        );
    method_bindings.mb_set_room_size =
        api->rebel_method_bind_get_method(
            "AudioEffectReverb",
            "set_room_size"
        );
    method_bindings.mb_set_spread =
        api->rebel_method_bind_get_method(
            "AudioEffectReverb",
            "set_spread"
        );
    method_bindings.mb_set_wet =
        api->rebel_method_bind_get_method(
            "AudioEffectReverb",
            "set_wet"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectReverb");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectReverb::MethodBindings AudioEffectReverb::method_bindings = {};
void* AudioEffectReverb::class_tag = nullptr;
} // namespace Rebel
