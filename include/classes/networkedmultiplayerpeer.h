// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_NETWORKEDMULTIPLAYERPEER_H
#define REBEL_NETWORKEDMULTIPLAYERPEER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/packetpeer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class NetworkedMultiplayerPeer : public PacketPeer {
public:
    enum ConnectionStatus {
        CONNECTION_DISCONNECTED = 0,
        CONNECTION_CONNECTING = 1,
        CONNECTION_CONNECTED = 2,
    };

    enum TransferMode {
        TRANSFER_MODE_UNRELIABLE = 0,
        TRANSFER_MODE_UNRELIABLE_ORDERED = 1,
        TRANSFER_MODE_RELIABLE = 2,
    };

    static const int TARGET_PEER_BROADCAST = 0;
    static const int TARGET_PEER_SERVER = 1;

    NetworkedMultiplayerPeer::ConnectionStatus get_connection_status() const;
    int64_t get_packet_peer() const;
    NetworkedMultiplayerPeer::TransferMode get_transfer_mode() const;
    int64_t get_unique_id() const;
    bool is_refusing_new_connections() const;
    void poll();
    void set_refuse_new_connections(const bool enable);
    void set_target_peer(const int64_t id);
    void set_transfer_mode(const int64_t mode);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "NetworkedMultiplayerPeer";
    }

    inline static const char* get_rebel_class_name() {
        return "NetworkedMultiplayerPeer";
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
        rebel_method_bind* mb_get_connection_status;
        rebel_method_bind* mb_get_packet_peer;
        rebel_method_bind* mb_get_transfer_mode;
        rebel_method_bind* mb_get_unique_id;
        rebel_method_bind* mb_is_refusing_new_connections;
        rebel_method_bind* mb_poll;
        rebel_method_bind* mb_set_refuse_new_connections;
        rebel_method_bind* mb_set_target_peer;
        rebel_method_bind* mb_set_transfer_mode;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_NETWORKEDMULTIPLAYERPEER_H
