// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/input.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/resource.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Input::action_press(const String action, const real_t strength) {
    rebel_icall_void_string_float(
        method_bindings.mb_action_press,
        (const Object*)this,
        action,
        strength
    );
}

void Input::action_release(const String action) {
    rebel_icall_void_string(
        method_bindings.mb_action_release,
        (const Object*)this,
        action
    );
}

void Input::add_joy_mapping(const String mapping, const bool update_existing) {
    rebel_icall_void_string_bool(
        method_bindings.mb_add_joy_mapping,
        (const Object*)this,
        mapping,
        update_existing
    );
}

void Input::flush_buffered_events() {
    rebel_icall_void(
        method_bindings.mb_flush_buffered_events,
        (const Object*)this
    );
}

Vector3 Input::get_accelerometer() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_accelerometer,
        (const Object*)this
    );
}

real_t Input::get_action_raw_strength(const String action, const bool exact) const {
    return rebel_icall_float_string_bool(
        method_bindings.mb_get_action_raw_strength,
        (const Object*)this,
        action,
        exact
    );
}

real_t Input::get_action_strength(const String action, const bool exact) const {
    return rebel_icall_float_string_bool(
        method_bindings.mb_get_action_strength,
        (const Object*)this,
        action,
        exact
    );
}

real_t Input::get_axis(const String negative_action, const String positive_action) const {
    return rebel_icall_float_string_string(
        method_bindings.mb_get_axis,
        (const Object*)this,
        negative_action,
        positive_action
    );
}

Array Input::get_connected_joypads() {
    return rebel_icall_array(
        method_bindings.mb_get_connected_joypads,
        (const Object*)this
    );
}

Input::CursorShape Input::get_current_cursor_shape() const {
    return (Input::CursorShape)rebel_icall_int(
        method_bindings.mb_get_current_cursor_shape,
        (const Object*)this
    );
}

Vector3 Input::get_gravity() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_gravity,
        (const Object*)this
    );
}

Vector3 Input::get_gyroscope() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_gyroscope,
        (const Object*)this
    );
}

real_t Input::get_joy_axis(const int64_t device, const int64_t axis) const {
    return rebel_icall_float_int_int(
        method_bindings.mb_get_joy_axis,
        (const Object*)this,
        device,
        axis
    );
}

int64_t Input::get_joy_axis_index_from_string(const String axis) {
    return rebel_icall_int_string(
        method_bindings.mb_get_joy_axis_index_from_string,
        (const Object*)this,
        axis
    );
}

String Input::get_joy_axis_string(const int64_t axis_index) {
    return rebel_icall_string_int(
        method_bindings.mb_get_joy_axis_string,
        (const Object*)this,
        axis_index
    );
}

int64_t Input::get_joy_button_index_from_string(const String button) {
    return rebel_icall_int_string(
        method_bindings.mb_get_joy_button_index_from_string,
        (const Object*)this,
        button
    );
}

String Input::get_joy_button_string(const int64_t button_index) {
    return rebel_icall_string_int(
        method_bindings.mb_get_joy_button_string,
        (const Object*)this,
        button_index
    );
}

String Input::get_joy_guid(const int64_t device) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_joy_guid,
        (const Object*)this,
        device
    );
}

String Input::get_joy_name(const int64_t device) {
    return rebel_icall_string_int(
        method_bindings.mb_get_joy_name,
        (const Object*)this,
        device
    );
}

real_t Input::get_joy_vibration_duration(const int64_t device) {
    return rebel_icall_float_int(
        method_bindings.mb_get_joy_vibration_duration,
        (const Object*)this,
        device
    );
}

Vector2 Input::get_joy_vibration_strength(const int64_t device) {
    return rebel_icall_vector2_int(
        method_bindings.mb_get_joy_vibration_strength,
        (const Object*)this,
        device
    );
}

Vector2 Input::get_last_mouse_speed() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_last_mouse_speed,
        (const Object*)this
    );
}

Vector3 Input::get_magnetometer() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_magnetometer,
        (const Object*)this
    );
}

int64_t Input::get_mouse_button_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_mouse_button_mask,
        (const Object*)this
    );
}

Input::MouseMode Input::get_mouse_mode() const {
    return (Input::MouseMode)rebel_icall_int(
        method_bindings.mb_get_mouse_mode,
        (const Object*)this
    );
}

Vector2 Input::get_vector(const String negative_x, const String positive_x, const String negative_y, const String positive_y, const real_t deadzone) const {
    return rebel_icall_vector2_string_string_string_string_float(
        method_bindings.mb_get_vector,
        (const Object*)this,
        negative_x,
        positive_x,
        negative_y,
        positive_y,
        deadzone
    );
}

bool Input::is_action_just_pressed(const String action, const bool exact) const {
    return rebel_icall_bool_string_bool(
        method_bindings.mb_is_action_just_pressed,
        (const Object*)this,
        action,
        exact
    );
}

bool Input::is_action_just_released(const String action, const bool exact) const {
    return rebel_icall_bool_string_bool(
        method_bindings.mb_is_action_just_released,
        (const Object*)this,
        action,
        exact
    );
}

bool Input::is_action_pressed(const String action, const bool exact) const {
    return rebel_icall_bool_string_bool(
        method_bindings.mb_is_action_pressed,
        (const Object*)this,
        action,
        exact
    );
}

bool Input::is_joy_button_pressed(const int64_t device, const int64_t button) const {
    return rebel_icall_bool_int_int(
        method_bindings.mb_is_joy_button_pressed,
        (const Object*)this,
        device,
        button
    );
}

bool Input::is_joy_known(const int64_t device) {
    return rebel_icall_bool_int(
        method_bindings.mb_is_joy_known,
        (const Object*)this,
        device
    );
}

bool Input::is_key_pressed(const int64_t scancode) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_key_pressed,
        (const Object*)this,
        scancode
    );
}

bool Input::is_mouse_button_pressed(const int64_t button) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_mouse_button_pressed,
        (const Object*)this,
        button
    );
}

bool Input::is_physical_key_pressed(const int64_t scancode) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_physical_key_pressed,
        (const Object*)this,
        scancode
    );
}

void Input::joy_connection_changed(const int64_t device, const bool connected, const String name, const String guid) {
    rebel_icall_void_int_bool_string_string(
        method_bindings.mb_joy_connection_changed,
        (const Object*)this,
        device,
        connected,
        name,
        guid
    );
}

void Input::parse_input_event(const Ref<InputEvent> event) {
    rebel_icall_void_object(
        method_bindings.mb_parse_input_event,
        (const Object*)this,
        event.ptr()
    );
}

void Input::remove_joy_mapping(const String guid) {
    rebel_icall_void_string(
        method_bindings.mb_remove_joy_mapping,
        (const Object*)this,
        guid
    );
}

void Input::set_accelerometer(const Vector3 value) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_accelerometer,
        (const Object*)this,
        value
    );
}

void Input::set_custom_mouse_cursor(const Ref<Resource> image, const int64_t shape, const Vector2 hotspot) {
    rebel_icall_void_object_int_vector2(
        method_bindings.mb_set_custom_mouse_cursor,
        (const Object*)this,
        image.ptr(),
        shape,
        hotspot
    );
}

void Input::set_default_cursor_shape(const int64_t shape) {
    rebel_icall_void_int(
        method_bindings.mb_set_default_cursor_shape,
        (const Object*)this,
        shape
    );
}

void Input::set_gravity(const Vector3 value) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_gravity,
        (const Object*)this,
        value
    );
}

void Input::set_gyroscope(const Vector3 value) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_gyroscope,
        (const Object*)this,
        value
    );
}

void Input::set_magnetometer(const Vector3 value) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_magnetometer,
        (const Object*)this,
        value
    );
}

void Input::set_mouse_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_mouse_mode,
        (const Object*)this,
        mode
    );
}

void Input::set_use_accumulated_input(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_accumulated_input,
        (const Object*)this,
        enable
    );
}

void Input::start_joy_vibration(const int64_t device, const real_t weak_magnitude, const real_t strong_magnitude, const real_t duration) {
    rebel_icall_void_int_float_float_float(
        method_bindings.mb_start_joy_vibration,
        (const Object*)this,
        device,
        weak_magnitude,
        strong_magnitude,
        duration
    );
}

void Input::stop_joy_vibration(const int64_t device) {
    rebel_icall_void_int(
        method_bindings.mb_stop_joy_vibration,
        (const Object*)this,
        device
    );
}

void Input::vibrate_handheld(const int64_t duration_ms) {
    rebel_icall_void_int(
        method_bindings.mb_vibrate_handheld,
        (const Object*)this,
        duration_ms
    );
}

void Input::warp_mouse_position(const Vector2 to) {
    rebel_icall_void_vector2(
        method_bindings.mb_warp_mouse_position,
        (const Object*)this,
        to
    );
}

Input* Input::singleton = nullptr;

Input::Input() {
    owner = api->rebel_global_get_singleton((char*) "Input");
}

void Input::init_method_bindings() {
    method_bindings.mb_action_press =
        api->rebel_method_bind_get_method(
            "Input",
            "action_press"
        );
    method_bindings.mb_action_release =
        api->rebel_method_bind_get_method(
            "Input",
            "action_release"
        );
    method_bindings.mb_add_joy_mapping =
        api->rebel_method_bind_get_method(
            "Input",
            "add_joy_mapping"
        );
    method_bindings.mb_flush_buffered_events =
        api->rebel_method_bind_get_method(
            "Input",
            "flush_buffered_events"
        );
    method_bindings.mb_get_accelerometer =
        api->rebel_method_bind_get_method(
            "Input",
            "get_accelerometer"
        );
    method_bindings.mb_get_action_raw_strength =
        api->rebel_method_bind_get_method(
            "Input",
            "get_action_raw_strength"
        );
    method_bindings.mb_get_action_strength =
        api->rebel_method_bind_get_method(
            "Input",
            "get_action_strength"
        );
    method_bindings.mb_get_axis =
        api->rebel_method_bind_get_method(
            "Input",
            "get_axis"
        );
    method_bindings.mb_get_connected_joypads =
        api->rebel_method_bind_get_method(
            "Input",
            "get_connected_joypads"
        );
    method_bindings.mb_get_current_cursor_shape =
        api->rebel_method_bind_get_method(
            "Input",
            "get_current_cursor_shape"
        );
    method_bindings.mb_get_gravity =
        api->rebel_method_bind_get_method(
            "Input",
            "get_gravity"
        );
    method_bindings.mb_get_gyroscope =
        api->rebel_method_bind_get_method(
            "Input",
            "get_gyroscope"
        );
    method_bindings.mb_get_joy_axis =
        api->rebel_method_bind_get_method(
            "Input",
            "get_joy_axis"
        );
    method_bindings.mb_get_joy_axis_index_from_string =
        api->rebel_method_bind_get_method(
            "Input",
            "get_joy_axis_index_from_string"
        );
    method_bindings.mb_get_joy_axis_string =
        api->rebel_method_bind_get_method(
            "Input",
            "get_joy_axis_string"
        );
    method_bindings.mb_get_joy_button_index_from_string =
        api->rebel_method_bind_get_method(
            "Input",
            "get_joy_button_index_from_string"
        );
    method_bindings.mb_get_joy_button_string =
        api->rebel_method_bind_get_method(
            "Input",
            "get_joy_button_string"
        );
    method_bindings.mb_get_joy_guid =
        api->rebel_method_bind_get_method(
            "Input",
            "get_joy_guid"
        );
    method_bindings.mb_get_joy_name =
        api->rebel_method_bind_get_method(
            "Input",
            "get_joy_name"
        );
    method_bindings.mb_get_joy_vibration_duration =
        api->rebel_method_bind_get_method(
            "Input",
            "get_joy_vibration_duration"
        );
    method_bindings.mb_get_joy_vibration_strength =
        api->rebel_method_bind_get_method(
            "Input",
            "get_joy_vibration_strength"
        );
    method_bindings.mb_get_last_mouse_speed =
        api->rebel_method_bind_get_method(
            "Input",
            "get_last_mouse_speed"
        );
    method_bindings.mb_get_magnetometer =
        api->rebel_method_bind_get_method(
            "Input",
            "get_magnetometer"
        );
    method_bindings.mb_get_mouse_button_mask =
        api->rebel_method_bind_get_method(
            "Input",
            "get_mouse_button_mask"
        );
    method_bindings.mb_get_mouse_mode =
        api->rebel_method_bind_get_method(
            "Input",
            "get_mouse_mode"
        );
    method_bindings.mb_get_vector =
        api->rebel_method_bind_get_method(
            "Input",
            "get_vector"
        );
    method_bindings.mb_is_action_just_pressed =
        api->rebel_method_bind_get_method(
            "Input",
            "is_action_just_pressed"
        );
    method_bindings.mb_is_action_just_released =
        api->rebel_method_bind_get_method(
            "Input",
            "is_action_just_released"
        );
    method_bindings.mb_is_action_pressed =
        api->rebel_method_bind_get_method(
            "Input",
            "is_action_pressed"
        );
    method_bindings.mb_is_joy_button_pressed =
        api->rebel_method_bind_get_method(
            "Input",
            "is_joy_button_pressed"
        );
    method_bindings.mb_is_joy_known =
        api->rebel_method_bind_get_method(
            "Input",
            "is_joy_known"
        );
    method_bindings.mb_is_key_pressed =
        api->rebel_method_bind_get_method(
            "Input",
            "is_key_pressed"
        );
    method_bindings.mb_is_mouse_button_pressed =
        api->rebel_method_bind_get_method(
            "Input",
            "is_mouse_button_pressed"
        );
    method_bindings.mb_is_physical_key_pressed =
        api->rebel_method_bind_get_method(
            "Input",
            "is_physical_key_pressed"
        );
    method_bindings.mb_joy_connection_changed =
        api->rebel_method_bind_get_method(
            "Input",
            "joy_connection_changed"
        );
    method_bindings.mb_parse_input_event =
        api->rebel_method_bind_get_method(
            "Input",
            "parse_input_event"
        );
    method_bindings.mb_remove_joy_mapping =
        api->rebel_method_bind_get_method(
            "Input",
            "remove_joy_mapping"
        );
    method_bindings.mb_set_accelerometer =
        api->rebel_method_bind_get_method(
            "Input",
            "set_accelerometer"
        );
    method_bindings.mb_set_custom_mouse_cursor =
        api->rebel_method_bind_get_method(
            "Input",
            "set_custom_mouse_cursor"
        );
    method_bindings.mb_set_default_cursor_shape =
        api->rebel_method_bind_get_method(
            "Input",
            "set_default_cursor_shape"
        );
    method_bindings.mb_set_gravity =
        api->rebel_method_bind_get_method(
            "Input",
            "set_gravity"
        );
    method_bindings.mb_set_gyroscope =
        api->rebel_method_bind_get_method(
            "Input",
            "set_gyroscope"
        );
    method_bindings.mb_set_magnetometer =
        api->rebel_method_bind_get_method(
            "Input",
            "set_magnetometer"
        );
    method_bindings.mb_set_mouse_mode =
        api->rebel_method_bind_get_method(
            "Input",
            "set_mouse_mode"
        );
    method_bindings.mb_set_use_accumulated_input =
        api->rebel_method_bind_get_method(
            "Input",
            "set_use_accumulated_input"
        );
    method_bindings.mb_start_joy_vibration =
        api->rebel_method_bind_get_method(
            "Input",
            "start_joy_vibration"
        );
    method_bindings.mb_stop_joy_vibration =
        api->rebel_method_bind_get_method(
            "Input",
            "stop_joy_vibration"
        );
    method_bindings.mb_vibrate_handheld =
        api->rebel_method_bind_get_method(
            "Input",
            "vibrate_handheld"
        );
    method_bindings.mb_warp_mouse_position =
        api->rebel_method_bind_get_method(
            "Input",
            "warp_mouse_position"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Input");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Input::MethodBindings Input::method_bindings = {};
void* Input::class_tag = nullptr;
} // namespace Rebel
