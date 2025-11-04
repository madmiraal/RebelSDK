// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshader.h"

#include "classes/icalls.h"
#include "classes/visualshadernode.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void VisualShader::_input_type_changed(const int64_t arg0, const int64_t arg1) {
    rebel_icall_void_int_int(
        method_bindings.mb__input_type_changed,
        (const Object*)this,
        arg0,
        arg1
    );
}

void VisualShader::_queue_update() {
    rebel_icall_void(
        method_bindings.mb__queue_update,
        (const Object*)this
    );
}

void VisualShader::_update_shader() const {
    rebel_icall_void(
        method_bindings.mb__update_shader,
        (const Object*)this
    );
}

void VisualShader::add_node(const int64_t type, const Ref<VisualShaderNode> node, const Vector2 position, const int64_t id) {
    rebel_icall_void_int_object_vector2_int(
        method_bindings.mb_add_node,
        (const Object*)this,
        type,
        node.ptr(),
        position,
        id
    );
}

bool VisualShader::can_connect_nodes(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) const {
    return rebel_icall_bool_int_int_int_int_int(
        method_bindings.mb_can_connect_nodes,
        (const Object*)this,
        type,
        from_node,
        from_port,
        to_node,
        to_port
    );
}

Error VisualShader::connect_nodes(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) {
    return (Error)rebel_icall_int_int_int_int_int_int(
        method_bindings.mb_connect_nodes,
        (const Object*)this,
        type,
        from_node,
        from_port,
        to_node,
        to_port
    );
}

void VisualShader::connect_nodes_forced(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) {
    rebel_icall_void_int_int_int_int_int(
        method_bindings.mb_connect_nodes_forced,
        (const Object*)this,
        type,
        from_node,
        from_port,
        to_node,
        to_port
    );
}

void VisualShader::disconnect_nodes(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) {
    rebel_icall_void_int_int_int_int_int(
        method_bindings.mb_disconnect_nodes,
        (const Object*)this,
        type,
        from_node,
        from_port,
        to_node,
        to_port
    );
}

Vector2 VisualShader::get_graph_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_graph_offset,
        (const Object*)this
    );
}

Ref<VisualShaderNode> VisualShader::get_node(const int64_t type, const int64_t id) const {
    return Ref<VisualShaderNode>::create_ref(rebel_icall_object_int_int(
        method_bindings.mb_get_node,
        (const Object*)this,
        type,
        id
    ));
}

Array VisualShader::get_node_connections(const int64_t type) const {
    return rebel_icall_array_int(
        method_bindings.mb_get_node_connections,
        (const Object*)this,
        type
    );
}

PoolIntArray VisualShader::get_node_list(const int64_t type) const {
    return rebel_icall_poolintarray_int(
        method_bindings.mb_get_node_list,
        (const Object*)this,
        type
    );
}

Vector2 VisualShader::get_node_position(const int64_t type, const int64_t id) const {
    return rebel_icall_vector2_int_int(
        method_bindings.mb_get_node_position,
        (const Object*)this,
        type,
        id
    );
}

int64_t VisualShader::get_valid_node_id(const int64_t type) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_valid_node_id,
        (const Object*)this,
        type
    );
}

bool VisualShader::is_node_connection(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) const {
    return rebel_icall_bool_int_int_int_int_int(
        method_bindings.mb_is_node_connection,
        (const Object*)this,
        type,
        from_node,
        from_port,
        to_node,
        to_port
    );
}

void VisualShader::remove_node(const int64_t type, const int64_t id) {
    rebel_icall_void_int_int(
        method_bindings.mb_remove_node,
        (const Object*)this,
        type,
        id
    );
}

void VisualShader::set_graph_offset(const Vector2 offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_graph_offset,
        (const Object*)this,
        offset
    );
}

void VisualShader::set_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_mode,
        (const Object*)this,
        mode
    );
}

void VisualShader::set_node_position(const int64_t type, const int64_t id, const Vector2 position) {
    rebel_icall_void_int_int_vector2(
        method_bindings.mb_set_node_position,
        (const Object*)this,
        type,
        id,
        position
    );
}

VisualShader* VisualShader::create() {
    return (VisualShader*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShader")()
         );
}

void VisualShader::init_method_bindings() {
    method_bindings.mb__input_type_changed =
        api->rebel_method_bind_get_method(
            "VisualShader",
            "_input_type_changed"
        );
    method_bindings.mb__queue_update =
        api->rebel_method_bind_get_method(
            "VisualShader",
            "_queue_update"
        );
    method_bindings.mb__update_shader =
        api->rebel_method_bind_get_method(
            "VisualShader",
            "_update_shader"
        );
    method_bindings.mb_add_node =
        api->rebel_method_bind_get_method(
            "VisualShader",
            "add_node"
        );
    method_bindings.mb_can_connect_nodes =
        api->rebel_method_bind_get_method(
            "VisualShader",
            "can_connect_nodes"
        );
    method_bindings.mb_connect_nodes =
        api->rebel_method_bind_get_method(
            "VisualShader",
            "connect_nodes"
        );
    method_bindings.mb_connect_nodes_forced =
        api->rebel_method_bind_get_method(
            "VisualShader",
            "connect_nodes_forced"
        );
    method_bindings.mb_disconnect_nodes =
        api->rebel_method_bind_get_method(
            "VisualShader",
            "disconnect_nodes"
        );
    method_bindings.mb_get_graph_offset =
        api->rebel_method_bind_get_method(
            "VisualShader",
            "get_graph_offset"
        );
    method_bindings.mb_get_node =
        api->rebel_method_bind_get_method(
            "VisualShader",
            "get_node"
        );
    method_bindings.mb_get_node_connections =
        api->rebel_method_bind_get_method(
            "VisualShader",
            "get_node_connections"
        );
    method_bindings.mb_get_node_list =
        api->rebel_method_bind_get_method(
            "VisualShader",
            "get_node_list"
        );
    method_bindings.mb_get_node_position =
        api->rebel_method_bind_get_method(
            "VisualShader",
            "get_node_position"
        );
    method_bindings.mb_get_valid_node_id =
        api->rebel_method_bind_get_method(
            "VisualShader",
            "get_valid_node_id"
        );
    method_bindings.mb_is_node_connection =
        api->rebel_method_bind_get_method(
            "VisualShader",
            "is_node_connection"
        );
    method_bindings.mb_remove_node =
        api->rebel_method_bind_get_method(
            "VisualShader",
            "remove_node"
        );
    method_bindings.mb_set_graph_offset =
        api->rebel_method_bind_get_method(
            "VisualShader",
            "set_graph_offset"
        );
    method_bindings.mb_set_mode =
        api->rebel_method_bind_get_method(
            "VisualShader",
            "set_mode"
        );
    method_bindings.mb_set_node_position =
        api->rebel_method_bind_get_method(
            "VisualShader",
            "set_node_position"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShader");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShader::MethodBindings VisualShader::method_bindings = {};
void* VisualShader::class_tag = nullptr;
} // namespace Rebel
