// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PACKETPEER_H
#define REBEL_PACKETPEER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class PacketPeer : public Reference {
public:
    int64_t get_available_packet_count() const;
    int64_t get_encode_buffer_max_size() const;
    PoolByteArray get_packet();
    Error get_packet_error() const;
    Variant get_var(const bool allow_objects = false);
    bool is_object_decoding_allowed() const;
    Error put_packet(const PoolByteArray buffer);
    Error put_var(const Variant var, const bool full_objects = false);
    void set_allow_object_decoding(const bool enable);
    void set_encode_buffer_max_size(const int64_t max_size);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PacketPeer";
    }

    inline static const char* get_rebel_class_name() {
        return "PacketPeer";
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
        rebel_method_bind* mb_get_available_packet_count;
        rebel_method_bind* mb_get_encode_buffer_max_size;
        rebel_method_bind* mb_get_packet;
        rebel_method_bind* mb_get_packet_error;
        rebel_method_bind* mb_get_var;
        rebel_method_bind* mb_is_object_decoding_allowed;
        rebel_method_bind* mb_put_packet;
        rebel_method_bind* mb_put_var;
        rebel_method_bind* mb_set_allow_object_decoding;
        rebel_method_bind* mb_set_encode_buffer_max_size;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PACKETPEER_H
