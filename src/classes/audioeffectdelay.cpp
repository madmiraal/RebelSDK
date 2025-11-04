// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffectdelay.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t AudioEffectDelay::get_dry() {
    return rebel_icall_float(
        method_bindings.mb_get_dry,
        (const Object*)this
    );
}

real_t AudioEffectDelay::get_feedback_delay_ms() const {
    return rebel_icall_float(
        method_bindings.mb_get_feedback_delay_ms,
        (const Object*)this
    );
}

real_t AudioEffectDelay::get_feedback_level_db() const {
    return rebel_icall_float(
        method_bindings.mb_get_feedback_level_db,
        (const Object*)this
    );
}

real_t AudioEffectDelay::get_feedback_lowpass() const {
    return rebel_icall_float(
        method_bindings.mb_get_feedback_lowpass,
        (const Object*)this
    );
}

real_t AudioEffectDelay::get_tap1_delay_ms() const {
    return rebel_icall_float(
        method_bindings.mb_get_tap1_delay_ms,
        (const Object*)this
    );
}

real_t AudioEffectDelay::get_tap1_level_db() const {
    return rebel_icall_float(
        method_bindings.mb_get_tap1_level_db,
        (const Object*)this
    );
}

real_t AudioEffectDelay::get_tap1_pan() const {
    return rebel_icall_float(
        method_bindings.mb_get_tap1_pan,
        (const Object*)this
    );
}

real_t AudioEffectDelay::get_tap2_delay_ms() const {
    return rebel_icall_float(
        method_bindings.mb_get_tap2_delay_ms,
        (const Object*)this
    );
}

real_t AudioEffectDelay::get_tap2_level_db() const {
    return rebel_icall_float(
        method_bindings.mb_get_tap2_level_db,
        (const Object*)this
    );
}

real_t AudioEffectDelay::get_tap2_pan() const {
    return rebel_icall_float(
        method_bindings.mb_get_tap2_pan,
        (const Object*)this
    );
}

bool AudioEffectDelay::is_feedback_active() const {
    return rebel_icall_bool(
        method_bindings.mb_is_feedback_active,
        (const Object*)this
    );
}

bool AudioEffectDelay::is_tap1_active() const {
    return rebel_icall_bool(
        method_bindings.mb_is_tap1_active,
        (const Object*)this
    );
}

bool AudioEffectDelay::is_tap2_active() const {
    return rebel_icall_bool(
        method_bindings.mb_is_tap2_active,
        (const Object*)this
    );
}

void AudioEffectDelay::set_dry(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_dry,
        (const Object*)this,
        amount
    );
}

void AudioEffectDelay::set_feedback_active(const bool amount) {
    rebel_icall_void_bool(
        method_bindings.mb_set_feedback_active,
        (const Object*)this,
        amount
    );
}

void AudioEffectDelay::set_feedback_delay_ms(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_feedback_delay_ms,
        (const Object*)this,
        amount
    );
}

void AudioEffectDelay::set_feedback_level_db(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_feedback_level_db,
        (const Object*)this,
        amount
    );
}

void AudioEffectDelay::set_feedback_lowpass(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_feedback_lowpass,
        (const Object*)this,
        amount
    );
}

void AudioEffectDelay::set_tap1_active(const bool amount) {
    rebel_icall_void_bool(
        method_bindings.mb_set_tap1_active,
        (const Object*)this,
        amount
    );
}

void AudioEffectDelay::set_tap1_delay_ms(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_tap1_delay_ms,
        (const Object*)this,
        amount
    );
}

void AudioEffectDelay::set_tap1_level_db(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_tap1_level_db,
        (const Object*)this,
        amount
    );
}

void AudioEffectDelay::set_tap1_pan(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_tap1_pan,
        (const Object*)this,
        amount
    );
}

void AudioEffectDelay::set_tap2_active(const bool amount) {
    rebel_icall_void_bool(
        method_bindings.mb_set_tap2_active,
        (const Object*)this,
        amount
    );
}

void AudioEffectDelay::set_tap2_delay_ms(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_tap2_delay_ms,
        (const Object*)this,
        amount
    );
}

void AudioEffectDelay::set_tap2_level_db(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_tap2_level_db,
        (const Object*)this,
        amount
    );
}

void AudioEffectDelay::set_tap2_pan(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_tap2_pan,
        (const Object*)this,
        amount
    );
}

AudioEffectDelay* AudioEffectDelay::create() {
    return (AudioEffectDelay*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioEffectDelay")()
         );
}

void AudioEffectDelay::init_method_bindings() {
    method_bindings.mb_get_dry =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "get_dry"
        );
    method_bindings.mb_get_feedback_delay_ms =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "get_feedback_delay_ms"
        );
    method_bindings.mb_get_feedback_level_db =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "get_feedback_level_db"
        );
    method_bindings.mb_get_feedback_lowpass =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "get_feedback_lowpass"
        );
    method_bindings.mb_get_tap1_delay_ms =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "get_tap1_delay_ms"
        );
    method_bindings.mb_get_tap1_level_db =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "get_tap1_level_db"
        );
    method_bindings.mb_get_tap1_pan =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "get_tap1_pan"
        );
    method_bindings.mb_get_tap2_delay_ms =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "get_tap2_delay_ms"
        );
    method_bindings.mb_get_tap2_level_db =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "get_tap2_level_db"
        );
    method_bindings.mb_get_tap2_pan =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "get_tap2_pan"
        );
    method_bindings.mb_is_feedback_active =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "is_feedback_active"
        );
    method_bindings.mb_is_tap1_active =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "is_tap1_active"
        );
    method_bindings.mb_is_tap2_active =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "is_tap2_active"
        );
    method_bindings.mb_set_dry =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "set_dry"
        );
    method_bindings.mb_set_feedback_active =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "set_feedback_active"
        );
    method_bindings.mb_set_feedback_delay_ms =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "set_feedback_delay_ms"
        );
    method_bindings.mb_set_feedback_level_db =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "set_feedback_level_db"
        );
    method_bindings.mb_set_feedback_lowpass =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "set_feedback_lowpass"
        );
    method_bindings.mb_set_tap1_active =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "set_tap1_active"
        );
    method_bindings.mb_set_tap1_delay_ms =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "set_tap1_delay_ms"
        );
    method_bindings.mb_set_tap1_level_db =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "set_tap1_level_db"
        );
    method_bindings.mb_set_tap1_pan =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "set_tap1_pan"
        );
    method_bindings.mb_set_tap2_active =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "set_tap2_active"
        );
    method_bindings.mb_set_tap2_delay_ms =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "set_tap2_delay_ms"
        );
    method_bindings.mb_set_tap2_level_db =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "set_tap2_level_db"
        );
    method_bindings.mb_set_tap2_pan =
        api->rebel_method_bind_get_method(
            "AudioEffectDelay",
            "set_tap2_pan"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectDelay");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectDelay::MethodBindings AudioEffectDelay::method_bindings = {};
void* AudioEffectDelay::class_tag = nullptr;
} // namespace Rebel
