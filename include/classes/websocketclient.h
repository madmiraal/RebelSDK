// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_WEBSOCKETCLIENT_H
#define REBEL_WEBSOCKETCLIENT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/websocketmultiplayerpeer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class X509Certificate;

class WebSocketClient : public WebSocketMultiplayerPeer {
public:
    Error connect_to_url(const String url, const PoolStringArray protocols = PoolStringArray(), const bool gd_mp_api = false, const PoolStringArray custom_headers = PoolStringArray());
    void disconnect_from_host(const int64_t code = 1000, const String reason = "");
    String get_connected_host() const;
    int64_t get_connected_port() const;
    Ref<X509Certificate> get_trusted_ssl_certificate() const;
    bool is_verify_ssl_enabled() const;
    void set_trusted_ssl_certificate(const Ref<X509Certificate> arg0);
    void set_verify_ssl_enabled(const bool enabled);

    static WebSocketClient* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "WebSocketClient";
    }

    inline static const char* get_rebel_class_name() {
        return "WebSocketClient";
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
        rebel_method_bind* mb_connect_to_url;
        rebel_method_bind* mb_disconnect_from_host;
        rebel_method_bind* mb_get_connected_host;
        rebel_method_bind* mb_get_connected_port;
        rebel_method_bind* mb_get_trusted_ssl_certificate;
        rebel_method_bind* mb_is_verify_ssl_enabled;
        rebel_method_bind* mb_set_trusted_ssl_certificate;
        rebel_method_bind* mb_set_verify_ssl_enabled;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_WEBSOCKETCLIENT_H
