// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOSTREAMOGGVORBIS_H
#define REBEL_AUDIOSTREAMOGGVORBIS_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/audiostream.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioStreamOGGVorbis : public AudioStream {
public:
    PoolByteArray get_data() const;
    real_t get_loop_offset() const;
    bool has_loop() const;
    void set_data(const PoolByteArray data);
    void set_loop(const bool enable);
    void set_loop_offset(const real_t seconds);

    static AudioStreamOGGVorbis* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioStreamOGGVorbis";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioStreamOGGVorbis";
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
        rebel_method_bind* mb_get_data;
        rebel_method_bind* mb_get_loop_offset;
        rebel_method_bind* mb_has_loop;
        rebel_method_bind* mb_set_data;
        rebel_method_bind* mb_set_loop;
        rebel_method_bind* mb_set_loop_offset;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOSTREAMOGGVORBIS_H
