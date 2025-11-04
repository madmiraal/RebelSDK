// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOEFFECTPITCHSHIFT_H
#define REBEL_AUDIOEFFECTPITCHSHIFT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/audioeffect.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioEffectPitchShift : public AudioEffect {
public:
    enum FFT_Size {
        FFT_SIZE_256 = 0,
        FFT_SIZE_512 = 1,
        FFT_SIZE_1024 = 2,
        FFT_SIZE_2048 = 3,
        FFT_SIZE_4096 = 4,
        FFT_SIZE_MAX = 5,
    };

    AudioEffectPitchShift::FFT_Size get_fft_size() const;
    int64_t get_oversampling() const;
    real_t get_pitch_scale() const;
    void set_fft_size(const int64_t size);
    void set_oversampling(const int64_t amount);
    void set_pitch_scale(const real_t rate);

    static AudioEffectPitchShift* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioEffectPitchShift";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioEffectPitchShift";
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
        rebel_method_bind* mb_get_fft_size;
        rebel_method_bind* mb_get_oversampling;
        rebel_method_bind* mb_get_pitch_scale;
        rebel_method_bind* mb_set_fft_size;
        rebel_method_bind* mb_set_oversampling;
        rebel_method_bind* mb_set_pitch_scale;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOEFFECTPITCHSHIFT_H
