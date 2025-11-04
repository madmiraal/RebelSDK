// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/httprequest.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void HTTPRequest::_redirect_request(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__redirect_request,
        (const Object*)this,
        arg0
    );
}

void HTTPRequest::_request_done(const int64_t arg0, const int64_t arg1, const PoolStringArray arg2, const PoolByteArray arg3) {
    rebel_icall_void_int_int_poolstringarray_poolbytearray(
        method_bindings.mb__request_done,
        (const Object*)this,
        arg0,
        arg1,
        arg2,
        arg3
    );
}

void HTTPRequest::_timeout() {
    rebel_icall_void(
        method_bindings.mb__timeout,
        (const Object*)this
    );
}

void HTTPRequest::cancel_request() {
    rebel_icall_void(
        method_bindings.mb_cancel_request,
        (const Object*)this
    );
}

int64_t HTTPRequest::get_body_size() const {
    return rebel_icall_int(
        method_bindings.mb_get_body_size,
        (const Object*)this
    );
}

int64_t HTTPRequest::get_body_size_limit() const {
    return rebel_icall_int(
        method_bindings.mb_get_body_size_limit,
        (const Object*)this
    );
}

int64_t HTTPRequest::get_download_chunk_size() const {
    return rebel_icall_int(
        method_bindings.mb_get_download_chunk_size,
        (const Object*)this
    );
}

String HTTPRequest::get_download_file() const {
    return rebel_icall_string(
        method_bindings.mb_get_download_file,
        (const Object*)this
    );
}

int64_t HTTPRequest::get_downloaded_bytes() const {
    return rebel_icall_int(
        method_bindings.mb_get_downloaded_bytes,
        (const Object*)this
    );
}

HTTPClient::Status HTTPRequest::get_http_client_status() const {
    return (HTTPClient::Status)rebel_icall_int(
        method_bindings.mb_get_http_client_status,
        (const Object*)this
    );
}

int64_t HTTPRequest::get_max_redirects() const {
    return rebel_icall_int(
        method_bindings.mb_get_max_redirects,
        (const Object*)this
    );
}

int64_t HTTPRequest::get_timeout() {
    return rebel_icall_int(
        method_bindings.mb_get_timeout,
        (const Object*)this
    );
}

bool HTTPRequest::is_using_threads() const {
    return rebel_icall_bool(
        method_bindings.mb_is_using_threads,
        (const Object*)this
    );
}

Error HTTPRequest::request(const String url, const PoolStringArray custom_headers, const bool ssl_validate_domain, const int64_t method, const String request_data) {
    return (Error)rebel_icall_int_string_poolstringarray_bool_int_string(
        method_bindings.mb_request,
        (const Object*)this,
        url,
        custom_headers,
        ssl_validate_domain,
        method,
        request_data
    );
}

Error HTTPRequest::request_raw(const String url, const PoolStringArray custom_headers, const bool ssl_validate_domain, const int64_t method, const PoolByteArray request_data_raw) {
    return (Error)rebel_icall_int_string_poolstringarray_bool_int_poolbytearray(
        method_bindings.mb_request_raw,
        (const Object*)this,
        url,
        custom_headers,
        ssl_validate_domain,
        method,
        request_data_raw
    );
}

void HTTPRequest::set_body_size_limit(const int64_t bytes) {
    rebel_icall_void_int(
        method_bindings.mb_set_body_size_limit,
        (const Object*)this,
        bytes
    );
}

void HTTPRequest::set_download_chunk_size(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb_set_download_chunk_size,
        (const Object*)this,
        arg0
    );
}

void HTTPRequest::set_download_file(const String path) {
    rebel_icall_void_string(
        method_bindings.mb_set_download_file,
        (const Object*)this,
        path
    );
}

void HTTPRequest::set_max_redirects(const int64_t amount) {
    rebel_icall_void_int(
        method_bindings.mb_set_max_redirects,
        (const Object*)this,
        amount
    );
}

void HTTPRequest::set_timeout(const int64_t timeout) {
    rebel_icall_void_int(
        method_bindings.mb_set_timeout,
        (const Object*)this,
        timeout
    );
}

void HTTPRequest::set_use_threads(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_threads,
        (const Object*)this,
        enable
    );
}

HTTPRequest* HTTPRequest::create() {
    return (HTTPRequest*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"HTTPRequest")()
         );
}

void HTTPRequest::init_method_bindings() {
    method_bindings.mb__redirect_request =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "_redirect_request"
        );
    method_bindings.mb__request_done =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "_request_done"
        );
    method_bindings.mb__timeout =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "_timeout"
        );
    method_bindings.mb_cancel_request =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "cancel_request"
        );
    method_bindings.mb_get_body_size =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "get_body_size"
        );
    method_bindings.mb_get_body_size_limit =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "get_body_size_limit"
        );
    method_bindings.mb_get_download_chunk_size =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "get_download_chunk_size"
        );
    method_bindings.mb_get_download_file =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "get_download_file"
        );
    method_bindings.mb_get_downloaded_bytes =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "get_downloaded_bytes"
        );
    method_bindings.mb_get_http_client_status =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "get_http_client_status"
        );
    method_bindings.mb_get_max_redirects =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "get_max_redirects"
        );
    method_bindings.mb_get_timeout =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "get_timeout"
        );
    method_bindings.mb_is_using_threads =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "is_using_threads"
        );
    method_bindings.mb_request =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "request"
        );
    method_bindings.mb_request_raw =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "request_raw"
        );
    method_bindings.mb_set_body_size_limit =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "set_body_size_limit"
        );
    method_bindings.mb_set_download_chunk_size =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "set_download_chunk_size"
        );
    method_bindings.mb_set_download_file =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "set_download_file"
        );
    method_bindings.mb_set_max_redirects =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "set_max_redirects"
        );
    method_bindings.mb_set_timeout =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "set_timeout"
        );
    method_bindings.mb_set_use_threads =
        api->rebel_method_bind_get_method(
            "HTTPRequest",
            "set_use_threads"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "HTTPRequest");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

HTTPRequest::MethodBindings HTTPRequest::method_bindings = {};
void* HTTPRequest::class_tag = nullptr;
} // namespace Rebel
