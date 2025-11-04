// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffectspectrumanalyzerinstance.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Vector2 AudioEffectSpectrumAnalyzerInstance::get_magnitude_for_frequency_range(const real_t from_hz, const real_t to_hz, const int64_t mode) const {
    return rebel_icall_vector2_float_float_int(
        method_bindings.mb_get_magnitude_for_frequency_range,
        (const Object*)this,
        from_hz,
        to_hz,
        mode
    );
}

void AudioEffectSpectrumAnalyzerInstance::init_method_bindings() {
    method_bindings.mb_get_magnitude_for_frequency_range =
        api->rebel_method_bind_get_method(
            "AudioEffectSpectrumAnalyzerInstance",
            "get_magnitude_for_frequency_range"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectSpectrumAnalyzerInstance");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectSpectrumAnalyzerInstance::MethodBindings AudioEffectSpectrumAnalyzerInstance::method_bindings = {};
void* AudioEffectSpectrumAnalyzerInstance::class_tag = nullptr;
} // namespace Rebel
