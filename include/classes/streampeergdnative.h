// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_STREAMPEERGDNATIVE_H
#define REBEL_STREAMPEERGDNATIVE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/streampeer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class StreamPeerGDNative : public StreamPeer {
public:
    static StreamPeerGDNative* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "StreamPeerGDNative";
    }

    inline static const char* get_rebel_class_name() {
        return "StreamPeerGDNative";
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
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_STREAMPEERGDNATIVE_H
