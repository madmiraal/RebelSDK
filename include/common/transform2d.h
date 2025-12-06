// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef TRANSFORM2D_H
#define TRANSFORM2D_H

#include "common/defs.h"
#include "common/vector2.h"

namespace Rebel {
class Rect2;
typedef Vector2 Size2;

// Note 1: Transform2D basis vectors are stored differently from 3D Basis.
// Transform2D uses column major column format. The 2D basis matrix looks like:
//     ┌                             ┐
//     │elements[0][0] elements[1][0]│
// M = │elements[0][1] elements[1][1]│
//     └                             ┘
// This is the opposite of the indices in mathematical texts.
// In a math book, M[12] corresponds to Transform2D elements[1][0].

// Note 2: Unlike 3D code, 2D code uses a left-hand coordinate system.
// Y-axis points down, and angles are measured clockwise from +X to +Y.

class Transform2D {
public:
    static const Transform2D IDENTITY;
    static const Transform2D FLIP_X;
    static const Transform2D FLIP_Y;

    Vector2 elements[3] = {};

    Transform2D() = default;
    Transform2D(
        real_t xx,
        real_t xy,
        real_t yx,
        real_t yy,
        real_t ox,
        real_t oy
    );
    Transform2D(real_t rotation, const Vector2& position);

    Vector2& operator[](int index);
    const Vector2& operator[](int index) const;

    void operator*=(const Transform2D& other);

    operator String() const;

    Vector2 get_axis(int axis) const;
    void set_axis(int axis, const Vector2& vector2);

    const Vector2& get_origin() const;
    void set_origin(const Vector2& new_origin);

    void translate(real_t x, real_t y);
    void translate(const Vector2& translation);
    Transform2D translated(const Vector2& translation) const;
    Transform2D untranslated() const;

    real_t get_rotation() const;
    void set_rotation(real_t radians);
    void rotate(real_t radians);
    Transform2D rotated(real_t radians) const;

    Size2 get_scale() const;
    void scale(const Size2& size);
    Transform2D scaled(const Size2& size) const;
    void scale_basis(const Size2& basis_size);
    Transform2D basis_scaled(const Size2& bais_size) const;

    void set_rotation_and_scale(real_t radians, const Size2& size);

    void orthonormalize();
    Transform2D orthonormalized() const;

    void invert();
    Transform2D inverse() const;
    void affine_invert();
    Transform2D affine_inverse() const;

    real_t tdotx(const Vector2& vector2) const;
    real_t tdoty(const Vector2& vector2) const;

    Vector2 xform(const Vector2& vector2) const;
    Vector2 xform_inv(const Vector2& vector2) const;
    Vector2 basis_xform(const Vector2& vector2) const;
    Vector2 basis_xform_inv(const Vector2& vector2) const;

    Rect2 xform(const Rect2& rectangle) const;
    Rect2 xform_inv(const Rect2& rectangle) const;

    real_t basis_determinant() const;

    Transform2D interpolate_with(const Transform2D& to, real_t factor) const;
};

Transform2D operator*(Transform2D left, const Transform2D& right);
bool operator==(const Transform2D& left, const Transform2D& right);
bool operator!=(const Transform2D& left, const Transform2D& right);
} // namespace Rebel

#endif // TRANSFORM2D_H
