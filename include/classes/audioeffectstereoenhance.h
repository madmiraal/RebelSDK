// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOEFFECTSTEREOENHANCE_H
#define REBEL_AUDIOEFFECTSTEREOENHANCE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/audioeffect.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioEffectStereoEnhance : public AudioEffect {
public:
    real_t get_pan_pullout() const;
    real_t get_surround() const;
    real_t get_time_pullout() const;
    void set_pan_pullout(const real_t amount);
    void set_surround(const real_t amount);
    void set_time_pullout(const real_t amount);

    static AudioEffectStereoEnhance* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioEffectStereoEnhance";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioEffectStereoEnhance";
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
        rebel_method_bind* mb_get_pan_pullout;
        rebel_method_bind* mb_get_surround;
        rebel_method_bind* mb_get_time_pullout;
        rebel_method_bind* mb_set_pan_pullout;
        rebel_method_bind* mb_set_surround;
        rebel_method_bind* mb_set_time_pullout;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOEFFECTSTEREOENHANCE_H
