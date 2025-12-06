// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef VECTOR2_H
#define VECTOR2_H

#include "api/gdnative/vector2.h"
#include "common/defs.h"

namespace Rebel {

class String;

class Vector2 {
public:
    union {
        real_t x;
        real_t width;
    };

    union {
        real_t y;
        real_t height;
    };

    enum Axis {
        AXIS_X = 0,
        AXIS_Y,
        AXIS_COUNT
    };

    static const Vector2 ZERO;
    static const Vector2 ONE;
    static const Vector2 INF;

    static const Vector2 LEFT;
    static const Vector2 RIGHT;
    static const Vector2 UP;
    static const Vector2 DOWN;

    Vector2();
    Vector2(real_t x, real_t y);

    real_t& operator[](int index);
    const real_t& operator[](int index) const;

    void operator+=(const Vector2& other);
    void operator-=(const Vector2& other);
    void operator*=(const Vector2& other);
    void operator*=(real_t value);
    void operator/=(const Vector2& other);
    void operator/=(real_t value);

    operator String() const;

    real_t dot(const Vector2& other) const;
    real_t cross(const Vector2& other) const;
    Vector2 cross(real_t value) const;

    real_t aspect() const;
    Vector2 abs() const;
    Vector2 floor() const;
    Vector2 snapped(const Vector2& other) const;
    Vector2 clamped(real_t maximum_length) const;
    Vector2 tangent() const;

    real_t length() const;
    real_t length_squared() const;
    real_t distance_to(const Vector2& other) const;
    real_t distance_squared_to(const Vector2& other) const;

    void normalize();
    Vector2 normalized() const;

    void set_rotation(real_t radians);
    Vector2 rotated(real_t radians) const;
    real_t angle() const;
    real_t angle_to(const Vector2& other) const;
    real_t angle_to_point(const Vector2& point) const;
    Vector2 direction_to(const Vector2& other) const;

    Vector2 project(const Vector2& other) const;
    Vector2 plane_project(real_t distance, const Vector2& direction) const;

    Vector2 move_toward(const Vector2& to, real_t factor) const;
    Vector2 bounce(const Vector2& normal) const;
    Vector2 reflect(const Vector2& normal) const;
    Vector2 slide(const Vector2& other) const;

    Vector2 linear_interpolate(const Vector2& to, real_t factor) const;
    Vector2 cubic_interpolate(
        const Vector2& to,
        const Vector2& from_direction,
        const Vector2& to_direction,
        real_t factor
    ) const;

    static Vector2 linear_interpolate(
        const Vector2& from,
        const Vector2& to,
        real_t factor
    );
};

Vector2 operator-(const Vector2& vector2);
Vector2 operator+(Vector2 left, const Vector2& right);
Vector2 operator-(Vector2 left, const Vector2& right);
Vector2 operator*(Vector2 left, const Vector2& right);
Vector2 operator*(Vector2 left, real_t value);
Vector2 operator*(real_t value, Vector2 right);
Vector2 operator/(Vector2 left, const Vector2& right);
Vector2 operator/(Vector2 left, real_t value);

bool operator==(const Vector2& left, const Vector2& right);
bool operator!=(const Vector2& left, const Vector2& right);
bool operator<(const Vector2& left, const Vector2& right);
bool operator<=(const Vector2& left, const Vector2& right);
bool operator>(const Vector2& left, const Vector2& right);
bool operator>=(const Vector2& left, const Vector2& right);

namespace Math {
Vector2 cartesian2polar(const Vector2& cartesian);
Vector2 polar2cartesian(const Vector2& polar);
} // namespace Math
} // namespace Rebel

#endif // VECTOR2_H
