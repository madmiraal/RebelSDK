// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOSERVER_H
#define REBEL_AUDIOSERVER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioBusLayout;
class AudioEffect;
class AudioEffectInstance;

class AudioServer : public Object {
public:
    enum SpeakerMode {
        SPEAKER_MODE_STEREO = 0,
        SPEAKER_SURROUND_31 = 1,
        SPEAKER_SURROUND_51 = 2,
        SPEAKER_SURROUND_71 = 3,
    };

    void add_bus(const int64_t at_position = -1);
    void add_bus_effect(const int64_t bus_idx, const Ref<AudioEffect> effect, const int64_t at_position = -1);
    String capture_get_device();
    Array capture_get_device_list();
    void capture_set_device(const String name);
    Ref<AudioBusLayout> generate_bus_layout() const;
    int64_t get_bus_channels(const int64_t bus_idx) const;
    int64_t get_bus_count() const;
    Ref<AudioEffect> get_bus_effect(const int64_t bus_idx, const int64_t effect_idx);
    int64_t get_bus_effect_count(const int64_t bus_idx);
    Ref<AudioEffectInstance> get_bus_effect_instance(const int64_t bus_idx, const int64_t effect_idx, const int64_t channel = 0);
    int64_t get_bus_index(const String bus_name) const;
    String get_bus_name(const int64_t bus_idx) const;
    real_t get_bus_peak_volume_left_db(const int64_t bus_idx, const int64_t channel) const;
    real_t get_bus_peak_volume_right_db(const int64_t bus_idx, const int64_t channel) const;
    String get_bus_send(const int64_t bus_idx) const;
    real_t get_bus_volume_db(const int64_t bus_idx) const;
    String get_device();
    Array get_device_list();
    real_t get_global_rate_scale() const;
    real_t get_mix_rate() const;
    real_t get_output_latency() const;
    AudioServer::SpeakerMode get_speaker_mode() const;
    real_t get_time_since_last_mix() const;
    real_t get_time_to_next_mix() const;
    bool is_bus_bypassing_effects(const int64_t bus_idx) const;
    bool is_bus_effect_enabled(const int64_t bus_idx, const int64_t effect_idx) const;
    bool is_bus_mute(const int64_t bus_idx) const;
    bool is_bus_solo(const int64_t bus_idx) const;
    void lock();
    void move_bus(const int64_t index, const int64_t to_index);
    void remove_bus(const int64_t index);
    void remove_bus_effect(const int64_t bus_idx, const int64_t effect_idx);
    void set_bus_bypass_effects(const int64_t bus_idx, const bool enable);
    void set_bus_count(const int64_t amount);
    void set_bus_effect_enabled(const int64_t bus_idx, const int64_t effect_idx, const bool enabled);
    void set_bus_layout(const Ref<AudioBusLayout> bus_layout);
    void set_bus_mute(const int64_t bus_idx, const bool enable);
    void set_bus_name(const int64_t bus_idx, const String name);
    void set_bus_send(const int64_t bus_idx, const String send);
    void set_bus_solo(const int64_t bus_idx, const bool enable);
    void set_bus_volume_db(const int64_t bus_idx, const real_t volume_db);
    void set_device(const String device);
    void set_global_rate_scale(const real_t scale);
    void swap_bus_effects(const int64_t bus_idx, const int64_t effect_idx, const int64_t by_effect_idx);
    void unlock();

    static inline AudioServer* get_singleton() {
        if (!AudioServer::singleton) {
            AudioServer::singleton = new AudioServer;
        }
        return AudioServer::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioServer";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioServer";
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
    AudioServer();
    static AudioServer* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_add_bus;
        rebel_method_bind* mb_add_bus_effect;
        rebel_method_bind* mb_capture_get_device;
        rebel_method_bind* mb_capture_get_device_list;
        rebel_method_bind* mb_capture_set_device;
        rebel_method_bind* mb_generate_bus_layout;
        rebel_method_bind* mb_get_bus_channels;
        rebel_method_bind* mb_get_bus_count;
        rebel_method_bind* mb_get_bus_effect;
        rebel_method_bind* mb_get_bus_effect_count;
        rebel_method_bind* mb_get_bus_effect_instance;
        rebel_method_bind* mb_get_bus_index;
        rebel_method_bind* mb_get_bus_name;
        rebel_method_bind* mb_get_bus_peak_volume_left_db;
        rebel_method_bind* mb_get_bus_peak_volume_right_db;
        rebel_method_bind* mb_get_bus_send;
        rebel_method_bind* mb_get_bus_volume_db;
        rebel_method_bind* mb_get_device;
        rebel_method_bind* mb_get_device_list;
        rebel_method_bind* mb_get_global_rate_scale;
        rebel_method_bind* mb_get_mix_rate;
        rebel_method_bind* mb_get_output_latency;
        rebel_method_bind* mb_get_speaker_mode;
        rebel_method_bind* mb_get_time_since_last_mix;
        rebel_method_bind* mb_get_time_to_next_mix;
        rebel_method_bind* mb_is_bus_bypassing_effects;
        rebel_method_bind* mb_is_bus_effect_enabled;
        rebel_method_bind* mb_is_bus_mute;
        rebel_method_bind* mb_is_bus_solo;
        rebel_method_bind* mb_lock;
        rebel_method_bind* mb_move_bus;
        rebel_method_bind* mb_remove_bus;
        rebel_method_bind* mb_remove_bus_effect;
        rebel_method_bind* mb_set_bus_bypass_effects;
        rebel_method_bind* mb_set_bus_count;
        rebel_method_bind* mb_set_bus_effect_enabled;
        rebel_method_bind* mb_set_bus_layout;
        rebel_method_bind* mb_set_bus_mute;
        rebel_method_bind* mb_set_bus_name;
        rebel_method_bind* mb_set_bus_send;
        rebel_method_bind* mb_set_bus_solo;
        rebel_method_bind* mb_set_bus_volume_db;
        rebel_method_bind* mb_set_device;
        rebel_method_bind* mb_set_global_rate_scale;
        rebel_method_bind* mb_swap_bus_effects;
        rebel_method_bind* mb_unlock;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOSERVER_H
