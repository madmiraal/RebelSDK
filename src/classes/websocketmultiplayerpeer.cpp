// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/websocketmultiplayerpeer.h"

#include "classes/icalls.h"
#include "classes/websocketpeer.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<WebSocketPeer> WebSocketMultiplayerPeer::get_peer(const int64_t peer_id) const {
    return Ref<WebSocketPeer>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_peer,
        (const Object*)this,
        peer_id
    ));
}

Error WebSocketMultiplayerPeer::set_buffers(const int64_t input_buffer_size_kb, const int64_t input_max_packets, const int64_t output_buffer_size_kb, const int64_t output_max_packets) {
    return (Error)rebel_icall_int_int_int_int_int(
        method_bindings.mb_set_buffers,
        (const Object*)this,
        input_buffer_size_kb,
        input_max_packets,
        output_buffer_size_kb,
        output_max_packets
    );
}

void WebSocketMultiplayerPeer::init_method_bindings() {
    method_bindings.mb_get_peer =
        api->rebel_method_bind_get_method(
            "WebSocketMultiplayerPeer",
            "get_peer"
        );
    method_bindings.mb_set_buffers =
        api->rebel_method_bind_get_method(
            "WebSocketMultiplayerPeer",
            "set_buffers"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "WebSocketMultiplayerPeer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

WebSocketMultiplayerPeer::MethodBindings WebSocketMultiplayerPeer::method_bindings = {};
void* WebSocketMultiplayerPeer::class_tag = nullptr;
} // namespace Rebel
