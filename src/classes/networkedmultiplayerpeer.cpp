// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/networkedmultiplayerpeer.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
NetworkedMultiplayerPeer::ConnectionStatus NetworkedMultiplayerPeer::get_connection_status() const {
    return (NetworkedMultiplayerPeer::ConnectionStatus)rebel_icall_int(
        method_bindings.mb_get_connection_status,
        (const Object*)this
    );
}

int64_t NetworkedMultiplayerPeer::get_packet_peer() const {
    return rebel_icall_int(
        method_bindings.mb_get_packet_peer,
        (const Object*)this
    );
}

NetworkedMultiplayerPeer::TransferMode NetworkedMultiplayerPeer::get_transfer_mode() const {
    return (NetworkedMultiplayerPeer::TransferMode)rebel_icall_int(
        method_bindings.mb_get_transfer_mode,
        (const Object*)this
    );
}

int64_t NetworkedMultiplayerPeer::get_unique_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_unique_id,
        (const Object*)this
    );
}

bool NetworkedMultiplayerPeer::is_refusing_new_connections() const {
    return rebel_icall_bool(
        method_bindings.mb_is_refusing_new_connections,
        (const Object*)this
    );
}

void NetworkedMultiplayerPeer::poll() {
    rebel_icall_void(
        method_bindings.mb_poll,
        (const Object*)this
    );
}

void NetworkedMultiplayerPeer::set_refuse_new_connections(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_refuse_new_connections,
        (const Object*)this,
        enable
    );
}

void NetworkedMultiplayerPeer::set_target_peer(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb_set_target_peer,
        (const Object*)this,
        id
    );
}

void NetworkedMultiplayerPeer::set_transfer_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_transfer_mode,
        (const Object*)this,
        mode
    );
}

void NetworkedMultiplayerPeer::init_method_bindings() {
    method_bindings.mb_get_connection_status =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerPeer",
            "get_connection_status"
        );
    method_bindings.mb_get_packet_peer =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerPeer",
            "get_packet_peer"
        );
    method_bindings.mb_get_transfer_mode =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerPeer",
            "get_transfer_mode"
        );
    method_bindings.mb_get_unique_id =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerPeer",
            "get_unique_id"
        );
    method_bindings.mb_is_refusing_new_connections =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerPeer",
            "is_refusing_new_connections"
        );
    method_bindings.mb_poll =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerPeer",
            "poll"
        );
    method_bindings.mb_set_refuse_new_connections =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerPeer",
            "set_refuse_new_connections"
        );
    method_bindings.mb_set_target_peer =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerPeer",
            "set_target_peer"
        );
    method_bindings.mb_set_transfer_mode =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerPeer",
            "set_transfer_mode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "NetworkedMultiplayerPeer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

NetworkedMultiplayerPeer::MethodBindings NetworkedMultiplayerPeer::method_bindings = {};
void* NetworkedMultiplayerPeer::class_tag = nullptr;
} // namespace Rebel
