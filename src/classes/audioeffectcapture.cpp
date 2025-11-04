// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffectcapture.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool AudioEffectCapture::can_get_buffer(const int64_t frames) const {
    return rebel_icall_bool_int(
        method_bindings.mb_can_get_buffer,
        (const Object*)this,
        frames
    );
}

void AudioEffectCapture::clear_buffer() {
    rebel_icall_void(
        method_bindings.mb_clear_buffer,
        (const Object*)this
    );
}

PoolVector2Array AudioEffectCapture::get_buffer(const int64_t frames) {
    return rebel_icall_poolvector2array_int(
        method_bindings.mb_get_buffer,
        (const Object*)this,
        frames
    );
}

real_t AudioEffectCapture::get_buffer_length() {
    return rebel_icall_float(
        method_bindings.mb_get_buffer_length,
        (const Object*)this
    );
}

int64_t AudioEffectCapture::get_buffer_length_frames() const {
    return rebel_icall_int(
        method_bindings.mb_get_buffer_length_frames,
        (const Object*)this
    );
}

int64_t AudioEffectCapture::get_discarded_frames() const {
    return rebel_icall_int(
        method_bindings.mb_get_discarded_frames,
        (const Object*)this
    );
}

int64_t AudioEffectCapture::get_frames_available() const {
    return rebel_icall_int(
        method_bindings.mb_get_frames_available,
        (const Object*)this
    );
}

int64_t AudioEffectCapture::get_pushed_frames() const {
    return rebel_icall_int(
        method_bindings.mb_get_pushed_frames,
        (const Object*)this
    );
}

void AudioEffectCapture::set_buffer_length(const real_t buffer_length_seconds) {
    rebel_icall_void_float(
        method_bindings.mb_set_buffer_length,
        (const Object*)this,
        buffer_length_seconds
    );
}

AudioEffectCapture* AudioEffectCapture::create() {
    return (AudioEffectCapture*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioEffectCapture")()
         );
}

void AudioEffectCapture::init_method_bindings() {
    method_bindings.mb_can_get_buffer =
        api->rebel_method_bind_get_method(
            "AudioEffectCapture",
            "can_get_buffer"
        );
    method_bindings.mb_clear_buffer =
        api->rebel_method_bind_get_method(
            "AudioEffectCapture",
            "clear_buffer"
        );
    method_bindings.mb_get_buffer =
        api->rebel_method_bind_get_method(
            "AudioEffectCapture",
            "get_buffer"
        );
    method_bindings.mb_get_buffer_length =
        api->rebel_method_bind_get_method(
            "AudioEffectCapture",
            "get_buffer_length"
        );
    method_bindings.mb_get_buffer_length_frames =
        api->rebel_method_bind_get_method(
            "AudioEffectCapture",
            "get_buffer_length_frames"
        );
    method_bindings.mb_get_discarded_frames =
        api->rebel_method_bind_get_method(
            "AudioEffectCapture",
            "get_discarded_frames"
        );
    method_bindings.mb_get_frames_available =
        api->rebel_method_bind_get_method(
            "AudioEffectCapture",
            "get_frames_available"
        );
    method_bindings.mb_get_pushed_frames =
        api->rebel_method_bind_get_method(
            "AudioEffectCapture",
            "get_pushed_frames"
        );
    method_bindings.mb_set_buffer_length =
        api->rebel_method_bind_get_method(
            "AudioEffectCapture",
            "set_buffer_length"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectCapture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectCapture::MethodBindings AudioEffectCapture::method_bindings = {};
void* AudioEffectCapture::class_tag = nullptr;
} // namespace Rebel
