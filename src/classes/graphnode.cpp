// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/graphnode.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void GraphNode::_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void GraphNode::clear_all_slots() {
    rebel_icall_void(
        method_bindings.mb_clear_all_slots,
        (const Object*)this
    );
}

void GraphNode::clear_slot(const int64_t idx) {
    rebel_icall_void_int(
        method_bindings.mb_clear_slot,
        (const Object*)this,
        idx
    );
}

Color GraphNode::get_connection_input_color(const int64_t idx) {
    return rebel_icall_color_int(
        method_bindings.mb_get_connection_input_color,
        (const Object*)this,
        idx
    );
}

int64_t GraphNode::get_connection_input_count() {
    return rebel_icall_int(
        method_bindings.mb_get_connection_input_count,
        (const Object*)this
    );
}

Vector2 GraphNode::get_connection_input_position(const int64_t idx) {
    return rebel_icall_vector2_int(
        method_bindings.mb_get_connection_input_position,
        (const Object*)this,
        idx
    );
}

int64_t GraphNode::get_connection_input_type(const int64_t idx) {
    return rebel_icall_int_int(
        method_bindings.mb_get_connection_input_type,
        (const Object*)this,
        idx
    );
}

Color GraphNode::get_connection_output_color(const int64_t idx) {
    return rebel_icall_color_int(
        method_bindings.mb_get_connection_output_color,
        (const Object*)this,
        idx
    );
}

int64_t GraphNode::get_connection_output_count() {
    return rebel_icall_int(
        method_bindings.mb_get_connection_output_count,
        (const Object*)this
    );
}

Vector2 GraphNode::get_connection_output_position(const int64_t idx) {
    return rebel_icall_vector2_int(
        method_bindings.mb_get_connection_output_position,
        (const Object*)this,
        idx
    );
}

int64_t GraphNode::get_connection_output_type(const int64_t idx) {
    return rebel_icall_int_int(
        method_bindings.mb_get_connection_output_type,
        (const Object*)this,
        idx
    );
}

Vector2 GraphNode::get_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_offset,
        (const Object*)this
    );
}

GraphNode::Overlay GraphNode::get_overlay() const {
    return (GraphNode::Overlay)rebel_icall_int(
        method_bindings.mb_get_overlay,
        (const Object*)this
    );
}

Color GraphNode::get_slot_color_left(const int64_t idx) const {
    return rebel_icall_color_int(
        method_bindings.mb_get_slot_color_left,
        (const Object*)this,
        idx
    );
}

Color GraphNode::get_slot_color_right(const int64_t idx) const {
    return rebel_icall_color_int(
        method_bindings.mb_get_slot_color_right,
        (const Object*)this,
        idx
    );
}

int64_t GraphNode::get_slot_type_left(const int64_t idx) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_slot_type_left,
        (const Object*)this,
        idx
    );
}

int64_t GraphNode::get_slot_type_right(const int64_t idx) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_slot_type_right,
        (const Object*)this,
        idx
    );
}

String GraphNode::get_title() const {
    return rebel_icall_string(
        method_bindings.mb_get_title,
        (const Object*)this
    );
}

bool GraphNode::is_close_button_visible() const {
    return rebel_icall_bool(
        method_bindings.mb_is_close_button_visible,
        (const Object*)this
    );
}

bool GraphNode::is_comment() const {
    return rebel_icall_bool(
        method_bindings.mb_is_comment,
        (const Object*)this
    );
}

bool GraphNode::is_resizable() const {
    return rebel_icall_bool(
        method_bindings.mb_is_resizable,
        (const Object*)this
    );
}

bool GraphNode::is_selected() {
    return rebel_icall_bool(
        method_bindings.mb_is_selected,
        (const Object*)this
    );
}

bool GraphNode::is_slot_enabled_left(const int64_t idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_slot_enabled_left,
        (const Object*)this,
        idx
    );
}

bool GraphNode::is_slot_enabled_right(const int64_t idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_slot_enabled_right,
        (const Object*)this,
        idx
    );
}

void GraphNode::set_comment(const bool comment) {
    rebel_icall_void_bool(
        method_bindings.mb_set_comment,
        (const Object*)this,
        comment
    );
}

void GraphNode::set_offset(const Vector2 offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_offset,
        (const Object*)this,
        offset
    );
}

void GraphNode::set_overlay(const int64_t overlay) {
    rebel_icall_void_int(
        method_bindings.mb_set_overlay,
        (const Object*)this,
        overlay
    );
}

void GraphNode::set_resizable(const bool resizable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_resizable,
        (const Object*)this,
        resizable
    );
}

void GraphNode::set_selected(const bool selected) {
    rebel_icall_void_bool(
        method_bindings.mb_set_selected,
        (const Object*)this,
        selected
    );
}

void GraphNode::set_show_close_button(const bool show) {
    rebel_icall_void_bool(
        method_bindings.mb_set_show_close_button,
        (const Object*)this,
        show
    );
}

void GraphNode::set_slot(const int64_t idx, const bool enable_left, const int64_t type_left, const Color color_left, const bool enable_right, const int64_t type_right, const Color color_right, const Ref<Texture> custom_left, const Ref<Texture> custom_right) {
    rebel_icall_void_int_bool_int_color_bool_int_color_object_object(
        method_bindings.mb_set_slot,
        (const Object*)this,
        idx,
        enable_left,
        type_left,
        color_left,
        enable_right,
        type_right,
        color_right,
        custom_left.ptr(),
        custom_right.ptr()
    );
}

void GraphNode::set_slot_color_left(const int64_t idx, const Color color_left) {
    rebel_icall_void_int_color(
        method_bindings.mb_set_slot_color_left,
        (const Object*)this,
        idx,
        color_left
    );
}

void GraphNode::set_slot_color_right(const int64_t idx, const Color color_right) {
    rebel_icall_void_int_color(
        method_bindings.mb_set_slot_color_right,
        (const Object*)this,
        idx,
        color_right
    );
}

void GraphNode::set_slot_enabled_left(const int64_t idx, const bool enable_left) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_slot_enabled_left,
        (const Object*)this,
        idx,
        enable_left
    );
}

void GraphNode::set_slot_enabled_right(const int64_t idx, const bool enable_right) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_slot_enabled_right,
        (const Object*)this,
        idx,
        enable_right
    );
}

void GraphNode::set_slot_type_left(const int64_t idx, const int64_t type_left) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_slot_type_left,
        (const Object*)this,
        idx,
        type_left
    );
}

void GraphNode::set_slot_type_right(const int64_t idx, const int64_t type_right) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_slot_type_right,
        (const Object*)this,
        idx,
        type_right
    );
}

void GraphNode::set_title(const String title) {
    rebel_icall_void_string(
        method_bindings.mb_set_title,
        (const Object*)this,
        title
    );
}

GraphNode* GraphNode::create() {
    return (GraphNode*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GraphNode")()
         );
}

void GraphNode::init_method_bindings() {
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "_gui_input"
        );
    method_bindings.mb_clear_all_slots =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "clear_all_slots"
        );
    method_bindings.mb_clear_slot =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "clear_slot"
        );
    method_bindings.mb_get_connection_input_color =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "get_connection_input_color"
        );
    method_bindings.mb_get_connection_input_count =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "get_connection_input_count"
        );
    method_bindings.mb_get_connection_input_position =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "get_connection_input_position"
        );
    method_bindings.mb_get_connection_input_type =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "get_connection_input_type"
        );
    method_bindings.mb_get_connection_output_color =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "get_connection_output_color"
        );
    method_bindings.mb_get_connection_output_count =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "get_connection_output_count"
        );
    method_bindings.mb_get_connection_output_position =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "get_connection_output_position"
        );
    method_bindings.mb_get_connection_output_type =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "get_connection_output_type"
        );
    method_bindings.mb_get_offset =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "get_offset"
        );
    method_bindings.mb_get_overlay =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "get_overlay"
        );
    method_bindings.mb_get_slot_color_left =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "get_slot_color_left"
        );
    method_bindings.mb_get_slot_color_right =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "get_slot_color_right"
        );
    method_bindings.mb_get_slot_type_left =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "get_slot_type_left"
        );
    method_bindings.mb_get_slot_type_right =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "get_slot_type_right"
        );
    method_bindings.mb_get_title =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "get_title"
        );
    method_bindings.mb_is_close_button_visible =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "is_close_button_visible"
        );
    method_bindings.mb_is_comment =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "is_comment"
        );
    method_bindings.mb_is_resizable =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "is_resizable"
        );
    method_bindings.mb_is_selected =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "is_selected"
        );
    method_bindings.mb_is_slot_enabled_left =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "is_slot_enabled_left"
        );
    method_bindings.mb_is_slot_enabled_right =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "is_slot_enabled_right"
        );
    method_bindings.mb_set_comment =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "set_comment"
        );
    method_bindings.mb_set_offset =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "set_offset"
        );
    method_bindings.mb_set_overlay =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "set_overlay"
        );
    method_bindings.mb_set_resizable =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "set_resizable"
        );
    method_bindings.mb_set_selected =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "set_selected"
        );
    method_bindings.mb_set_show_close_button =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "set_show_close_button"
        );
    method_bindings.mb_set_slot =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "set_slot"
        );
    method_bindings.mb_set_slot_color_left =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "set_slot_color_left"
        );
    method_bindings.mb_set_slot_color_right =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "set_slot_color_right"
        );
    method_bindings.mb_set_slot_enabled_left =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "set_slot_enabled_left"
        );
    method_bindings.mb_set_slot_enabled_right =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "set_slot_enabled_right"
        );
    method_bindings.mb_set_slot_type_left =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "set_slot_type_left"
        );
    method_bindings.mb_set_slot_type_right =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "set_slot_type_right"
        );
    method_bindings.mb_set_title =
        api->rebel_method_bind_get_method(
            "GraphNode",
            "set_title"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GraphNode");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GraphNode::MethodBindings GraphNode::method_bindings = {};
void* GraphNode::class_tag = nullptr;
} // namespace Rebel
