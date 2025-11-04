// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOEFFECTEQ_H
#define REBEL_AUDIOEFFECTEQ_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/audioeffect.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioEffectEQ : public AudioEffect {
public:
    int64_t get_band_count() const;
    real_t get_band_gain_db(const int64_t band_idx) const;
    void set_band_gain_db(const int64_t band_idx, const real_t volume_db);

    static AudioEffectEQ* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioEffectEQ";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioEffectEQ";
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
        rebel_method_bind* mb_get_band_count;
        rebel_method_bind* mb_get_band_gain_db;
        rebel_method_bind* mb_set_band_gain_db;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOEFFECTEQ_H
