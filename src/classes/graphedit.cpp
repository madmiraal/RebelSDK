// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/graphedit.h"

#include "classes/hboxcontainer.h"
#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void GraphEdit::_connections_layer_draw() {
    rebel_icall_void(
        method_bindings.mb__connections_layer_draw,
        (const Object*)this
    );
}

void GraphEdit::_graph_node_moved(const Node* arg0) {
    rebel_icall_void_object(
        method_bindings.mb__graph_node_moved,
        (const Object*)this,
        arg0
    );
}

void GraphEdit::_graph_node_raised(const Node* arg0) {
    rebel_icall_void_object(
        method_bindings.mb__graph_node_raised,
        (const Object*)this,
        arg0
    );
}

void GraphEdit::_graph_node_slot_updated(const int64_t arg0, const Node* arg1) {
    rebel_icall_void_int_object(
        method_bindings.mb__graph_node_slot_updated,
        (const Object*)this,
        arg0,
        arg1
    );
}

void GraphEdit::_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void GraphEdit::_minimap_draw() {
    rebel_icall_void(
        method_bindings.mb__minimap_draw,
        (const Object*)this
    );
}

void GraphEdit::_minimap_toggled() {
    rebel_icall_void(
        method_bindings.mb__minimap_toggled,
        (const Object*)this
    );
}

void GraphEdit::_scroll_moved(const real_t arg0) {
    rebel_icall_void_float(
        method_bindings.mb__scroll_moved,
        (const Object*)this,
        arg0
    );
}

void GraphEdit::_snap_toggled() {
    rebel_icall_void(
        method_bindings.mb__snap_toggled,
        (const Object*)this
    );
}

void GraphEdit::_snap_value_changed(const real_t arg0) {
    rebel_icall_void_float(
        method_bindings.mb__snap_value_changed,
        (const Object*)this,
        arg0
    );
}

void GraphEdit::_top_layer_draw() {
    rebel_icall_void(
        method_bindings.mb__top_layer_draw,
        (const Object*)this
    );
}

void GraphEdit::_top_layer_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__top_layer_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void GraphEdit::_update_scroll_offset() {
    rebel_icall_void(
        method_bindings.mb__update_scroll_offset,
        (const Object*)this
    );
}

void GraphEdit::_zoom_minus() {
    rebel_icall_void(
        method_bindings.mb__zoom_minus,
        (const Object*)this
    );
}

void GraphEdit::_zoom_plus() {
    rebel_icall_void(
        method_bindings.mb__zoom_plus,
        (const Object*)this
    );
}

void GraphEdit::_zoom_reset() {
    rebel_icall_void(
        method_bindings.mb__zoom_reset,
        (const Object*)this
    );
}

void GraphEdit::add_valid_connection_type(const int64_t from_type, const int64_t to_type) {
    rebel_icall_void_int_int(
        method_bindings.mb_add_valid_connection_type,
        (const Object*)this,
        from_type,
        to_type
    );
}

void GraphEdit::add_valid_left_disconnect_type(const int64_t type) {
    rebel_icall_void_int(
        method_bindings.mb_add_valid_left_disconnect_type,
        (const Object*)this,
        type
    );
}

void GraphEdit::add_valid_right_disconnect_type(const int64_t type) {
    rebel_icall_void_int(
        method_bindings.mb_add_valid_right_disconnect_type,
        (const Object*)this,
        type
    );
}

void GraphEdit::clear_connections() {
    rebel_icall_void(
        method_bindings.mb_clear_connections,
        (const Object*)this
    );
}

Error GraphEdit::connect_node(const String from, const int64_t from_port, const String to, const int64_t to_port) {
    return (Error)rebel_icall_int_string_int_string_int(
        method_bindings.mb_connect_node,
        (const Object*)this,
        from,
        from_port,
        to,
        to_port
    );
}

void GraphEdit::disconnect_node(const String from, const int64_t from_port, const String to, const int64_t to_port) {
    rebel_icall_void_string_int_string_int(
        method_bindings.mb_disconnect_node,
        (const Object*)this,
        from,
        from_port,
        to,
        to_port
    );
}

Array GraphEdit::get_connection_list() const {
    return rebel_icall_array(
        method_bindings.mb_get_connection_list,
        (const Object*)this
    );
}

real_t GraphEdit::get_minimap_opacity() const {
    return rebel_icall_float(
        method_bindings.mb_get_minimap_opacity,
        (const Object*)this
    );
}

Vector2 GraphEdit::get_minimap_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_minimap_size,
        (const Object*)this
    );
}

Vector2 GraphEdit::get_scroll_ofs() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_scroll_ofs,
        (const Object*)this
    );
}

int64_t GraphEdit::get_snap() const {
    return rebel_icall_int(
        method_bindings.mb_get_snap,
        (const Object*)this
    );
}

real_t GraphEdit::get_zoom() const {
    return rebel_icall_float(
        method_bindings.mb_get_zoom,
        (const Object*)this
    );
}

HBoxContainer* GraphEdit::get_zoom_hbox() {
    return (HBoxContainer*)rebel_icall_object(
        method_bindings.mb_get_zoom_hbox,
        (const Object*)this
    );
}

real_t GraphEdit::get_zoom_max() const {
    return rebel_icall_float(
        method_bindings.mb_get_zoom_max,
        (const Object*)this
    );
}

real_t GraphEdit::get_zoom_min() const {
    return rebel_icall_float(
        method_bindings.mb_get_zoom_min,
        (const Object*)this
    );
}

real_t GraphEdit::get_zoom_step() const {
    return rebel_icall_float(
        method_bindings.mb_get_zoom_step,
        (const Object*)this
    );
}

bool GraphEdit::is_minimap_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_minimap_enabled,
        (const Object*)this
    );
}

bool GraphEdit::is_node_connected(const String from, const int64_t from_port, const String to, const int64_t to_port) {
    return rebel_icall_bool_string_int_string_int(
        method_bindings.mb_is_node_connected,
        (const Object*)this,
        from,
        from_port,
        to,
        to_port
    );
}

bool GraphEdit::is_right_disconnects_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_right_disconnects_enabled,
        (const Object*)this
    );
}

bool GraphEdit::is_showing_zoom_label() const {
    return rebel_icall_bool(
        method_bindings.mb_is_showing_zoom_label,
        (const Object*)this
    );
}

bool GraphEdit::is_using_snap() const {
    return rebel_icall_bool(
        method_bindings.mb_is_using_snap,
        (const Object*)this
    );
}

bool GraphEdit::is_valid_connection_type(const int64_t from_type, const int64_t to_type) const {
    return rebel_icall_bool_int_int(
        method_bindings.mb_is_valid_connection_type,
        (const Object*)this,
        from_type,
        to_type
    );
}

void GraphEdit::remove_valid_connection_type(const int64_t from_type, const int64_t to_type) {
    rebel_icall_void_int_int(
        method_bindings.mb_remove_valid_connection_type,
        (const Object*)this,
        from_type,
        to_type
    );
}

void GraphEdit::remove_valid_left_disconnect_type(const int64_t type) {
    rebel_icall_void_int(
        method_bindings.mb_remove_valid_left_disconnect_type,
        (const Object*)this,
        type
    );
}

void GraphEdit::remove_valid_right_disconnect_type(const int64_t type) {
    rebel_icall_void_int(
        method_bindings.mb_remove_valid_right_disconnect_type,
        (const Object*)this,
        type
    );
}

void GraphEdit::set_connection_activity(const String from, const int64_t from_port, const String to, const int64_t to_port, const real_t amount) {
    rebel_icall_void_string_int_string_int_float(
        method_bindings.mb_set_connection_activity,
        (const Object*)this,
        from,
        from_port,
        to,
        to_port,
        amount
    );
}

void GraphEdit::set_minimap_enabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_minimap_enabled,
        (const Object*)this,
        enable
    );
}

void GraphEdit::set_minimap_opacity(const real_t p_opacity) {
    rebel_icall_void_float(
        method_bindings.mb_set_minimap_opacity,
        (const Object*)this,
        p_opacity
    );
}

void GraphEdit::set_minimap_size(const Vector2 p_size) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_minimap_size,
        (const Object*)this,
        p_size
    );
}

void GraphEdit::set_right_disconnects(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_right_disconnects,
        (const Object*)this,
        enable
    );
}

void GraphEdit::set_scroll_ofs(const Vector2 ofs) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_scroll_ofs,
        (const Object*)this,
        ofs
    );
}

void GraphEdit::set_selected(const Node* node) {
    rebel_icall_void_object(
        method_bindings.mb_set_selected,
        (const Object*)this,
        node
    );
}

void GraphEdit::set_show_zoom_label(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_show_zoom_label,
        (const Object*)this,
        enable
    );
}

void GraphEdit::set_snap(const int64_t pixels) {
    rebel_icall_void_int(
        method_bindings.mb_set_snap,
        (const Object*)this,
        pixels
    );
}

void GraphEdit::set_use_snap(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_snap,
        (const Object*)this,
        enable
    );
}

void GraphEdit::set_zoom(const real_t p_zoom) {
    rebel_icall_void_float(
        method_bindings.mb_set_zoom,
        (const Object*)this,
        p_zoom
    );
}

void GraphEdit::set_zoom_max(const real_t zoom_max) {
    rebel_icall_void_float(
        method_bindings.mb_set_zoom_max,
        (const Object*)this,
        zoom_max
    );
}

void GraphEdit::set_zoom_min(const real_t zoom_min) {
    rebel_icall_void_float(
        method_bindings.mb_set_zoom_min,
        (const Object*)this,
        zoom_min
    );
}

void GraphEdit::set_zoom_step(const real_t zoom_step) {
    rebel_icall_void_float(
        method_bindings.mb_set_zoom_step,
        (const Object*)this,
        zoom_step
    );
}

GraphEdit* GraphEdit::create() {
    return (GraphEdit*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GraphEdit")()
         );
}

void GraphEdit::init_method_bindings() {
    method_bindings.mb__connections_layer_draw =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "_connections_layer_draw"
        );
    method_bindings.mb__graph_node_moved =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "_graph_node_moved"
        );
    method_bindings.mb__graph_node_raised =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "_graph_node_raised"
        );
    method_bindings.mb__graph_node_slot_updated =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "_graph_node_slot_updated"
        );
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "_gui_input"
        );
    method_bindings.mb__minimap_draw =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "_minimap_draw"
        );
    method_bindings.mb__minimap_toggled =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "_minimap_toggled"
        );
    method_bindings.mb__scroll_moved =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "_scroll_moved"
        );
    method_bindings.mb__snap_toggled =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "_snap_toggled"
        );
    method_bindings.mb__snap_value_changed =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "_snap_value_changed"
        );
    method_bindings.mb__top_layer_draw =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "_top_layer_draw"
        );
    method_bindings.mb__top_layer_input =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "_top_layer_input"
        );
    method_bindings.mb__update_scroll_offset =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "_update_scroll_offset"
        );
    method_bindings.mb__zoom_minus =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "_zoom_minus"
        );
    method_bindings.mb__zoom_plus =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "_zoom_plus"
        );
    method_bindings.mb__zoom_reset =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "_zoom_reset"
        );
    method_bindings.mb_add_valid_connection_type =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "add_valid_connection_type"
        );
    method_bindings.mb_add_valid_left_disconnect_type =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "add_valid_left_disconnect_type"
        );
    method_bindings.mb_add_valid_right_disconnect_type =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "add_valid_right_disconnect_type"
        );
    method_bindings.mb_clear_connections =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "clear_connections"
        );
    method_bindings.mb_connect_node =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "connect_node"
        );
    method_bindings.mb_disconnect_node =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "disconnect_node"
        );
    method_bindings.mb_get_connection_list =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "get_connection_list"
        );
    method_bindings.mb_get_minimap_opacity =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "get_minimap_opacity"
        );
    method_bindings.mb_get_minimap_size =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "get_minimap_size"
        );
    method_bindings.mb_get_scroll_ofs =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "get_scroll_ofs"
        );
    method_bindings.mb_get_snap =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "get_snap"
        );
    method_bindings.mb_get_zoom =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "get_zoom"
        );
    method_bindings.mb_get_zoom_hbox =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "get_zoom_hbox"
        );
    method_bindings.mb_get_zoom_max =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "get_zoom_max"
        );
    method_bindings.mb_get_zoom_min =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "get_zoom_min"
        );
    method_bindings.mb_get_zoom_step =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "get_zoom_step"
        );
    method_bindings.mb_is_minimap_enabled =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "is_minimap_enabled"
        );
    method_bindings.mb_is_node_connected =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "is_node_connected"
        );
    method_bindings.mb_is_right_disconnects_enabled =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "is_right_disconnects_enabled"
        );
    method_bindings.mb_is_showing_zoom_label =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "is_showing_zoom_label"
        );
    method_bindings.mb_is_using_snap =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "is_using_snap"
        );
    method_bindings.mb_is_valid_connection_type =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "is_valid_connection_type"
        );
    method_bindings.mb_remove_valid_connection_type =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "remove_valid_connection_type"
        );
    method_bindings.mb_remove_valid_left_disconnect_type =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "remove_valid_left_disconnect_type"
        );
    method_bindings.mb_remove_valid_right_disconnect_type =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "remove_valid_right_disconnect_type"
        );
    method_bindings.mb_set_connection_activity =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "set_connection_activity"
        );
    method_bindings.mb_set_minimap_enabled =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "set_minimap_enabled"
        );
    method_bindings.mb_set_minimap_opacity =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "set_minimap_opacity"
        );
    method_bindings.mb_set_minimap_size =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "set_minimap_size"
        );
    method_bindings.mb_set_right_disconnects =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "set_right_disconnects"
        );
    method_bindings.mb_set_scroll_ofs =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "set_scroll_ofs"
        );
    method_bindings.mb_set_selected =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "set_selected"
        );
    method_bindings.mb_set_show_zoom_label =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "set_show_zoom_label"
        );
    method_bindings.mb_set_snap =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "set_snap"
        );
    method_bindings.mb_set_use_snap =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "set_use_snap"
        );
    method_bindings.mb_set_zoom =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "set_zoom"
        );
    method_bindings.mb_set_zoom_max =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "set_zoom_max"
        );
    method_bindings.mb_set_zoom_min =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "set_zoom_min"
        );
    method_bindings.mb_set_zoom_step =
        api->rebel_method_bind_get_method(
            "GraphEdit",
            "set_zoom_step"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GraphEdit");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GraphEdit::MethodBindings GraphEdit::method_bindings = {};
void* GraphEdit::class_tag = nullptr;
} // namespace Rebel
