// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef QUAT_H
#define QUAT_H

#include "defs.h"

namespace Rebel {
class Vector3;

class Quat {
public:
    static const Quat IDENTITY;

    real_t x = 0;
    real_t y = 0;
    real_t z = 0;
    real_t w = 1;

    Quat() = default;
    Quat(real_t x, real_t y, real_t z, real_t w);
    Quat(const Vector3& axis, real_t angle);
    // Shortest rotation from one vector to another.
    Quat(const Vector3& vector1, const Vector3& vector2);

    void operator+=(const Quat& right);
    void operator-=(const Quat& right);
    void operator*=(const Quat& right);
    void operator*=(const Vector3& vector3);
    void operator*=(const real_t& value);
    void operator/=(const real_t& value);

    operator String() const;

    void set(real_t new_x, real_t new_y, real_t new_z, real_t new_w);
    void get_axis_and_angle(Vector3& r_axis, real_t& r_angle) const;
    void set_axis_angle(const Vector3& axis, real_t angle);
    Vector3 get_euler() const;
    void set_euler(const Vector3& euler);
    Vector3 get_euler_yxz() const;
    void set_euler_yxz(const Vector3& euler);
    Vector3 get_euler_xyz() const;
    void set_euler_xyz(const Vector3& euler);

    real_t dot(const Quat& right) const;
    real_t length() const;
    real_t length_squared() const;

    bool is_normalized() const;
    void normalize();
    Quat normalized() const;

    Quat inverse() const;

    Quat slerp(const Quat& destination, const real_t& factor) const;
    Quat slerpni(const Quat& destination, const real_t& factor) const;
    Quat cubic_slerp(
        const Quat& destination,
        const Quat& prep,
        const Quat& postq,
        const real_t& factor
    ) const;

    Vector3 xform(const Vector3& vector3) const;
};

bool operator==(const Quat& left, const Quat& right);
bool operator!=(const Quat& left, const Quat& right);
Quat operator-(const Quat& quat);
Quat operator+(Quat left, const Quat& right);
Quat operator-(Quat left, const Quat& right);
Quat operator*(Quat left, const Quat& right);
Quat operator*(Quat quat, const Vector3& vector3);
Quat operator*(Quat quat, const real_t& value);
Quat operator/(Quat quat, const real_t& value);
} // namespace Rebel

#endif // QUAT_H
