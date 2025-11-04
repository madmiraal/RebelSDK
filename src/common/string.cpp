// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/string.h"

#include "common/array.h"
#include "common/nodepath.h"
#include "common/poolarrays.h"
#include "common/rebelglobal.h"
#include "common/variant.h"

#include <cstring>

namespace Rebel {

CharString::~CharString() {
    api->rebel_char_string_destroy(&_char_string);
}

int CharString::length() const {
    return api->rebel_char_string_length(&_char_string);
}

const char* CharString::get_data() const {
    return api->rebel_char_string_get_data(&_char_string);
}

String String::num(double p_num, int p_decimals) {
    return String(api->rebel_string_num_with_decimals(p_num, p_decimals));
}

String String::num_scientific(double p_num) {
    return String(api->rebel_string_num_scientific(p_num));
}

String String::num_real(double p_num) {
    return String(api->rebel_string_num_real(p_num));
}

String String::num_int64(int64_t p_num, int base, bool capitalize_hex) {
    return String(
        api->rebel_string_num_int64_capitalized(p_num, base, capitalize_hex)
    );
}

String String::chr(rebel_char_type p_char) {
    return String(api->rebel_string_chr(p_char));
}

String String::md5(const uint8_t* p_md5) {
    return String(api->rebel_string_md5(p_md5));
}

String String::hex_encode_buffer(const uint8_t* p_buffer, int p_len) {
    return String(api->rebel_string_hex_encode_buffer(p_buffer, p_len));
}

String::String() {
    api->rebel_string_new(&_rebel_string);
}

String::String(const char* contents) {
    api->rebel_string_new(&_rebel_string);
    api->rebel_string_parse_utf8(&_rebel_string, contents);
}

String::String(const wchar_t* contents) {
    api->rebel_string_new_with_wide_string(
        &_rebel_string,
        contents,
        wcslen(contents)
    );
}

String::String(const wchar_t c) {
    api->rebel_string_new_with_wide_string(&_rebel_string, &c, 1);
}

String::String(const String& other) {
    api->rebel_string_new_copy(&_rebel_string, &other._rebel_string);
}

String::String(String&& other) {
    api->rebel_string_new_copy(&_rebel_string, &other._rebel_string);
}

String::~String() {
    api->rebel_string_destroy(&_rebel_string);
}

wchar_t& String::operator[](const int idx) {
    return *const_cast<wchar_t*>(
        api->rebel_string_operator_index(&_rebel_string, idx)
    );
}

wchar_t String::operator[](const int idx) const {
    return *api->rebel_string_operator_index(
        (rebel_string*)&_rebel_string,
        idx
    );
}

int String::length() const {
    return api->rebel_string_length(&_rebel_string);
}

void String::operator=(const String& s) {
    api->rebel_string_destroy(&_rebel_string);
    api->rebel_string_new_copy(&_rebel_string, &s._rebel_string);
}

void String::operator=(String&& s) {
    api->rebel_string_destroy(&_rebel_string);
    api->rebel_string_new_copy(&_rebel_string, &s._rebel_string);
}

bool String::operator==(const String& s) const {
    return api->rebel_string_operator_equal(&_rebel_string, &s._rebel_string);
}

bool String::operator!=(const String& s) const {
    return !(*this == s);
}

String String::operator+(const String& s) const {
    return String(
        api->rebel_string_operator_plus(&_rebel_string, &s._rebel_string)
    );
}

void String::operator+=(const String& s) {
    *this =
        String(api->rebel_string_operator_plus(&_rebel_string, &s._rebel_string)
        );
}

void String::operator+=(const wchar_t c) {
    String _to_be_added = String(c);
    *this               = String(api->rebel_string_operator_plus(
        &_rebel_string,
        &_to_be_added._rebel_string
    ));
}

bool String::operator<(const String& s) const {
    return api->rebel_string_operator_less(&_rebel_string, &s._rebel_string);
}

bool String::operator<=(const String& s) const {
    return api->rebel_string_operator_less(&_rebel_string, &s._rebel_string)
        || (*this == s);
}

bool String::operator>(const String& s) const {
    return !(*this <= s);
}

bool String::operator>=(const String& s) const {
    return !(*this < s);
}

String::operator NodePath() const {
    return NodePath(*this);
}

const wchar_t* String::unicode_str() const {
    return api->rebel_string_wide_str(&_rebel_string);
}

char* String::alloc_c_string() const {
    rebel_char_string contents = api->rebel_string_utf8(&_rebel_string);

    int length = api->rebel_char_string_length(&contents);

    char* result = (char*)api->rebel_alloc(length + 1);

    if (result) {
        memcpy(result, api->rebel_char_string_get_data(&contents), length + 1);
    }

    api->rebel_char_string_destroy(&contents);

    return result;
}

CharString String::utf8() const {
    CharString ret;

    ret._char_string = api->rebel_string_utf8(&_rebel_string);

    return ret;
}

CharString String::ascii(bool p_extended) const {
    CharString ret;

    if (p_extended) {
        ret._char_string = api->rebel_string_ascii_extended(&_rebel_string);
    } else {
        ret._char_string = api->rebel_string_ascii(&_rebel_string);
    }

    return ret;
}

String operator+(const char* a, const String& b) {
    return String(a) + b;
}

String operator+(const wchar_t* a, const String& b) {
    return String(a) + b;
}

bool String::begins_with(const String& p_string) const {
    return api->rebel_string_begins_with(
        &_rebel_string,
        &p_string._rebel_string
    );
}

bool String::begins_with_char_array(const char* p_char_array) const {
    return api->rebel_string_begins_with_char_array(
        &_rebel_string,
        p_char_array
    );
}

PoolStringArray String::bigrams() const {
    rebel_array arr = api->rebel_string_bigrams(&_rebel_string);
    return Array(arr);
}

String String::c_escape() const {
    return String(api->rebel_string_c_escape(&_rebel_string));
}

String String::c_unescape() const {
    return String(api->rebel_string_c_unescape(&_rebel_string));
}

String String::capitalize() const {
    return String(api->rebel_string_capitalize(&_rebel_string));
}

bool String::empty() const {
    return api->rebel_string_empty(&_rebel_string);
}

bool String::ends_with(const String& p_string) const {
    return api->rebel_string_ends_with(&_rebel_string, &p_string._rebel_string);
}

void String::erase(int position, int chars) {
    api->rebel_string_erase(&_rebel_string, position, chars);
}

int String::find(String p_what, int p_from) const {
    return api
        ->rebel_string_find_from(&_rebel_string, p_what._rebel_string, p_from);
}

int String::find_last(String p_what) const {
    return api->rebel_string_find_last(&_rebel_string, p_what._rebel_string);
}

int String::findn(String p_what, int p_from) const {
    return api
        ->rebel_string_findn_from(&_rebel_string, p_what._rebel_string, p_from);
}

String String::format(Variant values) const {
    return String(
        api->rebel_string_format(&_rebel_string, (rebel_variant*)&values)
    );
}

String String::format(Variant values, String placeholder) const {
    rebel_char_string contents =
        api->rebel_string_utf8(&placeholder._rebel_string);
    String new_string(api->rebel_string_format_with_custom_placeholder(
        &_rebel_string,
        (rebel_variant*)&values,
        api->rebel_char_string_get_data(&contents)
    ));
    api->rebel_char_string_destroy(&contents);

    return new_string;
}

String String::get_base_dir() const {
    return String(api->rebel_string_get_base_dir(&_rebel_string));
}

String String::get_basename() const {
    return String(api->rebel_string_get_basename(&_rebel_string));
}

String String::get_extension() const {
    return String(api->rebel_string_get_extension(&_rebel_string));
}

String String::get_file() const {
    return String(api->rebel_string_get_file(&_rebel_string));
}

int String::hash() const {
    return api->rebel_string_hash(&_rebel_string);
}

int String::hex_to_int() const {
    return api->rebel_string_hex_to_int(&_rebel_string);
}

String String::insert(int position, String what) const {
    return String(
        api->rebel_string_insert(&_rebel_string, position, what._rebel_string)
    );
}

bool String::is_abs_path() const {
    return api->rebel_string_is_abs_path(&_rebel_string);
}

bool String::is_rel_path() const {
    return api->rebel_string_is_rel_path(&_rebel_string);
}

bool String::is_subsequence_of(String text) const {
    return api->rebel_string_is_subsequence_of(
        &_rebel_string,
        &text._rebel_string
    );
}

bool String::is_subsequence_ofi(String text) const {
    return api->rebel_string_is_subsequence_ofi(
        &_rebel_string,
        &text._rebel_string
    );
}

bool String::is_valid_float() const {
    return api->rebel_string_is_valid_float(&_rebel_string);
}

bool String::is_valid_html_color() const {
    return api->rebel_string_is_valid_html_color(&_rebel_string);
}

bool String::is_valid_identifier() const {
    return api->rebel_string_is_valid_identifier(&_rebel_string);
}

bool String::is_valid_integer() const {
    return api->rebel_string_is_numeric(&_rebel_string);
}

bool String::is_valid_ip_address() const {
    return api->rebel_string_is_valid_ip_address(&_rebel_string);
}

String String::json_escape() const {
    return String(api->rebel_string_json_escape(&_rebel_string));
}

String String::left(int position) const {
    return String(api->rebel_string_left(&_rebel_string, position));
}

bool String::match(String expr) const {
    return api->rebel_string_match(&_rebel_string, &expr._rebel_string);
}

bool String::matchn(String expr) const {
    return api->rebel_string_match(&_rebel_string, &expr._rebel_string);
}

PoolByteArray String::md5_buffer() const {
    rebel_pool_byte_array arr = api->rebel_string_md5_buffer(&_rebel_string);
    return PoolByteArray(arr);
}

String String::md5_text() const {
    return String(api->rebel_string_md5_text(&_rebel_string));
}

int String::ord_at(int at) const {
    return api->rebel_string_ord_at(&_rebel_string, at);
}

String String::pad_decimals(int digits) const {
    return String(api->rebel_string_pad_decimals(&_rebel_string, digits));
}

String String::pad_zeros(int digits) const {
    return String(api->rebel_string_pad_zeros(&_rebel_string, digits));
}

String String::percent_decode() const {
    return String(api->rebel_string_percent_decode(&_rebel_string));
}

String String::percent_encode() const {
    return String(api->rebel_string_percent_encode(&_rebel_string));
}

String String::plus_file(String file) const {
    return String(
        api->rebel_string_plus_file(&_rebel_string, &file._rebel_string)
    );
}

String String::replace(String p_key, String p_with) const {
    return String(api->rebel_string_replace(
        &_rebel_string,
        p_key._rebel_string,
        p_with._rebel_string
    ));
}

String String::replacen(String what, String forwhat) const {
    return String(api->rebel_string_replacen(
        &_rebel_string,
        what._rebel_string,
        forwhat._rebel_string
    ));
}

int String::rfind(String p_what, int p_from) const {
    return api
        ->rebel_string_rfind_from(&_rebel_string, p_what._rebel_string, p_from);
}

int String::rfindn(String p_what, int p_from) const {
    return api->rebel_string_rfindn_from(
        &_rebel_string,
        p_what._rebel_string,
        p_from
    );
}

String String::right(int position) const {
    return String(api->rebel_string_right(&_rebel_string, position));
}

PoolByteArray String::sha256_buffer() const {
    rebel_pool_byte_array arr = api->rebel_string_sha256_buffer(&_rebel_string);
    return PoolByteArray(arr);
}

String String::sha256_text() const {
    return String(api->rebel_string_sha256_text(&_rebel_string));
}

float String::similarity(String text) const {
    return api->rebel_string_similarity(&_rebel_string, &text._rebel_string);
}

// TODO Suport allow_empty
PoolStringArray String::split(String divisor, bool /*allow_empty*/) const {
    rebel_array arr =
        api->rebel_string_split(&_rebel_string, &divisor._rebel_string);
    return Array(arr);
}

// TODO Suport allow_empty
PoolIntArray String::split_ints(String divisor, bool /*allow_empty*/) const {
    rebel_array arr =
        api->rebel_string_split_floats(&_rebel_string, &divisor._rebel_string);
    return Array(arr);
}

// TODO Suport allow_empty
PoolRealArray String::split_floats(String divisor, bool /*allow_empty*/) const {
    // TODO The GDNative API returns rebel_array, when according to the doc, it
    // should have been rebel_pool_real_array
    rebel_array arr =
        api->rebel_string_split_floats(&_rebel_string, &divisor._rebel_string);
    Array wrapped_array(arr);
    return PoolRealArray(wrapped_array);
}

String String::strip_edges(bool left, bool right) const {
    return String(api->rebel_string_strip_edges(&_rebel_string, left, right));
}

String String::substr(int from, int len) const {
    return String(api->rebel_string_substr(&_rebel_string, from, len));
}

float String::to_float() const {
    return api->rebel_string_to_float(&_rebel_string);
}

int64_t String::to_int() const {
    return api->rebel_string_to_int(&_rebel_string);
}

String String::to_lower() const {
    return String(api->rebel_string_to_lower(&_rebel_string));
}

String String::to_upper() const {
    return String(api->rebel_string_to_upper(&_rebel_string));
}

String String::xml_escape() const {
    return String(api->rebel_string_xml_escape(&_rebel_string));
}

String String::xml_unescape() const {
    return String(api->rebel_string_xml_unescape(&_rebel_string));
}

signed char String::casecmp_to(String p_str) const {
    return api->rebel_string_casecmp_to(&_rebel_string, &p_str._rebel_string);
}

signed char String::nocasecmp_to(String p_str) const {
    return api->rebel_string_nocasecmp_to(&_rebel_string, &p_str._rebel_string);
}

signed char String::naturalnocasecmp_to(String p_str) const {
    return api->rebel_string_naturalnocasecmp_to(
        &_rebel_string,
        &p_str._rebel_string
    );
}

String String::dedent() const {
    rebel_string s = core_1_1_api->rebel_string_dedent(&_rebel_string);
    return String(s);
}

PoolStringArray String::rsplit(
    const String& divisor,
    const bool allow_empty,
    const int maxsplit
) const {
    rebel_pool_string_array arr = core_1_1_api->rebel_string_rsplit(
        &_rebel_string,
        &divisor._rebel_string,
        allow_empty,
        maxsplit
    );
    return PoolStringArray(arr);
}

String String::rstrip(const String& chars) const {
    rebel_string s =
        core_1_1_api->rebel_string_rstrip(&_rebel_string, &chars._rebel_string);
    return String(s);
}

String String::trim_prefix(const String& prefix) const {
    rebel_string s = core_1_1_api->rebel_string_trim_prefix(
        &_rebel_string,
        &prefix._rebel_string
    );
    return String(s);
}

String String::trim_suffix(const String& suffix) const {
    rebel_string s = core_1_1_api->rebel_string_trim_suffix(
        &_rebel_string,
        &suffix._rebel_string
    );
    return String(s);
}

} // namespace Rebel
