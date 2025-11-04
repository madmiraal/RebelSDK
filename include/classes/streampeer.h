// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_STREAMPEER_H
#define REBEL_STREAMPEER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class StreamPeer : public Reference {
public:
    int64_t get_16();
    int64_t get_32();
    int64_t get_64();
    int64_t get_8();
    int64_t get_available_bytes() const;
    Array get_data(const int64_t bytes);
    real_t get_double();
    real_t get_float();
    Array get_partial_data(const int64_t bytes);
    String get_string(const int64_t bytes = -1);
    int64_t get_u16();
    int64_t get_u32();
    int64_t get_u64();
    int64_t get_u8();
    String get_utf8_string(const int64_t bytes = -1);
    Variant get_var(const bool allow_objects = false);
    bool is_big_endian_enabled() const;
    void put_16(const int64_t value);
    void put_32(const int64_t value);
    void put_64(const int64_t value);
    void put_8(const int64_t value);
    Error put_data(const PoolByteArray data);
    void put_double(const real_t value);
    void put_float(const real_t value);
    Array put_partial_data(const PoolByteArray data);
    void put_string(const String value);
    void put_u16(const int64_t value);
    void put_u32(const int64_t value);
    void put_u64(const int64_t value);
    void put_u8(const int64_t value);
    void put_utf8_string(const String value);
    void put_var(const Variant value, const bool full_objects = false);
    void set_big_endian(const bool enable);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "StreamPeer";
    }

    inline static const char* get_rebel_class_name() {
        return "StreamPeer";
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
        rebel_method_bind* mb_get_16;
        rebel_method_bind* mb_get_32;
        rebel_method_bind* mb_get_64;
        rebel_method_bind* mb_get_8;
        rebel_method_bind* mb_get_available_bytes;
        rebel_method_bind* mb_get_data;
        rebel_method_bind* mb_get_double;
        rebel_method_bind* mb_get_float;
        rebel_method_bind* mb_get_partial_data;
        rebel_method_bind* mb_get_string;
        rebel_method_bind* mb_get_u16;
        rebel_method_bind* mb_get_u32;
        rebel_method_bind* mb_get_u64;
        rebel_method_bind* mb_get_u8;
        rebel_method_bind* mb_get_utf8_string;
        rebel_method_bind* mb_get_var;
        rebel_method_bind* mb_is_big_endian_enabled;
        rebel_method_bind* mb_put_16;
        rebel_method_bind* mb_put_32;
        rebel_method_bind* mb_put_64;
        rebel_method_bind* mb_put_8;
        rebel_method_bind* mb_put_data;
        rebel_method_bind* mb_put_double;
        rebel_method_bind* mb_put_float;
        rebel_method_bind* mb_put_partial_data;
        rebel_method_bind* mb_put_string;
        rebel_method_bind* mb_put_u16;
        rebel_method_bind* mb_put_u32;
        rebel_method_bind* mb_put_u64;
        rebel_method_bind* mb_put_u8;
        rebel_method_bind* mb_put_utf8_string;
        rebel_method_bind* mb_put_var;
        rebel_method_bind* mb_set_big_endian;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_STREAMPEER_H
