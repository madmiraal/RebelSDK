// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/multiplayerapi.h"

#include "classes/icalls.h"
#include "classes/networkedmultiplayerpeer.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void MultiplayerAPI::_add_peer(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb__add_peer,
        (const Object*)this,
        id
    );
}

void MultiplayerAPI::_connected_to_server() {
    rebel_icall_void(
        method_bindings.mb__connected_to_server,
        (const Object*)this
    );
}

void MultiplayerAPI::_connection_failed() {
    rebel_icall_void(
        method_bindings.mb__connection_failed,
        (const Object*)this
    );
}

void MultiplayerAPI::_del_peer(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb__del_peer,
        (const Object*)this,
        id
    );
}

void MultiplayerAPI::_server_disconnected() {
    rebel_icall_void(
        method_bindings.mb__server_disconnected,
        (const Object*)this
    );
}

void MultiplayerAPI::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

PoolIntArray MultiplayerAPI::get_network_connected_peers() const {
    return rebel_icall_poolintarray(
        method_bindings.mb_get_network_connected_peers,
        (const Object*)this
    );
}

Ref<NetworkedMultiplayerPeer> MultiplayerAPI::get_network_peer() const {
    return Ref<NetworkedMultiplayerPeer>::create_ref(rebel_icall_object(
        method_bindings.mb_get_network_peer,
        (const Object*)this
    ));
}

int64_t MultiplayerAPI::get_network_unique_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_network_unique_id,
        (const Object*)this
    );
}

Node* MultiplayerAPI::get_root_node() {
    return (Node*)rebel_icall_object(
        method_bindings.mb_get_root_node,
        (const Object*)this
    );
}

int64_t MultiplayerAPI::get_rpc_sender_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_rpc_sender_id,
        (const Object*)this
    );
}

bool MultiplayerAPI::has_network_peer() const {
    return rebel_icall_bool(
        method_bindings.mb_has_network_peer,
        (const Object*)this
    );
}

bool MultiplayerAPI::is_network_server() const {
    return rebel_icall_bool(
        method_bindings.mb_is_network_server,
        (const Object*)this
    );
}

bool MultiplayerAPI::is_object_decoding_allowed() const {
    return rebel_icall_bool(
        method_bindings.mb_is_object_decoding_allowed,
        (const Object*)this
    );
}

bool MultiplayerAPI::is_refusing_new_network_connections() const {
    return rebel_icall_bool(
        method_bindings.mb_is_refusing_new_network_connections,
        (const Object*)this
    );
}

void MultiplayerAPI::poll() {
    rebel_icall_void(
        method_bindings.mb_poll,
        (const Object*)this
    );
}

Error MultiplayerAPI::send_bytes(const PoolByteArray bytes, const int64_t id, const int64_t mode) {
    return (Error)rebel_icall_int_poolbytearray_int_int(
        method_bindings.mb_send_bytes,
        (const Object*)this,
        bytes,
        id,
        mode
    );
}

void MultiplayerAPI::set_allow_object_decoding(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_allow_object_decoding,
        (const Object*)this,
        enable
    );
}

void MultiplayerAPI::set_network_peer(const Ref<NetworkedMultiplayerPeer> peer) {
    rebel_icall_void_object(
        method_bindings.mb_set_network_peer,
        (const Object*)this,
        peer.ptr()
    );
}

void MultiplayerAPI::set_refuse_new_network_connections(const bool refuse) {
    rebel_icall_void_bool(
        method_bindings.mb_set_refuse_new_network_connections,
        (const Object*)this,
        refuse
    );
}

void MultiplayerAPI::set_root_node(const Node* node) {
    rebel_icall_void_object(
        method_bindings.mb_set_root_node,
        (const Object*)this,
        node
    );
}

MultiplayerAPI* MultiplayerAPI::create() {
    return (MultiplayerAPI*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"MultiplayerAPI")()
         );
}

void MultiplayerAPI::init_method_bindings() {
    method_bindings.mb__add_peer =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "_add_peer"
        );
    method_bindings.mb__connected_to_server =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "_connected_to_server"
        );
    method_bindings.mb__connection_failed =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "_connection_failed"
        );
    method_bindings.mb__del_peer =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "_del_peer"
        );
    method_bindings.mb__server_disconnected =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "_server_disconnected"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "clear"
        );
    method_bindings.mb_get_network_connected_peers =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "get_network_connected_peers"
        );
    method_bindings.mb_get_network_peer =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "get_network_peer"
        );
    method_bindings.mb_get_network_unique_id =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "get_network_unique_id"
        );
    method_bindings.mb_get_root_node =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "get_root_node"
        );
    method_bindings.mb_get_rpc_sender_id =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "get_rpc_sender_id"
        );
    method_bindings.mb_has_network_peer =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "has_network_peer"
        );
    method_bindings.mb_is_network_server =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "is_network_server"
        );
    method_bindings.mb_is_object_decoding_allowed =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "is_object_decoding_allowed"
        );
    method_bindings.mb_is_refusing_new_network_connections =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "is_refusing_new_network_connections"
        );
    method_bindings.mb_poll =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "poll"
        );
    method_bindings.mb_send_bytes =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "send_bytes"
        );
    method_bindings.mb_set_allow_object_decoding =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "set_allow_object_decoding"
        );
    method_bindings.mb_set_network_peer =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "set_network_peer"
        );
    method_bindings.mb_set_refuse_new_network_connections =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "set_refuse_new_network_connections"
        );
    method_bindings.mb_set_root_node =
        api->rebel_method_bind_get_method(
            "MultiplayerAPI",
            "set_root_node"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "MultiplayerAPI");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

MultiplayerAPI::MethodBindings MultiplayerAPI::method_bindings = {};
void* MultiplayerAPI::class_tag = nullptr;
} // namespace Rebel
