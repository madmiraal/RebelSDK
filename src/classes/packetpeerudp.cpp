// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/packetpeerudp.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void PacketPeerUDP::close() {
    rebel_icall_void(
        method_bindings.mb_close,
        (const Object*)this
    );
}

Error PacketPeerUDP::connect_to_host(const String host, const int64_t port) {
    return (Error)rebel_icall_int_string_int(
        method_bindings.mb_connect_to_host,
        (const Object*)this,
        host,
        port
    );
}

String PacketPeerUDP::get_packet_ip() const {
    return rebel_icall_string(
        method_bindings.mb_get_packet_ip,
        (const Object*)this
    );
}

int64_t PacketPeerUDP::get_packet_port() const {
    return rebel_icall_int(
        method_bindings.mb_get_packet_port,
        (const Object*)this
    );
}

bool PacketPeerUDP::is_connected_to_host() const {
    return rebel_icall_bool(
        method_bindings.mb_is_connected_to_host,
        (const Object*)this
    );
}

bool PacketPeerUDP::is_listening() const {
    return rebel_icall_bool(
        method_bindings.mb_is_listening,
        (const Object*)this
    );
}

Error PacketPeerUDP::join_multicast_group(const String multicast_address, const String interface_name) {
    return (Error)rebel_icall_int_string_string(
        method_bindings.mb_join_multicast_group,
        (const Object*)this,
        multicast_address,
        interface_name
    );
}

Error PacketPeerUDP::leave_multicast_group(const String multicast_address, const String interface_name) {
    return (Error)rebel_icall_int_string_string(
        method_bindings.mb_leave_multicast_group,
        (const Object*)this,
        multicast_address,
        interface_name
    );
}

Error PacketPeerUDP::listen(const int64_t port, const String bind_address, const int64_t recv_buf_size) {
    return (Error)rebel_icall_int_int_string_int(
        method_bindings.mb_listen,
        (const Object*)this,
        port,
        bind_address,
        recv_buf_size
    );
}

void PacketPeerUDP::set_broadcast_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_broadcast_enabled,
        (const Object*)this,
        enabled
    );
}

Error PacketPeerUDP::set_dest_address(const String host, const int64_t port) {
    return (Error)rebel_icall_int_string_int(
        method_bindings.mb_set_dest_address,
        (const Object*)this,
        host,
        port
    );
}

Error PacketPeerUDP::wait() {
    return (Error)rebel_icall_int(
        method_bindings.mb_wait,
        (const Object*)this
    );
}

PacketPeerUDP* PacketPeerUDP::create() {
    return (PacketPeerUDP*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PacketPeerUDP")()
         );
}

void PacketPeerUDP::init_method_bindings() {
    method_bindings.mb_close =
        api->rebel_method_bind_get_method(
            "PacketPeerUDP",
            "close"
        );
    method_bindings.mb_connect_to_host =
        api->rebel_method_bind_get_method(
            "PacketPeerUDP",
            "connect_to_host"
        );
    method_bindings.mb_get_packet_ip =
        api->rebel_method_bind_get_method(
            "PacketPeerUDP",
            "get_packet_ip"
        );
    method_bindings.mb_get_packet_port =
        api->rebel_method_bind_get_method(
            "PacketPeerUDP",
            "get_packet_port"
        );
    method_bindings.mb_is_connected_to_host =
        api->rebel_method_bind_get_method(
            "PacketPeerUDP",
            "is_connected_to_host"
        );
    method_bindings.mb_is_listening =
        api->rebel_method_bind_get_method(
            "PacketPeerUDP",
            "is_listening"
        );
    method_bindings.mb_join_multicast_group =
        api->rebel_method_bind_get_method(
            "PacketPeerUDP",
            "join_multicast_group"
        );
    method_bindings.mb_leave_multicast_group =
        api->rebel_method_bind_get_method(
            "PacketPeerUDP",
            "leave_multicast_group"
        );
    method_bindings.mb_listen =
        api->rebel_method_bind_get_method(
            "PacketPeerUDP",
            "listen"
        );
    method_bindings.mb_set_broadcast_enabled =
        api->rebel_method_bind_get_method(
            "PacketPeerUDP",
            "set_broadcast_enabled"
        );
    method_bindings.mb_set_dest_address =
        api->rebel_method_bind_get_method(
            "PacketPeerUDP",
            "set_dest_address"
        );
    method_bindings.mb_wait =
        api->rebel_method_bind_get_method(
            "PacketPeerUDP",
            "wait"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PacketPeerUDP");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PacketPeerUDP::MethodBindings PacketPeerUDP::method_bindings = {};
void* PacketPeerUDP::class_tag = nullptr;
} // namespace Rebel
