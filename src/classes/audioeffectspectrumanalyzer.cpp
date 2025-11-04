// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffectspectrumanalyzer.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t AudioEffectSpectrumAnalyzer::get_buffer_length() const {
    return rebel_icall_float(
        method_bindings.mb_get_buffer_length,
        (const Object*)this
    );
}

AudioEffectSpectrumAnalyzer::FFT_Size AudioEffectSpectrumAnalyzer::get_fft_size() const {
    return (AudioEffectSpectrumAnalyzer::FFT_Size)rebel_icall_int(
        method_bindings.mb_get_fft_size,
        (const Object*)this
    );
}

real_t AudioEffectSpectrumAnalyzer::get_tap_back_pos() const {
    return rebel_icall_float(
        method_bindings.mb_get_tap_back_pos,
        (const Object*)this
    );
}

void AudioEffectSpectrumAnalyzer::set_buffer_length(const real_t seconds) {
    rebel_icall_void_float(
        method_bindings.mb_set_buffer_length,
        (const Object*)this,
        seconds
    );
}

void AudioEffectSpectrumAnalyzer::set_fft_size(const int64_t size) {
    rebel_icall_void_int(
        method_bindings.mb_set_fft_size,
        (const Object*)this,
        size
    );
}

void AudioEffectSpectrumAnalyzer::set_tap_back_pos(const real_t seconds) {
    rebel_icall_void_float(
        method_bindings.mb_set_tap_back_pos,
        (const Object*)this,
        seconds
    );
}

AudioEffectSpectrumAnalyzer* AudioEffectSpectrumAnalyzer::create() {
    return (AudioEffectSpectrumAnalyzer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioEffectSpectrumAnalyzer")()
         );
}

void AudioEffectSpectrumAnalyzer::init_method_bindings() {
    method_bindings.mb_get_buffer_length =
        api->rebel_method_bind_get_method(
            "AudioEffectSpectrumAnalyzer",
            "get_buffer_length"
        );
    method_bindings.mb_get_fft_size =
        api->rebel_method_bind_get_method(
            "AudioEffectSpectrumAnalyzer",
            "get_fft_size"
        );
    method_bindings.mb_get_tap_back_pos =
        api->rebel_method_bind_get_method(
            "AudioEffectSpectrumAnalyzer",
            "get_tap_back_pos"
        );
    method_bindings.mb_set_buffer_length =
        api->rebel_method_bind_get_method(
            "AudioEffectSpectrumAnalyzer",
            "set_buffer_length"
        );
    method_bindings.mb_set_fft_size =
        api->rebel_method_bind_get_method(
            "AudioEffectSpectrumAnalyzer",
            "set_fft_size"
        );
    method_bindings.mb_set_tap_back_pos =
        api->rebel_method_bind_get_method(
            "AudioEffectSpectrumAnalyzer",
            "set_tap_back_pos"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectSpectrumAnalyzer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectSpectrumAnalyzer::MethodBindings AudioEffectSpectrumAnalyzer::method_bindings = {};
void* AudioEffectSpectrumAnalyzer::class_tag = nullptr;
} // namespace Rebel
