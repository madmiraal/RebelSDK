// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_UDPSERVER_H
#define REBEL_UDPSERVER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class PacketPeerUDP;

class UDPServer : public Reference {
public:
    int64_t get_max_pending_connections() const;
    bool is_connection_available() const;
    bool is_listening() const;
    Error listen(const int64_t port, const String bind_address = "*");
    Error poll();
    void set_max_pending_connections(const int64_t max_pending_connections);
    void stop();
    Ref<PacketPeerUDP> take_connection();

    static UDPServer* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "UDPServer";
    }

    inline static const char* get_rebel_class_name() {
        return "UDPServer";
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
        rebel_method_bind* mb_get_max_pending_connections;
        rebel_method_bind* mb_is_connection_available;
        rebel_method_bind* mb_is_listening;
        rebel_method_bind* mb_listen;
        rebel_method_bind* mb_poll;
        rebel_method_bind* mb_set_max_pending_connections;
        rebel_method_bind* mb_stop;
        rebel_method_bind* mb_take_connection;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_UDPSERVER_H
