// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VIDEOPLAYER_H
#define REBEL_VIDEOPLAYER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/control.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Texture;
class VideoStream;

class VideoPlayer : public Control {
public:
    int64_t get_audio_track() const;
    int64_t get_buffering_msec() const;
    String get_bus() const;
    Ref<VideoStream> get_stream() const;
    String get_stream_name() const;
    real_t get_stream_position() const;
    Ref<Texture> get_video_texture() const;
    real_t get_volume() const;
    real_t get_volume_db() const;
    bool has_autoplay() const;
    bool has_expand() const;
    bool is_paused() const;
    bool is_playing() const;
    void play();
    void set_audio_track(const int64_t track);
    void set_autoplay(const bool enabled);
    void set_buffering_msec(const int64_t msec);
    void set_bus(const String bus);
    void set_expand(const bool enable);
    void set_paused(const bool paused);
    void set_stream(const Ref<VideoStream> stream);
    void set_stream_position(const real_t position);
    void set_volume(const real_t volume);
    void set_volume_db(const real_t db);
    void stop();

    static VideoPlayer* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VideoPlayer";
    }

    inline static const char* get_rebel_class_name() {
        return "VideoPlayer";
    }

    inline static Object* from_variant(Variant variant) {
        rebel_object* object = (rebel_object*)variant;
        if (!object) {
            return nullptr;
        }
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                object
            );
    }

private:
    struct MethodBindings {
        rebel_method_bind* mb_get_audio_track;
        rebel_method_bind* mb_get_buffering_msec;
        rebel_method_bind* mb_get_bus;
        rebel_method_bind* mb_get_stream;
        rebel_method_bind* mb_get_stream_name;
        rebel_method_bind* mb_get_stream_position;
        rebel_method_bind* mb_get_video_texture;
        rebel_method_bind* mb_get_volume;
        rebel_method_bind* mb_get_volume_db;
        rebel_method_bind* mb_has_autoplay;
        rebel_method_bind* mb_has_expand;
        rebel_method_bind* mb_is_paused;
        rebel_method_bind* mb_is_playing;
        rebel_method_bind* mb_play;
        rebel_method_bind* mb_set_audio_track;
        rebel_method_bind* mb_set_autoplay;
        rebel_method_bind* mb_set_buffering_msec;
        rebel_method_bind* mb_set_bus;
        rebel_method_bind* mb_set_expand;
        rebel_method_bind* mb_set_paused;
        rebel_method_bind* mb_set_stream;
        rebel_method_bind* mb_set_stream_position;
        rebel_method_bind* mb_set_volume;
        rebel_method_bind* mb_set_volume_db;
        rebel_method_bind* mb_stop;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VIDEOPLAYER_H
