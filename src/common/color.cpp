// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/color.h"

#include "common/defs.h"
#include "common/string.h"

#include <cmath>

namespace Rebel {
namespace {
template <typename T>
constexpr T minimum(const T value1, const T value2, const T value3) {
    if (value1 < value2) {
        if (value1 < value3) {
            return value1;
        }
        return value3;
    }
    if (value2 < value3) {
        return value2;
    }
    return value3;
}

template <typename T>
constexpr T maximum(const T value1, const T value2, const T value3) {
    if (value1 > value2) {
        if (value1 > value3) {
            return value1;
        }
        return value3;
    }
    if (value2 > value3) {
        return value2;
    }
    return value3;
}

template <typename T>
constexpr T clamp(const T value, const T low, const T high) {
    if (value < low) {
        return low;
    }
    if (value > high) {
        return high;
    }
    return value;
}

constexpr wchar_t char_from_nibble(const int nibble) {
    if (nibble < 10) {
        return static_cast<wchar_t>('0' + nibble);
    }
    return static_cast<wchar_t>('a' + nibble - 10);
}

constexpr int nibble_from_char(const wchar_t character) {
    if (character >= '0' && character <= '9') {
        return character - '0';
    }
    if (character >= 'a' && character <= 'f') {
        return 10 + character - 'a';
    }
    if (character >= 'A' && character <= 'F') {
        return 10 + character - 'A';
    }
    ERR_FAIL_V(-1);
}

String hex_from_float(const float value) {
    const int byte_value   = clamp(static_cast<int>(value * 255), 0, 255);
    const int lower_nibble = byte_value & 0xF;
    const int upper_nibble = byte_value >> 4 & 0xF;
    const String lower{char_from_nibble(lower_nibble)};
    const String upper{char_from_nibble(upper_nibble)};
    return upper + lower;
}

float float_from_hex(const String& hex_string, const int offset) {
    const int lower_nibble = nibble_from_char(hex_string[offset]);
    const int upper_nibble = nibble_from_char(hex_string[offset + 1]);
    const int value        = upper_nibble * 16 + lower_nibble;
    return static_cast<float>(value) / 255.f;
}

constexpr float linear(const float value) {
    if (value < 0.04045) {
        return value / 12.92f;
    }
    return static_cast<float>(pow((value + 0.055) / (1 + 0.055), 2.4));
}
} // namespace

Color::Color() : Color(0, 0, 0, 1) {}

Color::Color(
    const float red,
    const float green,
    const float blue,
    const float alpha
) :
    r(red),
    g(green),
    b(blue),
    a(alpha) {}

Color::operator String() const {
    return String::num(r) + ", " + String::num(g) + ", " + String::num(b) + ", "
         + String::num(a);
}

float& Color::operator[](const int index) {
    return components[index];
}

const float& Color::operator[](const int index) const {
    return components[index];
}

void Color::operator+=(const Color& other) {
    r += other.r;
    g += other.g;
    b += other.b;
    a += other.a;
}

void Color::operator-=(const Color& other) {
    r -= other.r;
    g -= other.g;
    b -= other.b;
    a -= other.a;
}

void Color::operator*=(const Color& other) {
    r *= other.r;
    g *= other.g;
    b *= other.b;
    a *= other.a;
}

void Color::operator*=(const real_t value) {
    r *= value;
    g *= value;
    b *= value;
    a *= value;
}

void Color::operator/=(const Color& other) {
    r /= other.r;
    g /= other.g;
    b /= other.b;
    a /= other.a;
}

void Color::operator/=(const real_t value) {
    if (value == 0) {
        r = 1.f;
        g = 1.f;
        b = 1.f;
        a = 1.f;
    } else {
        r /= value;
        g /= value;
        b /= value;
        a /= value;
    }
}

uint8_t Color::get_r8() const {
    return static_cast<uint8_t>(r * 255.0);
}

uint8_t Color::get_g8() const {
    return static_cast<uint8_t>(g * 255.0);
}

uint8_t Color::get_b8() const {
    return static_cast<uint8_t>(b * 255.0);
}

uint8_t Color::get_a8() const {
    return static_cast<uint8_t>(a * 255.0);
}

float Color::get_h() const {
    const float min   = minimum(r, g, b);
    const float max   = maximum(r, g, b);
    const float delta = max - min;
    if (delta == 0) {
        return 0;
    }
    float h;
    if (r == max) {
        // Between yellow & magenta.
        h = (g - b) / delta;
    } else if (g == max) {
        // Between cyan & yellow.
        h = 2 + (b - r) / delta;
    } else { // b == max
        // Between magenta & cyan.
        h = 4 + (r - g) / delta;
    }
    h /= 6.f;
    if (h < 0) {
        h += 1.0;
    }
    return h;
}

float Color::get_s() const {
    const float min   = minimum(r, g, b);
    const float max   = maximum(r, b, b);
    const float delta = max - min;
    if (max == 0) {
        return 0;
    }
    return delta / max;
}

float Color::get_v() const {
    const float max = maximum(r, g, b);
    return max;
}

void Color::set_hsv(
    const float hue,
    const float saturation,
    const float value,
    const float alpha
) {
    a = alpha;
    if (saturation == 0) {
        // Grey.
        r = g = b = value;
        return;
    }
    const double h = fmod(hue * 6.0, 6);
    const int i    = static_cast<int>(floor(h));
    const auto f   = static_cast<float>(h - i);
    const float p  = value * (1 - saturation);
    const float q  = value * (1 - saturation * f);
    const float t  = value * (1 - saturation * (1 - f));
    switch (i) {
        case 0: // Red is the dominant color.
            r = value;
            g = t;
            b = p;
            break;
        case 1: // Green is the dominant color.
            r = q;
            g = value;
            b = p;
            break;
        case 2:
            r = p;
            g = value;
            b = t;
            break;
        case 3: // Blue is the dominant color.
            r = p;
            g = q;
            b = value;
            break;
        case 4:
            r = t;
            g = p;
            b = value;
            break;
        case 5: // Red is the dominant color.
            r = value;
            g = p;
            b = q;
            break;
        default:
            ERR_FAIL();
    }
}

uint32_t Color::to_32() const {
    uint32_t result   = static_cast<uint8_t>(a * 255);
    result          <<= 8;
    result           |= static_cast<uint8_t>(r * 255);
    result          <<= 8;
    result           |= static_cast<uint8_t>(g * 255);
    result          <<= 8;
    result           |= static_cast<uint8_t>(b * 255);
    return result;
}

uint32_t Color::to_RGBA32() const {
    uint32_t result   = static_cast<uint8_t>(r * 255);
    result          <<= 8;
    result           |= static_cast<uint8_t>(g * 255);
    result          <<= 8;
    result           |= static_cast<uint8_t>(b * 255);
    result          <<= 8;
    result           |= static_cast<uint8_t>(a * 255);
    return result;
}

uint64_t Color::to_RGBA64() const {
    uint64_t result   = static_cast<uint16_t>(r * 65535);
    result          <<= 16;
    result           |= static_cast<uint16_t>(g * 65535);
    result          <<= 16;
    result           |= static_cast<uint16_t>(b * 65535);
    result          <<= 16;
    result           |= static_cast<uint16_t>(a * 65535);
    return result;
}

uint32_t Color::to_ARGB32() const {
    uint32_t result   = static_cast<uint8_t>(a * 255);
    result          <<= 8;
    result           |= static_cast<uint8_t>(r * 255);
    result          <<= 8;
    result           |= static_cast<uint8_t>(g * 255);
    result          <<= 8;
    result           |= static_cast<uint8_t>(b * 255);
    return result;
}

uint64_t Color::to_ARGB64() const {
    uint64_t result   = static_cast<uint16_t>(a * 65535);
    result          <<= 16;
    result           |= static_cast<uint16_t>(r * 65535);
    result          <<= 16;
    result           |= static_cast<uint16_t>(g * 65535);
    result          <<= 16;
    result           |= static_cast<uint16_t>(b * 65535);
    return result;
}

uint32_t Color::to_ABGR32() const {
    uint32_t result   = static_cast<uint8_t>(a * 255);
    result          <<= 8;
    result           |= static_cast<uint8_t>(b * 255);
    result          <<= 8;
    result           |= static_cast<uint8_t>(g * 255);
    result          <<= 8;
    result           |= static_cast<uint8_t>(r * 255);
    return result;
}

uint64_t Color::to_ABGR64() const {
    uint64_t result   = static_cast<uint16_t>(a * 65535);
    result          <<= 16;
    result           |= static_cast<uint16_t>(b * 65535);
    result          <<= 16;
    result           |= static_cast<uint16_t>(g * 65535);
    result          <<= 16;
    result           |= static_cast<uint16_t>(r * 65535);
    return result;
}

String Color::to_html(const bool p_alpha) const {
    String result;
    result += hex_from_float(r);
    result += hex_from_float(g);
    result += hex_from_float(b);
    if (p_alpha) {
        result = hex_from_float(a) + result;
    }
    return result;
}

void Color::invert() {
    r = 1.f - r;
    g = 1.f - g;
    b = 1.f - b;
}

Color Color::inverted() const {
    Color result = *this;
    result.invert();
    return result;
}

void Color::contrast() {
    r = static_cast<float>(fmod(r + 0.5, 1.0));
    g = static_cast<float>(fmod(g + 0.5, 1.0));
    b = static_cast<float>(fmod(b + 0.5, 1.0));
}

Color Color::contrasted() const {
    Color result = *this;
    result.contrast();
    return result;
}

Color Color::to_linear() const {
    return {linear(r), linear(g), linear(b), a};
}

Color Color::linear_interpolate(const Color& to, const float factor) const {
    const float red   = r + factor * (to.r - r);
    const float green = g + factor * (to.g - g);
    const float blue  = b + factor * (to.b - b);
    const float alpha = a + factor * (to.a - a);
    return {red, green, blue, alpha};
}

Color Color::blend(const Color& other) const {
    const float factor = 1.f - other.a;
    const float alpha  = a * factor + other.a;
    if (alpha == 0) {
        return {0, 0, 0, 0};
    }
    const float red   = (r * a * factor + other.r * other.a) / alpha;
    const float green = (g * a * factor + other.g * other.a) / alpha;
    const float blue  = (b * a * factor + other.b * other.a) / alpha;
    return {red, green, blue, alpha};
}

Color Color::darkened(const float amount) const {
    const float red   = r * (1.f - amount);
    const float green = g * (1.f - amount);
    const float blue  = b * (1.f - amount);
    return {red, green, blue, a};
}

Color Color::lightened(const float amount) const {
    const float red   = r + (1.f - r) * amount;
    const float green = g + (1.f - g) * amount;
    const float blue  = b + (1.f - b) * amount;
    return {red, green, blue, a};
}

float Color::gray() const {
    return (r + g + b) / 3.f;
}

Color Color::from_hsv(
    const float hue,
    const float saturation,
    const float value,
    const float alpha
) {
    double region = fmod(hue * 360.0, 360.0);
    if (region < 0.0) {
        region += 360.0;
    }
    region             /= 60.0;
    const float chroma  = value * saturation;
    const auto x =
        static_cast<float>(chroma * (1.0f - fabs(fmod(region, 2.0f) - 1.0f)));
    float red, green, blue;
    switch (static_cast<int>(region)) {
        case 0: {
            red   = chroma;
            green = x;
            blue  = 0;
        } break;
        case 1: {
            red   = x;
            green = chroma;
            blue  = 0;
        } break;
        case 2: {
            red   = 0;
            green = chroma;
            blue  = x;
        } break;
        case 3: {
            red   = 0;
            green = x;
            blue  = chroma;
        } break;
        case 4: {
            red   = x;
            green = 0;
            blue  = chroma;
        } break;
        case 5: {
            red   = chroma;
            green = 0;
            blue  = x;
        } break;
        default: {
            red   = 0;
            green = 0;
            blue  = 0;
        } break;
    }
    const float m = value - chroma;
    return {m + red, m + green, m + blue, alpha};
}

Color Color::hex(uint32_t hex_value) {
    const float alpha   = static_cast<float>(hex_value & 0xFF) / 255.f;
    hex_value         >>= 8;
    const float blue    = static_cast<float>(hex_value & 0xFF) / 255.f;
    hex_value         >>= 8;
    const float green   = static_cast<float>(hex_value & 0xFF) / 255.f;
    hex_value         >>= 8;
    const float red     = static_cast<float>(hex_value & 0xFF) / 255.f;
    return {red, green, blue, alpha};
}

Color Color::html(const String& html_string) {
    if (html_string.empty()) {
        return {};
    }
    String string(html_string);
    if (string[0] == '#') {
        string = string.substr(1, string.length() - 1);
    }
    const int string_length = string.length();
    ERR_FAIL_COND_V(string_length != 8 && string_length != 6, {});
    const bool has_alpha = string_length == 8;
    float alpha          = 1.f;
    if (has_alpha) {
        alpha = float_from_hex(string, 0);
    }
    const int offset  = has_alpha ? 2 : 0;
    const float red   = float_from_hex(string, offset + 0);
    const float green = float_from_hex(string, offset + 2);
    const float blue  = float_from_hex(string, offset + 4);
    if (alpha < 0 || red < 0 || green < 0 || blue < 0) {
        ERR_PRINTS(String("Invalid Color Code: ") + html_string);
        ERR_FAIL_V({});
    }
    return {red, green, blue, alpha};
}

bool Color::html_is_valid(const String& html_string) {
    if (html_string.empty()) {
        return {};
    }
    String string(html_string);
    if (string[0] == '#') {
        string = string.substr(1, string.length() - 1);
    }
    const int string_length = string.length();
    ERR_FAIL_COND_V(string_length != 8 && string_length != 6, {});
    const bool has_alpha = string_length == 8;
    float alpha          = 1.f;
    if (has_alpha) {
        alpha = float_from_hex(string, 0);
    }
    const int offset  = has_alpha ? 2 : 0;
    const float red   = float_from_hex(string, offset + 0);
    const float green = float_from_hex(string, offset + 2);
    const float blue  = float_from_hex(string, offset + 4);
    if (alpha < 0 || red < 0 || green < 0 || blue < 0) {
        return false;
    }
    return true;
}

bool operator==(const Color& left, const Color& right) {
    return left.r == right.r && left.g == right.g && left.b == right.b
        && left.a == right.a;
}

bool operator!=(const Color& left, const Color& right) {
    return !(left == right);
}

bool operator<(const Color& left, const Color& right) {
    if (left.r == right.r) {
        if (left.g == right.g) {
            if (left.b == right.b) {
                return left.a < right.a;
            }
            return left.b < right.b;
        }
        return left.g < right.g;
    }
    return left.r < right.r;
}

bool operator<=(const Color& left, const Color& right) {
    return left < right || left == right;
}

bool operator>(const Color& left, const Color& right) {
    return !(left <= right);
}

bool operator>=(const Color& left, const Color& right) {
    return left > right || left == right;
}

Color operator+(Color left, const Color& right) {
    left += right;
    return left;
}

Color operator-(const Color& other) {
    return {1.f - other.r, 1.f - other.g, 1.f - other.b, 1.f - other.a};
}

Color operator-(Color left, const Color& right) {
    left -= right;
    return left;
}

Color operator*(Color left, const Color& right) {
    left *= right;
    return left;
}

Color operator*(Color left, const real_t right) {
    left *= right;
    return left;
}

Color operator/(Color left, const Color& right) {
    left /= right;
    return left;
}

Color operator/(Color left, const real_t right) {
    left /= right;
    return left;
}
} // namespace Rebel
