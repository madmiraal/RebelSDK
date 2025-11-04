// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/camera2d.h"

#include "classes/icalls.h"
#include "classes/node.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Camera2D::_make_current(const Object* arg0) {
    rebel_icall_void_object(
        method_bindings.mb__make_current,
        (const Object*)this,
        arg0
    );
}

void Camera2D::_set_current(const bool current) {
    rebel_icall_void_bool(
        method_bindings.mb__set_current,
        (const Object*)this,
        current
    );
}

void Camera2D::_update_scroll() {
    rebel_icall_void(
        method_bindings.mb__update_scroll,
        (const Object*)this
    );
}

void Camera2D::align() {
    rebel_icall_void(
        method_bindings.mb_align,
        (const Object*)this
    );
}

void Camera2D::clear_current() {
    rebel_icall_void(
        method_bindings.mb_clear_current,
        (const Object*)this
    );
}

void Camera2D::force_update_scroll() {
    rebel_icall_void(
        method_bindings.mb_force_update_scroll,
        (const Object*)this
    );
}

Camera2D::AnchorMode Camera2D::get_anchor_mode() const {
    return (Camera2D::AnchorMode)rebel_icall_int(
        method_bindings.mb_get_anchor_mode,
        (const Object*)this
    );
}

Vector2 Camera2D::get_camera_position() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_camera_position,
        (const Object*)this
    );
}

Vector2 Camera2D::get_camera_screen_center() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_camera_screen_center,
        (const Object*)this
    );
}

Node* Camera2D::get_custom_viewport() const {
    return (Node*)rebel_icall_object(
        method_bindings.mb_get_custom_viewport,
        (const Object*)this
    );
}

real_t Camera2D::get_drag_margin(const int64_t margin) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_drag_margin,
        (const Object*)this,
        margin
    );
}

real_t Camera2D::get_follow_smoothing() const {
    return rebel_icall_float(
        method_bindings.mb_get_follow_smoothing,
        (const Object*)this
    );
}

real_t Camera2D::get_h_offset() const {
    return rebel_icall_float(
        method_bindings.mb_get_h_offset,
        (const Object*)this
    );
}

int64_t Camera2D::get_limit(const int64_t margin) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_limit,
        (const Object*)this,
        margin
    );
}

Vector2 Camera2D::get_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_offset,
        (const Object*)this
    );
}

Camera2D::Camera2DProcessMode Camera2D::get_process_mode() const {
    return (Camera2D::Camera2DProcessMode)rebel_icall_int(
        method_bindings.mb_get_process_mode,
        (const Object*)this
    );
}

real_t Camera2D::get_v_offset() const {
    return rebel_icall_float(
        method_bindings.mb_get_v_offset,
        (const Object*)this
    );
}

Vector2 Camera2D::get_zoom() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_zoom,
        (const Object*)this
    );
}

bool Camera2D::is_current() const {
    return rebel_icall_bool(
        method_bindings.mb_is_current,
        (const Object*)this
    );
}

bool Camera2D::is_follow_smoothing_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_follow_smoothing_enabled,
        (const Object*)this
    );
}

bool Camera2D::is_h_drag_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_h_drag_enabled,
        (const Object*)this
    );
}

bool Camera2D::is_limit_drawing_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_limit_drawing_enabled,
        (const Object*)this
    );
}

bool Camera2D::is_limit_smoothing_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_limit_smoothing_enabled,
        (const Object*)this
    );
}

bool Camera2D::is_margin_drawing_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_margin_drawing_enabled,
        (const Object*)this
    );
}

bool Camera2D::is_rotating() const {
    return rebel_icall_bool(
        method_bindings.mb_is_rotating,
        (const Object*)this
    );
}

bool Camera2D::is_screen_drawing_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_screen_drawing_enabled,
        (const Object*)this
    );
}

bool Camera2D::is_v_drag_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_v_drag_enabled,
        (const Object*)this
    );
}

void Camera2D::make_current() {
    rebel_icall_void(
        method_bindings.mb_make_current,
        (const Object*)this
    );
}

void Camera2D::reset_smoothing() {
    rebel_icall_void(
        method_bindings.mb_reset_smoothing,
        (const Object*)this
    );
}

void Camera2D::set_anchor_mode(const int64_t anchor_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_anchor_mode,
        (const Object*)this,
        anchor_mode
    );
}

void Camera2D::set_custom_viewport(const Node* viewport) {
    rebel_icall_void_object(
        method_bindings.mb_set_custom_viewport,
        (const Object*)this,
        viewport
    );
}

void Camera2D::set_drag_margin(const int64_t margin, const real_t drag_margin) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_drag_margin,
        (const Object*)this,
        margin,
        drag_margin
    );
}

void Camera2D::set_enable_follow_smoothing(const bool follow_smoothing) {
    rebel_icall_void_bool(
        method_bindings.mb_set_enable_follow_smoothing,
        (const Object*)this,
        follow_smoothing
    );
}

void Camera2D::set_follow_smoothing(const real_t follow_smoothing) {
    rebel_icall_void_float(
        method_bindings.mb_set_follow_smoothing,
        (const Object*)this,
        follow_smoothing
    );
}

void Camera2D::set_h_drag_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_h_drag_enabled,
        (const Object*)this,
        enabled
    );
}

void Camera2D::set_h_offset(const real_t ofs) {
    rebel_icall_void_float(
        method_bindings.mb_set_h_offset,
        (const Object*)this,
        ofs
    );
}

void Camera2D::set_limit(const int64_t margin, const int64_t limit) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_limit,
        (const Object*)this,
        margin,
        limit
    );
}

void Camera2D::set_limit_drawing_enabled(const bool limit_drawing_enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_limit_drawing_enabled,
        (const Object*)this,
        limit_drawing_enabled
    );
}

void Camera2D::set_limit_smoothing_enabled(const bool limit_smoothing_enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_limit_smoothing_enabled,
        (const Object*)this,
        limit_smoothing_enabled
    );
}

void Camera2D::set_margin_drawing_enabled(const bool margin_drawing_enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_margin_drawing_enabled,
        (const Object*)this,
        margin_drawing_enabled
    );
}

void Camera2D::set_offset(const Vector2 offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_offset,
        (const Object*)this,
        offset
    );
}

void Camera2D::set_process_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_process_mode,
        (const Object*)this,
        mode
    );
}

void Camera2D::set_rotating(const bool rotating) {
    rebel_icall_void_bool(
        method_bindings.mb_set_rotating,
        (const Object*)this,
        rotating
    );
}

void Camera2D::set_screen_drawing_enabled(const bool screen_drawing_enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_screen_drawing_enabled,
        (const Object*)this,
        screen_drawing_enabled
    );
}

void Camera2D::set_v_drag_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_v_drag_enabled,
        (const Object*)this,
        enabled
    );
}

void Camera2D::set_v_offset(const real_t ofs) {
    rebel_icall_void_float(
        method_bindings.mb_set_v_offset,
        (const Object*)this,
        ofs
    );
}

void Camera2D::set_zoom(const Vector2 zoom) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_zoom,
        (const Object*)this,
        zoom
    );
}

Camera2D* Camera2D::create() {
    return (Camera2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Camera2D")()
         );
}

void Camera2D::init_method_bindings() {
    method_bindings.mb__make_current =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "_make_current"
        );
    method_bindings.mb__set_current =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "_set_current"
        );
    method_bindings.mb__update_scroll =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "_update_scroll"
        );
    method_bindings.mb_align =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "align"
        );
    method_bindings.mb_clear_current =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "clear_current"
        );
    method_bindings.mb_force_update_scroll =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "force_update_scroll"
        );
    method_bindings.mb_get_anchor_mode =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "get_anchor_mode"
        );
    method_bindings.mb_get_camera_position =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "get_camera_position"
        );
    method_bindings.mb_get_camera_screen_center =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "get_camera_screen_center"
        );
    method_bindings.mb_get_custom_viewport =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "get_custom_viewport"
        );
    method_bindings.mb_get_drag_margin =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "get_drag_margin"
        );
    method_bindings.mb_get_follow_smoothing =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "get_follow_smoothing"
        );
    method_bindings.mb_get_h_offset =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "get_h_offset"
        );
    method_bindings.mb_get_limit =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "get_limit"
        );
    method_bindings.mb_get_offset =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "get_offset"
        );
    method_bindings.mb_get_process_mode =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "get_process_mode"
        );
    method_bindings.mb_get_v_offset =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "get_v_offset"
        );
    method_bindings.mb_get_zoom =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "get_zoom"
        );
    method_bindings.mb_is_current =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "is_current"
        );
    method_bindings.mb_is_follow_smoothing_enabled =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "is_follow_smoothing_enabled"
        );
    method_bindings.mb_is_h_drag_enabled =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "is_h_drag_enabled"
        );
    method_bindings.mb_is_limit_drawing_enabled =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "is_limit_drawing_enabled"
        );
    method_bindings.mb_is_limit_smoothing_enabled =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "is_limit_smoothing_enabled"
        );
    method_bindings.mb_is_margin_drawing_enabled =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "is_margin_drawing_enabled"
        );
    method_bindings.mb_is_rotating =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "is_rotating"
        );
    method_bindings.mb_is_screen_drawing_enabled =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "is_screen_drawing_enabled"
        );
    method_bindings.mb_is_v_drag_enabled =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "is_v_drag_enabled"
        );
    method_bindings.mb_make_current =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "make_current"
        );
    method_bindings.mb_reset_smoothing =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "reset_smoothing"
        );
    method_bindings.mb_set_anchor_mode =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "set_anchor_mode"
        );
    method_bindings.mb_set_custom_viewport =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "set_custom_viewport"
        );
    method_bindings.mb_set_drag_margin =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "set_drag_margin"
        );
    method_bindings.mb_set_enable_follow_smoothing =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "set_enable_follow_smoothing"
        );
    method_bindings.mb_set_follow_smoothing =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "set_follow_smoothing"
        );
    method_bindings.mb_set_h_drag_enabled =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "set_h_drag_enabled"
        );
    method_bindings.mb_set_h_offset =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "set_h_offset"
        );
    method_bindings.mb_set_limit =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "set_limit"
        );
    method_bindings.mb_set_limit_drawing_enabled =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "set_limit_drawing_enabled"
        );
    method_bindings.mb_set_limit_smoothing_enabled =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "set_limit_smoothing_enabled"
        );
    method_bindings.mb_set_margin_drawing_enabled =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "set_margin_drawing_enabled"
        );
    method_bindings.mb_set_offset =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "set_offset"
        );
    method_bindings.mb_set_process_mode =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "set_process_mode"
        );
    method_bindings.mb_set_rotating =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "set_rotating"
        );
    method_bindings.mb_set_screen_drawing_enabled =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "set_screen_drawing_enabled"
        );
    method_bindings.mb_set_v_drag_enabled =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "set_v_drag_enabled"
        );
    method_bindings.mb_set_v_offset =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "set_v_offset"
        );
    method_bindings.mb_set_zoom =
        api->rebel_method_bind_get_method(
            "Camera2D",
            "set_zoom"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Camera2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Camera2D::MethodBindings Camera2D::method_bindings = {};
void* Camera2D::class_tag = nullptr;
} // namespace Rebel
