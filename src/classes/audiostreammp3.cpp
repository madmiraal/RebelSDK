// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audiostreammp3.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
PoolByteArray AudioStreamMP3::get_data() const {
    return rebel_icall_poolbytearray(
        method_bindings.mb_get_data,
        (const Object*)this
    );
}

real_t AudioStreamMP3::get_loop_offset() const {
    return rebel_icall_float(
        method_bindings.mb_get_loop_offset,
        (const Object*)this
    );
}

bool AudioStreamMP3::has_loop() const {
    return rebel_icall_bool(
        method_bindings.mb_has_loop,
        (const Object*)this
    );
}

void AudioStreamMP3::set_data(const PoolByteArray data) {
    rebel_icall_void_poolbytearray(
        method_bindings.mb_set_data,
        (const Object*)this,
        data
    );
}

void AudioStreamMP3::set_loop(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_loop,
        (const Object*)this,
        enable
    );
}

void AudioStreamMP3::set_loop_offset(const real_t seconds) {
    rebel_icall_void_float(
        method_bindings.mb_set_loop_offset,
        (const Object*)this,
        seconds
    );
}

AudioStreamMP3* AudioStreamMP3::create() {
    return (AudioStreamMP3*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioStreamMP3")()
         );
}

void AudioStreamMP3::init_method_bindings() {
    method_bindings.mb_get_data =
        api->rebel_method_bind_get_method(
            "AudioStreamMP3",
            "get_data"
        );
    method_bindings.mb_get_loop_offset =
        api->rebel_method_bind_get_method(
            "AudioStreamMP3",
            "get_loop_offset"
        );
    method_bindings.mb_has_loop =
        api->rebel_method_bind_get_method(
            "AudioStreamMP3",
            "has_loop"
        );
    method_bindings.mb_set_data =
        api->rebel_method_bind_get_method(
            "AudioStreamMP3",
            "set_data"
        );
    method_bindings.mb_set_loop =
        api->rebel_method_bind_get_method(
            "AudioStreamMP3",
            "set_loop"
        );
    method_bindings.mb_set_loop_offset =
        api->rebel_method_bind_get_method(
            "AudioStreamMP3",
            "set_loop_offset"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioStreamMP3");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioStreamMP3::MethodBindings AudioStreamMP3::method_bindings = {};
void* AudioStreamMP3::class_tag = nullptr;
} // namespace Rebel
