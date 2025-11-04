// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audiostreamgenerator.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t AudioStreamGenerator::get_buffer_length() const {
    return rebel_icall_float(
        method_bindings.mb_get_buffer_length,
        (const Object*)this
    );
}

real_t AudioStreamGenerator::get_mix_rate() const {
    return rebel_icall_float(
        method_bindings.mb_get_mix_rate,
        (const Object*)this
    );
}

void AudioStreamGenerator::set_buffer_length(const real_t seconds) {
    rebel_icall_void_float(
        method_bindings.mb_set_buffer_length,
        (const Object*)this,
        seconds
    );
}

void AudioStreamGenerator::set_mix_rate(const real_t hz) {
    rebel_icall_void_float(
        method_bindings.mb_set_mix_rate,
        (const Object*)this,
        hz
    );
}

AudioStreamGenerator* AudioStreamGenerator::create() {
    return (AudioStreamGenerator*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioStreamGenerator")()
         );
}

void AudioStreamGenerator::init_method_bindings() {
    method_bindings.mb_get_buffer_length =
        api->rebel_method_bind_get_method(
            "AudioStreamGenerator",
            "get_buffer_length"
        );
    method_bindings.mb_get_mix_rate =
        api->rebel_method_bind_get_method(
            "AudioStreamGenerator",
            "get_mix_rate"
        );
    method_bindings.mb_set_buffer_length =
        api->rebel_method_bind_get_method(
            "AudioStreamGenerator",
            "set_buffer_length"
        );
    method_bindings.mb_set_mix_rate =
        api->rebel_method_bind_get_method(
            "AudioStreamGenerator",
            "set_mix_rate"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioStreamGenerator");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioStreamGenerator::MethodBindings AudioStreamGenerator::method_bindings = {};
void* AudioStreamGenerator::class_tag = nullptr;
} // namespace Rebel
