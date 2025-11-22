// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/quat.h"

#include "common/basis.h"
#include "common/vector3.h"

#include <cmath>

namespace Rebel {
const Quat Quat::IDENTITY = Quat();

Quat::Quat(const real_t x, const real_t y, const real_t z, const real_t w) :
    x(x),
    y(y),
    z(z),
    w(w) {}

Quat::Quat(const Vector3& axis, const real_t angle) {
    set_axis_angle(axis, angle);
}

Quat::Quat(const Vector3& vector1, const Vector3& vector2) {
    const real_t dot_product    = vector1.dot(vector2);
    const Vector3 cross_product = vector1.cross(vector2);
    const real_t scale          = std::sqrt((1 + dot_product) * 2);
    if (dot_product < -1.0 + CMP_EPSILON) {
        // 180° flip. Arbitrarily use y-axis.
        x = 0;
        y = 1;
        z = 0;
        w = 0;
    } else {
        x = cross_product.x / scale;
        y = cross_product.y / scale;
        z = cross_product.z / scale;
        w = scale / 2;
    }
}

void Quat::operator+=(const Quat& right) {
    x += right.x;
    y += right.y;
    z += right.z;
    w += right.w;
}

void Quat::operator-=(const Quat& right) {
    x -= right.x;
    y -= right.y;
    z -= right.z;
    w -= right.w;
}

void Quat::operator*=(const Quat& right) {
    x = w * right.x + x * right.w + y * right.z - z * right.y;
    y = w * right.y + y * right.w + z * right.x - x * right.z;
    z = w * right.z + z * right.w + x * right.y - y * right.x;
    w = w * right.w - x * right.x - y * right.y - z * right.z;
}

void Quat::operator*=(const Vector3& vector3) {
    x = w * vector3.x + y * vector3.z - z * vector3.y;
    y = w * vector3.y + z * vector3.x - x * vector3.z;
    z = w * vector3.z + x * vector3.y - y * vector3.x;
    w = -x * vector3.x - y * vector3.y - z * vector3.z;
}

void Quat::operator*=(const real_t& value) {
    x *= value;
    y *= value;
    z *= value;
    w *= value;
}

void Quat::operator/=(const real_t& value) {
    x /= value;
    y /= value;
    z /= value;
    w /= value;
}

Quat::operator String() const {
    // TODO
    return {};
}

void Quat::set(
    const real_t new_x,
    const real_t new_y,
    const real_t new_z,
    const real_t new_w
) {
    x = new_x;
    y = new_y;
    z = new_z;
    w = new_w;
}

void Quat::get_axis_and_angle(Vector3& r_axis, real_t& r_angle) const {
    r_axis.x = x / std::sqrt(1 - w * w);
    r_axis.y = y / std::sqrt(1 - w * w);
    r_axis.z = z / std::sqrt(1 - w * w);
    r_angle  = 2 * std::acos(w);
}

void Quat::set_axis_angle(const Vector3& axis, const real_t angle) {
    const Vector3 unit_vector   = axis.normalized();
    const real_t sin_half_angle = std::sin(angle / 2);
    const real_t cos_half_angle = std::cos(angle / 2);
    if (unit_vector.length() == 0) {
        x = 0;
        y = 0;
        z = 0;
        w = 0;
    } else {
        x = unit_vector.x * sin_half_angle;
        y = unit_vector.y * sin_half_angle;
        z = unit_vector.z * sin_half_angle;
        w = cos_half_angle;
    }
}

Vector3 Quat::get_euler() const {
    return get_euler_yxz();
}

void Quat::set_euler(const Vector3& euler) {
    set_euler_yxz(euler);
}

// Returns a vector containing the Euler angles of rotation.
// Uses XYZ convention, where Z is the first rotation, then Y, then X.
Vector3 Quat::get_euler_yxz() const {
    const Basis basis(*this);
    return basis.get_euler_yxz();
}

// The euler vector represents the Euler angles of rotation around each axis.
// Uses YXZ convention, where Z is the first rotation, then X, then Y.
void Quat::set_euler_yxz(const Vector3& euler) {
    // Reference: Page A-6 of
    // https://ntrs.nasa.gov/archive/nasa/casi.ntrs.nasa.gov/19770024290.pdf
    const real_t half_y_angle     = euler.y / 2;
    const real_t half_x_angle     = euler.x / 2;
    const real_t half_z_angle     = euler.z / 2;
    const real_t cos_half_y_angle = std::cos(half_y_angle);
    const real_t sin_half_y_angle = std::sin(half_y_angle);
    const real_t cos_half_x_angle = std::cos(half_x_angle);
    const real_t sin_half_x_angle = std::sin(half_x_angle);
    const real_t cos_half_z_angle = std::cos(half_z_angle);
    const real_t sin_half_z_angle = std::sin(half_z_angle);

    x = sin_half_y_angle * cos_half_x_angle * sin_half_z_angle
      + cos_half_y_angle * sin_half_x_angle * cos_half_z_angle;
    y = sin_half_y_angle * cos_half_x_angle * cos_half_z_angle
      - cos_half_y_angle * sin_half_x_angle * sin_half_z_angle;
    z = -sin_half_y_angle * sin_half_x_angle * cos_half_z_angle
      + cos_half_y_angle * sin_half_x_angle * sin_half_z_angle;
    w = sin_half_y_angle * sin_half_x_angle * sin_half_z_angle
      + cos_half_y_angle * cos_half_x_angle * cos_half_z_angle;
}

// Returns a vector containing the Euler angles of rotation.
// Uses XYZ convention, where Z is the first rotation, then Y, then X.
Vector3 Quat::get_euler_xyz() const {
    const Basis basis(*this);
    return basis.get_euler_xyz();
}

// The euler vector represents the Euler angles of rotation around each axis.
// Uses XYZ convention, where Z is the first rotation, then Y, then X.
void Quat::set_euler_xyz(const Vector3& euler) {
    // Reference: Page A-2 of
    // https://ntrs.nasa.gov/archive/nasa/casi.ntrs.nasa.gov/19770024290.pdf
    const real_t half_x_angle     = euler.x / 2;
    const real_t half_y_angle     = euler.y / 2;
    const real_t half_z_angle     = euler.z / 2;
    const real_t cos_half_x_angle = std::cos(half_x_angle);
    const real_t sin_half_x_angle = std::sin(half_x_angle);
    const real_t cos_half_y_angle = std::cos(half_y_angle);
    const real_t sin_half_y_angle = std::sin(half_y_angle);
    const real_t cos_half_z_angle = std::cos(half_z_angle);
    const real_t sin_half_z_angle = std::sin(half_z_angle);

    x = sin_half_x_angle * cos_half_y_angle * cos_half_z_angle
      + sin_half_y_angle * sin_half_z_angle * cos_half_x_angle;
    y = -sin_half_x_angle * sin_half_z_angle * cos_half_y_angle
      + sin_half_y_angle * cos_half_x_angle * cos_half_z_angle;
    z = sin_half_x_angle * sin_half_y_angle * cos_half_z_angle
      + sin_half_z_angle * cos_half_x_angle * cos_half_y_angle;
    w = -sin_half_x_angle * sin_half_y_angle * sin_half_z_angle
      + cos_half_x_angle * cos_half_y_angle * cos_half_z_angle;
}

real_t Quat::dot(const Quat& right) const {
    return x * right.x + y * right.y + z * right.z + w * right.w;
}

real_t Quat::length() const {
    return std::sqrt(length_squared());
}

real_t Quat::length_squared() const {
    return dot(*this);
}

bool Quat::is_normalized() const {
    return std::abs(length_squared() - 1.0) < CMP_EPSILON;
}

void Quat::normalize() {
    *this /= length();
}

Quat Quat::normalized() const {
    return *this / length();
}

Quat Quat::inverse() const {
    return {-x, -y, -z, w};
}

Quat Quat::slerp(const Quat& destination, const real_t& factor) const {
    real_t cos_omega = dot(destination);
    Quat to{destination};
    // Adjust signs if necessary.
    if (cos_omega < 0.0) {
        cos_omega = -cos_omega;
        to        = -to;
    }
    real_t scale0 = 1 - factor;
    real_t scale1 = factor;
    if (1.0 - cos_omega > CMP_EPSILON) {
        // Don't use a linear approximation.
        const real_t omega     = std::acos(cos_omega);
        const real_t sin_omega = std::sin(omega);
        scale0                 = std::sin(scale0 * omega) / sin_omega;
        scale1                 = std::sin(scale1 * omega) / sin_omega;
    }
    return {
        (scale0 * x + scale1 * to.x),
        (scale0 * y + scale1 * to.y),
        (scale0 * z + scale1 * to.z),
        (scale0 * w + scale1 * to.w)
    };
}

Quat Quat::slerpni(const Quat& destination, const real_t& factor) const {
    const real_t cos_theta = dot(destination);
    if (fabs(cos_theta) > 0.9999) {
        return *this;
    }
    const real_t theta     = std::acos(cos_theta);
    const real_t sin_theta = 1 / std::sin(theta);
    const real_t scale0    = std::sin(factor * theta) * sin_theta;
    const real_t scale1    = std::sin((1.0 - factor) * theta) * sin_theta;
    return {
        (scale1 * x + scale0 * destination.x),
        (scale1 * y + scale0 * destination.y),
        (scale1 * z + scale0 * destination.z),
        (scale1 * w + scale0 * destination.w)
    };
}

Quat Quat::cubic_slerp(
    const Quat& destination,
    const Quat& prep,
    const Quat& postq,
    const real_t& factor
) const {
    const real_t factor2 = (1 - factor) * factor * 2;
    const Quat slerp1    = this->slerp(destination, factor);
    const Quat slerp2    = prep.slerpni(postq, factor);
    return slerp1.slerpni(slerp2, factor2);
}

Vector3 Quat::xform(const Vector3& vector3) const {
    const Quat result = (*this * vector3).inverse();
    return {result.x, result.y, result.z};
}

bool operator==(const Quat& left, const Quat& right) {
    return left.x == right.x && left.y == right.y && left.z == right.z
        && left.w == right.w;
}

bool operator!=(const Quat& left, const Quat& right) {
    return !(left == right);
}

Quat operator-(const Quat& quat) {
    return {-quat.x, -quat.y, -quat.z, -quat.w};
}

Quat operator+(Quat left, const Quat& right) {
    left += right;
    return left;
}

Quat operator-(Quat left, const Quat& right) {
    left -= right;
    return left;
}

Quat operator*(Quat left, const Quat& right) {
    left *= right;
    return left;
}

Quat operator*(Quat quat, const Vector3& vector3) {
    quat *= vector3;
    return quat;
}

Quat operator*(Quat quat, const real_t& value) {
    quat *= value;
    return quat;
}

Quat operator/(Quat quat, const real_t& value) {
    quat /= value;
    return quat;
}
} // namespace Rebel
