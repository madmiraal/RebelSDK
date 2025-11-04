// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_WEBSOCKETPEER_H
#define REBEL_WEBSOCKETPEER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/packetpeer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class WebSocketPeer : public PacketPeer {
public:
    enum WriteMode {
        WRITE_MODE_TEXT = 0,
        WRITE_MODE_BINARY = 1,
    };

    void close(const int64_t code = 1000, const String reason = "");
    String get_connected_host() const;
    int64_t get_connected_port() const;
    int64_t get_current_outbound_buffered_amount() const;
    WebSocketPeer::WriteMode get_write_mode() const;
    bool is_connected_to_host() const;
    void set_no_delay(const bool enabled);
    void set_write_mode(const int64_t mode);
    bool was_string_packet() const;

    static WebSocketPeer* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "WebSocketPeer";
    }

    inline static const char* get_rebel_class_name() {
        return "WebSocketPeer";
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
        rebel_method_bind* mb_get_connected_host;
        rebel_method_bind* mb_get_connected_port;
        rebel_method_bind* mb_get_current_outbound_buffered_amount;
        rebel_method_bind* mb_get_write_mode;
        rebel_method_bind* mb_is_connected_to_host;
        rebel_method_bind* mb_set_no_delay;
        rebel_method_bind* mb_set_write_mode;
        rebel_method_bind* mb_was_string_packet;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_WEBSOCKETPEER_H
