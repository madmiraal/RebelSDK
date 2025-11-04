// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/websocketserver.h"

#include "classes/cryptokey.h"
#include "classes/icalls.h"
#include "classes/x509certificate.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void WebSocketServer::disconnect_peer(const int64_t id, const int64_t code, const String reason) {
    rebel_icall_void_int_int_string(
        method_bindings.mb_disconnect_peer,
        (const Object*)this,
        id,
        code,
        reason
    );
}

String WebSocketServer::get_bind_ip() const {
    return rebel_icall_string(
        method_bindings.mb_get_bind_ip,
        (const Object*)this
    );
}

Ref<X509Certificate> WebSocketServer::get_ca_chain() const {
    return Ref<X509Certificate>::create_ref(rebel_icall_object(
        method_bindings.mb_get_ca_chain,
        (const Object*)this
    ));
}

real_t WebSocketServer::get_handshake_timeout() const {
    return rebel_icall_float(
        method_bindings.mb_get_handshake_timeout,
        (const Object*)this
    );
}

String WebSocketServer::get_peer_address(const int64_t id) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_peer_address,
        (const Object*)this,
        id
    );
}

int64_t WebSocketServer::get_peer_port(const int64_t id) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_peer_port,
        (const Object*)this,
        id
    );
}

Ref<CryptoKey> WebSocketServer::get_private_key() const {
    return Ref<CryptoKey>::create_ref(rebel_icall_object(
        method_bindings.mb_get_private_key,
        (const Object*)this
    ));
}

Ref<X509Certificate> WebSocketServer::get_ssl_certificate() const {
    return Ref<X509Certificate>::create_ref(rebel_icall_object(
        method_bindings.mb_get_ssl_certificate,
        (const Object*)this
    ));
}

bool WebSocketServer::has_peer(const int64_t id) const {
    return rebel_icall_bool_int(
        method_bindings.mb_has_peer,
        (const Object*)this,
        id
    );
}

bool WebSocketServer::is_listening() const {
    return rebel_icall_bool(
        method_bindings.mb_is_listening,
        (const Object*)this
    );
}

Error WebSocketServer::listen(const int64_t port, const PoolStringArray protocols, const bool gd_mp_api) {
    return (Error)rebel_icall_int_int_poolstringarray_bool(
        method_bindings.mb_listen,
        (const Object*)this,
        port,
        protocols,
        gd_mp_api
    );
}

void WebSocketServer::set_bind_ip(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb_set_bind_ip,
        (const Object*)this,
        arg0
    );
}

void WebSocketServer::set_ca_chain(const Ref<X509Certificate> arg0) {
    rebel_icall_void_object(
        method_bindings.mb_set_ca_chain,
        (const Object*)this,
        arg0.ptr()
    );
}

void WebSocketServer::set_handshake_timeout(const real_t timeout) {
    rebel_icall_void_float(
        method_bindings.mb_set_handshake_timeout,
        (const Object*)this,
        timeout
    );
}

void WebSocketServer::set_private_key(const Ref<CryptoKey> arg0) {
    rebel_icall_void_object(
        method_bindings.mb_set_private_key,
        (const Object*)this,
        arg0.ptr()
    );
}

void WebSocketServer::set_ssl_certificate(const Ref<X509Certificate> arg0) {
    rebel_icall_void_object(
        method_bindings.mb_set_ssl_certificate,
        (const Object*)this,
        arg0.ptr()
    );
}

void WebSocketServer::stop() {
    rebel_icall_void(
        method_bindings.mb_stop,
        (const Object*)this
    );
}

WebSocketServer* WebSocketServer::create() {
    return (WebSocketServer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"WebSocketServer")()
         );
}

void WebSocketServer::init_method_bindings() {
    method_bindings.mb_disconnect_peer =
        api->rebel_method_bind_get_method(
            "WebSocketServer",
            "disconnect_peer"
        );
    method_bindings.mb_get_bind_ip =
        api->rebel_method_bind_get_method(
            "WebSocketServer",
            "get_bind_ip"
        );
    method_bindings.mb_get_ca_chain =
        api->rebel_method_bind_get_method(
            "WebSocketServer",
            "get_ca_chain"
        );
    method_bindings.mb_get_handshake_timeout =
        api->rebel_method_bind_get_method(
            "WebSocketServer",
            "get_handshake_timeout"
        );
    method_bindings.mb_get_peer_address =
        api->rebel_method_bind_get_method(
            "WebSocketServer",
            "get_peer_address"
        );
    method_bindings.mb_get_peer_port =
        api->rebel_method_bind_get_method(
            "WebSocketServer",
            "get_peer_port"
        );
    method_bindings.mb_get_private_key =
        api->rebel_method_bind_get_method(
            "WebSocketServer",
            "get_private_key"
        );
    method_bindings.mb_get_ssl_certificate =
        api->rebel_method_bind_get_method(
            "WebSocketServer",
            "get_ssl_certificate"
        );
    method_bindings.mb_has_peer =
        api->rebel_method_bind_get_method(
            "WebSocketServer",
            "has_peer"
        );
    method_bindings.mb_is_listening =
        api->rebel_method_bind_get_method(
            "WebSocketServer",
            "is_listening"
        );
    method_bindings.mb_listen =
        api->rebel_method_bind_get_method(
            "WebSocketServer",
            "listen"
        );
    method_bindings.mb_set_bind_ip =
        api->rebel_method_bind_get_method(
            "WebSocketServer",
            "set_bind_ip"
        );
    method_bindings.mb_set_ca_chain =
        api->rebel_method_bind_get_method(
            "WebSocketServer",
            "set_ca_chain"
        );
    method_bindings.mb_set_handshake_timeout =
        api->rebel_method_bind_get_method(
            "WebSocketServer",
            "set_handshake_timeout"
        );
    method_bindings.mb_set_private_key =
        api->rebel_method_bind_get_method(
            "WebSocketServer",
            "set_private_key"
        );
    method_bindings.mb_set_ssl_certificate =
        api->rebel_method_bind_get_method(
            "WebSocketServer",
            "set_ssl_certificate"
        );
    method_bindings.mb_stop =
        api->rebel_method_bind_get_method(
            "WebSocketServer",
            "stop"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "WebSocketServer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

WebSocketServer::MethodBindings WebSocketServer::method_bindings = {};
void* WebSocketServer::class_tag = nullptr;
} // namespace Rebel
