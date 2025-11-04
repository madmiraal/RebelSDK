// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffectpitchshift.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
AudioEffectPitchShift::FFT_Size AudioEffectPitchShift::get_fft_size() const {
    return (AudioEffectPitchShift::FFT_Size)rebel_icall_int(
        method_bindings.mb_get_fft_size,
        (const Object*)this
    );
}

int64_t AudioEffectPitchShift::get_oversampling() const {
    return rebel_icall_int(
        method_bindings.mb_get_oversampling,
        (const Object*)this
    );
}

real_t AudioEffectPitchShift::get_pitch_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_pitch_scale,
        (const Object*)this
    );
}

void AudioEffectPitchShift::set_fft_size(const int64_t size) {
    rebel_icall_void_int(
        method_bindings.mb_set_fft_size,
        (const Object*)this,
        size
    );
}

void AudioEffectPitchShift::set_oversampling(const int64_t amount) {
    rebel_icall_void_int(
        method_bindings.mb_set_oversampling,
        (const Object*)this,
        amount
    );
}

void AudioEffectPitchShift::set_pitch_scale(const real_t rate) {
    rebel_icall_void_float(
        method_bindings.mb_set_pitch_scale,
        (const Object*)this,
        rate
    );
}

AudioEffectPitchShift* AudioEffectPitchShift::create() {
    return (AudioEffectPitchShift*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioEffectPitchShift")()
         );
}

void AudioEffectPitchShift::init_method_bindings() {
    method_bindings.mb_get_fft_size =
        api->rebel_method_bind_get_method(
            "AudioEffectPitchShift",
            "get_fft_size"
        );
    method_bindings.mb_get_oversampling =
        api->rebel_method_bind_get_method(
            "AudioEffectPitchShift",
            "get_oversampling"
        );
    method_bindings.mb_get_pitch_scale =
        api->rebel_method_bind_get_method(
            "AudioEffectPitchShift",
            "get_pitch_scale"
        );
    method_bindings.mb_set_fft_size =
        api->rebel_method_bind_get_method(
            "AudioEffectPitchShift",
            "set_fft_size"
        );
    method_bindings.mb_set_oversampling =
        api->rebel_method_bind_get_method(
            "AudioEffectPitchShift",
            "set_oversampling"
        );
    method_bindings.mb_set_pitch_scale =
        api->rebel_method_bind_get_method(
            "AudioEffectPitchShift",
            "set_pitch_scale"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectPitchShift");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectPitchShift::MethodBindings AudioEffectPitchShift::method_bindings = {};
void* AudioEffectPitchShift::class_tag = nullptr;
} // namespace Rebel
