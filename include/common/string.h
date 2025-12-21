// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef STRING_H
#define STRING_H

#include "api/gdnative/string.h"

namespace Rebel {
class NodePath;
class PoolByteArray;
class PoolIntArray;
class PoolRealArray;
class PoolStringArray;
class String;
class Variant;

class CharString {
public:
    ~CharString();

    int length() const;
    const char* get_data() const;

private:
    friend class String;

    rebel_char_string internal_char_string;
};

class String {
public:
    String();
    String(const char* characters);
    String(const wchar_t* wide_characters);
    String(wchar_t wide_character);
    String(const String& other);
    String(String&& other);
    ~String();

    void operator=(const String& other);
    void operator=(String&& other);

    wchar_t& operator[](int index);
    wchar_t operator[](int index) const;

    bool operator==(const String& right) const;
    bool operator<(const String& right) const;
    String operator+(const String& right) const;
    void operator+=(const String& other);
    void operator+=(wchar_t wide_character);

    operator NodePath() const;

    int length() const;

    bool empty() const;
    bool is_valid_integer() const;
    bool is_valid_float() const;
    bool is_valid_html_color() const;
    bool is_valid_identifier() const;
    bool is_valid_ip_address() const;
    bool is_abs_path() const;
    bool is_rel_path() const;

    bool begins_with(const String& search_string) const;
    bool begins_with_char_array(const char* search_characters) const;
    bool ends_with(const String& search_string) const;
    bool is_subsequence_of(const String& search_string) const;
    bool is_subsequence_ofi(const String& search_string) const;
    int find(const String& search_string, int from = 0) const;
    int findn(const String& search_string, int from = 0) const;
    int find_last(const String& search_string) const;
    int rfind(const String& search_string, int from = -1) const;
    int rfindn(const String& search_string, int from = -1) const;

    bool match(const String& match_string) const;
    bool matchn(const String& match_string) const;

    signed char casecmp_to(const String& compare_string) const;
    signed char nocasecmp_to(const String& compare_string) const;
    signed char naturalnocasecmp_to(const String& compare_string) const;

    void erase(int from, int count);
    String insert(int position, const String& insert_string) const;
    String replace(const String& search_string, const String& new_string) const;
    String replacen(const String& search_string, const String& new_string)
        const;

    String left(int position) const;
    String right(int position) const;
    String substr(int from, int length) const;

    String strip_edges(bool left = true, bool right = true) const;
    String rstrip(const String& strip_string) const;
    String trim_prefix(const String& prefix) const;
    String trim_suffix(const String& suffix) const;

    String to_lower() const;
    String to_upper() const;
    String capitalize() const;

    String format(const Variant& values) const;
    String format(const Variant& values, const String& placeholder) const;

    String c_escape() const;
    String c_unescape() const;
    String json_escape() const;
    String xml_escape() const;
    String xml_unescape() const;
    String dedent() const;

    String get_base_dir() const;
    String get_basename() const;
    String get_extension() const;
    String get_file() const;
    String plus_file(const String& file) const;

    String percent_encode() const;
    String percent_decode() const;

    String pad_zeros(int digits) const;
    String pad_decimals(int digits) const;

    String md5_text() const;
    PoolByteArray md5_buffer() const;
    String sha256_text() const;
    PoolByteArray sha256_buffer() const;

    PoolStringArray bigrams() const;
    CharString utf8() const;
    CharString ascii(bool extended = false) const;
    const wchar_t* unicode_str() const;
    char* alloc_c_string() const;
    float to_float() const;
    int64_t to_int() const;
    int hash() const;
    int hex_to_int() const;
    int ord_at(int at) const;

    PoolStringArray split(const String& split_string, bool allow_empty = true)
        const;
    PoolStringArray rsplit(
        const String& split_string,
        bool allow_empty        = true,
        int maximum_split_count = 0
    ) const;
    PoolIntArray split_ints(const String& split_string, bool allow_empty = true)
        const;
    PoolRealArray split_floats(
        const String& split_string,
        bool allow_empty = true
    ) const;

    float similarity(const String& other) const;

    static String num(double number, int decimals = -1);
    static String num_scientific(double number);
    static String num_real(double number);
    static String num_int64(
        int64_t number,
        int base            = 10,
        bool capitalize_hex = false
    );
    static String chr(rebel_char_type character);
    static String md5(const uint8_t* md5_characters);
    static String hex_encode_buffer(const uint8_t* buffer, int length);

private:
    friend class Dictionary;
    friend class NodePath;
    friend class Variant;

    rebel_string internal_string;

    explicit String(rebel_string string);
};

bool operator!=(const String& left, const String& right);
bool operator<=(const String& left, const String& right);
bool operator>(const String& left, const String& right);
bool operator>=(const String& left, const String& right);

String operator+(const char* characters, const String& right);
String operator+(const wchar_t* wide_characters, const String& right);
} // namespace Rebel

#endif // STRING_H
