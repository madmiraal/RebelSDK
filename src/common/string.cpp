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
    api->rebel_char_string_destroy(&internal_char_string);
}

int CharString::length() const {
    return api->rebel_char_string_length(&internal_char_string);
}

const char* CharString::get_data() const {
    return api->rebel_char_string_get_data(&internal_char_string);
}

String::String() {
    api->rebel_string_new(&internal_string);
}

String::String(const char* characters) {
    api->rebel_string_new(&internal_string);
    api->rebel_string_parse_utf8(&internal_string, characters);
}

String::String(const wchar_t* wide_characters) {
    api->rebel_string_new_with_wide_string(
        &internal_string,
        wide_characters,
        wcslen(wide_characters)
    );
}

String::String(const wchar_t wide_character) {
    api->rebel_string_new_with_wide_string(
        &internal_string,
        &wide_character,
        1
    );
}

String::String(const String& other) {
    api->rebel_string_new_copy(&internal_string, &other.internal_string);
}

String::String(String&& other) {
    api->rebel_string_new_copy(&internal_string, &other.internal_string);
}

String::~String() {
    api->rebel_string_destroy(&internal_string);
}

void String::operator=(const String& other) {
    api->rebel_string_destroy(&internal_string);
    api->rebel_string_new_copy(&internal_string, &other.internal_string);
}

void String::operator=(String&& other) {
    api->rebel_string_destroy(&internal_string);
    api->rebel_string_new_copy(&internal_string, &other.internal_string);
}

wchar_t& String::operator[](const int index) {
    return *const_cast<wchar_t*>(
        api->rebel_string_operator_index(&internal_string, index)
    );
}

wchar_t String::operator[](const int index) const {
    return *api->rebel_string_operator_index(
        const_cast<rebel_string*>(&internal_string),
        index
    );
}

bool String::operator==(const String& right) const {
    return api->rebel_string_operator_equal(
        &internal_string,
        &right.internal_string
    );
}

bool String::operator<(const String& right) const {
    return api->rebel_string_operator_less(
        &internal_string,
        &right.internal_string
    );
}

String String::operator+(const String& right) const {
    return String(api->rebel_string_operator_plus(
        &internal_string,
        &right.internal_string
    ));
}

void String::operator+=(const String& other) {
    *this = *this + other;
}

void String::operator+=(const wchar_t wide_character) {
    const String other(wide_character);
    *this = String(api->rebel_string_operator_plus(
        &internal_string,
        &other.internal_string
    ));
}

String::operator NodePath() const {
    return {*this};
}

int String::length() const {
    return api->rebel_string_length(&internal_string);
}

bool String::empty() const {
    return api->rebel_string_empty(&internal_string);
}

bool String::is_valid_integer() const {
    return api->rebel_string_is_numeric(&internal_string);
}

bool String::is_valid_float() const {
    return api->rebel_string_is_valid_float(&internal_string);
}

bool String::is_valid_html_color() const {
    return api->rebel_string_is_valid_html_color(&internal_string);
}

bool String::is_valid_identifier() const {
    return api->rebel_string_is_valid_identifier(&internal_string);
}

bool String::is_valid_ip_address() const {
    return api->rebel_string_is_valid_ip_address(&internal_string);
}

bool String::is_abs_path() const {
    return api->rebel_string_is_abs_path(&internal_string);
}

bool String::is_rel_path() const {
    return api->rebel_string_is_rel_path(&internal_string);
}

bool String::begins_with(const String& search_string) const {
    return api->rebel_string_begins_with(
        &internal_string,
        &search_string.internal_string
    );
}

bool String::begins_with_char_array(const char* search_characters) const {
    return api->rebel_string_begins_with_char_array(
        &internal_string,
        search_characters
    );
}

bool String::ends_with(const String& search_string) const {
    return api->rebel_string_ends_with(
        &internal_string,
        &search_string.internal_string
    );
}

bool String::is_subsequence_of(const String& search_string) const {
    return api->rebel_string_is_subsequence_of(
        &internal_string,
        &search_string.internal_string
    );
}

bool String::is_subsequence_ofi(const String& search_string) const {
    return api->rebel_string_is_subsequence_ofi(
        &internal_string,
        &search_string.internal_string
    );
}

int String::find(const String& search_string, const int from) const {
    return api->rebel_string_find_from(
        &internal_string,
        search_string.internal_string,
        from
    );
}

int String::findn(const String& search_string, const int from) const {
    return api->rebel_string_findn_from(
        &internal_string,
        search_string.internal_string,
        from
    );
}

int String::find_last(const String& search_string) const {
    return api->rebel_string_find_last(
        &internal_string,
        search_string.internal_string
    );
}

int String::rfind(const String& search_string, const int from) const {
    return api->rebel_string_rfind_from(
        &internal_string,
        search_string.internal_string,
        from
    );
}

int String::rfindn(const String& search_string, const int from) const {
    return api->rebel_string_rfindn_from(
        &internal_string,
        search_string.internal_string,
        from
    );
}

bool String::match(const String& match_string) const {
    return api->rebel_string_match(
        &internal_string,
        &match_string.internal_string
    );
}

bool String::matchn(const String& match_string) const {
    return api->rebel_string_match(
        &internal_string,
        &match_string.internal_string
    );
}

signed char String::casecmp_to(const String& compare_string) const {
    return api->rebel_string_casecmp_to(
        &internal_string,
        &compare_string.internal_string
    );
}

signed char String::nocasecmp_to(const String& compare_string) const {
    return api->rebel_string_nocasecmp_to(
        &internal_string,
        &compare_string.internal_string
    );
}

signed char String::naturalnocasecmp_to(const String& compare_string) const {
    return api->rebel_string_naturalnocasecmp_to(
        &internal_string,
        &compare_string.internal_string
    );
}

void String::erase(const int from, const int count) {
    api->rebel_string_erase(&internal_string, from, count);
}

String String::insert(const int position, const String& insert_string) const {
    return String(api->rebel_string_insert(
        &internal_string,
        position,
        insert_string.internal_string
    ));
}

String String::replace(const String& search_string, const String& new_string)
    const {
    return String(api->rebel_string_replace(
        &internal_string,
        search_string.internal_string,
        new_string.internal_string
    ));
}

String String::replacen(const String& search_string, const String& new_string)
    const {
    return String(api->rebel_string_replacen(
        &internal_string,
        search_string.internal_string,
        new_string.internal_string
    ));
}

String String::left(const int position) const {
    return String(api->rebel_string_left(&internal_string, position));
}

String String::right(const int position) const {
    return String(api->rebel_string_right(&internal_string, position));
}

String String::substr(const int from, const int length) const {
    return String(api->rebel_string_substr(&internal_string, from, length));
}

String String::strip_edges(const bool left, const bool right) const {
    return String(api->rebel_string_strip_edges(&internal_string, left, right));
}

String String::rstrip(const String& strip_string) const {
    return String(core_1_1_api->rebel_string_rstrip(
        &internal_string,
        &strip_string.internal_string
    ));
}

String String::trim_prefix(const String& prefix) const {
    return String(core_1_1_api->rebel_string_trim_prefix(
        &internal_string,
        &prefix.internal_string
    ));
}

String String::trim_suffix(const String& suffix) const {
    return String(core_1_1_api->rebel_string_trim_suffix(
        &internal_string,
        &suffix.internal_string
    ));
}

String String::to_lower() const {
    return String(api->rebel_string_to_lower(&internal_string));
}

String String::to_upper() const {
    return String(api->rebel_string_to_upper(&internal_string));
}

String String::capitalize() const {
    return String(api->rebel_string_capitalize(&internal_string));
}

String String::format(const Variant& values) const {
    return String(api->rebel_string_format(
        &internal_string,
        reinterpret_cast<const rebel_variant*>(&values)
    ));
}

String String::format(const Variant& values, const String& placeholder) const {
    rebel_char_string placeholder_characters =
        api->rebel_string_utf8(&placeholder.internal_string);
    String result(api->rebel_string_format_with_custom_placeholder(
        &internal_string,
        reinterpret_cast<const rebel_variant*>(&values),
        api->rebel_char_string_get_data(&placeholder_characters)
    ));
    api->rebel_char_string_destroy(&placeholder_characters);
    return result;
}

String String::c_escape() const {
    return String(api->rebel_string_c_escape(&internal_string));
}

String String::c_unescape() const {
    return String(api->rebel_string_c_unescape(&internal_string));
}

String String::json_escape() const {
    return String(api->rebel_string_json_escape(&internal_string));
}

String String::xml_escape() const {
    return String(api->rebel_string_xml_escape(&internal_string));
}

String String::xml_unescape() const {
    return String(api->rebel_string_xml_unescape(&internal_string));
}

String String::dedent() const {
    return String(core_1_1_api->rebel_string_dedent(&internal_string));
}

String String::get_base_dir() const {
    return String(api->rebel_string_get_base_dir(&internal_string));
}

String String::get_basename() const {
    return String(api->rebel_string_get_basename(&internal_string));
}

String String::get_extension() const {
    return String(api->rebel_string_get_extension(&internal_string));
}

String String::get_file() const {
    return String(api->rebel_string_get_file(&internal_string));
}

String String::plus_file(const String& file) const {
    return String(
        api->rebel_string_plus_file(&internal_string, &file.internal_string)
    );
}

String String::percent_encode() const {
    return String(api->rebel_string_percent_encode(&internal_string));
}

String String::percent_decode() const {
    return String(api->rebel_string_percent_decode(&internal_string));
}

String String::pad_zeros(const int digits) const {
    return String(api->rebel_string_pad_zeros(&internal_string, digits));
}

String String::pad_decimals(const int digits) const {
    return String(api->rebel_string_pad_decimals(&internal_string, digits));
}

String String::md5_text() const {
    return String(api->rebel_string_md5_text(&internal_string));
}

PoolByteArray String::md5_buffer() const {
    return PoolByteArray(api->rebel_string_md5_buffer(&internal_string));
}

String String::sha256_text() const {
    return String(api->rebel_string_sha256_text(&internal_string));
}

PoolByteArray String::sha256_buffer() const {
    return PoolByteArray(api->rebel_string_sha256_buffer(&internal_string));
}

PoolStringArray String::bigrams() const {
    return Array(api->rebel_string_bigrams(&internal_string));
}

CharString String::utf8() const {
    CharString result;
    result.internal_char_string = api->rebel_string_utf8(&internal_string);
    return result;
}

CharString String::ascii(const bool extended) const {
    CharString result;
    if (extended) {
        result.internal_char_string =
            api->rebel_string_ascii_extended(&internal_string);
    } else {
        result.internal_char_string = api->rebel_string_ascii(&internal_string);
    }
    return result;
}

const wchar_t* String::unicode_str() const {
    return api->rebel_string_wide_str(&internal_string);
}

char* String::alloc_c_string() const {
    rebel_char_string char_string = api->rebel_string_utf8(&internal_string);
    const int length              = api->rebel_char_string_length(&char_string);
    const auto result = static_cast<char*>(api->rebel_alloc(length + 1));
    if (result) {
        memcpy(
            result,
            api->rebel_char_string_get_data(&char_string),
            length + 1
        );
    }
    api->rebel_char_string_destroy(&char_string);
    return result;
}

float String::to_float() const {
    return api->rebel_string_to_float(&internal_string);
}

int64_t String::to_int() const {
    return api->rebel_string_to_int(&internal_string);
}

int String::hash() const {
    return api->rebel_string_hash(&internal_string);
}

int String::hex_to_int() const {
    return api->rebel_string_hex_to_int(&internal_string);
}

int String::ord_at(const int at) const {
    return api->rebel_string_ord_at(&internal_string, at);
}

// TODO Support allow_empty
PoolStringArray String::split(const String& split_string, bool /*allow_empty*/)
    const {
    return Array(
        api->rebel_string_split(&internal_string, &split_string.internal_string)
    );
}

PoolStringArray String::rsplit(
    const String& split_string,
    const bool allow_empty,
    const int maximum_split_count
) const {
    return PoolStringArray(core_1_1_api->rebel_string_rsplit(
        &internal_string,
        &split_string.internal_string,
        allow_empty,
        maximum_split_count
    ));
}

// TODO Support allow_empty
PoolIntArray String::
    split_ints(const String& split_string, bool /*allow_empty*/) const {
    return Array(api->rebel_string_split_floats(
        &internal_string,
        &split_string.internal_string
    ));
}

// TODO Support allow_empty
PoolRealArray String::
    split_floats(const String& split_string, bool /*allow_empty*/) const {
    return Array(api->rebel_string_split_floats(
        &internal_string,
        &split_string.internal_string
    ));
}

float String::similarity(const String& other) const {
    return api->rebel_string_similarity(
        &internal_string,
        &other.internal_string
    );
}

String String::num(const double number, const int decimals) {
    return String(api->rebel_string_num_with_decimals(number, decimals));
}

String String::num_scientific(const double number) {
    return String(api->rebel_string_num_scientific(number));
}

String String::num_real(const double number) {
    return String(api->rebel_string_num_real(number));
}

String String::num_int64(
    const int64_t number,
    const int base,
    const bool capitalize_hex
) {
    return String(
        api->rebel_string_num_int64_capitalized(number, base, capitalize_hex)
    );
}

String String::chr(const rebel_char_type character) {
    return String(api->rebel_string_chr(character));
}

String String::md5(const uint8_t* md5_characters) {
    return String(api->rebel_string_md5(md5_characters));
}

String String::hex_encode_buffer(const uint8_t* buffer, const int length) {
    return String(api->rebel_string_hex_encode_buffer(buffer, length));
}

String::String(const rebel_string string) : internal_string(string) {}

bool operator!=(const String& left, const String& right) {
    return !(left == right);
}

bool operator<=(const String& left, const String& right) {
    return left == right || left < right;
}

bool operator>(const String& left, const String& right) {
    return !(left <= right);
}

bool operator>=(const String& left, const String& right) {
    return left > right || left == right;
}

String operator+(const char* characters, const String& right) {
    return String(characters) + right;
}

String operator+(const wchar_t* wide_characters, const String& right) {
    return String(wide_characters) + right;
}
} // namespace Rebel
