// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOEFFECTREVERB_H
#define REBEL_AUDIOEFFECTREVERB_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/audioeffect.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioEffectReverb : public AudioEffect {
public:
    real_t get_damping() const;
    real_t get_dry() const;
    real_t get_hpf() const;
    real_t get_predelay_feedback() const;
    real_t get_predelay_msec() const;
    real_t get_room_size() const;
    real_t get_spread() const;
    real_t get_wet() const;
    void set_damping(const real_t amount);
    void set_dry(const real_t amount);
    void set_hpf(const real_t amount);
    void set_predelay_feedback(const real_t feedback);
    void set_predelay_msec(const real_t msec);
    void set_room_size(const real_t size);
    void set_spread(const real_t amount);
    void set_wet(const real_t amount);

    static AudioEffectReverb* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioEffectReverb";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioEffectReverb";
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
        rebel_method_bind* mb_get_damping;
        rebel_method_bind* mb_get_dry;
        rebel_method_bind* mb_get_hpf;
        rebel_method_bind* mb_get_predelay_feedback;
        rebel_method_bind* mb_get_predelay_msec;
        rebel_method_bind* mb_get_room_size;
        rebel_method_bind* mb_get_spread;
        rebel_method_bind* mb_get_wet;
        rebel_method_bind* mb_set_damping;
        rebel_method_bind* mb_set_dry;
        rebel_method_bind* mb_set_hpf;
        rebel_method_bind* mb_set_predelay_feedback;
        rebel_method_bind* mb_set_predelay_msec;
        rebel_method_bind* mb_set_room_size;
        rebel_method_bind* mb_set_spread;
        rebel_method_bind* mb_set_wet;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOEFFECTREVERB_H
