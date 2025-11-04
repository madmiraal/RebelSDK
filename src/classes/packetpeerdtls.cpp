// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/packetpeerdtls.h"

#include "classes/icalls.h"
#include "classes/packetpeerudp.h"
#include "classes/x509certificate.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Error PacketPeerDTLS::connect_to_peer(const Ref<PacketPeerUDP> packet_peer, const bool validate_certs, const String for_hostname, const Ref<X509Certificate> valid_certificate) {
    return (Error)rebel_icall_int_object_bool_string_object(
        method_bindings.mb_connect_to_peer,
        (const Object*)this,
        packet_peer.ptr(),
        validate_certs,
        for_hostname,
        valid_certificate.ptr()
    );
}

void PacketPeerDTLS::disconnect_from_peer() {
    rebel_icall_void(
        method_bindings.mb_disconnect_from_peer,
        (const Object*)this
    );
}

PacketPeerDTLS::Status PacketPeerDTLS::get_status() const {
    return (PacketPeerDTLS::Status)rebel_icall_int(
        method_bindings.mb_get_status,
        (const Object*)this
    );
}

void PacketPeerDTLS::poll() {
    rebel_icall_void(
        method_bindings.mb_poll,
        (const Object*)this
    );
}

PacketPeerDTLS* PacketPeerDTLS::create() {
    return (PacketPeerDTLS*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PacketPeerDTLS")()
         );
}

void PacketPeerDTLS::init_method_bindings() {
    method_bindings.mb_connect_to_peer =
        api->rebel_method_bind_get_method(
            "PacketPeerDTLS",
            "connect_to_peer"
        );
    method_bindings.mb_disconnect_from_peer =
        api->rebel_method_bind_get_method(
            "PacketPeerDTLS",
            "disconnect_from_peer"
        );
    method_bindings.mb_get_status =
        api->rebel_method_bind_get_method(
            "PacketPeerDTLS",
            "get_status"
        );
    method_bindings.mb_poll =
        api->rebel_method_bind_get_method(
            "PacketPeerDTLS",
            "poll"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PacketPeerDTLS");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PacketPeerDTLS::MethodBindings PacketPeerDTLS::method_bindings = {};
void* PacketPeerDTLS::class_tag = nullptr;
} // namespace Rebel
