// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_WEBRTCPEERCONNECTION_H
#define REBEL_WEBRTCPEERCONNECTION_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class WebRTCDataChannel;

class WebRTCPeerConnection : public Reference {
public:
    enum ConnectionState {
        STATE_NEW = 0,
        STATE_CONNECTING = 1,
        STATE_CONNECTED = 2,
        STATE_DISCONNECTED = 3,
        STATE_FAILED = 4,
        STATE_CLOSED = 5,
    };

    Error add_ice_candidate(const String media, const int64_t index, const String name);
    void close();
    Ref<WebRTCDataChannel> create_data_channel(const String label, const Dictionary options = {});
    Error create_offer();
    WebRTCPeerConnection::ConnectionState get_connection_state() const;
    Error initialize(const Dictionary configuration = {});
    Error poll();
    Error set_local_description(const String type, const String sdp);
    Error set_remote_description(const String type, const String sdp);

    static WebRTCPeerConnection* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "WebRTCPeerConnection";
    }

    inline static const char* get_rebel_class_name() {
        return "WebRTCPeerConnection";
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
        rebel_method_bind* mb_add_ice_candidate;
        rebel_method_bind* mb_close;
        rebel_method_bind* mb_create_data_channel;
        rebel_method_bind* mb_create_offer;
        rebel_method_bind* mb_get_connection_state;
        rebel_method_bind* mb_initialize;
        rebel_method_bind* mb_poll;
        rebel_method_bind* mb_set_local_description;
        rebel_method_bind* mb_set_remote_description;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_WEBRTCPEERCONNECTION_H
