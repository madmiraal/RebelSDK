// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOSTREAMPLAYER_H
#define REBEL_AUDIOSTREAMPLAYER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioStream;
class AudioStreamPlayback;

class AudioStreamPlayer : public Node {
public:
    enum MixTarget {
        MIX_TARGET_STEREO = 0,
        MIX_TARGET_SURROUND = 1,
        MIX_TARGET_CENTER = 2,
    };

    void _bus_layout_changed();
    bool _is_active() const;
    void _set_playing(const bool enable);
    String get_bus() const;
    AudioStreamPlayer::MixTarget get_mix_target() const;
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
    void set_autoplay(const bool enable);
    void set_bus(const String bus);
    void set_mix_target(const int64_t mix_target);
    void set_pitch_scale(const real_t pitch_scale);
    void set_stream(const Ref<AudioStream> stream);
    void set_stream_paused(const bool pause);
    void set_volume_db(const real_t volume_db);
    void stop();

    static AudioStreamPlayer* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioStreamPlayer";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioStreamPlayer";
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
        rebel_method_bind* mb_get_bus;
        rebel_method_bind* mb_get_mix_target;
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
        rebel_method_bind* mb_set_autoplay;
        rebel_method_bind* mb_set_bus;
        rebel_method_bind* mb_set_mix_target;
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

#endif // REBEL_AUDIOSTREAMPLAYER_H
