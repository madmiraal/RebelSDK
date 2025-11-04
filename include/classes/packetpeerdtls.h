// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PACKETPEERDTLS_H
#define REBEL_PACKETPEERDTLS_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/packetpeer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class PacketPeerUDP;
class X509Certificate;

class PacketPeerDTLS : public PacketPeer {
public:
    enum Status {
        STATUS_DISCONNECTED = 0,
        STATUS_HANDSHAKING = 1,
        STATUS_CONNECTED = 2,
        STATUS_ERROR = 3,
        STATUS_ERROR_HOSTNAME_MISMATCH = 4,
    };

    Error connect_to_peer(const Ref<PacketPeerUDP> packet_peer, const bool validate_certs = true, const String for_hostname = "", const Ref<X509Certificate> valid_certificate = nullptr);
    void disconnect_from_peer();
    PacketPeerDTLS::Status get_status() const;
    void poll();

    static PacketPeerDTLS* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PacketPeerDTLS";
    }

    inline static const char* get_rebel_class_name() {
        return "PacketPeerDTLS";
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
        rebel_method_bind* mb_connect_to_peer;
        rebel_method_bind* mb_disconnect_from_peer;
        rebel_method_bind* mb_get_status;
        rebel_method_bind* mb_poll;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PACKETPEERDTLS_H
