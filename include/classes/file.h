// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_FILE_H
#define REBEL_FILE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class File : public Reference {
public:
    enum CompressionMode {
        COMPRESSION_FASTLZ = 0,
        COMPRESSION_DEFLATE = 1,
        COMPRESSION_ZSTD = 2,
        COMPRESSION_GZIP = 3,
    };

    enum ModeFlags {
        READ = 1,
        WRITE = 2,
        READ_WRITE = 3,
        WRITE_READ = 7,
    };

    void close();
    bool eof_reached() const;
    bool file_exists(const String path) const;
    void flush();
    int64_t get_16() const;
    int64_t get_32() const;
    int64_t get_64() const;
    int64_t get_8() const;
    String get_as_text() const;
    PoolByteArray get_buffer(const int64_t len) const;
    PoolStringArray get_csv_line(const String delim = ",") const;
    real_t get_double() const;
    bool get_endian_swap();
    Error get_error() const;
    real_t get_float() const;
    int64_t get_len() const;
    String get_line() const;
    String get_md5(const String path) const;
    int64_t get_modified_time(const String file) const;
    String get_pascal_string();
    String get_path() const;
    String get_path_absolute() const;
    int64_t get_position() const;
    real_t get_real() const;
    String get_sha256(const String path) const;
    Variant get_var(const bool allow_objects = false) const;
    bool is_open() const;
    Error open(const String path, const int64_t flags);
    Error open_compressed(const String path, const int64_t mode_flags, const int64_t compression_mode = 0);
    Error open_encrypted(const String path, const int64_t mode_flags, const PoolByteArray key);
    Error open_encrypted_with_pass(const String path, const int64_t mode_flags, const String pass);
    void seek(const int64_t position);
    void seek_end(const int64_t position = 0);
    void set_endian_swap(const bool enable);
    void store_16(const int64_t value);
    void store_32(const int64_t value);
    void store_64(const int64_t value);
    void store_8(const int64_t value);
    void store_buffer(const PoolByteArray buffer);
    void store_csv_line(const PoolStringArray values, const String delim = ",");
    void store_double(const real_t value);
    void store_float(const real_t value);
    void store_line(const String line);
    void store_pascal_string(const String string);
    void store_real(const real_t value);
    void store_string(const String string);
    void store_var(const Variant value, const bool full_objects = false);

    static File* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "File";
    }

    inline static const char* get_rebel_class_name() {
        return "File";
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
        rebel_method_bind* mb_eof_reached;
        rebel_method_bind* mb_file_exists;
        rebel_method_bind* mb_flush;
        rebel_method_bind* mb_get_16;
        rebel_method_bind* mb_get_32;
        rebel_method_bind* mb_get_64;
        rebel_method_bind* mb_get_8;
        rebel_method_bind* mb_get_as_text;
        rebel_method_bind* mb_get_buffer;
        rebel_method_bind* mb_get_csv_line;
        rebel_method_bind* mb_get_double;
        rebel_method_bind* mb_get_endian_swap;
        rebel_method_bind* mb_get_error;
        rebel_method_bind* mb_get_float;
        rebel_method_bind* mb_get_len;
        rebel_method_bind* mb_get_line;
        rebel_method_bind* mb_get_md5;
        rebel_method_bind* mb_get_modified_time;
        rebel_method_bind* mb_get_pascal_string;
        rebel_method_bind* mb_get_path;
        rebel_method_bind* mb_get_path_absolute;
        rebel_method_bind* mb_get_position;
        rebel_method_bind* mb_get_real;
        rebel_method_bind* mb_get_sha256;
        rebel_method_bind* mb_get_var;
        rebel_method_bind* mb_is_open;
        rebel_method_bind* mb_open;
        rebel_method_bind* mb_open_compressed;
        rebel_method_bind* mb_open_encrypted;
        rebel_method_bind* mb_open_encrypted_with_pass;
        rebel_method_bind* mb_seek;
        rebel_method_bind* mb_seek_end;
        rebel_method_bind* mb_set_endian_swap;
        rebel_method_bind* mb_store_16;
        rebel_method_bind* mb_store_32;
        rebel_method_bind* mb_store_64;
        rebel_method_bind* mb_store_8;
        rebel_method_bind* mb_store_buffer;
        rebel_method_bind* mb_store_csv_line;
        rebel_method_bind* mb_store_double;
        rebel_method_bind* mb_store_float;
        rebel_method_bind* mb_store_line;
        rebel_method_bind* mb_store_pascal_string;
        rebel_method_bind* mb_store_real;
        rebel_method_bind* mb_store_string;
        rebel_method_bind* mb_store_var;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_FILE_H
