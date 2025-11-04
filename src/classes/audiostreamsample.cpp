// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audiostreamsample.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
PoolByteArray AudioStreamSample::get_data() const {
    return rebel_icall_poolbytearray(
        method_bindings.mb_get_data,
        (const Object*)this
    );
}

AudioStreamSample::Format AudioStreamSample::get_format() const {
    return (AudioStreamSample::Format)rebel_icall_int(
        method_bindings.mb_get_format,
        (const Object*)this
    );
}

int64_t AudioStreamSample::get_loop_begin() const {
    return rebel_icall_int(
        method_bindings.mb_get_loop_begin,
        (const Object*)this
    );
}

int64_t AudioStreamSample::get_loop_end() const {
    return rebel_icall_int(
        method_bindings.mb_get_loop_end,
        (const Object*)this
    );
}

AudioStreamSample::LoopMode AudioStreamSample::get_loop_mode() const {
    return (AudioStreamSample::LoopMode)rebel_icall_int(
        method_bindings.mb_get_loop_mode,
        (const Object*)this
    );
}

int64_t AudioStreamSample::get_mix_rate() const {
    return rebel_icall_int(
        method_bindings.mb_get_mix_rate,
        (const Object*)this
    );
}

bool AudioStreamSample::is_stereo() const {
    return rebel_icall_bool(
        method_bindings.mb_is_stereo,
        (const Object*)this
    );
}

Error AudioStreamSample::save_to_wav(const String path) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_save_to_wav,
        (const Object*)this,
        path
    );
}

void AudioStreamSample::set_data(const PoolByteArray data) {
    rebel_icall_void_poolbytearray(
        method_bindings.mb_set_data,
        (const Object*)this,
        data
    );
}

void AudioStreamSample::set_format(const int64_t format) {
    rebel_icall_void_int(
        method_bindings.mb_set_format,
        (const Object*)this,
        format
    );
}

void AudioStreamSample::set_loop_begin(const int64_t loop_begin) {
    rebel_icall_void_int(
        method_bindings.mb_set_loop_begin,
        (const Object*)this,
        loop_begin
    );
}

void AudioStreamSample::set_loop_end(const int64_t loop_end) {
    rebel_icall_void_int(
        method_bindings.mb_set_loop_end,
        (const Object*)this,
        loop_end
    );
}

void AudioStreamSample::set_loop_mode(const int64_t loop_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_loop_mode,
        (const Object*)this,
        loop_mode
    );
}

void AudioStreamSample::set_mix_rate(const int64_t mix_rate) {
    rebel_icall_void_int(
        method_bindings.mb_set_mix_rate,
        (const Object*)this,
        mix_rate
    );
}

void AudioStreamSample::set_stereo(const bool stereo) {
    rebel_icall_void_bool(
        method_bindings.mb_set_stereo,
        (const Object*)this,
        stereo
    );
}

AudioStreamSample* AudioStreamSample::create() {
    return (AudioStreamSample*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioStreamSample")()
         );
}

void AudioStreamSample::init_method_bindings() {
    method_bindings.mb_get_data =
        api->rebel_method_bind_get_method(
            "AudioStreamSample",
            "get_data"
        );
    method_bindings.mb_get_format =
        api->rebel_method_bind_get_method(
            "AudioStreamSample",
            "get_format"
        );
    method_bindings.mb_get_loop_begin =
        api->rebel_method_bind_get_method(
            "AudioStreamSample",
            "get_loop_begin"
        );
    method_bindings.mb_get_loop_end =
        api->rebel_method_bind_get_method(
            "AudioStreamSample",
            "get_loop_end"
        );
    method_bindings.mb_get_loop_mode =
        api->rebel_method_bind_get_method(
            "AudioStreamSample",
            "get_loop_mode"
        );
    method_bindings.mb_get_mix_rate =
        api->rebel_method_bind_get_method(
            "AudioStreamSample",
            "get_mix_rate"
        );
    method_bindings.mb_is_stereo =
        api->rebel_method_bind_get_method(
            "AudioStreamSample",
            "is_stereo"
        );
    method_bindings.mb_save_to_wav =
        api->rebel_method_bind_get_method(
            "AudioStreamSample",
            "save_to_wav"
        );
    method_bindings.mb_set_data =
        api->rebel_method_bind_get_method(
            "AudioStreamSample",
            "set_data"
        );
    method_bindings.mb_set_format =
        api->rebel_method_bind_get_method(
            "AudioStreamSample",
            "set_format"
        );
    method_bindings.mb_set_loop_begin =
        api->rebel_method_bind_get_method(
            "AudioStreamSample",
            "set_loop_begin"
        );
    method_bindings.mb_set_loop_end =
        api->rebel_method_bind_get_method(
            "AudioStreamSample",
            "set_loop_end"
        );
    method_bindings.mb_set_loop_mode =
        api->rebel_method_bind_get_method(
            "AudioStreamSample",
            "set_loop_mode"
        );
    method_bindings.mb_set_mix_rate =
        api->rebel_method_bind_get_method(
            "AudioStreamSample",
            "set_mix_rate"
        );
    method_bindings.mb_set_stereo =
        api->rebel_method_bind_get_method(
            "AudioStreamSample",
            "set_stereo"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioStreamSample");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioStreamSample::MethodBindings AudioStreamSample::method_bindings = {};
void* AudioStreamSample::class_tag = nullptr;
} // namespace Rebel
