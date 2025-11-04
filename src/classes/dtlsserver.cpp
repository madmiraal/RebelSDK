// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/dtlsserver.h"

#include "classes/cryptokey.h"
#include "classes/icalls.h"
#include "classes/packetpeerdtls.h"
#include "classes/packetpeerudp.h"
#include "classes/x509certificate.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Error DTLSServer::setup(const Ref<CryptoKey> key, const Ref<X509Certificate> certificate, const Ref<X509Certificate> chain) {
    return (Error)rebel_icall_int_object_object_object(
        method_bindings.mb_setup,
        (const Object*)this,
        key.ptr(),
        certificate.ptr(),
        chain.ptr()
    );
}

Ref<PacketPeerDTLS> DTLSServer::take_connection(const Ref<PacketPeerUDP> udp_peer) {
    return Ref<PacketPeerDTLS>::create_ref(rebel_icall_object_object(
        method_bindings.mb_take_connection,
        (const Object*)this,
        udp_peer.ptr()
    ));
}

DTLSServer* DTLSServer::create() {
    return (DTLSServer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"DTLSServer")()
         );
}

void DTLSServer::init_method_bindings() {
    method_bindings.mb_setup =
        api->rebel_method_bind_get_method(
            "DTLSServer",
            "setup"
        );
    method_bindings.mb_take_connection =
        api->rebel_method_bind_get_method(
            "DTLSServer",
            "take_connection"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "DTLSServer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

DTLSServer::MethodBindings DTLSServer::method_bindings = {};
void* DTLSServer::class_tag = nullptr;
} // namespace Rebel
