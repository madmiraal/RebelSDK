// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/vector3.h"

#include "common/basis.h"
#include "common/rebelmath.h"
#include "common/string.h"

#include <cmath>

namespace Rebel {
const Vector3 Vector3::ZERO = Vector3();
const Vector3 Vector3::ONE  = Vector3(1, 1, 1);
const Vector3 Vector3::INF  = Vector3(INFINITY, INFINITY, INFINITY);

const Vector3 Vector3::LEFT    = Vector3(-1, 0, 0);
const Vector3 Vector3::RIGHT   = Vector3(1, 0, 0);
const Vector3 Vector3::UP      = Vector3(0, 1, 0);
const Vector3 Vector3::DOWN    = Vector3(0, -1, 0);
const Vector3 Vector3::FORWARD = Vector3(0, 0, -1);
const Vector3 Vector3::BACK    = Vector3(0, 0, 1);

Vector3::Vector3() : x(0), y(0), z(0) {}

Vector3::Vector3(const real_t x, const real_t y, const real_t z) :
    x(x),
    y(y),
    z(z) {}

real_t& Vector3::operator[](const int axis) {
    return coord[axis];
}

const real_t& Vector3::operator[](const int axis) const {
    return coord[axis];
}

Vector3& Vector3::operator+=(const Vector3& other) {
    x += other.x;
    y += other.y;
    z += other.z;
    return *this;
}

Vector3& Vector3::operator-=(const Vector3& other) {
    x -= other.x;
    y -= other.y;
    z -= other.z;
    return *this;
}

Vector3& Vector3::operator*=(const Vector3& other) {
    x *= other.x;
    y *= other.y;
    z *= other.z;
    return *this;
}

Vector3& Vector3::operator*=(const real_t value) {
    x *= value;
    y *= value;
    z *= value;
    return *this;
}

Vector3& Vector3::operator/=(const Vector3& other) {
    x /= other.x;
    y /= other.y;
    z /= other.z;
    return *this;
}

Vector3& Vector3::operator/=(const real_t value) {
    x /= value;
    y /= value;
    z /= value;
    return *this;
}

Vector3::operator String() const {
    return String::num(x) + ", " + String::num(y) + ", " + String::num(z);
}

int Vector3::min_axis() const {
    if (x < y) {
        if (x < z) {
            return 0;
        }
        return 2;
    }
    // y < x
    if (y < z) {
        return 1;
    }
    return 2;
}

int Vector3::max_axis() const {
    if (x > y) {
        if (x > z) {
            return 0;
        }
        return 2;
    }
    // y > x
    if (y > z) {
        return 1;
    }
    return 2;
}

real_t Vector3::dot(const Vector3& b) const {
    return x * b.x + y * b.y + z * b.z;
}

Vector3 Vector3::cross(const Vector3& b) const {
    return {y * b.z - z * b.y, z * b.x - x * b.z, x * b.y - y * b.x};
}

Vector3 Vector3::inverse() const {
    return {1.f / x, 1.f / y, 1.f / z};
}

Basis Vector3::outer(const Vector3& b) const {
    return {
        {x * b.x, x * b.y, x * b.z},
        {y * b.x, y * b.y, y * b.z},
        {z * b.x, z * b.y, z * b.z}
    };
}

Vector3 Vector3::abs() const {
    return {std::fabs(x), std::fabs(y), std::fabs(z)};
}

Vector3 Vector3::floor() const {
    return {std::floor(x), std::floor(y), std::floor(z)};
}

Vector3 Vector3::ceil() const {
    return {std::ceil(x), std::ceil(y), std::ceil(z)};
}

void Vector3::snap(const real_t value) {
    x = Math::stepify(x, value);
    y = Math::stepify(y, value);
    z = Math::stepify(z, value);
}

Vector3 Vector3::snapped(const float value) const {
    Vector3 result = *this;
    result.snap(value);
    return result;
}

real_t Vector3::length() const {
    return std::sqrt(length_squared());
}

real_t Vector3::length_squared() const {
    return x * x + y * y + z * z;
}

real_t Vector3::distance_to(const Vector3& other) const {
    return std::sqrt(distance_squared_to(other));
}

real_t Vector3::distance_squared_to(const Vector3& other) const {
    return (other - *this).length_squared();
}

bool Vector3::is_normalized() const {
    return std::abs(length_squared() - 1.f) < CMP_EPSILON;
}

void Vector3::normalize() {
    operator/=(length());
}

Vector3 Vector3::normalized() const {
    Vector3 result = *this;
    result.normalize();
    return result;
}

void Vector3::rotate(const Vector3& axis, const real_t phi) {
    *this = Basis(axis, phi).xform(*this);
}

Vector3 Vector3::rotated(const Vector3& axis, const real_t phi) const {
    Vector3 result = *this;
    result.rotate(axis, phi);
    return result;
}

real_t Vector3::angle_to(const Vector3& other) const {
    return std::atan2(cross(other).length(), dot(other));
}

Vector3 Vector3::direction_to(const Vector3& other) const {
    Vector3 result(other.x - x, other.y - y, other.z - z);
    result.normalize();
    return result;
}

Vector3 Vector3::project(const Vector3& other) const {
    return other * (dot(other) / other.length_squared());
}

Vector3 Vector3::move_toward(const Vector3& to, const real_t factor) const {
    const Vector3 from     = *this;
    const Vector3 movement = to - from;
    const real_t distance  = movement.length();
    if (distance <= factor || distance < CMP_EPSILON) {
        return to;
    }
    return from + movement / distance * factor;
}

Vector3 Vector3::bounce(const Vector3& normal) const {
    return -reflect(normal);
}

Vector3 Vector3::reflect(const Vector3& normal) const {
    return -(*this - normal * this->dot(normal) * 2.0);
}

Vector3 Vector3::slide(const Vector3& other) const {
    return *this - other * this->dot(other);
}

Vector3 Vector3::linear_interpolate(const Vector3& to, const real_t factor)
    const {
    return {
        x + factor * (to.x - x),
        y + factor * (to.y - y),
        z + factor * (to.z - z)
    };
}

Vector3 Vector3::slerp(const Vector3& to, const real_t factor) const {
    const real_t angle = angle_to(to);
    return rotated(cross(to).normalized(), angle * factor);
}

Vector3 Vector3::cubic_interpolate(
    const Vector3& to,
    const Vector3& from_direction,
    const Vector3& to_direction,
    const real_t factor
) const {
    const Vector3 from          = *this;
    const real_t factor_squared = factor * factor;
    const real_t factor_cubed   = factor_squared * factor;

    return (from * 2 + (-from_direction + to) * factor
            + (from_direction * 2 - from * 5 + to * 4 - to_direction)
                  * factor_squared
            + (-from_direction + from * 3 - to * 3 + to_direction)
                  * factor_cubed)
         / 2;
}

Vector3 operator-(const Vector3& vector3) {
    return {-vector3.x, -vector3.y, -vector3.z};
}

Vector3 operator+(Vector3 left, const Vector3& right) {
    left += right;
    return left;
}

Vector3 operator-(Vector3 left, const Vector3& right) {
    left -= right;
    return left;
}

Vector3 operator*(Vector3 left, const Vector3& right) {
    left *= right;
    return left;
}

Vector3 operator*(Vector3 left, const real_t value) {
    left *= value;
    return left;
}

Vector3 operator*(const real_t value, Vector3 right) {
    right *= value;
    return right;
}

Vector3 operator/(Vector3 left, const Vector3& right) {
    left /= right;
    return left;
}

Vector3 operator/(Vector3 left, const real_t value) {
    left /= value;
    return left;
}

bool operator==(const Vector3& left, const Vector3& right) {
    return left.x == right.x && left.y == right.y && left.z == right.z;
}

bool operator!=(const Vector3& left, const Vector3& right) {
    return !(left == right);
}

bool operator<(const Vector3& left, const Vector3& right) {
    if (left.x == right.x) {
        if (left.y == right.y) {
            return left.z < right.z;
        }
        return left.y < right.y;
    }
    return left.x < right.x;
}

bool operator<=(const Vector3& left, const Vector3& right) {
    return left == right || left < right;
}

bool operator>(const Vector3& left, const Vector3& right) {
    if (left.x == right.x) {
        if (left.y == right.y) {
            return left.z > right.z;
        }
        return left.y > right.y;
    }
    return left.x > right.x;
}

bool operator>=(const Vector3& left, const Vector3& right) {
    return left == right || left > right;
}

Vector3 vec3_cross(const Vector3& left, const Vector3& right) {
    return left.cross(right);
}
} // namespace Rebel
