// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOEFFECTSPECTRUMANALYZERINSTANCE_H
#define REBEL_AUDIOEFFECTSPECTRUMANALYZERINSTANCE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/audioeffectinstance.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioEffectSpectrumAnalyzerInstance : public AudioEffectInstance {
public:
    enum MagnitudeMode {
        MAGNITUDE_AVERAGE = 0,
        MAGNITUDE_MAX = 1,
    };

    Vector2 get_magnitude_for_frequency_range(const real_t from_hz, const real_t to_hz, const int64_t mode = 1) const;

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioEffectSpectrumAnalyzerInstance";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioEffectSpectrumAnalyzerInstance";
    }

    inline static Object* from_variant(Variant variant) {
        rebel_object* object = (rebel_object*)variant;
        if (!object) {
            return nullptr;
        }
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                object
            );
    }

private:
    struct MethodBindings {
        rebel_method_bind* mb_get_magnitude_for_frequency_range;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOEFFECTSPECTRUMANALYZERINSTANCE_H
