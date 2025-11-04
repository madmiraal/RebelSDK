// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOEFFECTCAPTURE_H
#define REBEL_AUDIOEFFECTCAPTURE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/audioeffect.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioEffectCapture : public AudioEffect {
public:
    bool can_get_buffer(const int64_t frames) const;
    void clear_buffer();
    PoolVector2Array get_buffer(const int64_t frames);
    real_t get_buffer_length();
    int64_t get_buffer_length_frames() const;
    int64_t get_discarded_frames() const;
    int64_t get_frames_available() const;
    int64_t get_pushed_frames() const;
    void set_buffer_length(const real_t buffer_length_seconds);

    static AudioEffectCapture* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioEffectCapture";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioEffectCapture";
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
        rebel_method_bind* mb_can_get_buffer;
        rebel_method_bind* mb_clear_buffer;
        rebel_method_bind* mb_get_buffer;
        rebel_method_bind* mb_get_buffer_length;
        rebel_method_bind* mb_get_buffer_length_frames;
        rebel_method_bind* mb_get_discarded_frames;
        rebel_method_bind* mb_get_frames_available;
        rebel_method_bind* mb_get_pushed_frames;
        rebel_method_bind* mb_set_buffer_length;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOEFFECTCAPTURE_H
