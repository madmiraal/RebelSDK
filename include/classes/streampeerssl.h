// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_STREAMPEERSSL_H
#define REBEL_STREAMPEERSSL_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/streampeer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CryptoKey;
class X509Certificate;

class StreamPeerSSL : public StreamPeer {
public:
    enum Status {
        STATUS_DISCONNECTED = 0,
        STATUS_HANDSHAKING = 1,
        STATUS_CONNECTED = 2,
        STATUS_ERROR = 3,
        STATUS_ERROR_HOSTNAME_MISMATCH = 4,
    };

    Error accept_stream(const Ref<StreamPeer> stream, const Ref<CryptoKey> private_key, const Ref<X509Certificate> certificate, const Ref<X509Certificate> chain = nullptr);
    Error connect_to_stream(const Ref<StreamPeer> stream, const bool validate_certs = false, const String for_hostname = "", const Ref<X509Certificate> valid_certificate = nullptr);
    void disconnect_from_stream();
    StreamPeerSSL::Status get_status() const;
    bool is_blocking_handshake_enabled() const;
    void poll();
    void set_blocking_handshake_enabled(const bool enabled);

    static StreamPeerSSL* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "StreamPeerSSL";
    }

    inline static const char* get_rebel_class_name() {
        return "StreamPeerSSL";
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
        rebel_method_bind* mb_accept_stream;
        rebel_method_bind* mb_connect_to_stream;
        rebel_method_bind* mb_disconnect_from_stream;
        rebel_method_bind* mb_get_status;
        rebel_method_bind* mb_is_blocking_handshake_enabled;
        rebel_method_bind* mb_poll;
        rebel_method_bind* mb_set_blocking_handshake_enabled;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_STREAMPEERSSL_H
