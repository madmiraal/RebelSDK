// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_WEBRTCMULTIPLAYER_H
#define REBEL_WEBRTCMULTIPLAYER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/networkedmultiplayerpeer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class WebRTCPeerConnection;

class WebRTCMultiplayer : public NetworkedMultiplayerPeer {
public:
    Error add_peer(const Ref<WebRTCPeerConnection> peer, const int64_t peer_id, const int64_t unreliable_lifetime = 1);
    void close();
    Dictionary get_peer(const int64_t peer_id);
    Dictionary get_peers();
    bool has_peer(const int64_t peer_id);
    Error initialize(const int64_t peer_id, const bool server_compatibility = false);
    void remove_peer(const int64_t peer_id);

    static WebRTCMultiplayer* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "WebRTCMultiplayer";
    }

    inline static const char* get_rebel_class_name() {
        return "WebRTCMultiplayer";
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
        rebel_method_bind* mb_add_peer;
        rebel_method_bind* mb_close;
        rebel_method_bind* mb_get_peer;
        rebel_method_bind* mb_get_peers;
        rebel_method_bind* mb_has_peer;
        rebel_method_bind* mb_initialize;
        rebel_method_bind* mb_remove_peer;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_WEBRTCMULTIPLAYER_H
