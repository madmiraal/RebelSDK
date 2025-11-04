// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_WEBRTCDATACHANNEL_H
#define REBEL_WEBRTCDATACHANNEL_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/packetpeer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class WebRTCDataChannel : public PacketPeer {
public:
    enum WriteMode {
        WRITE_MODE_TEXT = 0,
        WRITE_MODE_BINARY = 1,
    };

    enum ChannelState {
        STATE_CONNECTING = 0,
        STATE_OPEN = 1,
        STATE_CLOSING = 2,
        STATE_CLOSED = 3,
    };

    void close();
    int64_t get_buffered_amount() const;
    int64_t get_id() const;
    String get_label() const;
    int64_t get_max_packet_life_time() const;
    int64_t get_max_retransmits() const;
    String get_protocol() const;
    WebRTCDataChannel::ChannelState get_ready_state() const;
    WebRTCDataChannel::WriteMode get_write_mode() const;
    bool is_negotiated() const;
    bool is_ordered() const;
    Error poll();
    void set_write_mode(const int64_t write_mode);
    bool was_string_packet() const;

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "WebRTCDataChannel";
    }

    inline static const char* get_rebel_class_name() {
        return "WebRTCDataChannel";
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
        rebel_method_bind* mb_get_buffered_amount;
        rebel_method_bind* mb_get_id;
        rebel_method_bind* mb_get_label;
        rebel_method_bind* mb_get_max_packet_life_time;
        rebel_method_bind* mb_get_max_retransmits;
        rebel_method_bind* mb_get_protocol;
        rebel_method_bind* mb_get_ready_state;
        rebel_method_bind* mb_get_write_mode;
        rebel_method_bind* mb_is_negotiated;
        rebel_method_bind* mb_is_ordered;
        rebel_method_bind* mb_poll;
        rebel_method_bind* mb_set_write_mode;
        rebel_method_bind* mb_was_string_packet;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_WEBRTCDATACHANNEL_H
