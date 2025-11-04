// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/file.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void File::close() {
    rebel_icall_void(
        method_bindings.mb_close,
        (const Object*)this
    );
}

bool File::eof_reached() const {
    return rebel_icall_bool(
        method_bindings.mb_eof_reached,
        (const Object*)this
    );
}

bool File::file_exists(const String path) const {
    return rebel_icall_bool_string(
        method_bindings.mb_file_exists,
        (const Object*)this,
        path
    );
}

void File::flush() {
    rebel_icall_void(
        method_bindings.mb_flush,
        (const Object*)this
    );
}

int64_t File::get_16() const {
    return rebel_icall_int(
        method_bindings.mb_get_16,
        (const Object*)this
    );
}

int64_t File::get_32() const {
    return rebel_icall_int(
        method_bindings.mb_get_32,
        (const Object*)this
    );
}

int64_t File::get_64() const {
    return rebel_icall_int(
        method_bindings.mb_get_64,
        (const Object*)this
    );
}

int64_t File::get_8() const {
    return rebel_icall_int(
        method_bindings.mb_get_8,
        (const Object*)this
    );
}

String File::get_as_text() const {
    return rebel_icall_string(
        method_bindings.mb_get_as_text,
        (const Object*)this
    );
}

PoolByteArray File::get_buffer(const int64_t len) const {
    return rebel_icall_poolbytearray_int(
        method_bindings.mb_get_buffer,
        (const Object*)this,
        len
    );
}

PoolStringArray File::get_csv_line(const String delim) const {
    return rebel_icall_poolstringarray_string(
        method_bindings.mb_get_csv_line,
        (const Object*)this,
        delim
    );
}

real_t File::get_double() const {
    return rebel_icall_float(
        method_bindings.mb_get_double,
        (const Object*)this
    );
}

bool File::get_endian_swap() {
    return rebel_icall_bool(
        method_bindings.mb_get_endian_swap,
        (const Object*)this
    );
}

Error File::get_error() const {
    return (Error)rebel_icall_int(
        method_bindings.mb_get_error,
        (const Object*)this
    );
}

real_t File::get_float() const {
    return rebel_icall_float(
        method_bindings.mb_get_float,
        (const Object*)this
    );
}

int64_t File::get_len() const {
    return rebel_icall_int(
        method_bindings.mb_get_len,
        (const Object*)this
    );
}

String File::get_line() const {
    return rebel_icall_string(
        method_bindings.mb_get_line,
        (const Object*)this
    );
}

String File::get_md5(const String path) const {
    return rebel_icall_string_string(
        method_bindings.mb_get_md5,
        (const Object*)this,
        path
    );
}

int64_t File::get_modified_time(const String file) const {
    return rebel_icall_int_string(
        method_bindings.mb_get_modified_time,
        (const Object*)this,
        file
    );
}

String File::get_pascal_string() {
    return rebel_icall_string(
        method_bindings.mb_get_pascal_string,
        (const Object*)this
    );
}

String File::get_path() const {
    return rebel_icall_string(
        method_bindings.mb_get_path,
        (const Object*)this
    );
}

String File::get_path_absolute() const {
    return rebel_icall_string(
        method_bindings.mb_get_path_absolute,
        (const Object*)this
    );
}

int64_t File::get_position() const {
    return rebel_icall_int(
        method_bindings.mb_get_position,
        (const Object*)this
    );
}

real_t File::get_real() const {
    return rebel_icall_float(
        method_bindings.mb_get_real,
        (const Object*)this
    );
}

String File::get_sha256(const String path) const {
    return rebel_icall_string_string(
        method_bindings.mb_get_sha256,
        (const Object*)this,
        path
    );
}

Variant File::get_var(const bool allow_objects) const {
    return rebel_icall_variant_bool(
        method_bindings.mb_get_var,
        (const Object*)this,
        allow_objects
    );
}

bool File::is_open() const {
    return rebel_icall_bool(
        method_bindings.mb_is_open,
        (const Object*)this
    );
}

Error File::open(const String path, const int64_t flags) {
    return (Error)rebel_icall_int_string_int(
        method_bindings.mb_open,
        (const Object*)this,
        path,
        flags
    );
}

Error File::open_compressed(const String path, const int64_t mode_flags, const int64_t compression_mode) {
    return (Error)rebel_icall_int_string_int_int(
        method_bindings.mb_open_compressed,
        (const Object*)this,
        path,
        mode_flags,
        compression_mode
    );
}

Error File::open_encrypted(const String path, const int64_t mode_flags, const PoolByteArray key) {
    return (Error)rebel_icall_int_string_int_poolbytearray(
        method_bindings.mb_open_encrypted,
        (const Object*)this,
        path,
        mode_flags,
        key
    );
}

Error File::open_encrypted_with_pass(const String path, const int64_t mode_flags, const String pass) {
    return (Error)rebel_icall_int_string_int_string(
        method_bindings.mb_open_encrypted_with_pass,
        (const Object*)this,
        path,
        mode_flags,
        pass
    );
}

void File::seek(const int64_t position) {
    rebel_icall_void_int(
        method_bindings.mb_seek,
        (const Object*)this,
        position
    );
}

void File::seek_end(const int64_t position) {
    rebel_icall_void_int(
        method_bindings.mb_seek_end,
        (const Object*)this,
        position
    );
}

void File::set_endian_swap(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_endian_swap,
        (const Object*)this,
        enable
    );
}

void File::store_16(const int64_t value) {
    rebel_icall_void_int(
        method_bindings.mb_store_16,
        (const Object*)this,
        value
    );
}

void File::store_32(const int64_t value) {
    rebel_icall_void_int(
        method_bindings.mb_store_32,
        (const Object*)this,
        value
    );
}

void File::store_64(const int64_t value) {
    rebel_icall_void_int(
        method_bindings.mb_store_64,
        (const Object*)this,
        value
    );
}

void File::store_8(const int64_t value) {
    rebel_icall_void_int(
        method_bindings.mb_store_8,
        (const Object*)this,
        value
    );
}

void File::store_buffer(const PoolByteArray buffer) {
    rebel_icall_void_poolbytearray(
        method_bindings.mb_store_buffer,
        (const Object*)this,
        buffer
    );
}

void File::store_csv_line(const PoolStringArray values, const String delim) {
    rebel_icall_void_poolstringarray_string(
        method_bindings.mb_store_csv_line,
        (const Object*)this,
        values,
        delim
    );
}

void File::store_double(const real_t value) {
    rebel_icall_void_float(
        method_bindings.mb_store_double,
        (const Object*)this,
        value
    );
}

void File::store_float(const real_t value) {
    rebel_icall_void_float(
        method_bindings.mb_store_float,
        (const Object*)this,
        value
    );
}

void File::store_line(const String line) {
    rebel_icall_void_string(
        method_bindings.mb_store_line,
        (const Object*)this,
        line
    );
}

void File::store_pascal_string(const String string) {
    rebel_icall_void_string(
        method_bindings.mb_store_pascal_string,
        (const Object*)this,
        string
    );
}

void File::store_real(const real_t value) {
    rebel_icall_void_float(
        method_bindings.mb_store_real,
        (const Object*)this,
        value
    );
}

void File::store_string(const String string) {
    rebel_icall_void_string(
        method_bindings.mb_store_string,
        (const Object*)this,
        string
    );
}

void File::store_var(const Variant value, const bool full_objects) {
    rebel_icall_void_variant_bool(
        method_bindings.mb_store_var,
        (const Object*)this,
        value,
        full_objects
    );
}

File* File::create() {
    return (File*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"_File")()
         );
}

void File::init_method_bindings() {
    method_bindings.mb_close =
        api->rebel_method_bind_get_method(
            "_File",
            "close"
        );
    method_bindings.mb_eof_reached =
        api->rebel_method_bind_get_method(
            "_File",
            "eof_reached"
        );
    method_bindings.mb_file_exists =
        api->rebel_method_bind_get_method(
            "_File",
            "file_exists"
        );
    method_bindings.mb_flush =
        api->rebel_method_bind_get_method(
            "_File",
            "flush"
        );
    method_bindings.mb_get_16 =
        api->rebel_method_bind_get_method(
            "_File",
            "get_16"
        );
    method_bindings.mb_get_32 =
        api->rebel_method_bind_get_method(
            "_File",
            "get_32"
        );
    method_bindings.mb_get_64 =
        api->rebel_method_bind_get_method(
            "_File",
            "get_64"
        );
    method_bindings.mb_get_8 =
        api->rebel_method_bind_get_method(
            "_File",
            "get_8"
        );
    method_bindings.mb_get_as_text =
        api->rebel_method_bind_get_method(
            "_File",
            "get_as_text"
        );
    method_bindings.mb_get_buffer =
        api->rebel_method_bind_get_method(
            "_File",
            "get_buffer"
        );
    method_bindings.mb_get_csv_line =
        api->rebel_method_bind_get_method(
            "_File",
            "get_csv_line"
        );
    method_bindings.mb_get_double =
        api->rebel_method_bind_get_method(
            "_File",
            "get_double"
        );
    method_bindings.mb_get_endian_swap =
        api->rebel_method_bind_get_method(
            "_File",
            "get_endian_swap"
        );
    method_bindings.mb_get_error =
        api->rebel_method_bind_get_method(
            "_File",
            "get_error"
        );
    method_bindings.mb_get_float =
        api->rebel_method_bind_get_method(
            "_File",
            "get_float"
        );
    method_bindings.mb_get_len =
        api->rebel_method_bind_get_method(
            "_File",
            "get_len"
        );
    method_bindings.mb_get_line =
        api->rebel_method_bind_get_method(
            "_File",
            "get_line"
        );
    method_bindings.mb_get_md5 =
        api->rebel_method_bind_get_method(
            "_File",
            "get_md5"
        );
    method_bindings.mb_get_modified_time =
        api->rebel_method_bind_get_method(
            "_File",
            "get_modified_time"
        );
    method_bindings.mb_get_pascal_string =
        api->rebel_method_bind_get_method(
            "_File",
            "get_pascal_string"
        );
    method_bindings.mb_get_path =
        api->rebel_method_bind_get_method(
            "_File",
            "get_path"
        );
    method_bindings.mb_get_path_absolute =
        api->rebel_method_bind_get_method(
            "_File",
            "get_path_absolute"
        );
    method_bindings.mb_get_position =
        api->rebel_method_bind_get_method(
            "_File",
            "get_position"
        );
    method_bindings.mb_get_real =
        api->rebel_method_bind_get_method(
            "_File",
            "get_real"
        );
    method_bindings.mb_get_sha256 =
        api->rebel_method_bind_get_method(
            "_File",
            "get_sha256"
        );
    method_bindings.mb_get_var =
        api->rebel_method_bind_get_method(
            "_File",
            "get_var"
        );
    method_bindings.mb_is_open =
        api->rebel_method_bind_get_method(
            "_File",
            "is_open"
        );
    method_bindings.mb_open =
        api->rebel_method_bind_get_method(
            "_File",
            "open"
        );
    method_bindings.mb_open_compressed =
        api->rebel_method_bind_get_method(
            "_File",
            "open_compressed"
        );
    method_bindings.mb_open_encrypted =
        api->rebel_method_bind_get_method(
            "_File",
            "open_encrypted"
        );
    method_bindings.mb_open_encrypted_with_pass =
        api->rebel_method_bind_get_method(
            "_File",
            "open_encrypted_with_pass"
        );
    method_bindings.mb_seek =
        api->rebel_method_bind_get_method(
            "_File",
            "seek"
        );
    method_bindings.mb_seek_end =
        api->rebel_method_bind_get_method(
            "_File",
            "seek_end"
        );
    method_bindings.mb_set_endian_swap =
        api->rebel_method_bind_get_method(
            "_File",
            "set_endian_swap"
        );
    method_bindings.mb_store_16 =
        api->rebel_method_bind_get_method(
            "_File",
            "store_16"
        );
    method_bindings.mb_store_32 =
        api->rebel_method_bind_get_method(
            "_File",
            "store_32"
        );
    method_bindings.mb_store_64 =
        api->rebel_method_bind_get_method(
            "_File",
            "store_64"
        );
    method_bindings.mb_store_8 =
        api->rebel_method_bind_get_method(
            "_File",
            "store_8"
        );
    method_bindings.mb_store_buffer =
        api->rebel_method_bind_get_method(
            "_File",
            "store_buffer"
        );
    method_bindings.mb_store_csv_line =
        api->rebel_method_bind_get_method(
            "_File",
            "store_csv_line"
        );
    method_bindings.mb_store_double =
        api->rebel_method_bind_get_method(
            "_File",
            "store_double"
        );
    method_bindings.mb_store_float =
        api->rebel_method_bind_get_method(
            "_File",
            "store_float"
        );
    method_bindings.mb_store_line =
        api->rebel_method_bind_get_method(
            "_File",
            "store_line"
        );
    method_bindings.mb_store_pascal_string =
        api->rebel_method_bind_get_method(
            "_File",
            "store_pascal_string"
        );
    method_bindings.mb_store_real =
        api->rebel_method_bind_get_method(
            "_File",
            "store_real"
        );
    method_bindings.mb_store_string =
        api->rebel_method_bind_get_method(
            "_File",
            "store_string"
        );
    method_bindings.mb_store_var =
        api->rebel_method_bind_get_method(
            "_File",
            "store_var"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "_File");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

File::MethodBindings File::method_bindings = {};
void* File::class_tag = nullptr;
} // namespace Rebel
