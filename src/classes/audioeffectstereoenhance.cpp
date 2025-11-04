// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffectstereoenhance.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t AudioEffectStereoEnhance::get_pan_pullout() const {
    return rebel_icall_float(
        method_bindings.mb_get_pan_pullout,
        (const Object*)this
    );
}

real_t AudioEffectStereoEnhance::get_surround() const {
    return rebel_icall_float(
        method_bindings.mb_get_surround,
        (const Object*)this
    );
}

real_t AudioEffectStereoEnhance::get_time_pullout() const {
    return rebel_icall_float(
        method_bindings.mb_get_time_pullout,
        (const Object*)this
    );
}

void AudioEffectStereoEnhance::set_pan_pullout(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_pan_pullout,
        (const Object*)this,
        amount
    );
}

void AudioEffectStereoEnhance::set_surround(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_surround,
        (const Object*)this,
        amount
    );
}

void AudioEffectStereoEnhance::set_time_pullout(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_time_pullout,
        (const Object*)this,
        amount
    );
}

AudioEffectStereoEnhance* AudioEffectStereoEnhance::create() {
    return (AudioEffectStereoEnhance*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioEffectStereoEnhance")()
         );
}

void AudioEffectStereoEnhance::init_method_bindings() {
    method_bindings.mb_get_pan_pullout =
        api->rebel_method_bind_get_method(
            "AudioEffectStereoEnhance",
            "get_pan_pullout"
        );
    method_bindings.mb_get_surround =
        api->rebel_method_bind_get_method(
            "AudioEffectStereoEnhance",
            "get_surround"
        );
    method_bindings.mb_get_time_pullout =
        api->rebel_method_bind_get_method(
            "AudioEffectStereoEnhance",
            "get_time_pullout"
        );
    method_bindings.mb_set_pan_pullout =
        api->rebel_method_bind_get_method(
            "AudioEffectStereoEnhance",
            "set_pan_pullout"
        );
    method_bindings.mb_set_surround =
        api->rebel_method_bind_get_method(
            "AudioEffectStereoEnhance",
            "set_surround"
        );
    method_bindings.mb_set_time_pullout =
        api->rebel_method_bind_get_method(
            "AudioEffectStereoEnhance",
            "set_time_pullout"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectStereoEnhance");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectStereoEnhance::MethodBindings AudioEffectStereoEnhance::method_bindings = {};
void* AudioEffectStereoEnhance::class_tag = nullptr;
} // namespace Rebel
