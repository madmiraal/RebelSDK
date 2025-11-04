// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioserver.h"

#include "classes/audiobuslayout.h"
#include "classes/audioeffect.h"
#include "classes/audioeffectinstance.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void AudioServer::add_bus(const int64_t at_position) {
    rebel_icall_void_int(
        method_bindings.mb_add_bus,
        (const Object*)this,
        at_position
    );
}

void AudioServer::add_bus_effect(const int64_t bus_idx, const Ref<AudioEffect> effect, const int64_t at_position) {
    rebel_icall_void_int_object_int(
        method_bindings.mb_add_bus_effect,
        (const Object*)this,
        bus_idx,
        effect.ptr(),
        at_position
    );
}

String AudioServer::capture_get_device() {
    return rebel_icall_string(
        method_bindings.mb_capture_get_device,
        (const Object*)this
    );
}

Array AudioServer::capture_get_device_list() {
    return rebel_icall_array(
        method_bindings.mb_capture_get_device_list,
        (const Object*)this
    );
}

void AudioServer::capture_set_device(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_capture_set_device,
        (const Object*)this,
        name
    );
}

Ref<AudioBusLayout> AudioServer::generate_bus_layout() const {
    return Ref<AudioBusLayout>::create_ref(rebel_icall_object(
        method_bindings.mb_generate_bus_layout,
        (const Object*)this
    ));
}

int64_t AudioServer::get_bus_channels(const int64_t bus_idx) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_bus_channels,
        (const Object*)this,
        bus_idx
    );
}

int64_t AudioServer::get_bus_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_bus_count,
        (const Object*)this
    );
}

Ref<AudioEffect> AudioServer::get_bus_effect(const int64_t bus_idx, const int64_t effect_idx) {
    return Ref<AudioEffect>::create_ref(rebel_icall_object_int_int(
        method_bindings.mb_get_bus_effect,
        (const Object*)this,
        bus_idx,
        effect_idx
    ));
}

int64_t AudioServer::get_bus_effect_count(const int64_t bus_idx) {
    return rebel_icall_int_int(
        method_bindings.mb_get_bus_effect_count,
        (const Object*)this,
        bus_idx
    );
}

Ref<AudioEffectInstance> AudioServer::get_bus_effect_instance(const int64_t bus_idx, const int64_t effect_idx, const int64_t channel) {
    return Ref<AudioEffectInstance>::create_ref(rebel_icall_object_int_int_int(
        method_bindings.mb_get_bus_effect_instance,
        (const Object*)this,
        bus_idx,
        effect_idx,
        channel
    ));
}

int64_t AudioServer::get_bus_index(const String bus_name) const {
    return rebel_icall_int_string(
        method_bindings.mb_get_bus_index,
        (const Object*)this,
        bus_name
    );
}

String AudioServer::get_bus_name(const int64_t bus_idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_bus_name,
        (const Object*)this,
        bus_idx
    );
}

real_t AudioServer::get_bus_peak_volume_left_db(const int64_t bus_idx, const int64_t channel) const {
    return rebel_icall_float_int_int(
        method_bindings.mb_get_bus_peak_volume_left_db,
        (const Object*)this,
        bus_idx,
        channel
    );
}

real_t AudioServer::get_bus_peak_volume_right_db(const int64_t bus_idx, const int64_t channel) const {
    return rebel_icall_float_int_int(
        method_bindings.mb_get_bus_peak_volume_right_db,
        (const Object*)this,
        bus_idx,
        channel
    );
}

String AudioServer::get_bus_send(const int64_t bus_idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_bus_send,
        (const Object*)this,
        bus_idx
    );
}

real_t AudioServer::get_bus_volume_db(const int64_t bus_idx) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_bus_volume_db,
        (const Object*)this,
        bus_idx
    );
}

String AudioServer::get_device() {
    return rebel_icall_string(
        method_bindings.mb_get_device,
        (const Object*)this
    );
}

Array AudioServer::get_device_list() {
    return rebel_icall_array(
        method_bindings.mb_get_device_list,
        (const Object*)this
    );
}

real_t AudioServer::get_global_rate_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_global_rate_scale,
        (const Object*)this
    );
}

real_t AudioServer::get_mix_rate() const {
    return rebel_icall_float(
        method_bindings.mb_get_mix_rate,
        (const Object*)this
    );
}

real_t AudioServer::get_output_latency() const {
    return rebel_icall_float(
        method_bindings.mb_get_output_latency,
        (const Object*)this
    );
}

AudioServer::SpeakerMode AudioServer::get_speaker_mode() const {
    return (AudioServer::SpeakerMode)rebel_icall_int(
        method_bindings.mb_get_speaker_mode,
        (const Object*)this
    );
}

real_t AudioServer::get_time_since_last_mix() const {
    return rebel_icall_float(
        method_bindings.mb_get_time_since_last_mix,
        (const Object*)this
    );
}

real_t AudioServer::get_time_to_next_mix() const {
    return rebel_icall_float(
        method_bindings.mb_get_time_to_next_mix,
        (const Object*)this
    );
}

bool AudioServer::is_bus_bypassing_effects(const int64_t bus_idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_bus_bypassing_effects,
        (const Object*)this,
        bus_idx
    );
}

bool AudioServer::is_bus_effect_enabled(const int64_t bus_idx, const int64_t effect_idx) const {
    return rebel_icall_bool_int_int(
        method_bindings.mb_is_bus_effect_enabled,
        (const Object*)this,
        bus_idx,
        effect_idx
    );
}

bool AudioServer::is_bus_mute(const int64_t bus_idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_bus_mute,
        (const Object*)this,
        bus_idx
    );
}

bool AudioServer::is_bus_solo(const int64_t bus_idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_bus_solo,
        (const Object*)this,
        bus_idx
    );
}

void AudioServer::lock() {
    rebel_icall_void(
        method_bindings.mb_lock,
        (const Object*)this
    );
}

void AudioServer::move_bus(const int64_t index, const int64_t to_index) {
    rebel_icall_void_int_int(
        method_bindings.mb_move_bus,
        (const Object*)this,
        index,
        to_index
    );
}

void AudioServer::remove_bus(const int64_t index) {
    rebel_icall_void_int(
        method_bindings.mb_remove_bus,
        (const Object*)this,
        index
    );
}

void AudioServer::remove_bus_effect(const int64_t bus_idx, const int64_t effect_idx) {
    rebel_icall_void_int_int(
        method_bindings.mb_remove_bus_effect,
        (const Object*)this,
        bus_idx,
        effect_idx
    );
}

void AudioServer::set_bus_bypass_effects(const int64_t bus_idx, const bool enable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_bus_bypass_effects,
        (const Object*)this,
        bus_idx,
        enable
    );
}

void AudioServer::set_bus_count(const int64_t amount) {
    rebel_icall_void_int(
        method_bindings.mb_set_bus_count,
        (const Object*)this,
        amount
    );
}

void AudioServer::set_bus_effect_enabled(const int64_t bus_idx, const int64_t effect_idx, const bool enabled) {
    rebel_icall_void_int_int_bool(
        method_bindings.mb_set_bus_effect_enabled,
        (const Object*)this,
        bus_idx,
        effect_idx,
        enabled
    );
}

void AudioServer::set_bus_layout(const Ref<AudioBusLayout> bus_layout) {
    rebel_icall_void_object(
        method_bindings.mb_set_bus_layout,
        (const Object*)this,
        bus_layout.ptr()
    );
}

void AudioServer::set_bus_mute(const int64_t bus_idx, const bool enable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_bus_mute,
        (const Object*)this,
        bus_idx,
        enable
    );
}

void AudioServer::set_bus_name(const int64_t bus_idx, const String name) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_bus_name,
        (const Object*)this,
        bus_idx,
        name
    );
}

void AudioServer::set_bus_send(const int64_t bus_idx, const String send) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_bus_send,
        (const Object*)this,
        bus_idx,
        send
    );
}

void AudioServer::set_bus_solo(const int64_t bus_idx, const bool enable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_bus_solo,
        (const Object*)this,
        bus_idx,
        enable
    );
}

void AudioServer::set_bus_volume_db(const int64_t bus_idx, const real_t volume_db) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_bus_volume_db,
        (const Object*)this,
        bus_idx,
        volume_db
    );
}

void AudioServer::set_device(const String device) {
    rebel_icall_void_string(
        method_bindings.mb_set_device,
        (const Object*)this,
        device
    );
}

void AudioServer::set_global_rate_scale(const real_t scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_global_rate_scale,
        (const Object*)this,
        scale
    );
}

void AudioServer::swap_bus_effects(const int64_t bus_idx, const int64_t effect_idx, const int64_t by_effect_idx) {
    rebel_icall_void_int_int_int(
        method_bindings.mb_swap_bus_effects,
        (const Object*)this,
        bus_idx,
        effect_idx,
        by_effect_idx
    );
}

void AudioServer::unlock() {
    rebel_icall_void(
        method_bindings.mb_unlock,
        (const Object*)this
    );
}

AudioServer* AudioServer::singleton = nullptr;

AudioServer::AudioServer() {
    owner = api->rebel_global_get_singleton((char*) "AudioServer");
}

void AudioServer::init_method_bindings() {
    method_bindings.mb_add_bus =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "add_bus"
        );
    method_bindings.mb_add_bus_effect =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "add_bus_effect"
        );
    method_bindings.mb_capture_get_device =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "capture_get_device"
        );
    method_bindings.mb_capture_get_device_list =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "capture_get_device_list"
        );
    method_bindings.mb_capture_set_device =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "capture_set_device"
        );
    method_bindings.mb_generate_bus_layout =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "generate_bus_layout"
        );
    method_bindings.mb_get_bus_channels =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "get_bus_channels"
        );
    method_bindings.mb_get_bus_count =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "get_bus_count"
        );
    method_bindings.mb_get_bus_effect =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "get_bus_effect"
        );
    method_bindings.mb_get_bus_effect_count =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "get_bus_effect_count"
        );
    method_bindings.mb_get_bus_effect_instance =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "get_bus_effect_instance"
        );
    method_bindings.mb_get_bus_index =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "get_bus_index"
        );
    method_bindings.mb_get_bus_name =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "get_bus_name"
        );
    method_bindings.mb_get_bus_peak_volume_left_db =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "get_bus_peak_volume_left_db"
        );
    method_bindings.mb_get_bus_peak_volume_right_db =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "get_bus_peak_volume_right_db"
        );
    method_bindings.mb_get_bus_send =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "get_bus_send"
        );
    method_bindings.mb_get_bus_volume_db =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "get_bus_volume_db"
        );
    method_bindings.mb_get_device =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "get_device"
        );
    method_bindings.mb_get_device_list =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "get_device_list"
        );
    method_bindings.mb_get_global_rate_scale =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "get_global_rate_scale"
        );
    method_bindings.mb_get_mix_rate =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "get_mix_rate"
        );
    method_bindings.mb_get_output_latency =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "get_output_latency"
        );
    method_bindings.mb_get_speaker_mode =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "get_speaker_mode"
        );
    method_bindings.mb_get_time_since_last_mix =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "get_time_since_last_mix"
        );
    method_bindings.mb_get_time_to_next_mix =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "get_time_to_next_mix"
        );
    method_bindings.mb_is_bus_bypassing_effects =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "is_bus_bypassing_effects"
        );
    method_bindings.mb_is_bus_effect_enabled =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "is_bus_effect_enabled"
        );
    method_bindings.mb_is_bus_mute =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "is_bus_mute"
        );
    method_bindings.mb_is_bus_solo =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "is_bus_solo"
        );
    method_bindings.mb_lock =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "lock"
        );
    method_bindings.mb_move_bus =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "move_bus"
        );
    method_bindings.mb_remove_bus =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "remove_bus"
        );
    method_bindings.mb_remove_bus_effect =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "remove_bus_effect"
        );
    method_bindings.mb_set_bus_bypass_effects =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "set_bus_bypass_effects"
        );
    method_bindings.mb_set_bus_count =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "set_bus_count"
        );
    method_bindings.mb_set_bus_effect_enabled =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "set_bus_effect_enabled"
        );
    method_bindings.mb_set_bus_layout =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "set_bus_layout"
        );
    method_bindings.mb_set_bus_mute =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "set_bus_mute"
        );
    method_bindings.mb_set_bus_name =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "set_bus_name"
        );
    method_bindings.mb_set_bus_send =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "set_bus_send"
        );
    method_bindings.mb_set_bus_solo =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "set_bus_solo"
        );
    method_bindings.mb_set_bus_volume_db =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "set_bus_volume_db"
        );
    method_bindings.mb_set_device =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "set_device"
        );
    method_bindings.mb_set_global_rate_scale =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "set_global_rate_scale"
        );
    method_bindings.mb_swap_bus_effects =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "swap_bus_effects"
        );
    method_bindings.mb_unlock =
        api->rebel_method_bind_get_method(
            "AudioServer",
            "unlock"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioServer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioServer::MethodBindings AudioServer::method_bindings = {};
void* AudioServer::class_tag = nullptr;
} // namespace Rebel
