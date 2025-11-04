// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_HTTPREQUEST_H
#define REBEL_HTTPREQUEST_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/httpclient.h"
#include "classes/node.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class HTTPRequest : public Node {
public:
    enum Result {
        RESULT_SUCCESS = 0,
        RESULT_CHUNKED_BODY_SIZE_MISMATCH = 1,
        RESULT_CANT_CONNECT = 2,
        RESULT_CANT_RESOLVE = 3,
        RESULT_CONNECTION_ERROR = 4,
        RESULT_SSL_HANDSHAKE_ERROR = 5,
        RESULT_NO_RESPONSE = 6,
        RESULT_BODY_SIZE_LIMIT_EXCEEDED = 7,
        RESULT_REQUEST_FAILED = 8,
        RESULT_DOWNLOAD_FILE_CANT_OPEN = 9,
        RESULT_DOWNLOAD_FILE_WRITE_ERROR = 10,
        RESULT_REDIRECT_LIMIT_REACHED = 11,
        RESULT_TIMEOUT = 12,
    };

    void _redirect_request(const String arg0);
    void _request_done(const int64_t arg0, const int64_t arg1, const PoolStringArray arg2, const PoolByteArray arg3);
    void _timeout();
    void cancel_request();
    int64_t get_body_size() const;
    int64_t get_body_size_limit() const;
    int64_t get_download_chunk_size() const;
    String get_download_file() const;
    int64_t get_downloaded_bytes() const;
    HTTPClient::Status get_http_client_status() const;
    int64_t get_max_redirects() const;
    int64_t get_timeout();
    bool is_using_threads() const;
    Error request(const String url, const PoolStringArray custom_headers = PoolStringArray(), const bool ssl_validate_domain = true, const int64_t method = 0, const String request_data = "");
    Error request_raw(const String url, const PoolStringArray custom_headers = PoolStringArray(), const bool ssl_validate_domain = true, const int64_t method = 0, const PoolByteArray request_data_raw = PoolByteArray());
    void set_body_size_limit(const int64_t bytes);
    void set_download_chunk_size(const int64_t arg0);
    void set_download_file(const String path);
    void set_max_redirects(const int64_t amount);
    void set_timeout(const int64_t timeout);
    void set_use_threads(const bool enable);

    static HTTPRequest* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "HTTPRequest";
    }

    inline static const char* get_rebel_class_name() {
        return "HTTPRequest";
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
        rebel_method_bind* mb__redirect_request;
        rebel_method_bind* mb__request_done;
        rebel_method_bind* mb__timeout;
        rebel_method_bind* mb_cancel_request;
        rebel_method_bind* mb_get_body_size;
        rebel_method_bind* mb_get_body_size_limit;
        rebel_method_bind* mb_get_download_chunk_size;
        rebel_method_bind* mb_get_download_file;
        rebel_method_bind* mb_get_downloaded_bytes;
        rebel_method_bind* mb_get_http_client_status;
        rebel_method_bind* mb_get_max_redirects;
        rebel_method_bind* mb_get_timeout;
        rebel_method_bind* mb_is_using_threads;
        rebel_method_bind* mb_request;
        rebel_method_bind* mb_request_raw;
        rebel_method_bind* mb_set_body_size_limit;
        rebel_method_bind* mb_set_download_chunk_size;
        rebel_method_bind* mb_set_download_file;
        rebel_method_bind* mb_set_max_redirects;
        rebel_method_bind* mb_set_timeout;
        rebel_method_bind* mb_set_use_threads;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_HTTPREQUEST_H
