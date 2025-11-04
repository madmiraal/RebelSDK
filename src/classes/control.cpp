// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/control.h"

#include "classes/control.h"
#include "classes/font.h"
#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/shader.h"
#include "classes/stylebox.h"
#include "classes/texture.h"
#include "classes/theme.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool Control::_clips_input() {
    return rebel_icall_bool(
        method_bindings.mb__clips_input,
        (const Object*)this
    );
}

Vector2 Control::_get_minimum_size() {
    return rebel_icall_vector2(
        method_bindings.mb__get_minimum_size,
        (const Object*)this
    );
}

String Control::_get_tooltip() const {
    return rebel_icall_string(
        method_bindings.mb__get_tooltip,
        (const Object*)this
    );
}

void Control::_gui_input(const Ref<InputEvent> event) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        event.ptr()
    );
}

Control* Control::_make_custom_tooltip(const String for_text) {
    return (Control*)rebel_icall_object_string(
        method_bindings.mb__make_custom_tooltip,
        (const Object*)this,
        for_text
    );
}

void Control::_override_changed() {
    rebel_icall_void(
        method_bindings.mb__override_changed,
        (const Object*)this
    );
}

void Control::_set_anchor(const int64_t margin, const real_t anchor) {
    rebel_icall_void_int_float(
        method_bindings.mb__set_anchor,
        (const Object*)this,
        margin,
        anchor
    );
}

void Control::_set_global_position(const Vector2 position) {
    rebel_icall_void_vector2(
        method_bindings.mb__set_global_position,
        (const Object*)this,
        position
    );
}

void Control::_set_position(const Vector2 margin) {
    rebel_icall_void_vector2(
        method_bindings.mb__set_position,
        (const Object*)this,
        margin
    );
}

void Control::_set_size(const Vector2 size) {
    rebel_icall_void_vector2(
        method_bindings.mb__set_size,
        (const Object*)this,
        size
    );
}

void Control::_size_changed() {
    rebel_icall_void(
        method_bindings.mb__size_changed,
        (const Object*)this
    );
}

void Control::_theme_changed() {
    rebel_icall_void(
        method_bindings.mb__theme_changed,
        (const Object*)this
    );
}

void Control::_update_minimum_size() {
    rebel_icall_void(
        method_bindings.mb__update_minimum_size,
        (const Object*)this
    );
}

void Control::accept_event() {
    rebel_icall_void(
        method_bindings.mb_accept_event,
        (const Object*)this
    );
}

void Control::add_color_override(const String name, const Color color) {
    rebel_icall_void_string_color(
        method_bindings.mb_add_color_override,
        (const Object*)this,
        name,
        color
    );
}

void Control::add_constant_override(const String name, const int64_t constant) {
    rebel_icall_void_string_int(
        method_bindings.mb_add_constant_override,
        (const Object*)this,
        name,
        constant
    );
}

void Control::add_font_override(const String name, const Ref<Font> font) {
    rebel_icall_void_string_object(
        method_bindings.mb_add_font_override,
        (const Object*)this,
        name,
        font.ptr()
    );
}

void Control::add_icon_override(const String name, const Ref<Texture> texture) {
    rebel_icall_void_string_object(
        method_bindings.mb_add_icon_override,
        (const Object*)this,
        name,
        texture.ptr()
    );
}

void Control::add_shader_override(const String name, const Ref<Shader> shader) {
    rebel_icall_void_string_object(
        method_bindings.mb_add_shader_override,
        (const Object*)this,
        name,
        shader.ptr()
    );
}

void Control::add_stylebox_override(const String name, const Ref<StyleBox> stylebox) {
    rebel_icall_void_string_object(
        method_bindings.mb_add_stylebox_override,
        (const Object*)this,
        name,
        stylebox.ptr()
    );
}

bool Control::can_drop_data(const Vector2 position, const Variant data) {
    return rebel_icall_bool_vector2_variant(
        method_bindings.mb_can_drop_data,
        (const Object*)this,
        position,
        data
    );
}

void Control::drop_data(const Vector2 position, const Variant data) {
    rebel_icall_void_vector2_variant(
        method_bindings.mb_drop_data,
        (const Object*)this,
        position,
        data
    );
}

Control* Control::find_next_valid_focus() const {
    return (Control*)rebel_icall_object(
        method_bindings.mb_find_next_valid_focus,
        (const Object*)this
    );
}

Control* Control::find_prev_valid_focus() const {
    return (Control*)rebel_icall_object(
        method_bindings.mb_find_prev_valid_focus,
        (const Object*)this
    );
}

void Control::force_drag(const Variant data, const Control* preview) {
    rebel_icall_void_variant_object(
        method_bindings.mb_force_drag,
        (const Object*)this,
        data,
        preview
    );
}

real_t Control::get_anchor(const int64_t margin) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_anchor,
        (const Object*)this,
        margin
    );
}

Vector2 Control::get_begin() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_begin,
        (const Object*)this
    );
}

Color Control::get_color(const String name, const String theme_type) const {
    return rebel_icall_color_string_string(
        method_bindings.mb_get_color,
        (const Object*)this,
        name,
        theme_type
    );
}

Vector2 Control::get_combined_minimum_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_combined_minimum_size,
        (const Object*)this
    );
}

int64_t Control::get_constant(const String name, const String theme_type) const {
    return rebel_icall_int_string_string(
        method_bindings.mb_get_constant,
        (const Object*)this,
        name,
        theme_type
    );
}

Control::CursorShape Control::get_cursor_shape(const Vector2 position) const {
    return (Control::CursorShape)rebel_icall_int_vector2(
        method_bindings.mb_get_cursor_shape,
        (const Object*)this,
        position
    );
}

Vector2 Control::get_custom_minimum_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_custom_minimum_size,
        (const Object*)this
    );
}

Control::CursorShape Control::get_default_cursor_shape() const {
    return (Control::CursorShape)rebel_icall_int(
        method_bindings.mb_get_default_cursor_shape,
        (const Object*)this
    );
}

Variant Control::get_drag_data(const Vector2 position) {
    return rebel_icall_variant_vector2(
        method_bindings.mb_get_drag_data,
        (const Object*)this,
        position
    );
}

Vector2 Control::get_end() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_end,
        (const Object*)this
    );
}

Control::FocusMode Control::get_focus_mode() const {
    return (Control::FocusMode)rebel_icall_int(
        method_bindings.mb_get_focus_mode,
        (const Object*)this
    );
}

NodePath Control::get_focus_neighbour(const int64_t margin) const {
    return rebel_icall_nodepath_int(
        method_bindings.mb_get_focus_neighbour,
        (const Object*)this,
        margin
    );
}

NodePath Control::get_focus_next() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_focus_next,
        (const Object*)this
    );
}

Control* Control::get_focus_owner() const {
    return (Control*)rebel_icall_object(
        method_bindings.mb_get_focus_owner,
        (const Object*)this
    );
}

NodePath Control::get_focus_previous() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_focus_previous,
        (const Object*)this
    );
}

Ref<Font> Control::get_font(const String name, const String theme_type) const {
    return Ref<Font>::create_ref(rebel_icall_object_string_string(
        method_bindings.mb_get_font,
        (const Object*)this,
        name,
        theme_type
    ));
}

Vector2 Control::get_global_position() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_global_position,
        (const Object*)this
    );
}

Rect2 Control::get_global_rect() const {
    return rebel_icall_rect2(
        method_bindings.mb_get_global_rect,
        (const Object*)this
    );
}

Control::GrowDirection Control::get_h_grow_direction() const {
    return (Control::GrowDirection)rebel_icall_int(
        method_bindings.mb_get_h_grow_direction,
        (const Object*)this
    );
}

int64_t Control::get_h_size_flags() const {
    return rebel_icall_int(
        method_bindings.mb_get_h_size_flags,
        (const Object*)this
    );
}

Ref<Texture> Control::get_icon(const String name, const String theme_type) const {
    return Ref<Texture>::create_ref(rebel_icall_object_string_string(
        method_bindings.mb_get_icon,
        (const Object*)this,
        name,
        theme_type
    ));
}

real_t Control::get_margin(const int64_t margin) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_margin,
        (const Object*)this,
        margin
    );
}

Vector2 Control::get_minimum_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_minimum_size,
        (const Object*)this
    );
}

Control::MouseFilter Control::get_mouse_filter() const {
    return (Control::MouseFilter)rebel_icall_int(
        method_bindings.mb_get_mouse_filter,
        (const Object*)this
    );
}

Vector2 Control::get_parent_area_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_parent_area_size,
        (const Object*)this
    );
}

Control* Control::get_parent_control() const {
    return (Control*)rebel_icall_object(
        method_bindings.mb_get_parent_control,
        (const Object*)this
    );
}

bool Control::get_pass_on_modal_close_click() const {
    return rebel_icall_bool(
        method_bindings.mb_get_pass_on_modal_close_click,
        (const Object*)this
    );
}

Vector2 Control::get_pivot_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_pivot_offset,
        (const Object*)this
    );
}

Vector2 Control::get_position() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_position,
        (const Object*)this
    );
}

Rect2 Control::get_rect() const {
    return rebel_icall_rect2(
        method_bindings.mb_get_rect,
        (const Object*)this
    );
}

real_t Control::get_rotation() const {
    return rebel_icall_float(
        method_bindings.mb_get_rotation,
        (const Object*)this
    );
}

real_t Control::get_rotation_degrees() const {
    return rebel_icall_float(
        method_bindings.mb_get_rotation_degrees,
        (const Object*)this
    );
}

Vector2 Control::get_scale() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_scale,
        (const Object*)this
    );
}

Vector2 Control::get_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_size,
        (const Object*)this
    );
}

real_t Control::get_stretch_ratio() const {
    return rebel_icall_float(
        method_bindings.mb_get_stretch_ratio,
        (const Object*)this
    );
}

Ref<StyleBox> Control::get_stylebox(const String name, const String theme_type) const {
    return Ref<StyleBox>::create_ref(rebel_icall_object_string_string(
        method_bindings.mb_get_stylebox,
        (const Object*)this,
        name,
        theme_type
    ));
}

Ref<Theme> Control::get_theme() const {
    return Ref<Theme>::create_ref(rebel_icall_object(
        method_bindings.mb_get_theme,
        (const Object*)this
    ));
}

Ref<Font> Control::get_theme_default_font() const {
    return Ref<Font>::create_ref(rebel_icall_object(
        method_bindings.mb_get_theme_default_font,
        (const Object*)this
    ));
}

String Control::get_tooltip(const Vector2 at_position) const {
    return rebel_icall_string_vector2(
        method_bindings.mb_get_tooltip,
        (const Object*)this,
        at_position
    );
}

Control::GrowDirection Control::get_v_grow_direction() const {
    return (Control::GrowDirection)rebel_icall_int(
        method_bindings.mb_get_v_grow_direction,
        (const Object*)this
    );
}

int64_t Control::get_v_size_flags() const {
    return rebel_icall_int(
        method_bindings.mb_get_v_size_flags,
        (const Object*)this
    );
}

void Control::grab_click_focus() {
    rebel_icall_void(
        method_bindings.mb_grab_click_focus,
        (const Object*)this
    );
}

void Control::grab_focus() {
    rebel_icall_void(
        method_bindings.mb_grab_focus,
        (const Object*)this
    );
}

bool Control::has_color(const String name, const String theme_type) const {
    return rebel_icall_bool_string_string(
        method_bindings.mb_has_color,
        (const Object*)this,
        name,
        theme_type
    );
}

bool Control::has_color_override(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_color_override,
        (const Object*)this,
        name
    );
}

bool Control::has_constant(const String name, const String theme_type) const {
    return rebel_icall_bool_string_string(
        method_bindings.mb_has_constant,
        (const Object*)this,
        name,
        theme_type
    );
}

bool Control::has_constant_override(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_constant_override,
        (const Object*)this,
        name
    );
}

bool Control::has_focus() const {
    return rebel_icall_bool(
        method_bindings.mb_has_focus,
        (const Object*)this
    );
}

bool Control::has_font(const String name, const String theme_type) const {
    return rebel_icall_bool_string_string(
        method_bindings.mb_has_font,
        (const Object*)this,
        name,
        theme_type
    );
}

bool Control::has_font_override(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_font_override,
        (const Object*)this,
        name
    );
}

bool Control::has_icon(const String name, const String theme_type) const {
    return rebel_icall_bool_string_string(
        method_bindings.mb_has_icon,
        (const Object*)this,
        name,
        theme_type
    );
}

bool Control::has_icon_override(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_icon_override,
        (const Object*)this,
        name
    );
}

bool Control::has_point(const Vector2 point) {
    return rebel_icall_bool_vector2(
        method_bindings.mb_has_point,
        (const Object*)this,
        point
    );
}

bool Control::has_shader_override(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_shader_override,
        (const Object*)this,
        name
    );
}

bool Control::has_stylebox(const String name, const String theme_type) const {
    return rebel_icall_bool_string_string(
        method_bindings.mb_has_stylebox,
        (const Object*)this,
        name,
        theme_type
    );
}

bool Control::has_stylebox_override(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_stylebox_override,
        (const Object*)this,
        name
    );
}

bool Control::is_clipping_contents() {
    return rebel_icall_bool(
        method_bindings.mb_is_clipping_contents,
        (const Object*)this
    );
}

void Control::minimum_size_changed() {
    rebel_icall_void(
        method_bindings.mb_minimum_size_changed,
        (const Object*)this
    );
}

void Control::release_focus() {
    rebel_icall_void(
        method_bindings.mb_release_focus,
        (const Object*)this
    );
}

void Control::set_anchor(const int64_t margin, const real_t anchor, const bool keep_margin, const bool push_opposite_anchor) {
    rebel_icall_void_int_float_bool_bool(
        method_bindings.mb_set_anchor,
        (const Object*)this,
        margin,
        anchor,
        keep_margin,
        push_opposite_anchor
    );
}

void Control::set_anchor_and_margin(const int64_t margin, const real_t anchor, const real_t offset, const bool push_opposite_anchor) {
    rebel_icall_void_int_float_float_bool(
        method_bindings.mb_set_anchor_and_margin,
        (const Object*)this,
        margin,
        anchor,
        offset,
        push_opposite_anchor
    );
}

void Control::set_anchors_and_margins_preset(const int64_t preset, const int64_t resize_mode, const int64_t margin) {
    rebel_icall_void_int_int_int(
        method_bindings.mb_set_anchors_and_margins_preset,
        (const Object*)this,
        preset,
        resize_mode,
        margin
    );
}

void Control::set_anchors_preset(const int64_t preset, const bool keep_margins) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_anchors_preset,
        (const Object*)this,
        preset,
        keep_margins
    );
}

void Control::set_begin(const Vector2 position) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_begin,
        (const Object*)this,
        position
    );
}

void Control::set_clip_contents(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_clip_contents,
        (const Object*)this,
        enable
    );
}

void Control::set_custom_minimum_size(const Vector2 size) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_custom_minimum_size,
        (const Object*)this,
        size
    );
}

void Control::set_default_cursor_shape(const int64_t shape) {
    rebel_icall_void_int(
        method_bindings.mb_set_default_cursor_shape,
        (const Object*)this,
        shape
    );
}

void Control::set_drag_forwarding(const Control* target) {
    rebel_icall_void_object(
        method_bindings.mb_set_drag_forwarding,
        (const Object*)this,
        target
    );
}

void Control::set_drag_preview(const Control* control) {
    rebel_icall_void_object(
        method_bindings.mb_set_drag_preview,
        (const Object*)this,
        control
    );
}

void Control::set_end(const Vector2 position) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_end,
        (const Object*)this,
        position
    );
}

void Control::set_focus_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_focus_mode,
        (const Object*)this,
        mode
    );
}

void Control::set_focus_neighbour(const int64_t margin, const NodePath neighbour) {
    rebel_icall_void_int_nodepath(
        method_bindings.mb_set_focus_neighbour,
        (const Object*)this,
        margin,
        neighbour
    );
}

void Control::set_focus_next(const NodePath next) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_focus_next,
        (const Object*)this,
        next
    );
}

void Control::set_focus_previous(const NodePath previous) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_focus_previous,
        (const Object*)this,
        previous
    );
}

void Control::set_global_position(const Vector2 position, const bool keep_margins) {
    rebel_icall_void_vector2_bool(
        method_bindings.mb_set_global_position,
        (const Object*)this,
        position,
        keep_margins
    );
}

void Control::set_h_grow_direction(const int64_t direction) {
    rebel_icall_void_int(
        method_bindings.mb_set_h_grow_direction,
        (const Object*)this,
        direction
    );
}

void Control::set_h_size_flags(const int64_t flags) {
    rebel_icall_void_int(
        method_bindings.mb_set_h_size_flags,
        (const Object*)this,
        flags
    );
}

void Control::set_margin(const int64_t margin, const real_t offset) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_margin,
        (const Object*)this,
        margin,
        offset
    );
}

void Control::set_margins_preset(const int64_t preset, const int64_t resize_mode, const int64_t margin) {
    rebel_icall_void_int_int_int(
        method_bindings.mb_set_margins_preset,
        (const Object*)this,
        preset,
        resize_mode,
        margin
    );
}

void Control::set_mouse_filter(const int64_t filter) {
    rebel_icall_void_int(
        method_bindings.mb_set_mouse_filter,
        (const Object*)this,
        filter
    );
}

void Control::set_pass_on_modal_close_click(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_pass_on_modal_close_click,
        (const Object*)this,
        enabled
    );
}

void Control::set_pivot_offset(const Vector2 pivot_offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_pivot_offset,
        (const Object*)this,
        pivot_offset
    );
}

void Control::set_position(const Vector2 position, const bool keep_margins) {
    rebel_icall_void_vector2_bool(
        method_bindings.mb_set_position,
        (const Object*)this,
        position,
        keep_margins
    );
}

void Control::set_rotation(const real_t radians) {
    rebel_icall_void_float(
        method_bindings.mb_set_rotation,
        (const Object*)this,
        radians
    );
}

void Control::set_rotation_degrees(const real_t degrees) {
    rebel_icall_void_float(
        method_bindings.mb_set_rotation_degrees,
        (const Object*)this,
        degrees
    );
}

void Control::set_scale(const Vector2 scale) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_scale,
        (const Object*)this,
        scale
    );
}

void Control::set_size(const Vector2 size, const bool keep_margins) {
    rebel_icall_void_vector2_bool(
        method_bindings.mb_set_size,
        (const Object*)this,
        size,
        keep_margins
    );
}

void Control::set_stretch_ratio(const real_t ratio) {
    rebel_icall_void_float(
        method_bindings.mb_set_stretch_ratio,
        (const Object*)this,
        ratio
    );
}

void Control::set_theme(const Ref<Theme> theme) {
    rebel_icall_void_object(
        method_bindings.mb_set_theme,
        (const Object*)this,
        theme.ptr()
    );
}

void Control::set_tooltip(const String tooltip) {
    rebel_icall_void_string(
        method_bindings.mb_set_tooltip,
        (const Object*)this,
        tooltip
    );
}

void Control::set_v_grow_direction(const int64_t direction) {
    rebel_icall_void_int(
        method_bindings.mb_set_v_grow_direction,
        (const Object*)this,
        direction
    );
}

void Control::set_v_size_flags(const int64_t flags) {
    rebel_icall_void_int(
        method_bindings.mb_set_v_size_flags,
        (const Object*)this,
        flags
    );
}

void Control::show_modal(const bool exclusive) {
    rebel_icall_void_bool(
        method_bindings.mb_show_modal,
        (const Object*)this,
        exclusive
    );
}

void Control::warp_mouse(const Vector2 to_position) {
    rebel_icall_void_vector2(
        method_bindings.mb_warp_mouse,
        (const Object*)this,
        to_position
    );
}

Control* Control::create() {
    return (Control*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Control")()
         );
}

void Control::init_method_bindings() {
    method_bindings.mb__clips_input =
        api->rebel_method_bind_get_method(
            "Control",
            "_clips_input"
        );
    method_bindings.mb__get_minimum_size =
        api->rebel_method_bind_get_method(
            "Control",
            "_get_minimum_size"
        );
    method_bindings.mb__get_tooltip =
        api->rebel_method_bind_get_method(
            "Control",
            "_get_tooltip"
        );
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "Control",
            "_gui_input"
        );
    method_bindings.mb__make_custom_tooltip =
        api->rebel_method_bind_get_method(
            "Control",
            "_make_custom_tooltip"
        );
    method_bindings.mb__override_changed =
        api->rebel_method_bind_get_method(
            "Control",
            "_override_changed"
        );
    method_bindings.mb__set_anchor =
        api->rebel_method_bind_get_method(
            "Control",
            "_set_anchor"
        );
    method_bindings.mb__set_global_position =
        api->rebel_method_bind_get_method(
            "Control",
            "_set_global_position"
        );
    method_bindings.mb__set_position =
        api->rebel_method_bind_get_method(
            "Control",
            "_set_position"
        );
    method_bindings.mb__set_size =
        api->rebel_method_bind_get_method(
            "Control",
            "_set_size"
        );
    method_bindings.mb__size_changed =
        api->rebel_method_bind_get_method(
            "Control",
            "_size_changed"
        );
    method_bindings.mb__theme_changed =
        api->rebel_method_bind_get_method(
            "Control",
            "_theme_changed"
        );
    method_bindings.mb__update_minimum_size =
        api->rebel_method_bind_get_method(
            "Control",
            "_update_minimum_size"
        );
    method_bindings.mb_accept_event =
        api->rebel_method_bind_get_method(
            "Control",
            "accept_event"
        );
    method_bindings.mb_add_color_override =
        api->rebel_method_bind_get_method(
            "Control",
            "add_color_override"
        );
    method_bindings.mb_add_constant_override =
        api->rebel_method_bind_get_method(
            "Control",
            "add_constant_override"
        );
    method_bindings.mb_add_font_override =
        api->rebel_method_bind_get_method(
            "Control",
            "add_font_override"
        );
    method_bindings.mb_add_icon_override =
        api->rebel_method_bind_get_method(
            "Control",
            "add_icon_override"
        );
    method_bindings.mb_add_shader_override =
        api->rebel_method_bind_get_method(
            "Control",
            "add_shader_override"
        );
    method_bindings.mb_add_stylebox_override =
        api->rebel_method_bind_get_method(
            "Control",
            "add_stylebox_override"
        );
    method_bindings.mb_can_drop_data =
        api->rebel_method_bind_get_method(
            "Control",
            "can_drop_data"
        );
    method_bindings.mb_drop_data =
        api->rebel_method_bind_get_method(
            "Control",
            "drop_data"
        );
    method_bindings.mb_find_next_valid_focus =
        api->rebel_method_bind_get_method(
            "Control",
            "find_next_valid_focus"
        );
    method_bindings.mb_find_prev_valid_focus =
        api->rebel_method_bind_get_method(
            "Control",
            "find_prev_valid_focus"
        );
    method_bindings.mb_force_drag =
        api->rebel_method_bind_get_method(
            "Control",
            "force_drag"
        );
    method_bindings.mb_get_anchor =
        api->rebel_method_bind_get_method(
            "Control",
            "get_anchor"
        );
    method_bindings.mb_get_begin =
        api->rebel_method_bind_get_method(
            "Control",
            "get_begin"
        );
    method_bindings.mb_get_color =
        api->rebel_method_bind_get_method(
            "Control",
            "get_color"
        );
    method_bindings.mb_get_combined_minimum_size =
        api->rebel_method_bind_get_method(
            "Control",
            "get_combined_minimum_size"
        );
    method_bindings.mb_get_constant =
        api->rebel_method_bind_get_method(
            "Control",
            "get_constant"
        );
    method_bindings.mb_get_cursor_shape =
        api->rebel_method_bind_get_method(
            "Control",
            "get_cursor_shape"
        );
    method_bindings.mb_get_custom_minimum_size =
        api->rebel_method_bind_get_method(
            "Control",
            "get_custom_minimum_size"
        );
    method_bindings.mb_get_default_cursor_shape =
        api->rebel_method_bind_get_method(
            "Control",
            "get_default_cursor_shape"
        );
    method_bindings.mb_get_drag_data =
        api->rebel_method_bind_get_method(
            "Control",
            "get_drag_data"
        );
    method_bindings.mb_get_end =
        api->rebel_method_bind_get_method(
            "Control",
            "get_end"
        );
    method_bindings.mb_get_focus_mode =
        api->rebel_method_bind_get_method(
            "Control",
            "get_focus_mode"
        );
    method_bindings.mb_get_focus_neighbour =
        api->rebel_method_bind_get_method(
            "Control",
            "get_focus_neighbour"
        );
    method_bindings.mb_get_focus_next =
        api->rebel_method_bind_get_method(
            "Control",
            "get_focus_next"
        );
    method_bindings.mb_get_focus_owner =
        api->rebel_method_bind_get_method(
            "Control",
            "get_focus_owner"
        );
    method_bindings.mb_get_focus_previous =
        api->rebel_method_bind_get_method(
            "Control",
            "get_focus_previous"
        );
    method_bindings.mb_get_font =
        api->rebel_method_bind_get_method(
            "Control",
            "get_font"
        );
    method_bindings.mb_get_global_position =
        api->rebel_method_bind_get_method(
            "Control",
            "get_global_position"
        );
    method_bindings.mb_get_global_rect =
        api->rebel_method_bind_get_method(
            "Control",
            "get_global_rect"
        );
    method_bindings.mb_get_h_grow_direction =
        api->rebel_method_bind_get_method(
            "Control",
            "get_h_grow_direction"
        );
    method_bindings.mb_get_h_size_flags =
        api->rebel_method_bind_get_method(
            "Control",
            "get_h_size_flags"
        );
    method_bindings.mb_get_icon =
        api->rebel_method_bind_get_method(
            "Control",
            "get_icon"
        );
    method_bindings.mb_get_margin =
        api->rebel_method_bind_get_method(
            "Control",
            "get_margin"
        );
    method_bindings.mb_get_minimum_size =
        api->rebel_method_bind_get_method(
            "Control",
            "get_minimum_size"
        );
    method_bindings.mb_get_mouse_filter =
        api->rebel_method_bind_get_method(
            "Control",
            "get_mouse_filter"
        );
    method_bindings.mb_get_parent_area_size =
        api->rebel_method_bind_get_method(
            "Control",
            "get_parent_area_size"
        );
    method_bindings.mb_get_parent_control =
        api->rebel_method_bind_get_method(
            "Control",
            "get_parent_control"
        );
    method_bindings.mb_get_pass_on_modal_close_click =
        api->rebel_method_bind_get_method(
            "Control",
            "get_pass_on_modal_close_click"
        );
    method_bindings.mb_get_pivot_offset =
        api->rebel_method_bind_get_method(
            "Control",
            "get_pivot_offset"
        );
    method_bindings.mb_get_position =
        api->rebel_method_bind_get_method(
            "Control",
            "get_position"
        );
    method_bindings.mb_get_rect =
        api->rebel_method_bind_get_method(
            "Control",
            "get_rect"
        );
    method_bindings.mb_get_rotation =
        api->rebel_method_bind_get_method(
            "Control",
            "get_rotation"
        );
    method_bindings.mb_get_rotation_degrees =
        api->rebel_method_bind_get_method(
            "Control",
            "get_rotation_degrees"
        );
    method_bindings.mb_get_scale =
        api->rebel_method_bind_get_method(
            "Control",
            "get_scale"
        );
    method_bindings.mb_get_size =
        api->rebel_method_bind_get_method(
            "Control",
            "get_size"
        );
    method_bindings.mb_get_stretch_ratio =
        api->rebel_method_bind_get_method(
            "Control",
            "get_stretch_ratio"
        );
    method_bindings.mb_get_stylebox =
        api->rebel_method_bind_get_method(
            "Control",
            "get_stylebox"
        );
    method_bindings.mb_get_theme =
        api->rebel_method_bind_get_method(
            "Control",
            "get_theme"
        );
    method_bindings.mb_get_theme_default_font =
        api->rebel_method_bind_get_method(
            "Control",
            "get_theme_default_font"
        );
    method_bindings.mb_get_tooltip =
        api->rebel_method_bind_get_method(
            "Control",
            "get_tooltip"
        );
    method_bindings.mb_get_v_grow_direction =
        api->rebel_method_bind_get_method(
            "Control",
            "get_v_grow_direction"
        );
    method_bindings.mb_get_v_size_flags =
        api->rebel_method_bind_get_method(
            "Control",
            "get_v_size_flags"
        );
    method_bindings.mb_grab_click_focus =
        api->rebel_method_bind_get_method(
            "Control",
            "grab_click_focus"
        );
    method_bindings.mb_grab_focus =
        api->rebel_method_bind_get_method(
            "Control",
            "grab_focus"
        );
    method_bindings.mb_has_color =
        api->rebel_method_bind_get_method(
            "Control",
            "has_color"
        );
    method_bindings.mb_has_color_override =
        api->rebel_method_bind_get_method(
            "Control",
            "has_color_override"
        );
    method_bindings.mb_has_constant =
        api->rebel_method_bind_get_method(
            "Control",
            "has_constant"
        );
    method_bindings.mb_has_constant_override =
        api->rebel_method_bind_get_method(
            "Control",
            "has_constant_override"
        );
    method_bindings.mb_has_focus =
        api->rebel_method_bind_get_method(
            "Control",
            "has_focus"
        );
    method_bindings.mb_has_font =
        api->rebel_method_bind_get_method(
            "Control",
            "has_font"
        );
    method_bindings.mb_has_font_override =
        api->rebel_method_bind_get_method(
            "Control",
            "has_font_override"
        );
    method_bindings.mb_has_icon =
        api->rebel_method_bind_get_method(
            "Control",
            "has_icon"
        );
    method_bindings.mb_has_icon_override =
        api->rebel_method_bind_get_method(
            "Control",
            "has_icon_override"
        );
    method_bindings.mb_has_point =
        api->rebel_method_bind_get_method(
            "Control",
            "has_point"
        );
    method_bindings.mb_has_shader_override =
        api->rebel_method_bind_get_method(
            "Control",
            "has_shader_override"
        );
    method_bindings.mb_has_stylebox =
        api->rebel_method_bind_get_method(
            "Control",
            "has_stylebox"
        );
    method_bindings.mb_has_stylebox_override =
        api->rebel_method_bind_get_method(
            "Control",
            "has_stylebox_override"
        );
    method_bindings.mb_is_clipping_contents =
        api->rebel_method_bind_get_method(
            "Control",
            "is_clipping_contents"
        );
    method_bindings.mb_minimum_size_changed =
        api->rebel_method_bind_get_method(
            "Control",
            "minimum_size_changed"
        );
    method_bindings.mb_release_focus =
        api->rebel_method_bind_get_method(
            "Control",
            "release_focus"
        );
    method_bindings.mb_set_anchor =
        api->rebel_method_bind_get_method(
            "Control",
            "set_anchor"
        );
    method_bindings.mb_set_anchor_and_margin =
        api->rebel_method_bind_get_method(
            "Control",
            "set_anchor_and_margin"
        );
    method_bindings.mb_set_anchors_and_margins_preset =
        api->rebel_method_bind_get_method(
            "Control",
            "set_anchors_and_margins_preset"
        );
    method_bindings.mb_set_anchors_preset =
        api->rebel_method_bind_get_method(
            "Control",
            "set_anchors_preset"
        );
    method_bindings.mb_set_begin =
        api->rebel_method_bind_get_method(
            "Control",
            "set_begin"
        );
    method_bindings.mb_set_clip_contents =
        api->rebel_method_bind_get_method(
            "Control",
            "set_clip_contents"
        );
    method_bindings.mb_set_custom_minimum_size =
        api->rebel_method_bind_get_method(
            "Control",
            "set_custom_minimum_size"
        );
    method_bindings.mb_set_default_cursor_shape =
        api->rebel_method_bind_get_method(
            "Control",
            "set_default_cursor_shape"
        );
    method_bindings.mb_set_drag_forwarding =
        api->rebel_method_bind_get_method(
            "Control",
            "set_drag_forwarding"
        );
    method_bindings.mb_set_drag_preview =
        api->rebel_method_bind_get_method(
            "Control",
            "set_drag_preview"
        );
    method_bindings.mb_set_end =
        api->rebel_method_bind_get_method(
            "Control",
            "set_end"
        );
    method_bindings.mb_set_focus_mode =
        api->rebel_method_bind_get_method(
            "Control",
            "set_focus_mode"
        );
    method_bindings.mb_set_focus_neighbour =
        api->rebel_method_bind_get_method(
            "Control",
            "set_focus_neighbour"
        );
    method_bindings.mb_set_focus_next =
        api->rebel_method_bind_get_method(
            "Control",
            "set_focus_next"
        );
    method_bindings.mb_set_focus_previous =
        api->rebel_method_bind_get_method(
            "Control",
            "set_focus_previous"
        );
    method_bindings.mb_set_global_position =
        api->rebel_method_bind_get_method(
            "Control",
            "set_global_position"
        );
    method_bindings.mb_set_h_grow_direction =
        api->rebel_method_bind_get_method(
            "Control",
            "set_h_grow_direction"
        );
    method_bindings.mb_set_h_size_flags =
        api->rebel_method_bind_get_method(
            "Control",
            "set_h_size_flags"
        );
    method_bindings.mb_set_margin =
        api->rebel_method_bind_get_method(
            "Control",
            "set_margin"
        );
    method_bindings.mb_set_margins_preset =
        api->rebel_method_bind_get_method(
            "Control",
            "set_margins_preset"
        );
    method_bindings.mb_set_mouse_filter =
        api->rebel_method_bind_get_method(
            "Control",
            "set_mouse_filter"
        );
    method_bindings.mb_set_pass_on_modal_close_click =
        api->rebel_method_bind_get_method(
            "Control",
            "set_pass_on_modal_close_click"
        );
    method_bindings.mb_set_pivot_offset =
        api->rebel_method_bind_get_method(
            "Control",
            "set_pivot_offset"
        );
    method_bindings.mb_set_position =
        api->rebel_method_bind_get_method(
            "Control",
            "set_position"
        );
    method_bindings.mb_set_rotation =
        api->rebel_method_bind_get_method(
            "Control",
            "set_rotation"
        );
    method_bindings.mb_set_rotation_degrees =
        api->rebel_method_bind_get_method(
            "Control",
            "set_rotation_degrees"
        );
    method_bindings.mb_set_scale =
        api->rebel_method_bind_get_method(
            "Control",
            "set_scale"
        );
    method_bindings.mb_set_size =
        api->rebel_method_bind_get_method(
            "Control",
            "set_size"
        );
    method_bindings.mb_set_stretch_ratio =
        api->rebel_method_bind_get_method(
            "Control",
            "set_stretch_ratio"
        );
    method_bindings.mb_set_theme =
        api->rebel_method_bind_get_method(
            "Control",
            "set_theme"
        );
    method_bindings.mb_set_tooltip =
        api->rebel_method_bind_get_method(
            "Control",
            "set_tooltip"
        );
    method_bindings.mb_set_v_grow_direction =
        api->rebel_method_bind_get_method(
            "Control",
            "set_v_grow_direction"
        );
    method_bindings.mb_set_v_size_flags =
        api->rebel_method_bind_get_method(
            "Control",
            "set_v_size_flags"
        );
    method_bindings.mb_show_modal =
        api->rebel_method_bind_get_method(
            "Control",
            "show_modal"
        );
    method_bindings.mb_warp_mouse =
        api->rebel_method_bind_get_method(
            "Control",
            "warp_mouse"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Control");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Control::MethodBindings Control::method_bindings = {};
void* Control::class_tag = nullptr;
} // namespace Rebel
