// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_WEBSOCKETSERVER_H
#define REBEL_WEBSOCKETSERVER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/websocketmultiplayerpeer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CryptoKey;
class X509Certificate;

class WebSocketServer : public WebSocketMultiplayerPeer {
public:
    void disconnect_peer(const int64_t id, const int64_t code = 1000, const String reason = "");
    String get_bind_ip() const;
    Ref<X509Certificate> get_ca_chain() const;
    real_t get_handshake_timeout() const;
    String get_peer_address(const int64_t id) const;
    int64_t get_peer_port(const int64_t id) const;
    Ref<CryptoKey> get_private_key() const;
    Ref<X509Certificate> get_ssl_certificate() const;
    bool has_peer(const int64_t id) const;
    bool is_listening() const;
    Error listen(const int64_t port, const PoolStringArray protocols = PoolStringArray(), const bool gd_mp_api = false);
    void set_bind_ip(const String arg0);
    void set_ca_chain(const Ref<X509Certificate> arg0);
    void set_handshake_timeout(const real_t timeout);
    void set_private_key(const Ref<CryptoKey> arg0);
    void set_ssl_certificate(const Ref<X509Certificate> arg0);
    void stop();

    static WebSocketServer* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "WebSocketServer";
    }

    inline static const char* get_rebel_class_name() {
        return "WebSocketServer";
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
        rebel_method_bind* mb_disconnect_peer;
        rebel_method_bind* mb_get_bind_ip;
        rebel_method_bind* mb_get_ca_chain;
        rebel_method_bind* mb_get_handshake_timeout;
        rebel_method_bind* mb_get_peer_address;
        rebel_method_bind* mb_get_peer_port;
        rebel_method_bind* mb_get_private_key;
        rebel_method_bind* mb_get_ssl_certificate;
        rebel_method_bind* mb_has_peer;
        rebel_method_bind* mb_is_listening;
        rebel_method_bind* mb_listen;
        rebel_method_bind* mb_set_bind_ip;
        rebel_method_bind* mb_set_ca_chain;
        rebel_method_bind* mb_set_handshake_timeout;
        rebel_method_bind* mb_set_private_key;
        rebel_method_bind* mb_set_ssl_certificate;
        rebel_method_bind* mb_stop;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_WEBSOCKETSERVER_H
