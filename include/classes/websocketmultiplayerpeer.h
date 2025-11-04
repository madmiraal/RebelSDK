// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_WEBSOCKETMULTIPLAYERPEER_H
#define REBEL_WEBSOCKETMULTIPLAYERPEER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/networkedmultiplayerpeer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class WebSocketPeer;

class WebSocketMultiplayerPeer : public NetworkedMultiplayerPeer {
public:
    Ref<WebSocketPeer> get_peer(const int64_t peer_id) const;
    Error set_buffers(const int64_t input_buffer_size_kb, const int64_t input_max_packets, const int64_t output_buffer_size_kb, const int64_t output_max_packets);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "WebSocketMultiplayerPeer";
    }

    inline static const char* get_rebel_class_name() {
        return "WebSocketMultiplayerPeer";
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
        rebel_method_bind* mb_get_peer;
        rebel_method_bind* mb_set_buffers;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_WEBSOCKETMULTIPLAYERPEER_H
