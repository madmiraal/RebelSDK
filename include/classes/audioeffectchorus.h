// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOEFFECTCHORUS_H
#define REBEL_AUDIOEFFECTCHORUS_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/audioeffect.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioEffectChorus : public AudioEffect {
public:
    real_t get_dry() const;
    int64_t get_voice_count() const;
    real_t get_voice_cutoff_hz(const int64_t voice_idx) const;
    real_t get_voice_delay_ms(const int64_t voice_idx) const;
    real_t get_voice_depth_ms(const int64_t voice_idx) const;
    real_t get_voice_level_db(const int64_t voice_idx) const;
    real_t get_voice_pan(const int64_t voice_idx) const;
    real_t get_voice_rate_hz(const int64_t voice_idx) const;
    real_t get_wet() const;
    void set_dry(const real_t amount);
    void set_voice_count(const int64_t voices);
    void set_voice_cutoff_hz(const int64_t voice_idx, const real_t cutoff_hz);
    void set_voice_delay_ms(const int64_t voice_idx, const real_t delay_ms);
    void set_voice_depth_ms(const int64_t voice_idx, const real_t depth_ms);
    void set_voice_level_db(const int64_t voice_idx, const real_t level_db);
    void set_voice_pan(const int64_t voice_idx, const real_t pan);
    void set_voice_rate_hz(const int64_t voice_idx, const real_t rate_hz);
    void set_wet(const real_t amount);

    static AudioEffectChorus* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioEffectChorus";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioEffectChorus";
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
        rebel_method_bind* mb_get_dry;
        rebel_method_bind* mb_get_voice_count;
        rebel_method_bind* mb_get_voice_cutoff_hz;
        rebel_method_bind* mb_get_voice_delay_ms;
        rebel_method_bind* mb_get_voice_depth_ms;
        rebel_method_bind* mb_get_voice_level_db;
        rebel_method_bind* mb_get_voice_pan;
        rebel_method_bind* mb_get_voice_rate_hz;
        rebel_method_bind* mb_get_wet;
        rebel_method_bind* mb_set_dry;
        rebel_method_bind* mb_set_voice_count;
        rebel_method_bind* mb_set_voice_cutoff_hz;
        rebel_method_bind* mb_set_voice_delay_ms;
        rebel_method_bind* mb_set_voice_depth_ms;
        rebel_method_bind* mb_set_voice_level_db;
        rebel_method_bind* mb_set_voice_pan;
        rebel_method_bind* mb_set_voice_rate_hz;
        rebel_method_bind* mb_set_wet;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOEFFECTCHORUS_H
