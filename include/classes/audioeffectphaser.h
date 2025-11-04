// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOEFFECTPHASER_H
#define REBEL_AUDIOEFFECTPHASER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/audioeffect.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioEffectPhaser : public AudioEffect {
public:
    real_t get_depth() const;
    real_t get_feedback() const;
    real_t get_range_max_hz() const;
    real_t get_range_min_hz() const;
    real_t get_rate_hz() const;
    void set_depth(const real_t depth);
    void set_feedback(const real_t fbk);
    void set_range_max_hz(const real_t hz);
    void set_range_min_hz(const real_t hz);
    void set_rate_hz(const real_t hz);

    static AudioEffectPhaser* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioEffectPhaser";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioEffectPhaser";
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
        rebel_method_bind* mb_get_depth;
        rebel_method_bind* mb_get_feedback;
        rebel_method_bind* mb_get_range_max_hz;
        rebel_method_bind* mb_get_range_min_hz;
        rebel_method_bind* mb_get_rate_hz;
        rebel_method_bind* mb_set_depth;
        rebel_method_bind* mb_set_feedback;
        rebel_method_bind* mb_set_range_max_hz;
        rebel_method_bind* mb_set_range_min_hz;
        rebel_method_bind* mb_set_rate_hz;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOEFFECTPHASER_H
