// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/packetpeer.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t PacketPeer::get_available_packet_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_available_packet_count,
        (const Object*)this
    );
}

int64_t PacketPeer::get_encode_buffer_max_size() const {
    return rebel_icall_int(
        method_bindings.mb_get_encode_buffer_max_size,
        (const Object*)this
    );
}

PoolByteArray PacketPeer::get_packet() {
    return rebel_icall_poolbytearray(
        method_bindings.mb_get_packet,
        (const Object*)this
    );
}

Error PacketPeer::get_packet_error() const {
    return (Error)rebel_icall_int(
        method_bindings.mb_get_packet_error,
        (const Object*)this
    );
}

Variant PacketPeer::get_var(const bool allow_objects) {
    return rebel_icall_variant_bool(
        method_bindings.mb_get_var,
        (const Object*)this,
        allow_objects
    );
}

bool PacketPeer::is_object_decoding_allowed() const {
    return rebel_icall_bool(
        method_bindings.mb_is_object_decoding_allowed,
        (const Object*)this
    );
}

Error PacketPeer::put_packet(const PoolByteArray buffer) {
    return (Error)rebel_icall_int_poolbytearray(
        method_bindings.mb_put_packet,
        (const Object*)this,
        buffer
    );
}

Error PacketPeer::put_var(const Variant var, const bool full_objects) {
    return (Error)rebel_icall_int_variant_bool(
        method_bindings.mb_put_var,
        (const Object*)this,
        var,
        full_objects
    );
}

void PacketPeer::set_allow_object_decoding(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_allow_object_decoding,
        (const Object*)this,
        enable
    );
}

void PacketPeer::set_encode_buffer_max_size(const int64_t max_size) {
    rebel_icall_void_int(
        method_bindings.mb_set_encode_buffer_max_size,
        (const Object*)this,
        max_size
    );
}

void PacketPeer::init_method_bindings() {
    method_bindings.mb_get_available_packet_count =
        api->rebel_method_bind_get_method(
            "PacketPeer",
            "get_available_packet_count"
        );
    method_bindings.mb_get_encode_buffer_max_size =
        api->rebel_method_bind_get_method(
            "PacketPeer",
            "get_encode_buffer_max_size"
        );
    method_bindings.mb_get_packet =
        api->rebel_method_bind_get_method(
            "PacketPeer",
            "get_packet"
        );
    method_bindings.mb_get_packet_error =
        api->rebel_method_bind_get_method(
            "PacketPeer",
            "get_packet_error"
        );
    method_bindings.mb_get_var =
        api->rebel_method_bind_get_method(
            "PacketPeer",
            "get_var"
        );
    method_bindings.mb_is_object_decoding_allowed =
        api->rebel_method_bind_get_method(
            "PacketPeer",
            "is_object_decoding_allowed"
        );
    method_bindings.mb_put_packet =
        api->rebel_method_bind_get_method(
            "PacketPeer",
            "put_packet"
        );
    method_bindings.mb_put_var =
        api->rebel_method_bind_get_method(
            "PacketPeer",
            "put_var"
        );
    method_bindings.mb_set_allow_object_decoding =
        api->rebel_method_bind_get_method(
            "PacketPeer",
            "set_allow_object_decoding"
        );
    method_bindings.mb_set_encode_buffer_max_size =
        api->rebel_method_bind_get_method(
            "PacketPeer",
            "set_encode_buffer_max_size"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PacketPeer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PacketPeer::MethodBindings PacketPeer::method_bindings = {};
void* PacketPeer::class_tag = nullptr;
} // namespace Rebel
