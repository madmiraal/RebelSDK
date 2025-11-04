// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSHADER_H
#define REBEL_VISUALSHADER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/shader.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualShaderNode;

class VisualShader : public Shader {
public:
    enum Type {
        TYPE_VERTEX = 0,
        TYPE_FRAGMENT = 1,
        TYPE_LIGHT = 2,
        TYPE_MAX = 3,
    };

    static const int NODE_ID_INVALID = -1;
    static const int NODE_ID_OUTPUT = 0;

    void _input_type_changed(const int64_t arg0, const int64_t arg1);
    void _queue_update();
    void _update_shader() const;
    void add_node(const int64_t type, const Ref<VisualShaderNode> node, const Vector2 position, const int64_t id);
    bool can_connect_nodes(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) const;
    Error connect_nodes(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port);
    void connect_nodes_forced(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port);
    void disconnect_nodes(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port);
    Vector2 get_graph_offset() const;
    Ref<VisualShaderNode> get_node(const int64_t type, const int64_t id) const;
    Array get_node_connections(const int64_t type) const;
    PoolIntArray get_node_list(const int64_t type) const;
    Vector2 get_node_position(const int64_t type, const int64_t id) const;
    int64_t get_valid_node_id(const int64_t type) const;
    bool is_node_connection(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) const;
    void remove_node(const int64_t type, const int64_t id);
    void set_graph_offset(const Vector2 offset);
    void set_mode(const int64_t mode);
    void set_node_position(const int64_t type, const int64_t id, const Vector2 position);

    static VisualShader* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualShader";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualShader";
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
        rebel_method_bind* mb__input_type_changed;
        rebel_method_bind* mb__queue_update;
        rebel_method_bind* mb__update_shader;
        rebel_method_bind* mb_add_node;
        rebel_method_bind* mb_can_connect_nodes;
        rebel_method_bind* mb_connect_nodes;
        rebel_method_bind* mb_connect_nodes_forced;
        rebel_method_bind* mb_disconnect_nodes;
        rebel_method_bind* mb_get_graph_offset;
        rebel_method_bind* mb_get_node;
        rebel_method_bind* mb_get_node_connections;
        rebel_method_bind* mb_get_node_list;
        rebel_method_bind* mb_get_node_position;
        rebel_method_bind* mb_get_valid_node_id;
        rebel_method_bind* mb_is_node_connection;
        rebel_method_bind* mb_remove_node;
        rebel_method_bind* mb_set_graph_offset;
        rebel_method_bind* mb_set_mode;
        rebel_method_bind* mb_set_node_position;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSHADER_H
