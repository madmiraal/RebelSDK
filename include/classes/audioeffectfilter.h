// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOEFFECTFILTER_H
#define REBEL_AUDIOEFFECTFILTER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/audioeffect.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioEffectFilter : public AudioEffect {
public:
    enum FilterDB {
        FILTER_6DB = 0,
        FILTER_12DB = 1,
        FILTER_18DB = 2,
        FILTER_24DB = 3,
    };

    real_t get_cutoff() const;
    AudioEffectFilter::FilterDB get_db() const;
    real_t get_gain() const;
    real_t get_resonance() const;
    void set_cutoff(const real_t freq);
    void set_db(const int64_t amount);
    void set_gain(const real_t amount);
    void set_resonance(const real_t amount);

    static AudioEffectFilter* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioEffectFilter";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioEffectFilter";
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
        rebel_method_bind* mb_get_cutoff;
        rebel_method_bind* mb_get_db;
        rebel_method_bind* mb_get_gain;
        rebel_method_bind* mb_get_resonance;
        rebel_method_bind* mb_set_cutoff;
        rebel_method_bind* mb_set_db;
        rebel_method_bind* mb_set_gain;
        rebel_method_bind* mb_set_resonance;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOEFFECTFILTER_H
