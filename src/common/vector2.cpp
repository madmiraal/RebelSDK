// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/vector2.h"

#include "common/rebelmath.h"
#include "common/string.h"

#include <cmath>

namespace Rebel {
const Vector2 Vector2::ZERO = Vector2();
const Vector2 Vector2::ONE  = Vector2(1, 1);
const Vector2 Vector2::INF  = Vector2(INFINITY, INFINITY);

const Vector2 Vector2::LEFT  = Vector2(-1, 0);
const Vector2 Vector2::RIGHT = Vector2(1, 0);
const Vector2 Vector2::UP    = Vector2(0, -1);
const Vector2 Vector2::DOWN  = Vector2(0, 1);

Vector2::Vector2() : x(0), y(0) {}

Vector2::Vector2(const real_t x, const real_t y) : x(x), y(y) {}

real_t& Vector2::operator[](const int index) {
    return index ? y : x;
}

const real_t& Vector2::operator[](const int index) const {
    return index ? y : x;
}

void Vector2::operator+=(const Vector2& other) {
    x += other.x;
    y += other.y;
}

void Vector2::operator-=(const Vector2& other) {
    x -= other.x;
    y -= other.y;
}

void Vector2::operator*=(const Vector2& other) {
    x *= other.x;
    y *= other.y;
}

void Vector2::operator*=(const real_t value) {
    x *= value;
    y *= value;
}

void Vector2::operator/=(const Vector2& other) {
    x /= other.x;
    y /= other.y;
}

void Vector2::operator/=(const real_t value) {
    x /= value;
    y /= value;
}

Vector2::operator String() const {
    return String::num(x) + ", " + String::num(y);
}

real_t Vector2::dot(const Vector2& other) const {
    return x * other.x + y * other.y;
}

real_t Vector2::cross(const Vector2& other) const {
    return x * other.y - y * other.x;
}

Vector2 Vector2::cross(const real_t value) const {
    return {value * y, -value * x};
}

real_t Vector2::aspect() const {
    return width / height;
}

Vector2 Vector2::abs() const {
    return {std::fabs(x), std::fabs(y)};
}

Vector2 Vector2::floor() const {
    return {std::floor(x), std::floor(y)};
}

Vector2 Vector2::snapped(const Vector2& other) const {
    return {Math::stepify(x, other.x), Math::stepify(y, other.y)};
}

Vector2 Vector2::clamped(const real_t maximum_length) const {
    const real_t current_length = length();
    Vector2 result              = *this;
    if (current_length > 0 && maximum_length < current_length) {
        result /= current_length;
        result *= maximum_length;
    }
    return result;
}

Vector2 Vector2::tangent() const {
    return {y, -x};
}

real_t Vector2::length() const {
    return std::sqrt(length_squared());
}

real_t Vector2::length_squared() const {
    return x * x + y * y;
}

real_t Vector2::distance_to(const Vector2& other) const {
    return std::sqrt(distance_squared_to(other));
}

real_t Vector2::distance_squared_to(const Vector2& other) const {
    return (x - other.x) * (x - other.x) + (y - other.y) * (y - other.y);
}

void Vector2::normalize() {
    const real_t current_length = length();
    if (current_length != 0) {
        x /= current_length;
        y /= current_length;
    }
}

Vector2 Vector2::normalized() const {
    Vector2 result = *this;
    result.normalize();
    return result;
}

void Vector2::set_rotation(const real_t radians) {
    x = std::cos(radians);
    y = std::sin(radians);
}

Vector2 Vector2::rotated(const real_t radians) const {
    Vector2 result;
    result.set_rotation(angle() + radians);
    result *= length();
    return result;
}

real_t Vector2::angle() const {
    return std::atan2(y, x);
}

real_t Vector2::angle_to(const Vector2& other) const {
    return std::atan2(cross(other), dot(other));
}

real_t Vector2::angle_to_point(const Vector2& point) const {
    return std::atan2(y - point.y, x - point.x);
}

Vector2 Vector2::direction_to(const Vector2& other) const {
    Vector2 result(other.x - x, other.y - y);
    result.normalize();
    return result;
}

Vector2 Vector2::project(const Vector2& other) const {
    const real_t length = dot(other) / other.dot(other);
    return *this * length;
}

Vector2 Vector2::plane_project(const real_t distance, const Vector2& direction)
    const {
    const real_t length = dot(direction) - distance;
    return direction - *this * length;
}

Vector2 Vector2::move_toward(const Vector2& to, const real_t factor) const {
    const Vector2 from     = *this;
    const Vector2 movement = to - from;
    const real_t distance  = movement.length();
    if (distance <= factor || distance < CMP_EPSILON) {
        return to;
    }
    return from + movement / distance * factor;
}

Vector2 Vector2::bounce(const Vector2& normal) const {
    return -reflect(normal);
}

Vector2 Vector2::reflect(const Vector2& normal) const {
    return -(*this - normal * dot(normal) * 2);
}

Vector2 Vector2::slide(const Vector2& other) const {
    return other - *this * dot(other);
}

Vector2 Vector2::linear_interpolate(const Vector2& to, const real_t factor)
    const {
    Vector2 result  = *this;
    result.x       += factor * (to.x - x);
    result.y       += factor * (to.y - y);
    return result;
}

Vector2 Vector2::cubic_interpolate(
    const Vector2& to,
    const Vector2& from_direction,
    const Vector2& to_direction,
    const real_t factor
) const {
    const Vector2 from          = *this;
    const real_t factor_squared = factor * factor;
    const real_t factor_cubed   = factor_squared * factor;
    return (from * 2 + (-from_direction + to) * factor
            + (from_direction * 2 - from * 5 + to * 4 - to_direction)
                  * factor_squared
            + (-from_direction + from * 3 - to * 3 + to_direction)
                  * factor_cubed)
         / 2;
}

Vector2 Vector2::linear_interpolate(
    const Vector2& from,
    const Vector2& to,
    const real_t factor
) {
    return from.linear_interpolate(to, factor);
}

Vector2 operator-(const Vector2& vector2) {
    return {-vector2.x, -vector2.y};
}

Vector2 operator+(Vector2 left, const Vector2& right) {
    left += right;
    return left;
}

Vector2 operator-(Vector2 left, const Vector2& right) {
    left -= right;
    return left;
}

Vector2 operator*(Vector2 left, const Vector2& right) {
    left *= right;
    return left;
}

Vector2 operator*(Vector2 left, const real_t value) {
    left *= value;
    return left;
}

Vector2 operator*(const real_t value, Vector2 right) {
    right *= value;
    return right;
}

Vector2 operator/(Vector2 left, const Vector2& right) {
    left /= right;
    return left;
}

Vector2 operator/(Vector2 left, const real_t value) {
    left /= value;
    return left;
}

bool operator==(const Vector2& left, const Vector2& right) {
    return left.x == right.x && left.y == right.y;
}

bool operator!=(const Vector2& left, const Vector2& right) {
    return !(left == right);
}

bool operator<(const Vector2& left, const Vector2& right) {
    if (left.x == right.x) {
        return left.y < right.y;
    }
    return left.x < right.x;
}

bool operator<=(const Vector2& left, const Vector2& right) {
    return left == right || left < right;
}

bool operator>(const Vector2& left, const Vector2& right) {
    if (left.x == right.x) {
        return left.y > right.y;
    }
    return left.x > right.x;
}

bool operator>=(const Vector2& left, const Vector2& right) {
    return left == right || left > right;
}

namespace Math {
Vector2 cartesian2polar(const Vector2& cartesian) {
    return {cartesian.length(), std::atan2(cartesian.y, cartesian.x)};
}

Vector2 polar2cartesian(const Vector2& polar) {
    return {polar.x * std::cos(polar.y), polar.x * std::sin(polar.y)};
}
} // namespace Math
} // namespace Rebel
