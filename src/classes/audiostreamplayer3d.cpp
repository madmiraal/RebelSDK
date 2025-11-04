// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audiostreamplayer3d.h"

#include "classes/audiostream.h"
#include "classes/audiostreamplayback.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void AudioStreamPlayer3D::_bus_layout_changed() {
    rebel_icall_void(
        method_bindings.mb__bus_layout_changed,
        (const Object*)this
    );
}

bool AudioStreamPlayer3D::_is_active() const {
    return rebel_icall_bool(
        method_bindings.mb__is_active,
        (const Object*)this
    );
}

void AudioStreamPlayer3D::_set_playing(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb__set_playing,
        (const Object*)this,
        enable
    );
}

int64_t AudioStreamPlayer3D::get_area_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_area_mask,
        (const Object*)this
    );
}

real_t AudioStreamPlayer3D::get_attenuation_filter_cutoff_hz() const {
    return rebel_icall_float(
        method_bindings.mb_get_attenuation_filter_cutoff_hz,
        (const Object*)this
    );
}

real_t AudioStreamPlayer3D::get_attenuation_filter_db() const {
    return rebel_icall_float(
        method_bindings.mb_get_attenuation_filter_db,
        (const Object*)this
    );
}

AudioStreamPlayer3D::AttenuationModel AudioStreamPlayer3D::get_attenuation_model() const {
    return (AudioStreamPlayer3D::AttenuationModel)rebel_icall_int(
        method_bindings.mb_get_attenuation_model,
        (const Object*)this
    );
}

String AudioStreamPlayer3D::get_bus() const {
    return rebel_icall_string(
        method_bindings.mb_get_bus,
        (const Object*)this
    );
}

AudioStreamPlayer3D::DopplerTracking AudioStreamPlayer3D::get_doppler_tracking() const {
    return (AudioStreamPlayer3D::DopplerTracking)rebel_icall_int(
        method_bindings.mb_get_doppler_tracking,
        (const Object*)this
    );
}

real_t AudioStreamPlayer3D::get_emission_angle() const {
    return rebel_icall_float(
        method_bindings.mb_get_emission_angle,
        (const Object*)this
    );
}

real_t AudioStreamPlayer3D::get_emission_angle_filter_attenuation_db() const {
    return rebel_icall_float(
        method_bindings.mb_get_emission_angle_filter_attenuation_db,
        (const Object*)this
    );
}

real_t AudioStreamPlayer3D::get_max_db() const {
    return rebel_icall_float(
        method_bindings.mb_get_max_db,
        (const Object*)this
    );
}

real_t AudioStreamPlayer3D::get_max_distance() const {
    return rebel_icall_float(
        method_bindings.mb_get_max_distance,
        (const Object*)this
    );
}

AudioStreamPlayer3D::OutOfRangeMode AudioStreamPlayer3D::get_out_of_range_mode() const {
    return (AudioStreamPlayer3D::OutOfRangeMode)rebel_icall_int(
        method_bindings.mb_get_out_of_range_mode,
        (const Object*)this
    );
}

real_t AudioStreamPlayer3D::get_pitch_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_pitch_scale,
        (const Object*)this
    );
}

real_t AudioStreamPlayer3D::get_playback_position() {
    return rebel_icall_float(
        method_bindings.mb_get_playback_position,
        (const Object*)this
    );
}

Ref<AudioStream> AudioStreamPlayer3D::get_stream() const {
    return Ref<AudioStream>::create_ref(rebel_icall_object(
        method_bindings.mb_get_stream,
        (const Object*)this
    ));
}

bool AudioStreamPlayer3D::get_stream_paused() const {
    return rebel_icall_bool(
        method_bindings.mb_get_stream_paused,
        (const Object*)this
    );
}

Ref<AudioStreamPlayback> AudioStreamPlayer3D::get_stream_playback() {
    return Ref<AudioStreamPlayback>::create_ref(rebel_icall_object(
        method_bindings.mb_get_stream_playback,
        (const Object*)this
    ));
}

real_t AudioStreamPlayer3D::get_unit_db() const {
    return rebel_icall_float(
        method_bindings.mb_get_unit_db,
        (const Object*)this
    );
}

real_t AudioStreamPlayer3D::get_unit_size() const {
    return rebel_icall_float(
        method_bindings.mb_get_unit_size,
        (const Object*)this
    );
}

bool AudioStreamPlayer3D::is_autoplay_enabled() {
    return rebel_icall_bool(
        method_bindings.mb_is_autoplay_enabled,
        (const Object*)this
    );
}

bool AudioStreamPlayer3D::is_emission_angle_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_emission_angle_enabled,
        (const Object*)this
    );
}

bool AudioStreamPlayer3D::is_playing() const {
    return rebel_icall_bool(
        method_bindings.mb_is_playing,
        (const Object*)this
    );
}

void AudioStreamPlayer3D::play(const real_t from_position) {
    rebel_icall_void_float(
        method_bindings.mb_play,
        (const Object*)this,
        from_position
    );
}

void AudioStreamPlayer3D::seek(const real_t to_position) {
    rebel_icall_void_float(
        method_bindings.mb_seek,
        (const Object*)this,
        to_position
    );
}

void AudioStreamPlayer3D::set_area_mask(const int64_t mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_area_mask,
        (const Object*)this,
        mask
    );
}

void AudioStreamPlayer3D::set_attenuation_filter_cutoff_hz(const real_t degrees) {
    rebel_icall_void_float(
        method_bindings.mb_set_attenuation_filter_cutoff_hz,
        (const Object*)this,
        degrees
    );
}

void AudioStreamPlayer3D::set_attenuation_filter_db(const real_t db) {
    rebel_icall_void_float(
        method_bindings.mb_set_attenuation_filter_db,
        (const Object*)this,
        db
    );
}

void AudioStreamPlayer3D::set_attenuation_model(const int64_t model) {
    rebel_icall_void_int(
        method_bindings.mb_set_attenuation_model,
        (const Object*)this,
        model
    );
}

void AudioStreamPlayer3D::set_autoplay(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_autoplay,
        (const Object*)this,
        enable
    );
}

void AudioStreamPlayer3D::set_bus(const String bus) {
    rebel_icall_void_string(
        method_bindings.mb_set_bus,
        (const Object*)this,
        bus
    );
}

void AudioStreamPlayer3D::set_doppler_tracking(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_doppler_tracking,
        (const Object*)this,
        mode
    );
}

void AudioStreamPlayer3D::set_emission_angle(const real_t degrees) {
    rebel_icall_void_float(
        method_bindings.mb_set_emission_angle,
        (const Object*)this,
        degrees
    );
}

void AudioStreamPlayer3D::set_emission_angle_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_emission_angle_enabled,
        (const Object*)this,
        enabled
    );
}

void AudioStreamPlayer3D::set_emission_angle_filter_attenuation_db(const real_t db) {
    rebel_icall_void_float(
        method_bindings.mb_set_emission_angle_filter_attenuation_db,
        (const Object*)this,
        db
    );
}

void AudioStreamPlayer3D::set_max_db(const real_t max_db) {
    rebel_icall_void_float(
        method_bindings.mb_set_max_db,
        (const Object*)this,
        max_db
    );
}

void AudioStreamPlayer3D::set_max_distance(const real_t metres) {
    rebel_icall_void_float(
        method_bindings.mb_set_max_distance,
        (const Object*)this,
        metres
    );
}

void AudioStreamPlayer3D::set_out_of_range_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_out_of_range_mode,
        (const Object*)this,
        mode
    );
}

void AudioStreamPlayer3D::set_pitch_scale(const real_t pitch_scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_pitch_scale,
        (const Object*)this,
        pitch_scale
    );
}

void AudioStreamPlayer3D::set_stream(const Ref<AudioStream> stream) {
    rebel_icall_void_object(
        method_bindings.mb_set_stream,
        (const Object*)this,
        stream.ptr()
    );
}

void AudioStreamPlayer3D::set_stream_paused(const bool pause) {
    rebel_icall_void_bool(
        method_bindings.mb_set_stream_paused,
        (const Object*)this,
        pause
    );
}

void AudioStreamPlayer3D::set_unit_db(const real_t unit_db) {
    rebel_icall_void_float(
        method_bindings.mb_set_unit_db,
        (const Object*)this,
        unit_db
    );
}

void AudioStreamPlayer3D::set_unit_size(const real_t unit_size) {
    rebel_icall_void_float(
        method_bindings.mb_set_unit_size,
        (const Object*)this,
        unit_size
    );
}

void AudioStreamPlayer3D::stop() {
    rebel_icall_void(
        method_bindings.mb_stop,
        (const Object*)this
    );
}

AudioStreamPlayer3D* AudioStreamPlayer3D::create() {
    return (AudioStreamPlayer3D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioStreamPlayer3D")()
         );
}

void AudioStreamPlayer3D::init_method_bindings() {
    method_bindings.mb__bus_layout_changed =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "_bus_layout_changed"
        );
    method_bindings.mb__is_active =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "_is_active"
        );
    method_bindings.mb__set_playing =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "_set_playing"
        );
    method_bindings.mb_get_area_mask =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "get_area_mask"
        );
    method_bindings.mb_get_attenuation_filter_cutoff_hz =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "get_attenuation_filter_cutoff_hz"
        );
    method_bindings.mb_get_attenuation_filter_db =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "get_attenuation_filter_db"
        );
    method_bindings.mb_get_attenuation_model =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "get_attenuation_model"
        );
    method_bindings.mb_get_bus =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "get_bus"
        );
    method_bindings.mb_get_doppler_tracking =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "get_doppler_tracking"
        );
    method_bindings.mb_get_emission_angle =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "get_emission_angle"
        );
    method_bindings.mb_get_emission_angle_filter_attenuation_db =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "get_emission_angle_filter_attenuation_db"
        );
    method_bindings.mb_get_max_db =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "get_max_db"
        );
    method_bindings.mb_get_max_distance =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "get_max_distance"
        );
    method_bindings.mb_get_out_of_range_mode =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "get_out_of_range_mode"
        );
    method_bindings.mb_get_pitch_scale =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "get_pitch_scale"
        );
    method_bindings.mb_get_playback_position =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "get_playback_position"
        );
    method_bindings.mb_get_stream =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "get_stream"
        );
    method_bindings.mb_get_stream_paused =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "get_stream_paused"
        );
    method_bindings.mb_get_stream_playback =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "get_stream_playback"
        );
    method_bindings.mb_get_unit_db =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "get_unit_db"
        );
    method_bindings.mb_get_unit_size =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "get_unit_size"
        );
    method_bindings.mb_is_autoplay_enabled =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "is_autoplay_enabled"
        );
    method_bindings.mb_is_emission_angle_enabled =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "is_emission_angle_enabled"
        );
    method_bindings.mb_is_playing =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "is_playing"
        );
    method_bindings.mb_play =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "play"
        );
    method_bindings.mb_seek =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "seek"
        );
    method_bindings.mb_set_area_mask =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "set_area_mask"
        );
    method_bindings.mb_set_attenuation_filter_cutoff_hz =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "set_attenuation_filter_cutoff_hz"
        );
    method_bindings.mb_set_attenuation_filter_db =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "set_attenuation_filter_db"
        );
    method_bindings.mb_set_attenuation_model =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "set_attenuation_model"
        );
    method_bindings.mb_set_autoplay =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "set_autoplay"
        );
    method_bindings.mb_set_bus =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "set_bus"
        );
    method_bindings.mb_set_doppler_tracking =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "set_doppler_tracking"
        );
    method_bindings.mb_set_emission_angle =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "set_emission_angle"
        );
    method_bindings.mb_set_emission_angle_enabled =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "set_emission_angle_enabled"
        );
    method_bindings.mb_set_emission_angle_filter_attenuation_db =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "set_emission_angle_filter_attenuation_db"
        );
    method_bindings.mb_set_max_db =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "set_max_db"
        );
    method_bindings.mb_set_max_distance =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "set_max_distance"
        );
    method_bindings.mb_set_out_of_range_mode =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "set_out_of_range_mode"
        );
    method_bindings.mb_set_pitch_scale =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "set_pitch_scale"
        );
    method_bindings.mb_set_stream =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "set_stream"
        );
    method_bindings.mb_set_stream_paused =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "set_stream_paused"
        );
    method_bindings.mb_set_unit_db =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "set_unit_db"
        );
    method_bindings.mb_set_unit_size =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "set_unit_size"
        );
    method_bindings.mb_stop =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer3D",
            "stop"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioStreamPlayer3D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioStreamPlayer3D::MethodBindings AudioStreamPlayer3D::method_bindings = {};
void* AudioStreamPlayer3D::class_tag = nullptr;
} // namespace Rebel
