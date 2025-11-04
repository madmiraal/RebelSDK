// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_STREAMPEERTCP_H
#define REBEL_STREAMPEERTCP_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/streampeer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class StreamPeerTCP : public StreamPeer {
public:
    enum Status {
        STATUS_NONE = 0,
        STATUS_CONNECTING = 1,
        STATUS_CONNECTED = 2,
        STATUS_ERROR = 3,
    };

    Error connect_to_host(const String host, const int64_t port);
    void disconnect_from_host();
    String get_connected_host() const;
    int64_t get_connected_port() const;
    StreamPeerTCP::Status get_status();
    bool is_connected_to_host() const;
    void set_no_delay(const bool enabled);

    static StreamPeerTCP* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "StreamPeerTCP";
    }

    inline static const char* get_rebel_class_name() {
        return "StreamPeerTCP";
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
        rebel_method_bind* mb_connect_to_host;
        rebel_method_bind* mb_disconnect_from_host;
        rebel_method_bind* mb_get_connected_host;
        rebel_method_bind* mb_get_connected_port;
        rebel_method_bind* mb_get_status;
        rebel_method_bind* mb_is_connected_to_host;
        rebel_method_bind* mb_set_no_delay;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_STREAMPEERTCP_H
