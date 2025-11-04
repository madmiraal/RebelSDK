// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOSTREAMSAMPLE_H
#define REBEL_AUDIOSTREAMSAMPLE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/audiostream.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioStreamSample : public AudioStream {
public:
    enum LoopMode {
        LOOP_DISABLED = 0,
        LOOP_FORWARD = 1,
        LOOP_PING_PONG = 2,
        LOOP_BACKWARD = 3,
    };

    enum Format {
        FORMAT_8_BITS = 0,
        FORMAT_16_BITS = 1,
        FORMAT_IMA_ADPCM = 2,
    };

    PoolByteArray get_data() const;
    AudioStreamSample::Format get_format() const;
    int64_t get_loop_begin() const;
    int64_t get_loop_end() const;
    AudioStreamSample::LoopMode get_loop_mode() const;
    int64_t get_mix_rate() const;
    bool is_stereo() const;
    Error save_to_wav(const String path);
    void set_data(const PoolByteArray data);
    void set_format(const int64_t format);
    void set_loop_begin(const int64_t loop_begin);
    void set_loop_end(const int64_t loop_end);
    void set_loop_mode(const int64_t loop_mode);
    void set_mix_rate(const int64_t mix_rate);
    void set_stereo(const bool stereo);

    static AudioStreamSample* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioStreamSample";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioStreamSample";
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
        rebel_method_bind* mb_get_format;
        rebel_method_bind* mb_get_loop_begin;
        rebel_method_bind* mb_get_loop_end;
        rebel_method_bind* mb_get_loop_mode;
        rebel_method_bind* mb_get_mix_rate;
        rebel_method_bind* mb_is_stereo;
        rebel_method_bind* mb_save_to_wav;
        rebel_method_bind* mb_set_data;
        rebel_method_bind* mb_set_format;
        rebel_method_bind* mb_set_loop_begin;
        rebel_method_bind* mb_set_loop_end;
        rebel_method_bind* mb_set_loop_mode;
        rebel_method_bind* mb_set_mix_rate;
        rebel_method_bind* mb_set_stereo;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOSTREAMSAMPLE_H
