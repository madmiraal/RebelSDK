// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOSTREAMGENERATOR_H
#define REBEL_AUDIOSTREAMGENERATOR_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/audiostream.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioStreamGenerator : public AudioStream {
public:
    real_t get_buffer_length() const;
    real_t get_mix_rate() const;
    void set_buffer_length(const real_t seconds);
    void set_mix_rate(const real_t hz);

    static AudioStreamGenerator* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioStreamGenerator";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioStreamGenerator";
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
        rebel_method_bind* mb_get_buffer_length;
        rebel_method_bind* mb_get_mix_rate;
        rebel_method_bind* mb_set_buffer_length;
        rebel_method_bind* mb_set_mix_rate;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOSTREAMGENERATOR_H
