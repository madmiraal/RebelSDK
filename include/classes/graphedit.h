// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GRAPHEDIT_H
#define REBEL_GRAPHEDIT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/control.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class HBoxContainer;
class InputEvent;
class Node;

class GraphEdit : public Control {
public:
    void _connections_layer_draw();
    void _graph_node_moved(const Node* arg0);
    void _graph_node_raised(const Node* arg0);
    void _graph_node_slot_updated(const int64_t arg0, const Node* arg1);
    void _gui_input(const Ref<InputEvent> arg0);
    void _minimap_draw();
    void _minimap_toggled();
    void _scroll_moved(const real_t arg0);
    void _snap_toggled();
    void _snap_value_changed(const real_t arg0);
    void _top_layer_draw();
    void _top_layer_input(const Ref<InputEvent> arg0);
    void _update_scroll_offset();
    void _zoom_minus();
    void _zoom_plus();
    void _zoom_reset();
    void add_valid_connection_type(const int64_t from_type, const int64_t to_type);
    void add_valid_left_disconnect_type(const int64_t type);
    void add_valid_right_disconnect_type(const int64_t type);
    void clear_connections();
    Error connect_node(const String from, const int64_t from_port, const String to, const int64_t to_port);
    void disconnect_node(const String from, const int64_t from_port, const String to, const int64_t to_port);
    Array get_connection_list() const;
    real_t get_minimap_opacity() const;
    Vector2 get_minimap_size() const;
    Vector2 get_scroll_ofs() const;
    int64_t get_snap() const;
    real_t get_zoom() const;
    HBoxContainer* get_zoom_hbox();
    real_t get_zoom_max() const;
    real_t get_zoom_min() const;
    real_t get_zoom_step() const;
    bool is_minimap_enabled() const;
    bool is_node_connected(const String from, const int64_t from_port, const String to, const int64_t to_port);
    bool is_right_disconnects_enabled() const;
    bool is_showing_zoom_label() const;
    bool is_using_snap() const;
    bool is_valid_connection_type(const int64_t from_type, const int64_t to_type) const;
    void remove_valid_connection_type(const int64_t from_type, const int64_t to_type);
    void remove_valid_left_disconnect_type(const int64_t type);
    void remove_valid_right_disconnect_type(const int64_t type);
    void set_connection_activity(const String from, const int64_t from_port, const String to, const int64_t to_port, const real_t amount);
    void set_minimap_enabled(const bool enable);
    void set_minimap_opacity(const real_t p_opacity);
    void set_minimap_size(const Vector2 p_size);
    void set_right_disconnects(const bool enable);
    void set_scroll_ofs(const Vector2 ofs);
    void set_selected(const Node* node);
    void set_show_zoom_label(const bool enable);
    void set_snap(const int64_t pixels);
    void set_use_snap(const bool enable);
    void set_zoom(const real_t p_zoom);
    void set_zoom_max(const real_t zoom_max);
    void set_zoom_min(const real_t zoom_min);
    void set_zoom_step(const real_t zoom_step);

    static GraphEdit* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GraphEdit";
    }

    inline static const char* get_rebel_class_name() {
        return "GraphEdit";
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
        rebel_method_bind* mb__connections_layer_draw;
        rebel_method_bind* mb__graph_node_moved;
        rebel_method_bind* mb__graph_node_raised;
        rebel_method_bind* mb__graph_node_slot_updated;
        rebel_method_bind* mb__gui_input;
        rebel_method_bind* mb__minimap_draw;
        rebel_method_bind* mb__minimap_toggled;
        rebel_method_bind* mb__scroll_moved;
        rebel_method_bind* mb__snap_toggled;
        rebel_method_bind* mb__snap_value_changed;
        rebel_method_bind* mb__top_layer_draw;
        rebel_method_bind* mb__top_layer_input;
        rebel_method_bind* mb__update_scroll_offset;
        rebel_method_bind* mb__zoom_minus;
        rebel_method_bind* mb__zoom_plus;
        rebel_method_bind* mb__zoom_reset;
        rebel_method_bind* mb_add_valid_connection_type;
        rebel_method_bind* mb_add_valid_left_disconnect_type;
        rebel_method_bind* mb_add_valid_right_disconnect_type;
        rebel_method_bind* mb_clear_connections;
        rebel_method_bind* mb_connect_node;
        rebel_method_bind* mb_disconnect_node;
        rebel_method_bind* mb_get_connection_list;
        rebel_method_bind* mb_get_minimap_opacity;
        rebel_method_bind* mb_get_minimap_size;
        rebel_method_bind* mb_get_scroll_ofs;
        rebel_method_bind* mb_get_snap;
        rebel_method_bind* mb_get_zoom;
        rebel_method_bind* mb_get_zoom_hbox;
        rebel_method_bind* mb_get_zoom_max;
        rebel_method_bind* mb_get_zoom_min;
        rebel_method_bind* mb_get_zoom_step;
        rebel_method_bind* mb_is_minimap_enabled;
        rebel_method_bind* mb_is_node_connected;
        rebel_method_bind* mb_is_right_disconnects_enabled;
        rebel_method_bind* mb_is_showing_zoom_label;
        rebel_method_bind* mb_is_using_snap;
        rebel_method_bind* mb_is_valid_connection_type;
        rebel_method_bind* mb_remove_valid_connection_type;
        rebel_method_bind* mb_remove_valid_left_disconnect_type;
        rebel_method_bind* mb_remove_valid_right_disconnect_type;
        rebel_method_bind* mb_set_connection_activity;
        rebel_method_bind* mb_set_minimap_enabled;
        rebel_method_bind* mb_set_minimap_opacity;
        rebel_method_bind* mb_set_minimap_size;
        rebel_method_bind* mb_set_right_disconnects;
        rebel_method_bind* mb_set_scroll_ofs;
        rebel_method_bind* mb_set_selected;
        rebel_method_bind* mb_set_show_zoom_label;
        rebel_method_bind* mb_set_snap;
        rebel_method_bind* mb_set_use_snap;
        rebel_method_bind* mb_set_zoom;
        rebel_method_bind* mb_set_zoom_max;
        rebel_method_bind* mb_set_zoom_min;
        rebel_method_bind* mb_set_zoom_step;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GRAPHEDIT_H
