// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef VECTOR3_H
#define VECTOR3_H

#include "common/defs.h"

namespace Rebel {
class Basis;
class String;

class Vector3 {
public:
    union {
        struct {
            real_t x;
            real_t y;
            real_t z;
        };

        // Not for direct access, use [] operator instead.
        real_t coord[3];
    };

    enum Axis {
        AXIS_X,
        AXIS_Y,
        AXIS_Z,
        AXIS_COUNT
    };

    static const Vector3 ZERO;
    static const Vector3 ONE;
    static const Vector3 INF;

    static const Vector3 LEFT;
    static const Vector3 RIGHT;
    static const Vector3 UP;
    static const Vector3 DOWN;
    static const Vector3 FORWARD;
    static const Vector3 BACK;

    Vector3();
    Vector3(real_t x, real_t y, real_t z);

    real_t& operator[](int axis);
    const real_t& operator[](int axis) const;

    Vector3& operator+=(const Vector3& other);
    Vector3& operator-=(const Vector3& other);
    Vector3& operator*=(const Vector3& other);
    Vector3& operator*=(real_t value);
    Vector3& operator/=(const Vector3& other);
    Vector3& operator/=(real_t value);

    operator String() const;

    int min_axis() const;
    int max_axis() const;

    real_t dot(const Vector3& b) const;
    Vector3 cross(const Vector3& b) const;

    Vector3 inverse() const;
    Basis outer(const Vector3& b) const;

    Vector3 abs() const;
    Vector3 floor() const;
    Vector3 ceil() const;
    void snap(real_t value);
    Vector3 snapped(float value) const;

    real_t length() const;
    real_t length_squared() const;
    real_t distance_to(const Vector3& other) const;
    real_t distance_squared_to(const Vector3& other) const;

    bool is_normalized() const;
    void normalize();
    Vector3 normalized() const;

    void rotate(const Vector3& axis, real_t phi);
    Vector3 rotated(const Vector3& axis, real_t phi) const;
    real_t angle_to(const Vector3& other) const;
    Vector3 direction_to(const Vector3& other) const;

    Vector3 project(const Vector3& other) const;

    Vector3 move_toward(const Vector3& to, real_t factor) const;
    Vector3 bounce(const Vector3& normal) const;
    Vector3 reflect(const Vector3& normal) const;
    Vector3 slide(const Vector3& other) const;

    Vector3 linear_interpolate(const Vector3& to, real_t factor) const;
    Vector3 slerp(const Vector3& to, real_t factor) const;
    Vector3 cubic_interpolate(
        const Vector3& to,
        const Vector3& from_direction,
        const Vector3& to_direction,
        real_t factor
    ) const;
};

Vector3 operator-(const Vector3& vector3);
Vector3 operator+(Vector3 left, const Vector3& right);
Vector3 operator-(Vector3 left, const Vector3& right);
Vector3 operator*(Vector3 left, const Vector3& right);
Vector3 operator*(Vector3 left, real_t value);
Vector3 operator*(real_t value, Vector3 right);
Vector3 operator/(Vector3 left, const Vector3& right);
Vector3 operator/(Vector3 left, real_t value);

bool operator==(const Vector3& left, const Vector3& right);
bool operator!=(const Vector3& left, const Vector3& right);
bool operator<(const Vector3& left, const Vector3& right);
bool operator<=(const Vector3& left, const Vector3& right);
bool operator>(const Vector3& left, const Vector3& right);
bool operator>=(const Vector3& left, const Vector3& right);

Vector3 vec3_cross(const Vector3& left, const Vector3& right);
} // namespace Rebel

#endif // VECTOR3_H
