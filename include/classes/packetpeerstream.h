// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PACKETPEERSTREAM_H
#define REBEL_PACKETPEERSTREAM_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/packetpeer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class StreamPeer;

class PacketPeerStream : public PacketPeer {
public:
    int64_t get_input_buffer_max_size() const;
    int64_t get_output_buffer_max_size() const;
    Ref<StreamPeer> get_stream_peer() const;
    void set_input_buffer_max_size(const int64_t max_size_bytes);
    void set_output_buffer_max_size(const int64_t max_size_bytes);
    void set_stream_peer(const Ref<StreamPeer> peer);

    static PacketPeerStream* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PacketPeerStream";
    }

    inline static const char* get_rebel_class_name() {
        return "PacketPeerStream";
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
        rebel_method_bind* mb_get_input_buffer_max_size;
        rebel_method_bind* mb_get_output_buffer_max_size;
        rebel_method_bind* mb_get_stream_peer;
        rebel_method_bind* mb_set_input_buffer_max_size;
        rebel_method_bind* mb_set_output_buffer_max_size;
        rebel_method_bind* mb_set_stream_peer;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PACKETPEERSTREAM_H
