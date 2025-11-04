// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOSTREAMPLAYER3D_H
#define REBEL_AUDIOSTREAMPLAYER3D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioStream;
class AudioStreamPlayback;

class AudioStreamPlayer3D : public Spatial {
public:
    enum AttenuationModel {
        ATTENUATION_INVERSE_DISTANCE = 0,
        ATTENUATION_INVERSE_SQUARE_DISTANCE = 1,
        ATTENUATION_LOGARITHMIC = 2,
        ATTENUATION_DISABLED = 3,
    };

    enum OutOfRangeMode {
        OUT_OF_RANGE_MIX = 0,
        OUT_OF_RANGE_PAUSE = 1,
    };

    enum DopplerTracking {
        DOPPLER_TRACKING_DISABLED = 0,
        DOPPLER_TRACKING_IDLE_STEP = 1,
        DOPPLER_TRACKING_PHYSICS_STEP = 2,
    };

    void _bus_layout_changed();
    bool _is_active() const;
    void _set_playing(const bool enable);
    int64_t get_area_mask() const;
    real_t get_attenuation_filter_cutoff_hz() const;
    real_t get_attenuation_filter_db() const;
    AudioStreamPlayer3D::AttenuationModel get_attenuation_model() const;
    String get_bus() const;
    AudioStreamPlayer3D::DopplerTracking get_doppler_tracking() const;
    real_t get_emission_angle() const;
    real_t get_emission_angle_filter_attenuation_db() const;
    real_t get_max_db() const;
    real_t get_max_distance() const;
    AudioStreamPlayer3D::OutOfRangeMode get_out_of_range_mode() const;
    real_t get_pitch_scale() const;
    real_t get_playback_position();
    Ref<AudioStream> get_stream() const;
    bool get_stream_paused() const;
    Ref<AudioStreamPlayback> get_stream_playback();
    real_t get_unit_db() const;
    real_t get_unit_size() const;
    bool is_autoplay_enabled();
    bool is_emission_angle_enabled() const;
    bool is_playing() const;
    void play(const real_t from_position = 0);
    void seek(const real_t to_position);
    void set_area_mask(const int64_t mask);
    void set_attenuation_filter_cutoff_hz(const real_t degrees);
    void set_attenuation_filter_db(const real_t db);
    void set_attenuation_model(const int64_t model);
    void set_autoplay(const bool enable);
    void set_bus(const String bus);
    void set_doppler_tracking(const int64_t mode);
    void set_emission_angle(const real_t degrees);
    void set_emission_angle_enabled(const bool enabled);
    void set_emission_angle_filter_attenuation_db(const real_t db);
    void set_max_db(const real_t max_db);
    void set_max_distance(const real_t metres);
    void set_out_of_range_mode(const int64_t mode);
    void set_pitch_scale(const real_t pitch_scale);
    void set_stream(const Ref<AudioStream> stream);
    void set_stream_paused(const bool pause);
    void set_unit_db(const real_t unit_db);
    void set_unit_size(const real_t unit_size);
    void stop();

    static AudioStreamPlayer3D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioStreamPlayer3D";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioStreamPlayer3D";
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
        rebel_method_bind* mb_get_attenuation_filter_cutoff_hz;
        rebel_method_bind* mb_get_attenuation_filter_db;
        rebel_method_bind* mb_get_attenuation_model;
        rebel_method_bind* mb_get_bus;
        rebel_method_bind* mb_get_doppler_tracking;
        rebel_method_bind* mb_get_emission_angle;
        rebel_method_bind* mb_get_emission_angle_filter_attenuation_db;
        rebel_method_bind* mb_get_max_db;
        rebel_method_bind* mb_get_max_distance;
        rebel_method_bind* mb_get_out_of_range_mode;
        rebel_method_bind* mb_get_pitch_scale;
        rebel_method_bind* mb_get_playback_position;
        rebel_method_bind* mb_get_stream;
        rebel_method_bind* mb_get_stream_paused;
        rebel_method_bind* mb_get_stream_playback;
        rebel_method_bind* mb_get_unit_db;
        rebel_method_bind* mb_get_unit_size;
        rebel_method_bind* mb_is_autoplay_enabled;
        rebel_method_bind* mb_is_emission_angle_enabled;
        rebel_method_bind* mb_is_playing;
        rebel_method_bind* mb_play;
        rebel_method_bind* mb_seek;
        rebel_method_bind* mb_set_area_mask;
        rebel_method_bind* mb_set_attenuation_filter_cutoff_hz;
        rebel_method_bind* mb_set_attenuation_filter_db;
        rebel_method_bind* mb_set_attenuation_model;
        rebel_method_bind* mb_set_autoplay;
        rebel_method_bind* mb_set_bus;
        rebel_method_bind* mb_set_doppler_tracking;
        rebel_method_bind* mb_set_emission_angle;
        rebel_method_bind* mb_set_emission_angle_enabled;
        rebel_method_bind* mb_set_emission_angle_filter_attenuation_db;
        rebel_method_bind* mb_set_max_db;
        rebel_method_bind* mb_set_max_distance;
        rebel_method_bind* mb_set_out_of_range_mode;
        rebel_method_bind* mb_set_pitch_scale;
        rebel_method_bind* mb_set_stream;
        rebel_method_bind* mb_set_stream_paused;
        rebel_method_bind* mb_set_unit_db;
        rebel_method_bind* mb_set_unit_size;
        rebel_method_bind* mb_stop;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOSTREAMPLAYER3D_H
