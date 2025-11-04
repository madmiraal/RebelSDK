// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOEFFECTRECORD_H
#define REBEL_AUDIOEFFECTRECORD_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/audioeffect.h"
#include "classes/audiostreamsample.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioStreamSample;

class AudioEffectRecord : public AudioEffect {
public:
    AudioStreamSample::Format get_format() const;
    Ref<AudioStreamSample> get_recording() const;
    bool is_recording_active() const;
    void set_format(const int64_t format);
    void set_recording_active(const bool record);

    static AudioEffectRecord* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioEffectRecord";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioEffectRecord";
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
        rebel_method_bind* mb_get_format;
        rebel_method_bind* mb_get_recording;
        rebel_method_bind* mb_is_recording_active;
        rebel_method_bind* mb_set_format;
        rebel_method_bind* mb_set_recording_active;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOEFFECTRECORD_H
