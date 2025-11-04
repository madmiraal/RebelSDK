// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audiostreamplayer.h"

#include "classes/audiostream.h"
#include "classes/audiostreamplayback.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void AudioStreamPlayer::_bus_layout_changed() {
    rebel_icall_void(
        method_bindings.mb__bus_layout_changed,
        (const Object*)this
    );
}

bool AudioStreamPlayer::_is_active() const {
    return rebel_icall_bool(
        method_bindings.mb__is_active,
        (const Object*)this
    );
}

void AudioStreamPlayer::_set_playing(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb__set_playing,
        (const Object*)this,
        enable
    );
}

String AudioStreamPlayer::get_bus() const {
    return rebel_icall_string(
        method_bindings.mb_get_bus,
        (const Object*)this
    );
}

AudioStreamPlayer::MixTarget AudioStreamPlayer::get_mix_target() const {
    return (AudioStreamPlayer::MixTarget)rebel_icall_int(
        method_bindings.mb_get_mix_target,
        (const Object*)this
    );
}

real_t AudioStreamPlayer::get_pitch_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_pitch_scale,
        (const Object*)this
    );
}

real_t AudioStreamPlayer::get_playback_position() {
    return rebel_icall_float(
        method_bindings.mb_get_playback_position,
        (const Object*)this
    );
}

Ref<AudioStream> AudioStreamPlayer::get_stream() const {
    return Ref<AudioStream>::create_ref(rebel_icall_object(
        method_bindings.mb_get_stream,
        (const Object*)this
    ));
}

bool AudioStreamPlayer::get_stream_paused() const {
    return rebel_icall_bool(
        method_bindings.mb_get_stream_paused,
        (const Object*)this
    );
}

Ref<AudioStreamPlayback> AudioStreamPlayer::get_stream_playback() {
    return Ref<AudioStreamPlayback>::create_ref(rebel_icall_object(
        method_bindings.mb_get_stream_playback,
        (const Object*)this
    ));
}

real_t AudioStreamPlayer::get_volume_db() const {
    return rebel_icall_float(
        method_bindings.mb_get_volume_db,
        (const Object*)this
    );
}

bool AudioStreamPlayer::is_autoplay_enabled() {
    return rebel_icall_bool(
        method_bindings.mb_is_autoplay_enabled,
        (const Object*)this
    );
}

bool AudioStreamPlayer::is_playing() const {
    return rebel_icall_bool(
        method_bindings.mb_is_playing,
        (const Object*)this
    );
}

void AudioStreamPlayer::play(const real_t from_position) {
    rebel_icall_void_float(
        method_bindings.mb_play,
        (const Object*)this,
        from_position
    );
}

void AudioStreamPlayer::seek(const real_t to_position) {
    rebel_icall_void_float(
        method_bindings.mb_seek,
        (const Object*)this,
        to_position
    );
}

void AudioStreamPlayer::set_autoplay(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_autoplay,
        (const Object*)this,
        enable
    );
}

void AudioStreamPlayer::set_bus(const String bus) {
    rebel_icall_void_string(
        method_bindings.mb_set_bus,
        (const Object*)this,
        bus
    );
}

void AudioStreamPlayer::set_mix_target(const int64_t mix_target) {
    rebel_icall_void_int(
        method_bindings.mb_set_mix_target,
        (const Object*)this,
        mix_target
    );
}

void AudioStreamPlayer::set_pitch_scale(const real_t pitch_scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_pitch_scale,
        (const Object*)this,
        pitch_scale
    );
}

void AudioStreamPlayer::set_stream(const Ref<AudioStream> stream) {
    rebel_icall_void_object(
        method_bindings.mb_set_stream,
        (const Object*)this,
        stream.ptr()
    );
}

void AudioStreamPlayer::set_stream_paused(const bool pause) {
    rebel_icall_void_bool(
        method_bindings.mb_set_stream_paused,
        (const Object*)this,
        pause
    );
}

void AudioStreamPlayer::set_volume_db(const real_t volume_db) {
    rebel_icall_void_float(
        method_bindings.mb_set_volume_db,
        (const Object*)this,
        volume_db
    );
}

void AudioStreamPlayer::stop() {
    rebel_icall_void(
        method_bindings.mb_stop,
        (const Object*)this
    );
}

AudioStreamPlayer* AudioStreamPlayer::create() {
    return (AudioStreamPlayer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioStreamPlayer")()
         );
}

void AudioStreamPlayer::init_method_bindings() {
    method_bindings.mb__bus_layout_changed =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "_bus_layout_changed"
        );
    method_bindings.mb__is_active =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "_is_active"
        );
    method_bindings.mb__set_playing =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "_set_playing"
        );
    method_bindings.mb_get_bus =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "get_bus"
        );
    method_bindings.mb_get_mix_target =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "get_mix_target"
        );
    method_bindings.mb_get_pitch_scale =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "get_pitch_scale"
        );
    method_bindings.mb_get_playback_position =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "get_playback_position"
        );
    method_bindings.mb_get_stream =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "get_stream"
        );
    method_bindings.mb_get_stream_paused =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "get_stream_paused"
        );
    method_bindings.mb_get_stream_playback =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "get_stream_playback"
        );
    method_bindings.mb_get_volume_db =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "get_volume_db"
        );
    method_bindings.mb_is_autoplay_enabled =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "is_autoplay_enabled"
        );
    method_bindings.mb_is_playing =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "is_playing"
        );
    method_bindings.mb_play =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "play"
        );
    method_bindings.mb_seek =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "seek"
        );
    method_bindings.mb_set_autoplay =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "set_autoplay"
        );
    method_bindings.mb_set_bus =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "set_bus"
        );
    method_bindings.mb_set_mix_target =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "set_mix_target"
        );
    method_bindings.mb_set_pitch_scale =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "set_pitch_scale"
        );
    method_bindings.mb_set_stream =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "set_stream"
        );
    method_bindings.mb_set_stream_paused =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "set_stream_paused"
        );
    method_bindings.mb_set_volume_db =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "set_volume_db"
        );
    method_bindings.mb_stop =
        api->rebel_method_bind_get_method(
            "AudioStreamPlayer",
            "stop"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioStreamPlayer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioStreamPlayer::MethodBindings AudioStreamPlayer::method_bindings = {};
void* AudioStreamPlayer::class_tag = nullptr;
} // namespace Rebel
