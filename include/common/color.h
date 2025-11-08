// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef COLOR_H
#define COLOR_H

#include "common/defs.h"

namespace Rebel {
class String;

class Color {
public:
    union {
        struct {
            float r;
            float g;
            float b;
            float a;
        };

        float components[4];
    };

    Color();
    Color(float red, float green, float blue, float alpha = 1.f);

    operator String() const;
    float& operator[](int index);
    const float& operator[](int index) const;
    void operator+=(const Color& other);
    void operator-=(const Color& other);
    void operator*=(const Color& other);
    void operator*=(real_t value);
    void operator/=(const Color& other);
    void operator/=(real_t value);

    uint8_t get_r8() const;
    uint8_t get_g8() const;
    uint8_t get_b8() const;
    uint8_t get_a8() const;
    float get_h() const;
    float get_s() const;
    float get_v() const;
    void set_hsv(float hue, float saturation, float value, float alpha = 1.f);

    uint32_t to_32() const;
    uint32_t to_RGBA32() const;
    uint64_t to_RGBA64() const;
    uint32_t to_ARGB32() const;
    uint64_t to_ARGB64() const;
    uint32_t to_ABGR32() const;
    uint64_t to_ABGR64() const;
    String to_html(bool p_alpha = true) const;

    void invert();
    Color inverted() const;
    void contrast();
    Color contrasted() const;
    Color to_linear() const;
    Color linear_interpolate(const Color& to, float factor) const;
    Color blend(const Color& other) const;
    Color darkened(float amount) const;
    Color lightened(float amount) const;
    float gray() const;

    static Color from_hsv(
        float hue,
        float saturation,
        float value,
        float alpha = 1.f
    );
    static Color hex(uint32_t hex_value);
    static Color html(const String& html_string);
    static bool html_is_valid(const String& html_string);
};

bool operator==(const Color& left, const Color& right);
bool operator!=(const Color& left, const Color& right);
bool operator<(const Color& left, const Color& right);
bool operator<=(const Color& left, const Color& right);
bool operator>(const Color& left, const Color& right);
bool operator>=(const Color& left, const Color& right);
Color operator+(const Color& left, const Color& right);
Color operator-(const Color& other);
Color operator-(const Color& left, const Color& right);
Color operator*(const Color& left, const Color& right);
Color operator*(const Color& left, real_t right);
Color operator/(const Color& left, const Color& right);
Color operator/(const Color& left, real_t right);
} // namespace Rebel

#endif // COLOR_H
