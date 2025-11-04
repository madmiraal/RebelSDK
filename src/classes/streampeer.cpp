// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/streampeer.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t StreamPeer::get_16() {
    return rebel_icall_int(
        method_bindings.mb_get_16,
        (const Object*)this
    );
}

int64_t StreamPeer::get_32() {
    return rebel_icall_int(
        method_bindings.mb_get_32,
        (const Object*)this
    );
}

int64_t StreamPeer::get_64() {
    return rebel_icall_int(
        method_bindings.mb_get_64,
        (const Object*)this
    );
}

int64_t StreamPeer::get_8() {
    return rebel_icall_int(
        method_bindings.mb_get_8,
        (const Object*)this
    );
}

int64_t StreamPeer::get_available_bytes() const {
    return rebel_icall_int(
        method_bindings.mb_get_available_bytes,
        (const Object*)this
    );
}

Array StreamPeer::get_data(const int64_t bytes) {
    return rebel_icall_array_int(
        method_bindings.mb_get_data,
        (const Object*)this,
        bytes
    );
}

real_t StreamPeer::get_double() {
    return rebel_icall_float(
        method_bindings.mb_get_double,
        (const Object*)this
    );
}

real_t StreamPeer::get_float() {
    return rebel_icall_float(
        method_bindings.mb_get_float,
        (const Object*)this
    );
}

Array StreamPeer::get_partial_data(const int64_t bytes) {
    return rebel_icall_array_int(
        method_bindings.mb_get_partial_data,
        (const Object*)this,
        bytes
    );
}

String StreamPeer::get_string(const int64_t bytes) {
    return rebel_icall_string_int(
        method_bindings.mb_get_string,
        (const Object*)this,
        bytes
    );
}

int64_t StreamPeer::get_u16() {
    return rebel_icall_int(
        method_bindings.mb_get_u16,
        (const Object*)this
    );
}

int64_t StreamPeer::get_u32() {
    return rebel_icall_int(
        method_bindings.mb_get_u32,
        (const Object*)this
    );
}

int64_t StreamPeer::get_u64() {
    return rebel_icall_int(
        method_bindings.mb_get_u64,
        (const Object*)this
    );
}

int64_t StreamPeer::get_u8() {
    return rebel_icall_int(
        method_bindings.mb_get_u8,
        (const Object*)this
    );
}

String StreamPeer::get_utf8_string(const int64_t bytes) {
    return rebel_icall_string_int(
        method_bindings.mb_get_utf8_string,
        (const Object*)this,
        bytes
    );
}

Variant StreamPeer::get_var(const bool allow_objects) {
    return rebel_icall_variant_bool(
        method_bindings.mb_get_var,
        (const Object*)this,
        allow_objects
    );
}

bool StreamPeer::is_big_endian_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_big_endian_enabled,
        (const Object*)this
    );
}

void StreamPeer::put_16(const int64_t value) {
    rebel_icall_void_int(
        method_bindings.mb_put_16,
        (const Object*)this,
        value
    );
}

void StreamPeer::put_32(const int64_t value) {
    rebel_icall_void_int(
        method_bindings.mb_put_32,
        (const Object*)this,
        value
    );
}

void StreamPeer::put_64(const int64_t value) {
    rebel_icall_void_int(
        method_bindings.mb_put_64,
        (const Object*)this,
        value
    );
}

void StreamPeer::put_8(const int64_t value) {
    rebel_icall_void_int(
        method_bindings.mb_put_8,
        (const Object*)this,
        value
    );
}

Error StreamPeer::put_data(const PoolByteArray data) {
    return (Error)rebel_icall_int_poolbytearray(
        method_bindings.mb_put_data,
        (const Object*)this,
        data
    );
}

void StreamPeer::put_double(const real_t value) {
    rebel_icall_void_float(
        method_bindings.mb_put_double,
        (const Object*)this,
        value
    );
}

void StreamPeer::put_float(const real_t value) {
    rebel_icall_void_float(
        method_bindings.mb_put_float,
        (const Object*)this,
        value
    );
}

Array StreamPeer::put_partial_data(const PoolByteArray data) {
    return rebel_icall_array_poolbytearray(
        method_bindings.mb_put_partial_data,
        (const Object*)this,
        data
    );
}

void StreamPeer::put_string(const String value) {
    rebel_icall_void_string(
        method_bindings.mb_put_string,
        (const Object*)this,
        value
    );
}

void StreamPeer::put_u16(const int64_t value) {
    rebel_icall_void_int(
        method_bindings.mb_put_u16,
        (const Object*)this,
        value
    );
}

void StreamPeer::put_u32(const int64_t value) {
    rebel_icall_void_int(
        method_bindings.mb_put_u32,
        (const Object*)this,
        value
    );
}

void StreamPeer::put_u64(const int64_t value) {
    rebel_icall_void_int(
        method_bindings.mb_put_u64,
        (const Object*)this,
        value
    );
}

void StreamPeer::put_u8(const int64_t value) {
    rebel_icall_void_int(
        method_bindings.mb_put_u8,
        (const Object*)this,
        value
    );
}

void StreamPeer::put_utf8_string(const String value) {
    rebel_icall_void_string(
        method_bindings.mb_put_utf8_string,
        (const Object*)this,
        value
    );
}

void StreamPeer::put_var(const Variant value, const bool full_objects) {
    rebel_icall_void_variant_bool(
        method_bindings.mb_put_var,
        (const Object*)this,
        value,
        full_objects
    );
}

void StreamPeer::set_big_endian(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_big_endian,
        (const Object*)this,
        enable
    );
}

void StreamPeer::init_method_bindings() {
    method_bindings.mb_get_16 =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "get_16"
        );
    method_bindings.mb_get_32 =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "get_32"
        );
    method_bindings.mb_get_64 =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "get_64"
        );
    method_bindings.mb_get_8 =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "get_8"
        );
    method_bindings.mb_get_available_bytes =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "get_available_bytes"
        );
    method_bindings.mb_get_data =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "get_data"
        );
    method_bindings.mb_get_double =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "get_double"
        );
    method_bindings.mb_get_float =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "get_float"
        );
    method_bindings.mb_get_partial_data =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "get_partial_data"
        );
    method_bindings.mb_get_string =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "get_string"
        );
    method_bindings.mb_get_u16 =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "get_u16"
        );
    method_bindings.mb_get_u32 =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "get_u32"
        );
    method_bindings.mb_get_u64 =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "get_u64"
        );
    method_bindings.mb_get_u8 =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "get_u8"
        );
    method_bindings.mb_get_utf8_string =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "get_utf8_string"
        );
    method_bindings.mb_get_var =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "get_var"
        );
    method_bindings.mb_is_big_endian_enabled =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "is_big_endian_enabled"
        );
    method_bindings.mb_put_16 =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "put_16"
        );
    method_bindings.mb_put_32 =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "put_32"
        );
    method_bindings.mb_put_64 =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "put_64"
        );
    method_bindings.mb_put_8 =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "put_8"
        );
    method_bindings.mb_put_data =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "put_data"
        );
    method_bindings.mb_put_double =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "put_double"
        );
    method_bindings.mb_put_float =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "put_float"
        );
    method_bindings.mb_put_partial_data =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "put_partial_data"
        );
    method_bindings.mb_put_string =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "put_string"
        );
    method_bindings.mb_put_u16 =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "put_u16"
        );
    method_bindings.mb_put_u32 =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "put_u32"
        );
    method_bindings.mb_put_u64 =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "put_u64"
        );
    method_bindings.mb_put_u8 =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "put_u8"
        );
    method_bindings.mb_put_utf8_string =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "put_utf8_string"
        );
    method_bindings.mb_put_var =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "put_var"
        );
    method_bindings.mb_set_big_endian =
        api->rebel_method_bind_get_method(
            "StreamPeer",
            "set_big_endian"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "StreamPeer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

StreamPeer::MethodBindings StreamPeer::method_bindings = {};
void* StreamPeer::class_tag = nullptr;
} // namespace Rebel
