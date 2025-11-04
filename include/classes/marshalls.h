// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_MARSHALLS_H
#define REBEL_MARSHALLS_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Marshalls : public Object {
public:
    PoolByteArray base64_to_raw(const String base64_str);
    String base64_to_utf8(const String base64_str);
    Variant base64_to_variant(const String base64_str, const bool allow_objects = false);
    String raw_to_base64(const PoolByteArray array);
    String utf8_to_base64(const String utf8_str);
    String variant_to_base64(const Variant variant, const bool full_objects = false);

    static inline Marshalls* get_singleton() {
        if (!Marshalls::singleton) {
            Marshalls::singleton = new Marshalls;
        }
        return Marshalls::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Marshalls";
    }

    inline static const char* get_rebel_class_name() {
        return "Marshalls";
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
    Marshalls();
    static Marshalls* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_base64_to_raw;
        rebel_method_bind* mb_base64_to_utf8;
        rebel_method_bind* mb_base64_to_variant;
        rebel_method_bind* mb_raw_to_base64;
        rebel_method_bind* mb_utf8_to_base64;
        rebel_method_bind* mb_variant_to_base64;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_MARSHALLS_H
