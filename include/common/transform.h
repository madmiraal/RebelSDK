// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef TRANSFORM_H
#define TRANSFORM_H

#include "common/aabb.h"
#include "common/basis.h"
#include "common/plane.h"

namespace Rebel {
class Transform {
public:
    static const Transform IDENTITY;
    static const Transform FLIP_X;
    static const Transform FLIP_Y;
    static const Transform FLIP_Z;

    Basis basis;
    Vector3 origin;

    Transform() = default;
    Transform(const Basis& basis, const Vector3& origin = Vector3());
    Transform(
        real_t xx,
        real_t xy,
        real_t xz,
        real_t yx,
        real_t yy,
        real_t yz,
        real_t zx,
        real_t zy,
        real_t zz,
        real_t tx,
        real_t ty,
        real_t tz
    );

    void operator*=(const Transform& p_transform);

    operator String() const;

    const Basis& get_basis() const;
    void set_basis(const Basis& p_basis);
    const Vector3& get_origin() const;
    void set_origin(const Vector3& p_origin);
    void set(
        real_t xx,
        real_t xy,
        real_t xz,
        real_t yx,
        real_t yy,
        real_t yz,
        real_t zx,
        real_t zy,
        real_t zz,
        real_t tx,
        real_t ty,
        real_t tz
    );

    void translate(const Vector3& translation);
    void translate(real_t x, real_t y, real_t z);
    Transform translated(const Vector3& translation) const;

    void rotate(const Vector3& axis, real_t radians);
    Transform rotated(const Vector3& axis, real_t radians) const;
    void rotate_basis(const Vector3& axis, real_t radians);

    void scale(const Vector3& factor);
    Transform scaled(const Vector3& factor) const;
    void scale_basis(const Vector3& factor);

    Transform looking_at(const Vector3& target, const Vector3& up) const;
    void set_look_at(
        const Vector3& eye,
        const Vector3& target,
        const Vector3& up
    );

    void invert();
    Transform inverse() const;
    void affine_invert();
    Transform affine_inverse() const;

    void orthonormalize();
    Transform orthonormalized() const;

    Vector3 xform(const Vector3& vector3) const;
    Vector3 xform_inv(const Vector3& vector3) const;
    Plane xform(const Plane& plane) const;
    Plane xform_inv(const Plane& plane) const;
    AABB xform(const AABB& aabb) const;
    AABB xform_inv(const AABB& aabb) const;

    Transform inverse_xform(const Transform& other) const;

    Transform interpolate_with(const Transform& to, real_t factor) const;
};

bool operator==(const Transform& left, const Transform& right);
bool operator!=(const Transform& left, const Transform& right);
Transform operator*(const Transform& left, const Transform& right);
Vector3 operator*(const Transform& transform, const Vector3& vector3);
} // namespace Rebel

#endif // TRANSFORM_H
