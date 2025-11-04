// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/websocketclient.h"

#include "classes/icalls.h"
#include "classes/x509certificate.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Error WebSocketClient::connect_to_url(const String url, const PoolStringArray protocols, const bool gd_mp_api, const PoolStringArray custom_headers) {
    return (Error)rebel_icall_int_string_poolstringarray_bool_poolstringarray(
        method_bindings.mb_connect_to_url,
        (const Object*)this,
        url,
        protocols,
        gd_mp_api,
        custom_headers
    );
}

void WebSocketClient::disconnect_from_host(const int64_t code, const String reason) {
    rebel_icall_void_int_string(
        method_bindings.mb_disconnect_from_host,
        (const Object*)this,
        code,
        reason
    );
}

String WebSocketClient::get_connected_host() const {
    return rebel_icall_string(
        method_bindings.mb_get_connected_host,
        (const Object*)this
    );
}

int64_t WebSocketClient::get_connected_port() const {
    return rebel_icall_int(
        method_bindings.mb_get_connected_port,
        (const Object*)this
    );
}

Ref<X509Certificate> WebSocketClient::get_trusted_ssl_certificate() const {
    return Ref<X509Certificate>::create_ref(rebel_icall_object(
        method_bindings.mb_get_trusted_ssl_certificate,
        (const Object*)this
    ));
}

bool WebSocketClient::is_verify_ssl_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_verify_ssl_enabled,
        (const Object*)this
    );
}

void WebSocketClient::set_trusted_ssl_certificate(const Ref<X509Certificate> arg0) {
    rebel_icall_void_object(
        method_bindings.mb_set_trusted_ssl_certificate,
        (const Object*)this,
        arg0.ptr()
    );
}

void WebSocketClient::set_verify_ssl_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_verify_ssl_enabled,
        (const Object*)this,
        enabled
    );
}

WebSocketClient* WebSocketClient::create() {
    return (WebSocketClient*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"WebSocketClient")()
         );
}

void WebSocketClient::init_method_bindings() {
    method_bindings.mb_connect_to_url =
        api->rebel_method_bind_get_method(
            "WebSocketClient",
            "connect_to_url"
        );
    method_bindings.mb_disconnect_from_host =
        api->rebel_method_bind_get_method(
            "WebSocketClient",
            "disconnect_from_host"
        );
    method_bindings.mb_get_connected_host =
        api->rebel_method_bind_get_method(
            "WebSocketClient",
            "get_connected_host"
        );
    method_bindings.mb_get_connected_port =
        api->rebel_method_bind_get_method(
            "WebSocketClient",
            "get_connected_port"
        );
    method_bindings.mb_get_trusted_ssl_certificate =
        api->rebel_method_bind_get_method(
            "WebSocketClient",
            "get_trusted_ssl_certificate"
        );
    method_bindings.mb_is_verify_ssl_enabled =
        api->rebel_method_bind_get_method(
            "WebSocketClient",
            "is_verify_ssl_enabled"
        );
    method_bindings.mb_set_trusted_ssl_certificate =
        api->rebel_method_bind_get_method(
            "WebSocketClient",
            "set_trusted_ssl_certificate"
        );
    method_bindings.mb_set_verify_ssl_enabled =
        api->rebel_method_bind_get_method(
            "WebSocketClient",
            "set_verify_ssl_enabled"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "WebSocketClient");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

WebSocketClient::MethodBindings WebSocketClient::method_bindings = {};
void* WebSocketClient::class_tag = nullptr;
} // namespace Rebel
