// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_INPUTEVENTMIDI_H
#define REBEL_INPUTEVENTMIDI_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/inputevent.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEventMIDI : public InputEvent {
public:
    int64_t get_channel() const;
    int64_t get_controller_number() const;
    int64_t get_controller_value() const;
    int64_t get_instrument() const;
    int64_t get_message() const;
    int64_t get_pitch() const;
    int64_t get_pressure() const;
    int64_t get_velocity() const;
    void set_channel(const int64_t channel);
    void set_controller_number(const int64_t controller_number);
    void set_controller_value(const int64_t controller_value);
    void set_instrument(const int64_t instrument);
    void set_message(const int64_t message);
    void set_pitch(const int64_t pitch);
    void set_pressure(const int64_t pressure);
    void set_velocity(const int64_t velocity);

    static InputEventMIDI* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "InputEventMIDI";
    }

    inline static const char* get_rebel_class_name() {
        return "InputEventMIDI";
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
        rebel_method_bind* mb_get_channel;
        rebel_method_bind* mb_get_controller_number;
        rebel_method_bind* mb_get_controller_value;
        rebel_method_bind* mb_get_instrument;
        rebel_method_bind* mb_get_message;
        rebel_method_bind* mb_get_pitch;
        rebel_method_bind* mb_get_pressure;
        rebel_method_bind* mb_get_velocity;
        rebel_method_bind* mb_set_channel;
        rebel_method_bind* mb_set_controller_number;
        rebel_method_bind* mb_set_controller_value;
        rebel_method_bind* mb_set_instrument;
        rebel_method_bind* mb_set_message;
        rebel_method_bind* mb_set_pitch;
        rebel_method_bind* mb_set_pressure;
        rebel_method_bind* mb_set_velocity;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_INPUTEVENTMIDI_H
