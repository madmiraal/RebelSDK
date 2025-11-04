// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/streampeerssl.h"

#include "classes/cryptokey.h"
#include "classes/icalls.h"
#include "classes/streampeer.h"
#include "classes/x509certificate.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Error StreamPeerSSL::accept_stream(const Ref<StreamPeer> stream, const Ref<CryptoKey> private_key, const Ref<X509Certificate> certificate, const Ref<X509Certificate> chain) {
    return (Error)rebel_icall_int_object_object_object_object(
        method_bindings.mb_accept_stream,
        (const Object*)this,
        stream.ptr(),
        private_key.ptr(),
        certificate.ptr(),
        chain.ptr()
    );
}

Error StreamPeerSSL::connect_to_stream(const Ref<StreamPeer> stream, const bool validate_certs, const String for_hostname, const Ref<X509Certificate> valid_certificate) {
    return (Error)rebel_icall_int_object_bool_string_object(
        method_bindings.mb_connect_to_stream,
        (const Object*)this,
        stream.ptr(),
        validate_certs,
        for_hostname,
        valid_certificate.ptr()
    );
}

void StreamPeerSSL::disconnect_from_stream() {
    rebel_icall_void(
        method_bindings.mb_disconnect_from_stream,
        (const Object*)this
    );
}

StreamPeerSSL::Status StreamPeerSSL::get_status() const {
    return (StreamPeerSSL::Status)rebel_icall_int(
        method_bindings.mb_get_status,
        (const Object*)this
    );
}

bool StreamPeerSSL::is_blocking_handshake_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_blocking_handshake_enabled,
        (const Object*)this
    );
}

void StreamPeerSSL::poll() {
    rebel_icall_void(
        method_bindings.mb_poll,
        (const Object*)this
    );
}

void StreamPeerSSL::set_blocking_handshake_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_blocking_handshake_enabled,
        (const Object*)this,
        enabled
    );
}

StreamPeerSSL* StreamPeerSSL::create() {
    return (StreamPeerSSL*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"StreamPeerSSL")()
         );
}

void StreamPeerSSL::init_method_bindings() {
    method_bindings.mb_accept_stream =
        api->rebel_method_bind_get_method(
            "StreamPeerSSL",
            "accept_stream"
        );
    method_bindings.mb_connect_to_stream =
        api->rebel_method_bind_get_method(
            "StreamPeerSSL",
            "connect_to_stream"
        );
    method_bindings.mb_disconnect_from_stream =
        api->rebel_method_bind_get_method(
            "StreamPeerSSL",
            "disconnect_from_stream"
        );
    method_bindings.mb_get_status =
        api->rebel_method_bind_get_method(
            "StreamPeerSSL",
            "get_status"
        );
    method_bindings.mb_is_blocking_handshake_enabled =
        api->rebel_method_bind_get_method(
            "StreamPeerSSL",
            "is_blocking_handshake_enabled"
        );
    method_bindings.mb_poll =
        api->rebel_method_bind_get_method(
            "StreamPeerSSL",
            "poll"
        );
    method_bindings.mb_set_blocking_handshake_enabled =
        api->rebel_method_bind_get_method(
            "StreamPeerSSL",
            "set_blocking_handshake_enabled"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "StreamPeerSSL");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

StreamPeerSSL::MethodBindings StreamPeerSSL::method_bindings = {};
void* StreamPeerSSL::class_tag = nullptr;
} // namespace Rebel
