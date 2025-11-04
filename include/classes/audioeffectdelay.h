// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOEFFECTDELAY_H
#define REBEL_AUDIOEFFECTDELAY_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/audioeffect.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioEffectDelay : public AudioEffect {
public:
    real_t get_dry();
    real_t get_feedback_delay_ms() const;
    real_t get_feedback_level_db() const;
    real_t get_feedback_lowpass() const;
    real_t get_tap1_delay_ms() const;
    real_t get_tap1_level_db() const;
    real_t get_tap1_pan() const;
    real_t get_tap2_delay_ms() const;
    real_t get_tap2_level_db() const;
    real_t get_tap2_pan() const;
    bool is_feedback_active() const;
    bool is_tap1_active() const;
    bool is_tap2_active() const;
    void set_dry(const real_t amount);
    void set_feedback_active(const bool amount);
    void set_feedback_delay_ms(const real_t amount);
    void set_feedback_level_db(const real_t amount);
    void set_feedback_lowpass(const real_t amount);
    void set_tap1_active(const bool amount);
    void set_tap1_delay_ms(const real_t amount);
    void set_tap1_level_db(const real_t amount);
    void set_tap1_pan(const real_t amount);
    void set_tap2_active(const bool amount);
    void set_tap2_delay_ms(const real_t amount);
    void set_tap2_level_db(const real_t amount);
    void set_tap2_pan(const real_t amount);

    static AudioEffectDelay* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioEffectDelay";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioEffectDelay";
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
        rebel_method_bind* mb_get_feedback_delay_ms;
        rebel_method_bind* mb_get_feedback_level_db;
        rebel_method_bind* mb_get_feedback_lowpass;
        rebel_method_bind* mb_get_tap1_delay_ms;
        rebel_method_bind* mb_get_tap1_level_db;
        rebel_method_bind* mb_get_tap1_pan;
        rebel_method_bind* mb_get_tap2_delay_ms;
        rebel_method_bind* mb_get_tap2_level_db;
        rebel_method_bind* mb_get_tap2_pan;
        rebel_method_bind* mb_is_feedback_active;
        rebel_method_bind* mb_is_tap1_active;
        rebel_method_bind* mb_is_tap2_active;
        rebel_method_bind* mb_set_dry;
        rebel_method_bind* mb_set_feedback_active;
        rebel_method_bind* mb_set_feedback_delay_ms;
        rebel_method_bind* mb_set_feedback_level_db;
        rebel_method_bind* mb_set_feedback_lowpass;
        rebel_method_bind* mb_set_tap1_active;
        rebel_method_bind* mb_set_tap1_delay_ms;
        rebel_method_bind* mb_set_tap1_level_db;
        rebel_method_bind* mb_set_tap1_pan;
        rebel_method_bind* mb_set_tap2_active;
        rebel_method_bind* mb_set_tap2_delay_ms;
        rebel_method_bind* mb_set_tap2_level_db;
        rebel_method_bind* mb_set_tap2_pan;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOEFFECTDELAY_H
