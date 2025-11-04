// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/httpclient.h"

#include "classes/icalls.h"
#include "classes/streampeer.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void HTTPClient::close() {
    rebel_icall_void(
        method_bindings.mb_close,
        (const Object*)this
    );
}

Error HTTPClient::connect_to_host(const String host, const int64_t port, const bool use_ssl, const bool verify_host) {
    return (Error)rebel_icall_int_string_int_bool_bool(
        method_bindings.mb_connect_to_host,
        (const Object*)this,
        host,
        port,
        use_ssl,
        verify_host
    );
}

Ref<StreamPeer> HTTPClient::get_connection() const {
    return Ref<StreamPeer>::create_ref(rebel_icall_object(
        method_bindings.mb_get_connection,
        (const Object*)this
    ));
}

int64_t HTTPClient::get_read_chunk_size() const {
    return rebel_icall_int(
        method_bindings.mb_get_read_chunk_size,
        (const Object*)this
    );
}

int64_t HTTPClient::get_response_body_length() const {
    return rebel_icall_int(
        method_bindings.mb_get_response_body_length,
        (const Object*)this
    );
}

int64_t HTTPClient::get_response_code() const {
    return rebel_icall_int(
        method_bindings.mb_get_response_code,
        (const Object*)this
    );
}

PoolStringArray HTTPClient::get_response_headers() {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_response_headers,
        (const Object*)this
    );
}

Dictionary HTTPClient::get_response_headers_as_dictionary() {
    return rebel_icall_dictionary(
        method_bindings.mb_get_response_headers_as_dictionary,
        (const Object*)this
    );
}

HTTPClient::Status HTTPClient::get_status() const {
    return (HTTPClient::Status)rebel_icall_int(
        method_bindings.mb_get_status,
        (const Object*)this
    );
}

bool HTTPClient::has_response() const {
    return rebel_icall_bool(
        method_bindings.mb_has_response,
        (const Object*)this
    );
}

bool HTTPClient::is_blocking_mode_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_blocking_mode_enabled,
        (const Object*)this
    );
}

bool HTTPClient::is_response_chunked() const {
    return rebel_icall_bool(
        method_bindings.mb_is_response_chunked,
        (const Object*)this
    );
}

Error HTTPClient::poll() {
    return (Error)rebel_icall_int(
        method_bindings.mb_poll,
        (const Object*)this
    );
}

String HTTPClient::query_string_from_dict(const Dictionary fields) {
    return rebel_icall_string_dictionary(
        method_bindings.mb_query_string_from_dict,
        (const Object*)this,
        fields
    );
}

PoolByteArray HTTPClient::read_response_body_chunk() {
    return rebel_icall_poolbytearray(
        method_bindings.mb_read_response_body_chunk,
        (const Object*)this
    );
}

Error HTTPClient::request(const int64_t method, const String url, const PoolStringArray headers, const String body) {
    return (Error)rebel_icall_int_int_string_poolstringarray_string(
        method_bindings.mb_request,
        (const Object*)this,
        method,
        url,
        headers,
        body
    );
}

Error HTTPClient::request_raw(const int64_t method, const String url, const PoolStringArray headers, const PoolByteArray body) {
    return (Error)rebel_icall_int_int_string_poolstringarray_poolbytearray(
        method_bindings.mb_request_raw,
        (const Object*)this,
        method,
        url,
        headers,
        body
    );
}

void HTTPClient::set_blocking_mode(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_blocking_mode,
        (const Object*)this,
        enabled
    );
}

void HTTPClient::set_connection(const Ref<StreamPeer> connection) {
    rebel_icall_void_object(
        method_bindings.mb_set_connection,
        (const Object*)this,
        connection.ptr()
    );
}

void HTTPClient::set_read_chunk_size(const int64_t bytes) {
    rebel_icall_void_int(
        method_bindings.mb_set_read_chunk_size,
        (const Object*)this,
        bytes
    );
}

HTTPClient* HTTPClient::create() {
    return (HTTPClient*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"HTTPClient")()
         );
}

void HTTPClient::init_method_bindings() {
    method_bindings.mb_close =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "close"
        );
    method_bindings.mb_connect_to_host =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "connect_to_host"
        );
    method_bindings.mb_get_connection =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "get_connection"
        );
    method_bindings.mb_get_read_chunk_size =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "get_read_chunk_size"
        );
    method_bindings.mb_get_response_body_length =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "get_response_body_length"
        );
    method_bindings.mb_get_response_code =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "get_response_code"
        );
    method_bindings.mb_get_response_headers =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "get_response_headers"
        );
    method_bindings.mb_get_response_headers_as_dictionary =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "get_response_headers_as_dictionary"
        );
    method_bindings.mb_get_status =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "get_status"
        );
    method_bindings.mb_has_response =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "has_response"
        );
    method_bindings.mb_is_blocking_mode_enabled =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "is_blocking_mode_enabled"
        );
    method_bindings.mb_is_response_chunked =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "is_response_chunked"
        );
    method_bindings.mb_poll =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "poll"
        );
    method_bindings.mb_query_string_from_dict =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "query_string_from_dict"
        );
    method_bindings.mb_read_response_body_chunk =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "read_response_body_chunk"
        );
    method_bindings.mb_request =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "request"
        );
    method_bindings.mb_request_raw =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "request_raw"
        );
    method_bindings.mb_set_blocking_mode =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "set_blocking_mode"
        );
    method_bindings.mb_set_connection =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "set_connection"
        );
    method_bindings.mb_set_read_chunk_size =
        api->rebel_method_bind_get_method(
            "HTTPClient",
            "set_read_chunk_size"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "HTTPClient");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

HTTPClient::MethodBindings HTTPClient::method_bindings = {};
void* HTTPClient::class_tag = nullptr;
} // namespace Rebel
