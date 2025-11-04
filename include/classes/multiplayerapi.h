// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_MULTIPLAYERAPI_H
#define REBEL_MULTIPLAYERAPI_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class NetworkedMultiplayerPeer;
class Node;

class MultiplayerAPI : public Reference {
public:
    enum RPCMode {
        RPC_MODE_DISABLED = 0,
        RPC_MODE_REMOTE = 1,
        RPC_MODE_MASTER = 2,
        RPC_MODE_PUPPET = 3,
        RPC_MODE_SLAVE = 3,
        RPC_MODE_REMOTESYNC = 4,
        RPC_MODE_SYNC = 4,
        RPC_MODE_MASTERSYNC = 5,
        RPC_MODE_PUPPETSYNC = 6,
    };

    void _add_peer(const int64_t id);
    void _connected_to_server();
    void _connection_failed();
    void _del_peer(const int64_t id);
    void _server_disconnected();
    void clear();
    PoolIntArray get_network_connected_peers() const;
    Ref<NetworkedMultiplayerPeer> get_network_peer() const;
    int64_t get_network_unique_id() const;
    Node* get_root_node();
    int64_t get_rpc_sender_id() const;
    bool has_network_peer() const;
    bool is_network_server() const;
    bool is_object_decoding_allowed() const;
    bool is_refusing_new_network_connections() const;
    void poll();
    Error send_bytes(const PoolByteArray bytes, const int64_t id = 0, const int64_t mode = 2);
    void set_allow_object_decoding(const bool enable);
    void set_network_peer(const Ref<NetworkedMultiplayerPeer> peer);
    void set_refuse_new_network_connections(const bool refuse);
    void set_root_node(const Node* node);

    static MultiplayerAPI* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "MultiplayerAPI";
    }

    inline static const char* get_rebel_class_name() {
        return "MultiplayerAPI";
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
        rebel_method_bind* mb__add_peer;
        rebel_method_bind* mb__connected_to_server;
        rebel_method_bind* mb__connection_failed;
        rebel_method_bind* mb__del_peer;
        rebel_method_bind* mb__server_disconnected;
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_get_network_connected_peers;
        rebel_method_bind* mb_get_network_peer;
        rebel_method_bind* mb_get_network_unique_id;
        rebel_method_bind* mb_get_root_node;
        rebel_method_bind* mb_get_rpc_sender_id;
        rebel_method_bind* mb_has_network_peer;
        rebel_method_bind* mb_is_network_server;
        rebel_method_bind* mb_is_object_decoding_allowed;
        rebel_method_bind* mb_is_refusing_new_network_connections;
        rebel_method_bind* mb_poll;
        rebel_method_bind* mb_send_bytes;
        rebel_method_bind* mb_set_allow_object_decoding;
        rebel_method_bind* mb_set_network_peer;
        rebel_method_bind* mb_set_refuse_new_network_connections;
        rebel_method_bind* mb_set_root_node;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_MULTIPLAYERAPI_H
