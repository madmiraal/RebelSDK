// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOSTREAMRANDOMPITCH_H
#define REBEL_AUDIOSTREAMRANDOMPITCH_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/audiostream.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioStreamRandomPitch : public AudioStream {
public:
    Ref<AudioStream> get_audio_stream() const;
    real_t get_random_pitch() const;
    void set_audio_stream(const Ref<AudioStream> stream);
    void set_random_pitch(const real_t scale);

    static AudioStreamRandomPitch* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioStreamRandomPitch";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioStreamRandomPitch";
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
        rebel_method_bind* mb_get_audio_stream;
        rebel_method_bind* mb_get_random_pitch;
        rebel_method_bind* mb_set_audio_stream;
        rebel_method_bind* mb_set_random_pitch;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOSTREAMRANDOMPITCH_H
