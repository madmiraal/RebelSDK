// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_INPUT_H
#define REBEL_INPUT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;
class Resource;

class Input : public Object {
public:
    enum MouseMode {
        MOUSE_MODE_VISIBLE = 0,
        MOUSE_MODE_HIDDEN = 1,
        MOUSE_MODE_CAPTURED = 2,
        MOUSE_MODE_CONFINED = 3,
    };

    enum CursorShape {
        CURSOR_ARROW = 0,
        CURSOR_IBEAM = 1,
        CURSOR_POINTING_HAND = 2,
        CURSOR_CROSS = 3,
        CURSOR_WAIT = 4,
        CURSOR_BUSY = 5,
        CURSOR_DRAG = 6,
        CURSOR_CAN_DROP = 7,
        CURSOR_FORBIDDEN = 8,
        CURSOR_VSIZE = 9,
        CURSOR_HSIZE = 10,
        CURSOR_BDIAGSIZE = 11,
        CURSOR_FDIAGSIZE = 12,
        CURSOR_MOVE = 13,
        CURSOR_VSPLIT = 14,
        CURSOR_HSPLIT = 15,
        CURSOR_HELP = 16,
    };

    void action_press(const String action, const real_t strength = 1);
    void action_release(const String action);
    void add_joy_mapping(const String mapping, const bool update_existing = false);
    void flush_buffered_events();
    Vector3 get_accelerometer() const;
    real_t get_action_raw_strength(const String action, const bool exact = false) const;
    real_t get_action_strength(const String action, const bool exact = false) const;
    real_t get_axis(const String negative_action, const String positive_action) const;
    Array get_connected_joypads();
    Input::CursorShape get_current_cursor_shape() const;
    Vector3 get_gravity() const;
    Vector3 get_gyroscope() const;
    real_t get_joy_axis(const int64_t device, const int64_t axis) const;
    int64_t get_joy_axis_index_from_string(const String axis);
    String get_joy_axis_string(const int64_t axis_index);
    int64_t get_joy_button_index_from_string(const String button);
    String get_joy_button_string(const int64_t button_index);
    String get_joy_guid(const int64_t device) const;
    String get_joy_name(const int64_t device);
    real_t get_joy_vibration_duration(const int64_t device);
    Vector2 get_joy_vibration_strength(const int64_t device);
    Vector2 get_last_mouse_speed() const;
    Vector3 get_magnetometer() const;
    int64_t get_mouse_button_mask() const;
    Input::MouseMode get_mouse_mode() const;
    Vector2 get_vector(const String negative_x, const String positive_x, const String negative_y, const String positive_y, const real_t deadzone = -1) const;
    bool is_action_just_pressed(const String action, const bool exact = false) const;
    bool is_action_just_released(const String action, const bool exact = false) const;
    bool is_action_pressed(const String action, const bool exact = false) const;
    bool is_joy_button_pressed(const int64_t device, const int64_t button) const;
    bool is_joy_known(const int64_t device);
    bool is_key_pressed(const int64_t scancode) const;
    bool is_mouse_button_pressed(const int64_t button) const;
    bool is_physical_key_pressed(const int64_t scancode) const;
    void joy_connection_changed(const int64_t device, const bool connected, const String name, const String guid);
    void parse_input_event(const Ref<InputEvent> event);
    void remove_joy_mapping(const String guid);
    void set_accelerometer(const Vector3 value);
    void set_custom_mouse_cursor(const Ref<Resource> image, const int64_t shape = 0, const Vector2 hotspot = Vector2(0, 0));
    void set_default_cursor_shape(const int64_t shape = 0);
    void set_gravity(const Vector3 value);
    void set_gyroscope(const Vector3 value);
    void set_magnetometer(const Vector3 value);
    void set_mouse_mode(const int64_t mode);
    void set_use_accumulated_input(const bool enable);
    void start_joy_vibration(const int64_t device, const real_t weak_magnitude, const real_t strong_magnitude, const real_t duration = 0);
    void stop_joy_vibration(const int64_t device);
    void vibrate_handheld(const int64_t duration_ms = 500);
    void warp_mouse_position(const Vector2 to);

    static inline Input* get_singleton() {
        if (!Input::singleton) {
            Input::singleton = new Input;
        }
        return Input::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Input";
    }

    inline static const char* get_rebel_class_name() {
        return "Input";
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
    Input();
    static Input* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_action_press;
        rebel_method_bind* mb_action_release;
        rebel_method_bind* mb_add_joy_mapping;
        rebel_method_bind* mb_flush_buffered_events;
        rebel_method_bind* mb_get_accelerometer;
        rebel_method_bind* mb_get_action_raw_strength;
        rebel_method_bind* mb_get_action_strength;
        rebel_method_bind* mb_get_axis;
        rebel_method_bind* mb_get_connected_joypads;
        rebel_method_bind* mb_get_current_cursor_shape;
        rebel_method_bind* mb_get_gravity;
        rebel_method_bind* mb_get_gyroscope;
        rebel_method_bind* mb_get_joy_axis;
        rebel_method_bind* mb_get_joy_axis_index_from_string;
        rebel_method_bind* mb_get_joy_axis_string;
        rebel_method_bind* mb_get_joy_button_index_from_string;
        rebel_method_bind* mb_get_joy_button_string;
        rebel_method_bind* mb_get_joy_guid;
        rebel_method_bind* mb_get_joy_name;
        rebel_method_bind* mb_get_joy_vibration_duration;
        rebel_method_bind* mb_get_joy_vibration_strength;
        rebel_method_bind* mb_get_last_mouse_speed;
        rebel_method_bind* mb_get_magnetometer;
        rebel_method_bind* mb_get_mouse_button_mask;
        rebel_method_bind* mb_get_mouse_mode;
        rebel_method_bind* mb_get_vector;
        rebel_method_bind* mb_is_action_just_pressed;
        rebel_method_bind* mb_is_action_just_released;
        rebel_method_bind* mb_is_action_pressed;
        rebel_method_bind* mb_is_joy_button_pressed;
        rebel_method_bind* mb_is_joy_known;
        rebel_method_bind* mb_is_key_pressed;
        rebel_method_bind* mb_is_mouse_button_pressed;
        rebel_method_bind* mb_is_physical_key_pressed;
        rebel_method_bind* mb_joy_connection_changed;
        rebel_method_bind* mb_parse_input_event;
        rebel_method_bind* mb_remove_joy_mapping;
        rebel_method_bind* mb_set_accelerometer;
        rebel_method_bind* mb_set_custom_mouse_cursor;
        rebel_method_bind* mb_set_default_cursor_shape;
        rebel_method_bind* mb_set_gravity;
        rebel_method_bind* mb_set_gyroscope;
        rebel_method_bind* mb_set_magnetometer;
        rebel_method_bind* mb_set_mouse_mode;
        rebel_method_bind* mb_set_use_accumulated_input;
        rebel_method_bind* mb_start_joy_vibration;
        rebel_method_bind* mb_stop_joy_vibration;
        rebel_method_bind* mb_vibrate_handheld;
        rebel_method_bind* mb_warp_mouse_position;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_INPUT_H
