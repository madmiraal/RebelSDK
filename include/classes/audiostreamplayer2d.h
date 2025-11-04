// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOSTREAMPLAYER2D_H
#define REBEL_AUDIOSTREAMPLAYER2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioStream;
class AudioStreamPlayback;

class AudioStreamPlayer2D : public Node2D {
public:
    void _bus_layout_changed();
    bool _is_active() const;
    void _set_playing(const bool enable);
    int64_t get_area_mask() const;
    real_t get_attenuation() const;
    String get_bus() const;
    real_t get_max_distance() const;
    real_t get_pitch_scale() const;
    real_t get_playback_position();
    Ref<AudioStream> get_stream() const;
    bool get_stream_paused() const;
    Ref<AudioStreamPlayback> get_stream_playback();
    real_t get_volume_db() const;
    bool is_autoplay_enabled();
    bool is_playing() const;
    void play(const real_t from_position = 0);
    void seek(const real_t to_position);
    void set_area_mask(const int64_t mask);
    void set_attenuation(const real_t curve);
    void set_autoplay(const bool enable);
    void set_bus(const String bus);
    void set_max_distance(const real_t pixels);
    void set_pitch_scale(const real_t pitch_scale);
    void set_stream(const Ref<AudioStream> stream);
    void set_stream_paused(const bool pause);
    void set_volume_db(const real_t volume_db);
    void stop();

    static AudioStreamPlayer2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioStreamPlayer2D";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioStreamPlayer2D";
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
        rebel_method_bind* mb__bus_layout_changed;
        rebel_method_bind* mb__is_active;
        rebel_method_bind* mb__set_playing;
        rebel_method_bind* mb_get_area_mask;
        rebel_method_bind* mb_get_attenuation;
        rebel_method_bind* mb_get_bus;
        rebel_method_bind* mb_get_max_distance;
        rebel_method_bind* mb_get_pitch_scale;
        rebel_method_bind* mb_get_playback_position;
        rebel_method_bind* mb_get_stream;
        rebel_method_bind* mb_get_stream_paused;
        rebel_method_bind* mb_get_stream_playback;
        rebel_method_bind* mb_get_volume_db;
        rebel_method_bind* mb_is_autoplay_enabled;
        rebel_method_bind* mb_is_playing;
        rebel_method_bind* mb_play;
        rebel_method_bind* mb_seek;
        rebel_method_bind* mb_set_area_mask;
        rebel_method_bind* mb_set_attenuation;
        rebel_method_bind* mb_set_autoplay;
        rebel_method_bind* mb_set_bus;
        rebel_method_bind* mb_set_max_distance;
        rebel_method_bind* mb_set_pitch_scale;
        rebel_method_bind* mb_set_stream;
        rebel_method_bind* mb_set_stream_paused;
        rebel_method_bind* mb_set_volume_db;
        rebel_method_bind* mb_stop;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOSTREAMPLAYER2D_H
