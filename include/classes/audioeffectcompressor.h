// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOEFFECTCOMPRESSOR_H
#define REBEL_AUDIOEFFECTCOMPRESSOR_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/audioeffect.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioEffectCompressor : public AudioEffect {
public:
    real_t get_attack_us() const;
    real_t get_gain() const;
    real_t get_mix() const;
    real_t get_ratio() const;
    real_t get_release_ms() const;
    String get_sidechain() const;
    real_t get_threshold() const;
    void set_attack_us(const real_t attack_us);
    void set_gain(const real_t gain);
    void set_mix(const real_t mix);
    void set_ratio(const real_t ratio);
    void set_release_ms(const real_t release_ms);
    void set_sidechain(const String sidechain);
    void set_threshold(const real_t threshold);

    static AudioEffectCompressor* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioEffectCompressor";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioEffectCompressor";
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
        rebel_method_bind* mb_get_attack_us;
        rebel_method_bind* mb_get_gain;
        rebel_method_bind* mb_get_mix;
        rebel_method_bind* mb_get_ratio;
        rebel_method_bind* mb_get_release_ms;
        rebel_method_bind* mb_get_sidechain;
        rebel_method_bind* mb_get_threshold;
        rebel_method_bind* mb_set_attack_us;
        rebel_method_bind* mb_set_gain;
        rebel_method_bind* mb_set_mix;
        rebel_method_bind* mb_set_ratio;
        rebel_method_bind* mb_set_release_ms;
        rebel_method_bind* mb_set_sidechain;
        rebel_method_bind* mb_set_threshold;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOEFFECTCOMPRESSOR_H
