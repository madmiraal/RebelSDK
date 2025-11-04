// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOEFFECTDISTORTION_H
#define REBEL_AUDIOEFFECTDISTORTION_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/audioeffect.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioEffectDistortion : public AudioEffect {
public:
    enum Mode {
        MODE_CLIP = 0,
        MODE_ATAN = 1,
        MODE_LOFI = 2,
        MODE_OVERDRIVE = 3,
        MODE_WAVESHAPE = 4,
    };

    real_t get_drive() const;
    real_t get_keep_hf_hz() const;
    AudioEffectDistortion::Mode get_mode() const;
    real_t get_post_gain() const;
    real_t get_pre_gain() const;
    void set_drive(const real_t drive);
    void set_keep_hf_hz(const real_t keep_hf_hz);
    void set_mode(const int64_t mode);
    void set_post_gain(const real_t post_gain);
    void set_pre_gain(const real_t pre_gain);

    static AudioEffectDistortion* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioEffectDistortion";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioEffectDistortion";
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
        rebel_method_bind* mb_get_drive;
        rebel_method_bind* mb_get_keep_hf_hz;
        rebel_method_bind* mb_get_mode;
        rebel_method_bind* mb_get_post_gain;
        rebel_method_bind* mb_get_pre_gain;
        rebel_method_bind* mb_set_drive;
        rebel_method_bind* mb_set_keep_hf_hz;
        rebel_method_bind* mb_set_mode;
        rebel_method_bind* mb_set_post_gain;
        rebel_method_bind* mb_set_pre_gain;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOEFFECTDISTORTION_H
