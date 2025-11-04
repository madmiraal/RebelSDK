// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_DTLSSERVER_H
#define REBEL_DTLSSERVER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CryptoKey;
class PacketPeerDTLS;
class PacketPeerUDP;
class X509Certificate;

class DTLSServer : public Reference {
public:
    Error setup(const Ref<CryptoKey> key, const Ref<X509Certificate> certificate, const Ref<X509Certificate> chain = nullptr);
    Ref<PacketPeerDTLS> take_connection(const Ref<PacketPeerUDP> udp_peer);

    static DTLSServer* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "DTLSServer";
    }

    inline static const char* get_rebel_class_name() {
        return "DTLSServer";
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
        rebel_method_bind* mb_setup;
        rebel_method_bind* mb_take_connection;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_DTLSSERVER_H
