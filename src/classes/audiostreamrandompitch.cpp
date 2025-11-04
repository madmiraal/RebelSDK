// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audiostreamrandompitch.h"

#include "classes/audiostream.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<AudioStream> AudioStreamRandomPitch::get_audio_stream() const {
    return Ref<AudioStream>::create_ref(rebel_icall_object(
        method_bindings.mb_get_audio_stream,
        (const Object*)this
    ));
}

real_t AudioStreamRandomPitch::get_random_pitch() const {
    return rebel_icall_float(
        method_bindings.mb_get_random_pitch,
        (const Object*)this
    );
}

void AudioStreamRandomPitch::set_audio_stream(const Ref<AudioStream> stream) {
    rebel_icall_void_object(
        method_bindings.mb_set_audio_stream,
        (const Object*)this,
        stream.ptr()
    );
}

void AudioStreamRandomPitch::set_random_pitch(const real_t scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_random_pitch,
        (const Object*)this,
        scale
    );
}

AudioStreamRandomPitch* AudioStreamRandomPitch::create() {
    return (AudioStreamRandomPitch*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioStreamRandomPitch")()
         );
}

void AudioStreamRandomPitch::init_method_bindings() {
    method_bindings.mb_get_audio_stream =
        api->rebel_method_bind_get_method(
            "AudioStreamRandomPitch",
            "get_audio_stream"
        );
    method_bindings.mb_get_random_pitch =
        api->rebel_method_bind_get_method(
            "AudioStreamRandomPitch",
            "get_random_pitch"
        );
    method_bindings.mb_set_audio_stream =
        api->rebel_method_bind_get_method(
            "AudioStreamRandomPitch",
            "set_audio_stream"
        );
    method_bindings.mb_set_random_pitch =
        api->rebel_method_bind_get_method(
            "AudioStreamRandomPitch",
            "set_random_pitch"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioStreamRandomPitch");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioStreamRandomPitch::MethodBindings AudioStreamRandomPitch::method_bindings = {};
void* AudioStreamRandomPitch::class_tag = nullptr;
} // namespace Rebel
