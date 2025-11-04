// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_NETWORKEDMULTIPLAYERENET_H
#define REBEL_NETWORKEDMULTIPLAYERENET_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/networkedmultiplayerpeer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CryptoKey;
class X509Certificate;

class NetworkedMultiplayerENet : public NetworkedMultiplayerPeer {
public:
    enum CompressionMode {
        COMPRESS_NONE = 0,
        COMPRESS_RANGE_CODER = 1,
        COMPRESS_FASTLZ = 2,
        COMPRESS_ZLIB = 3,
        COMPRESS_ZSTD = 4,
    };

    void close_connection(const int64_t wait_usec = 100);
    Error create_client(const String address, const int64_t port, const int64_t in_bandwidth = 0, const int64_t out_bandwidth = 0, const int64_t client_port = 0);
    Error create_server(const int64_t port, const int64_t max_clients = 32, const int64_t in_bandwidth = 0, const int64_t out_bandwidth = 0);
    void disconnect_peer(const int64_t id, const bool now = false);
    int64_t get_channel_count() const;
    NetworkedMultiplayerENet::CompressionMode get_compression_mode() const;
    String get_dtls_hostname() const;
    int64_t get_last_packet_channel() const;
    int64_t get_packet_channel() const;
    String get_peer_address(const int64_t id) const;
    int64_t get_peer_port(const int64_t id) const;
    int64_t get_transfer_channel() const;
    bool is_always_ordered() const;
    bool is_dtls_enabled() const;
    bool is_dtls_verify_enabled() const;
    bool is_server_relay_enabled() const;
    void set_always_ordered(const bool ordered);
    void set_bind_ip(const String ip);
    void set_channel_count(const int64_t channels);
    void set_compression_mode(const int64_t mode);
    void set_dtls_certificate(const Ref<X509Certificate> certificate);
    void set_dtls_enabled(const bool enabled);
    void set_dtls_hostname(const String hostname);
    void set_dtls_key(const Ref<CryptoKey> key);
    void set_dtls_verify_enabled(const bool enabled);
    void set_peer_timeout(const int64_t id, const int64_t timeout_limit, const int64_t timeout_min, const int64_t timeout_max);
    void set_server_relay_enabled(const bool enabled);
    void set_transfer_channel(const int64_t channel);

    static NetworkedMultiplayerENet* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "NetworkedMultiplayerENet";
    }

    inline static const char* get_rebel_class_name() {
        return "NetworkedMultiplayerENet";
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
        rebel_method_bind* mb_close_connection;
        rebel_method_bind* mb_create_client;
        rebel_method_bind* mb_create_server;
        rebel_method_bind* mb_disconnect_peer;
        rebel_method_bind* mb_get_channel_count;
        rebel_method_bind* mb_get_compression_mode;
        rebel_method_bind* mb_get_dtls_hostname;
        rebel_method_bind* mb_get_last_packet_channel;
        rebel_method_bind* mb_get_packet_channel;
        rebel_method_bind* mb_get_peer_address;
        rebel_method_bind* mb_get_peer_port;
        rebel_method_bind* mb_get_transfer_channel;
        rebel_method_bind* mb_is_always_ordered;
        rebel_method_bind* mb_is_dtls_enabled;
        rebel_method_bind* mb_is_dtls_verify_enabled;
        rebel_method_bind* mb_is_server_relay_enabled;
        rebel_method_bind* mb_set_always_ordered;
        rebel_method_bind* mb_set_bind_ip;
        rebel_method_bind* mb_set_channel_count;
        rebel_method_bind* mb_set_compression_mode;
        rebel_method_bind* mb_set_dtls_certificate;
        rebel_method_bind* mb_set_dtls_enabled;
        rebel_method_bind* mb_set_dtls_hostname;
        rebel_method_bind* mb_set_dtls_key;
        rebel_method_bind* mb_set_dtls_verify_enabled;
        rebel_method_bind* mb_set_peer_timeout;
        rebel_method_bind* mb_set_server_relay_enabled;
        rebel_method_bind* mb_set_transfer_channel;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_NETWORKEDMULTIPLAYERENET_H
