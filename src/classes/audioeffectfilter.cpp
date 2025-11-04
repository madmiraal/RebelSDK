// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffectfilter.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t AudioEffectFilter::get_cutoff() const {
    return rebel_icall_float(
        method_bindings.mb_get_cutoff,
        (const Object*)this
    );
}

AudioEffectFilter::FilterDB AudioEffectFilter::get_db() const {
    return (AudioEffectFilter::FilterDB)rebel_icall_int(
        method_bindings.mb_get_db,
        (const Object*)this
    );
}

real_t AudioEffectFilter::get_gain() const {
    return rebel_icall_float(
        method_bindings.mb_get_gain,
        (const Object*)this
    );
}

real_t AudioEffectFilter::get_resonance() const {
    return rebel_icall_float(
        method_bindings.mb_get_resonance,
        (const Object*)this
    );
}

void AudioEffectFilter::set_cutoff(const real_t freq) {
    rebel_icall_void_float(
        method_bindings.mb_set_cutoff,
        (const Object*)this,
        freq
    );
}

void AudioEffectFilter::set_db(const int64_t amount) {
    rebel_icall_void_int(
        method_bindings.mb_set_db,
        (const Object*)this,
        amount
    );
}

void AudioEffectFilter::set_gain(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_gain,
        (const Object*)this,
        amount
    );
}

void AudioEffectFilter::set_resonance(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_resonance,
        (const Object*)this,
        amount
    );
}

AudioEffectFilter* AudioEffectFilter::create() {
    return (AudioEffectFilter*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioEffectFilter")()
         );
}

void AudioEffectFilter::init_method_bindings() {
    method_bindings.mb_get_cutoff =
        api->rebel_method_bind_get_method(
            "AudioEffectFilter",
            "get_cutoff"
        );
    method_bindings.mb_get_db =
        api->rebel_method_bind_get_method(
            "AudioEffectFilter",
            "get_db"
        );
    method_bindings.mb_get_gain =
        api->rebel_method_bind_get_method(
            "AudioEffectFilter",
            "get_gain"
        );
    method_bindings.mb_get_resonance =
        api->rebel_method_bind_get_method(
            "AudioEffectFilter",
            "get_resonance"
        );
    method_bindings.mb_set_cutoff =
        api->rebel_method_bind_get_method(
            "AudioEffectFilter",
            "set_cutoff"
        );
    method_bindings.mb_set_db =
        api->rebel_method_bind_get_method(
            "AudioEffectFilter",
            "set_db"
        );
    method_bindings.mb_set_gain =
        api->rebel_method_bind_get_method(
            "AudioEffectFilter",
            "set_gain"
        );
    method_bindings.mb_set_resonance =
        api->rebel_method_bind_get_method(
            "AudioEffectFilter",
            "set_resonance"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectFilter");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectFilter::MethodBindings AudioEffectFilter::method_bindings = {};
void* AudioEffectFilter::class_tag = nullptr;
} // namespace Rebel
