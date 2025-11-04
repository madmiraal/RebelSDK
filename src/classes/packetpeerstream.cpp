// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/packetpeerstream.h"

#include "classes/icalls.h"
#include "classes/streampeer.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t PacketPeerStream::get_input_buffer_max_size() const {
    return rebel_icall_int(
        method_bindings.mb_get_input_buffer_max_size,
        (const Object*)this
    );
}

int64_t PacketPeerStream::get_output_buffer_max_size() const {
    return rebel_icall_int(
        method_bindings.mb_get_output_buffer_max_size,
        (const Object*)this
    );
}

Ref<StreamPeer> PacketPeerStream::get_stream_peer() const {
    return Ref<StreamPeer>::create_ref(rebel_icall_object(
        method_bindings.mb_get_stream_peer,
        (const Object*)this
    ));
}

void PacketPeerStream::set_input_buffer_max_size(const int64_t max_size_bytes) {
    rebel_icall_void_int(
        method_bindings.mb_set_input_buffer_max_size,
        (const Object*)this,
        max_size_bytes
    );
}

void PacketPeerStream::set_output_buffer_max_size(const int64_t max_size_bytes) {
    rebel_icall_void_int(
        method_bindings.mb_set_output_buffer_max_size,
        (const Object*)this,
        max_size_bytes
    );
}

void PacketPeerStream::set_stream_peer(const Ref<StreamPeer> peer) {
    rebel_icall_void_object(
        method_bindings.mb_set_stream_peer,
        (const Object*)this,
        peer.ptr()
    );
}

PacketPeerStream* PacketPeerStream::create() {
    return (PacketPeerStream*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PacketPeerStream")()
         );
}

void PacketPeerStream::init_method_bindings() {
    method_bindings.mb_get_input_buffer_max_size =
        api->rebel_method_bind_get_method(
            "PacketPeerStream",
            "get_input_buffer_max_size"
        );
    method_bindings.mb_get_output_buffer_max_size =
        api->rebel_method_bind_get_method(
            "PacketPeerStream",
            "get_output_buffer_max_size"
        );
    method_bindings.mb_get_stream_peer =
        api->rebel_method_bind_get_method(
            "PacketPeerStream",
            "get_stream_peer"
        );
    method_bindings.mb_set_input_buffer_max_size =
        api->rebel_method_bind_get_method(
            "PacketPeerStream",
            "set_input_buffer_max_size"
        );
    method_bindings.mb_set_output_buffer_max_size =
        api->rebel_method_bind_get_method(
            "PacketPeerStream",
            "set_output_buffer_max_size"
        );
    method_bindings.mb_set_stream_peer =
        api->rebel_method_bind_get_method(
            "PacketPeerStream",
            "set_stream_peer"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PacketPeerStream");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PacketPeerStream::MethodBindings PacketPeerStream::method_bindings = {};
void* PacketPeerStream::class_tag = nullptr;
} // namespace Rebel
