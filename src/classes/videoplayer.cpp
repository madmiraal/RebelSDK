// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/videoplayer.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "classes/videostream.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t VideoPlayer::get_audio_track() const {
    return rebel_icall_int(
        method_bindings.mb_get_audio_track,
        (const Object*)this
    );
}

int64_t VideoPlayer::get_buffering_msec() const {
    return rebel_icall_int(
        method_bindings.mb_get_buffering_msec,
        (const Object*)this
    );
}

String VideoPlayer::get_bus() const {
    return rebel_icall_string(
        method_bindings.mb_get_bus,
        (const Object*)this
    );
}

Ref<VideoStream> VideoPlayer::get_stream() const {
    return Ref<VideoStream>::create_ref(rebel_icall_object(
        method_bindings.mb_get_stream,
        (const Object*)this
    ));
}

String VideoPlayer::get_stream_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_stream_name,
        (const Object*)this
    );
}

real_t VideoPlayer::get_stream_position() const {
    return rebel_icall_float(
        method_bindings.mb_get_stream_position,
        (const Object*)this
    );
}

Ref<Texture> VideoPlayer::get_video_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_video_texture,
        (const Object*)this
    ));
}

real_t VideoPlayer::get_volume() const {
    return rebel_icall_float(
        method_bindings.mb_get_volume,
        (const Object*)this
    );
}

real_t VideoPlayer::get_volume_db() const {
    return rebel_icall_float(
        method_bindings.mb_get_volume_db,
        (const Object*)this
    );
}

bool VideoPlayer::has_autoplay() const {
    return rebel_icall_bool(
        method_bindings.mb_has_autoplay,
        (const Object*)this
    );
}

bool VideoPlayer::has_expand() const {
    return rebel_icall_bool(
        method_bindings.mb_has_expand,
        (const Object*)this
    );
}

bool VideoPlayer::is_paused() const {
    return rebel_icall_bool(
        method_bindings.mb_is_paused,
        (const Object*)this
    );
}

bool VideoPlayer::is_playing() const {
    return rebel_icall_bool(
        method_bindings.mb_is_playing,
        (const Object*)this
    );
}

void VideoPlayer::play() {
    rebel_icall_void(
        method_bindings.mb_play,
        (const Object*)this
    );
}

void VideoPlayer::set_audio_track(const int64_t track) {
    rebel_icall_void_int(
        method_bindings.mb_set_audio_track,
        (const Object*)this,
        track
    );
}

void VideoPlayer::set_autoplay(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_autoplay,
        (const Object*)this,
        enabled
    );
}

void VideoPlayer::set_buffering_msec(const int64_t msec) {
    rebel_icall_void_int(
        method_bindings.mb_set_buffering_msec,
        (const Object*)this,
        msec
    );
}

void VideoPlayer::set_bus(const String bus) {
    rebel_icall_void_string(
        method_bindings.mb_set_bus,
        (const Object*)this,
        bus
    );
}

void VideoPlayer::set_expand(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_expand,
        (const Object*)this,
        enable
    );
}

void VideoPlayer::set_paused(const bool paused) {
    rebel_icall_void_bool(
        method_bindings.mb_set_paused,
        (const Object*)this,
        paused
    );
}

void VideoPlayer::set_stream(const Ref<VideoStream> stream) {
    rebel_icall_void_object(
        method_bindings.mb_set_stream,
        (const Object*)this,
        stream.ptr()
    );
}

void VideoPlayer::set_stream_position(const real_t position) {
    rebel_icall_void_float(
        method_bindings.mb_set_stream_position,
        (const Object*)this,
        position
    );
}

void VideoPlayer::set_volume(const real_t volume) {
    rebel_icall_void_float(
        method_bindings.mb_set_volume,
        (const Object*)this,
        volume
    );
}

void VideoPlayer::set_volume_db(const real_t db) {
    rebel_icall_void_float(
        method_bindings.mb_set_volume_db,
        (const Object*)this,
        db
    );
}

void VideoPlayer::stop() {
    rebel_icall_void(
        method_bindings.mb_stop,
        (const Object*)this
    );
}

VideoPlayer* VideoPlayer::create() {
    return (VideoPlayer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VideoPlayer")()
         );
}

void VideoPlayer::init_method_bindings() {
    method_bindings.mb_get_audio_track =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "get_audio_track"
        );
    method_bindings.mb_get_buffering_msec =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "get_buffering_msec"
        );
    method_bindings.mb_get_bus =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "get_bus"
        );
    method_bindings.mb_get_stream =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "get_stream"
        );
    method_bindings.mb_get_stream_name =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "get_stream_name"
        );
    method_bindings.mb_get_stream_position =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "get_stream_position"
        );
    method_bindings.mb_get_video_texture =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "get_video_texture"
        );
    method_bindings.mb_get_volume =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "get_volume"
        );
    method_bindings.mb_get_volume_db =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "get_volume_db"
        );
    method_bindings.mb_has_autoplay =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "has_autoplay"
        );
    method_bindings.mb_has_expand =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "has_expand"
        );
    method_bindings.mb_is_paused =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "is_paused"
        );
    method_bindings.mb_is_playing =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "is_playing"
        );
    method_bindings.mb_play =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "play"
        );
    method_bindings.mb_set_audio_track =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "set_audio_track"
        );
    method_bindings.mb_set_autoplay =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "set_autoplay"
        );
    method_bindings.mb_set_buffering_msec =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "set_buffering_msec"
        );
    method_bindings.mb_set_bus =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "set_bus"
        );
    method_bindings.mb_set_expand =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "set_expand"
        );
    method_bindings.mb_set_paused =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "set_paused"
        );
    method_bindings.mb_set_stream =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "set_stream"
        );
    method_bindings.mb_set_stream_position =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "set_stream_position"
        );
    method_bindings.mb_set_volume =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "set_volume"
        );
    method_bindings.mb_set_volume_db =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "set_volume_db"
        );
    method_bindings.mb_stop =
        api->rebel_method_bind_get_method(
            "VideoPlayer",
            "stop"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VideoPlayer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VideoPlayer::MethodBindings VideoPlayer::method_bindings = {};
void* VideoPlayer::class_tag = nullptr;
} // namespace Rebel
