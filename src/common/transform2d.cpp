// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/transform2d.h"

#include "common/rect2.h"
#include "common/string.h"
#include "common/vector2.h"

#include <cmath>
#include <utility>

namespace Rebel {
const Transform2D Transform2D::IDENTITY;
const Transform2D Transform2D::FLIP_X = Transform2D{-1, 0, 0, 1, 0, 0};
const Transform2D Transform2D::FLIP_Y = Transform2D{1, 0, 0, -1, 0, 0};

Transform2D::Transform2D(
    real_t xx,
    real_t xy,
    real_t yx,
    real_t yy,
    real_t ox,
    real_t oy
) :
    elements{
        {xx, xy},
        {yx, yy},
        {ox, oy}
} {}

Transform2D::Transform2D(const real_t rotation, const Vector2& position) :
    elements{
        {std::cos(rotation), std::sin(rotation)},
        {-std::sin(rotation), std::cos(rotation)},
        {position}
} {}

const Vector2& Transform2D::operator[](const int index) const {
    return elements[index];
}

Vector2& Transform2D::operator[](const int index) {
    return elements[index];
}

void Transform2D::operator*=(const Transform2D& other) {
    elements[0][0] = tdotx(other.elements[0]);
    elements[0][1] = tdoty(other.elements[0]);
    elements[1][0] = tdotx(other.elements[1]);
    elements[1][1] = tdoty(other.elements[1]);
    elements[2]    = xform(other.elements[2]);
}

Transform2D::operator String() const {
    return String(
        String() + elements[0] + ", " + elements[1] + ", " + elements[2]
    );
}

Vector2 Transform2D::get_axis(const int axis) const {
    ERR_FAIL_INDEX_V(axis, 3, Vector2());
    return elements[axis];
}

void Transform2D::set_axis(const int axis, const Vector2& vector2) {
    ERR_FAIL_INDEX(axis, 3);
    elements[axis] = vector2;
}

const Vector2& Transform2D::get_origin() const {
    return elements[2];
}

void Transform2D::set_origin(const Vector2& new_origin) {
    elements[2] = new_origin;
}

void Transform2D::translate(const real_t x, const real_t y) {
    translate(Vector2(x, y));
}

void Transform2D::translate(const Vector2& translation) {
    elements[2] += basis_xform(translation);
}

Transform2D Transform2D::translated(const Vector2& translation) const {
    Transform2D result = *this;
    result.translate(translation);
    return result;
}

Transform2D Transform2D::untranslated() const {
    Transform2D result = *this;
    result.elements[2] = Vector2();
    return result;
}

real_t Transform2D::get_rotation() const {
    Transform2D transform = orthonormalized();
    if (basis_determinant() < 0) {
        transform.scale_basis(Size2(-1, -1));
    }
    return std::atan2(transform[0].y, transform[0].x);
}

void Transform2D::set_rotation(const real_t radians) {
    elements[0][0] = std::cos(radians);
    elements[0][1] = std::sin(radians);
    elements[1][0] = -std::sin(radians);
    elements[1][1] = std::cos(radians);
}

void Transform2D::rotate(const real_t radians) {
    *this = rotated(radians);
}

Transform2D Transform2D::rotated(const real_t radians) const {
    return Transform2D(radians, Vector2()) * *this;
}

Size2 Transform2D::get_scale() const {
    const real_t sign = basis_determinant() > 0 ? 1 : -1;
    return sign * Size2(elements[0].length(), elements[1].length());
}

void Transform2D::scale(const Size2& size) {
    scale_basis(size);
    elements[2] *= size;
}

Transform2D Transform2D::scaled(const Size2& size) const {
    Transform2D result = *this;
    result.scale(size);
    return result;
}

void Transform2D::scale_basis(const Size2& basis_size) {
    elements[0][0] *= basis_size.x;
    elements[0][1] *= basis_size.y;
    elements[1][0] *= basis_size.x;
    elements[1][1] *= basis_size.y;
}

Transform2D Transform2D::basis_scaled(const Size2& bais_size) const {
    Transform2D result = *this;
    result.scale_basis(bais_size);
    return result;
}

void Transform2D::set_rotation_and_scale(
    const real_t radians,
    const Size2& size
) {
    elements[0][0] = std::cos(radians) * size.x;
    elements[0][1] = std::sin(radians) * size.x;
    elements[1][0] = -std::sin(radians) * size.y;
    elements[1][1] = std::cos(radians) * size.y;
}

void Transform2D::orthonormalize() {
    // Gram-Schmidt Process
    Vector2 x = elements[0];
    Vector2 y = elements[1];
    x.normalize();
    y = y - x * x.dot(y);
    y.normalize();
    elements[0] = x;
    elements[1] = y;
}

Transform2D Transform2D::orthonormalized() const {
    Transform2D result = *this;
    result.orthonormalize();
    return result;
}

void Transform2D::invert() {
    // FIXME: We are assuming the basis is a rotation matrix, with no scaling.
    // Transform2D::affine_inverse can handle matrices with scaling.
    std::swap(elements[0][1], elements[1][0]);
    elements[2] = basis_xform(-elements[2]);
}

Transform2D Transform2D::inverse() const {
    Transform2D result = *this;
    result.invert();
    return result;
}

void Transform2D::affine_invert() {
    const real_t determinant = basis_determinant();
    ERR_FAIL_COND(determinant == 0);
    const real_t determinant_inverse = 1 / determinant;
    std::swap(elements[0][0], elements[1][1]);
    elements[0] *= Vector2(determinant_inverse, -determinant_inverse);
    elements[1] *= Vector2(-determinant_inverse, determinant_inverse);
    elements[2]  = basis_xform(-elements[2]);
}

Transform2D Transform2D::affine_inverse() const {
    Transform2D result = *this;
    result.affine_invert();
    return result;
}

real_t Transform2D::tdotx(const Vector2& vector2) const {
    return elements[0][0] * vector2.x + elements[1][0] * vector2.y;
}

real_t Transform2D::tdoty(const Vector2& vector2) const {
    return elements[0][1] * vector2.x + elements[1][1] * vector2.y;
}

Vector2 Transform2D::xform(const Vector2& vector2) const {
    return Vector2(tdotx(vector2), tdoty(vector2)) + elements[2];
}

Vector2 Transform2D::xform_inv(const Vector2& vector2) const {
    const Vector2 translation = vector2 - elements[2];
    return {elements[0].dot(translation), elements[1].dot(translation)};
}

Vector2 Transform2D::basis_xform(const Vector2& vector2) const {
    return {tdotx(vector2), tdoty(vector2)};
}

Vector2 Transform2D::basis_xform_inv(const Vector2& vector2) const {
    return {elements[0].dot(vector2), elements[1].dot(vector2)};
}

Rect2 Transform2D::xform(const Rect2& rectangle) const {
    const Vector2 x        = elements[0] * rectangle.size.x;
    const Vector2 y        = elements[1] * rectangle.size.y;
    const Vector2 position = xform(rectangle.position);
    Rect2 result;
    result.position = position;
    result.expand_to(position + x);
    result.expand_to(position + y);
    result.expand_to(position + x + y);
    return result;
}

Rect2 Transform2D::xform_inv(const Rect2& rectangle) const {
    Rect2 result;
    result.position = xform_inv(rectangle.position);
    result.expand_to(xform_inv(
        Vector2(rectangle.position.x, rectangle.position.y + rectangle.size.y)
    ));
    result.expand_to(xform_inv(Vector2(
        rectangle.position.x + rectangle.size.x,
        rectangle.position.y + rectangle.size.y
    )));
    result.expand_to(xform_inv(
        Vector2(rectangle.position.x + rectangle.size.x, rectangle.position.y)
    ));
    return result;
}

real_t Transform2D::basis_determinant() const {
    return elements[0].x * elements[1].y - elements[0].y * elements[1].x;
}

Transform2D Transform2D::interpolate_with(
    const Transform2D& to,
    const real_t factor
) const {
    const Vector2 from_position = get_origin();
    const Vector2 to_position   = to.get_origin();
    const real_t from_radians   = get_rotation();
    const real_t to_radians     = to.get_rotation();
    const Size2 from_size       = get_scale();
    const Size2 to_size         = to.get_scale();
    // Slerp rotation.
    const Vector2 from_rotation(std::cos(from_radians), std::sin(from_radians));
    const Vector2 to_rotation(std::cos(to_radians), std::sin(to_radians));
    real_t dot = from_rotation.dot(to_rotation);
    // Clamp dot [-1, 1].
    if (dot < -1) {
        dot = -1;
    } else if (dot > 1.0) {
        dot = 1;
    }
    Vector2 rotation;
    if (dot > 0.9995) {
        // Use linear interpolation to avoid numerical precision issues.
        rotation =
            from_rotation.linear_interpolate(to_rotation, factor).normalized();
    } else {
        const real_t angle = factor * std::acos(dot);
        rotation           = from_rotation * std::cos(angle)
                 + (to_rotation - from_rotation * dot).normalized()
                       * std::sin(angle);
    }
    Transform2D result(
        std::atan2(rotation.y, rotation.x),
        Vector2::linear_interpolate(from_position, to_position, factor)
    );
    result.scale_basis(Vector2::linear_interpolate(from_size, to_size, factor));
    return result;
}

Transform2D operator*(Transform2D left, const Transform2D& right) {
    left *= right;
    return left;
}

bool operator==(const Transform2D& left, const Transform2D& right) {
    for (int i = 0; i < 3; i++) {
        if (left.elements[i] != right.elements[i]) {
            return false;
        }
    }
    return true;
}

bool operator!=(const Transform2D& left, const Transform2D& right) {
    return !(left == right);
}
} // namespace Rebel
