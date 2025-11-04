// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/networkedmultiplayerenet.h"

#include "classes/cryptokey.h"
#include "classes/icalls.h"
#include "classes/x509certificate.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void NetworkedMultiplayerENet::close_connection(const int64_t wait_usec) {
    rebel_icall_void_int(
        method_bindings.mb_close_connection,
        (const Object*)this,
        wait_usec
    );
}

Error NetworkedMultiplayerENet::create_client(const String address, const int64_t port, const int64_t in_bandwidth, const int64_t out_bandwidth, const int64_t client_port) {
    return (Error)rebel_icall_int_string_int_int_int_int(
        method_bindings.mb_create_client,
        (const Object*)this,
        address,
        port,
        in_bandwidth,
        out_bandwidth,
        client_port
    );
}

Error NetworkedMultiplayerENet::create_server(const int64_t port, const int64_t max_clients, const int64_t in_bandwidth, const int64_t out_bandwidth) {
    return (Error)rebel_icall_int_int_int_int_int(
        method_bindings.mb_create_server,
        (const Object*)this,
        port,
        max_clients,
        in_bandwidth,
        out_bandwidth
    );
}

void NetworkedMultiplayerENet::disconnect_peer(const int64_t id, const bool now) {
    rebel_icall_void_int_bool(
        method_bindings.mb_disconnect_peer,
        (const Object*)this,
        id,
        now
    );
}

int64_t NetworkedMultiplayerENet::get_channel_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_channel_count,
        (const Object*)this
    );
}

NetworkedMultiplayerENet::CompressionMode NetworkedMultiplayerENet::get_compression_mode() const {
    return (NetworkedMultiplayerENet::CompressionMode)rebel_icall_int(
        method_bindings.mb_get_compression_mode,
        (const Object*)this
    );
}

String NetworkedMultiplayerENet::get_dtls_hostname() const {
    return rebel_icall_string(
        method_bindings.mb_get_dtls_hostname,
        (const Object*)this
    );
}

int64_t NetworkedMultiplayerENet::get_last_packet_channel() const {
    return rebel_icall_int(
        method_bindings.mb_get_last_packet_channel,
        (const Object*)this
    );
}

int64_t NetworkedMultiplayerENet::get_packet_channel() const {
    return rebel_icall_int(
        method_bindings.mb_get_packet_channel,
        (const Object*)this
    );
}

String NetworkedMultiplayerENet::get_peer_address(const int64_t id) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_peer_address,
        (const Object*)this,
        id
    );
}

int64_t NetworkedMultiplayerENet::get_peer_port(const int64_t id) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_peer_port,
        (const Object*)this,
        id
    );
}

int64_t NetworkedMultiplayerENet::get_transfer_channel() const {
    return rebel_icall_int(
        method_bindings.mb_get_transfer_channel,
        (const Object*)this
    );
}

bool NetworkedMultiplayerENet::is_always_ordered() const {
    return rebel_icall_bool(
        method_bindings.mb_is_always_ordered,
        (const Object*)this
    );
}

bool NetworkedMultiplayerENet::is_dtls_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_dtls_enabled,
        (const Object*)this
    );
}

bool NetworkedMultiplayerENet::is_dtls_verify_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_dtls_verify_enabled,
        (const Object*)this
    );
}

bool NetworkedMultiplayerENet::is_server_relay_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_server_relay_enabled,
        (const Object*)this
    );
}

void NetworkedMultiplayerENet::set_always_ordered(const bool ordered) {
    rebel_icall_void_bool(
        method_bindings.mb_set_always_ordered,
        (const Object*)this,
        ordered
    );
}

void NetworkedMultiplayerENet::set_bind_ip(const String ip) {
    rebel_icall_void_string(
        method_bindings.mb_set_bind_ip,
        (const Object*)this,
        ip
    );
}

void NetworkedMultiplayerENet::set_channel_count(const int64_t channels) {
    rebel_icall_void_int(
        method_bindings.mb_set_channel_count,
        (const Object*)this,
        channels
    );
}

void NetworkedMultiplayerENet::set_compression_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_compression_mode,
        (const Object*)this,
        mode
    );
}

void NetworkedMultiplayerENet::set_dtls_certificate(const Ref<X509Certificate> certificate) {
    rebel_icall_void_object(
        method_bindings.mb_set_dtls_certificate,
        (const Object*)this,
        certificate.ptr()
    );
}

void NetworkedMultiplayerENet::set_dtls_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_dtls_enabled,
        (const Object*)this,
        enabled
    );
}

void NetworkedMultiplayerENet::set_dtls_hostname(const String hostname) {
    rebel_icall_void_string(
        method_bindings.mb_set_dtls_hostname,
        (const Object*)this,
        hostname
    );
}

void NetworkedMultiplayerENet::set_dtls_key(const Ref<CryptoKey> key) {
    rebel_icall_void_object(
        method_bindings.mb_set_dtls_key,
        (const Object*)this,
        key.ptr()
    );
}

void NetworkedMultiplayerENet::set_dtls_verify_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_dtls_verify_enabled,
        (const Object*)this,
        enabled
    );
}

void NetworkedMultiplayerENet::set_peer_timeout(const int64_t id, const int64_t timeout_limit, const int64_t timeout_min, const int64_t timeout_max) {
    rebel_icall_void_int_int_int_int(
        method_bindings.mb_set_peer_timeout,
        (const Object*)this,
        id,
        timeout_limit,
        timeout_min,
        timeout_max
    );
}

void NetworkedMultiplayerENet::set_server_relay_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_server_relay_enabled,
        (const Object*)this,
        enabled
    );
}

void NetworkedMultiplayerENet::set_transfer_channel(const int64_t channel) {
    rebel_icall_void_int(
        method_bindings.mb_set_transfer_channel,
        (const Object*)this,
        channel
    );
}

NetworkedMultiplayerENet* NetworkedMultiplayerENet::create() {
    return (NetworkedMultiplayerENet*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"NetworkedMultiplayerENet")()
         );
}

void NetworkedMultiplayerENet::init_method_bindings() {
    method_bindings.mb_close_connection =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "close_connection"
        );
    method_bindings.mb_create_client =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "create_client"
        );
    method_bindings.mb_create_server =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "create_server"
        );
    method_bindings.mb_disconnect_peer =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "disconnect_peer"
        );
    method_bindings.mb_get_channel_count =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "get_channel_count"
        );
    method_bindings.mb_get_compression_mode =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "get_compression_mode"
        );
    method_bindings.mb_get_dtls_hostname =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "get_dtls_hostname"
        );
    method_bindings.mb_get_last_packet_channel =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "get_last_packet_channel"
        );
    method_bindings.mb_get_packet_channel =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "get_packet_channel"
        );
    method_bindings.mb_get_peer_address =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "get_peer_address"
        );
    method_bindings.mb_get_peer_port =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "get_peer_port"
        );
    method_bindings.mb_get_transfer_channel =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "get_transfer_channel"
        );
    method_bindings.mb_is_always_ordered =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "is_always_ordered"
        );
    method_bindings.mb_is_dtls_enabled =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "is_dtls_enabled"
        );
    method_bindings.mb_is_dtls_verify_enabled =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "is_dtls_verify_enabled"
        );
    method_bindings.mb_is_server_relay_enabled =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "is_server_relay_enabled"
        );
    method_bindings.mb_set_always_ordered =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "set_always_ordered"
        );
    method_bindings.mb_set_bind_ip =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "set_bind_ip"
        );
    method_bindings.mb_set_channel_count =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "set_channel_count"
        );
    method_bindings.mb_set_compression_mode =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "set_compression_mode"
        );
    method_bindings.mb_set_dtls_certificate =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "set_dtls_certificate"
        );
    method_bindings.mb_set_dtls_enabled =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "set_dtls_enabled"
        );
    method_bindings.mb_set_dtls_hostname =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "set_dtls_hostname"
        );
    method_bindings.mb_set_dtls_key =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "set_dtls_key"
        );
    method_bindings.mb_set_dtls_verify_enabled =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "set_dtls_verify_enabled"
        );
    method_bindings.mb_set_peer_timeout =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "set_peer_timeout"
        );
    method_bindings.mb_set_server_relay_enabled =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "set_server_relay_enabled"
        );
    method_bindings.mb_set_transfer_channel =
        api->rebel_method_bind_get_method(
            "NetworkedMultiplayerENet",
            "set_transfer_channel"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "NetworkedMultiplayerENet");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

NetworkedMultiplayerENet::MethodBindings NetworkedMultiplayerENet::method_bindings = {};
void* NetworkedMultiplayerENet::class_tag = nullptr;
} // namespace Rebel
