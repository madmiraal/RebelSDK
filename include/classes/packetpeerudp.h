// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PACKETPEERUDP_H
#define REBEL_PACKETPEERUDP_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/packetpeer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class PacketPeerUDP : public PacketPeer {
public:
    void close();
    Error connect_to_host(const String host, const int64_t port);
    String get_packet_ip() const;
    int64_t get_packet_port() const;
    bool is_connected_to_host() const;
    bool is_listening() const;
    Error join_multicast_group(const String multicast_address, const String interface_name);
    Error leave_multicast_group(const String multicast_address, const String interface_name);
    Error listen(const int64_t port, const String bind_address = "*", const int64_t recv_buf_size = 65536);
    void set_broadcast_enabled(const bool enabled);
    Error set_dest_address(const String host, const int64_t port);
    Error wait();

    static PacketPeerUDP* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PacketPeerUDP";
    }

    inline static const char* get_rebel_class_name() {
        return "PacketPeerUDP";
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
        rebel_method_bind* mb_close;
        rebel_method_bind* mb_connect_to_host;
        rebel_method_bind* mb_get_packet_ip;
        rebel_method_bind* mb_get_packet_port;
        rebel_method_bind* mb_is_connected_to_host;
        rebel_method_bind* mb_is_listening;
        rebel_method_bind* mb_join_multicast_group;
        rebel_method_bind* mb_leave_multicast_group;
        rebel_method_bind* mb_listen;
        rebel_method_bind* mb_set_broadcast_enabled;
        rebel_method_bind* mb_set_dest_address;
        rebel_method_bind* mb_wait;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PACKETPEERUDP_H
