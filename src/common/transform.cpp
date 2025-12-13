// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/transform.h"

#include "common/aabb.h"
#include "common/basis.h"
#include "common/plane.h"
#include "common/quat.h"

namespace Rebel {

const Transform Transform::IDENTITY = Transform();
const Transform Transform::FLIP_X =
    Transform(-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0);
const Transform Transform::FLIP_Y =
    Transform(1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0);
const Transform Transform::FLIP_Z =
    Transform(1, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0);

Transform::Transform(const Basis& basis, const Vector3& origin) :
    basis(basis),
    origin(origin) {}

Transform::Transform(
    const real_t xx,
    const real_t xy,
    const real_t xz,
    const real_t yx,
    const real_t yy,
    const real_t yz,
    const real_t zx,
    const real_t zy,
    const real_t zz,
    const real_t tx,
    const real_t ty,
    const real_t tz
) :
    basis{xx, xy, xz, yx, yy, yz, zx, zy, zz},
    origin{tx, ty, tz} {}

void Transform::operator*=(const Transform& p_transform) {
    origin  = xform(p_transform.origin);
    basis  *= p_transform.basis;
}

Transform::operator String() const {
    return basis.operator String() + " - " + origin.operator String();
}

const Basis& Transform::get_basis() const {
    return basis;
}

void Transform::set_basis(const Basis& p_basis) {
    basis = p_basis;
}

const Vector3& Transform::get_origin() const {
    return origin;
}

void Transform::set_origin(const Vector3& p_origin) {
    origin = p_origin;
}

void Transform::set(
    const real_t xx,
    const real_t xy,
    const real_t xz,
    const real_t yx,
    const real_t yy,
    const real_t yz,
    const real_t zx,
    const real_t zy,
    const real_t zz,
    const real_t tx,
    const real_t ty,
    const real_t tz
) {
    basis  = {xx, xy, xz, yx, yy, yz, zx, zy, zz};
    origin = {tx, ty, tz};
}

void Transform::translate(const Vector3& translation) {
    for (int i = 0; i < 3; i++) {
        origin[i] += basis.elements[i].dot(translation);
    }
}

void Transform::translate(const real_t x, const real_t y, const real_t z) {
    translate(Vector3{x, y, z});
}

Transform Transform::translated(const Vector3& translation) const {
    Transform result = *this;
    result.translate(translation);
    return result;
}

void Transform::rotate(const Vector3& axis, const real_t radians) {
    *this = rotated(axis, radians);
}

Transform Transform::rotated(const Vector3& axis, const real_t radians) const {
    return Transform(Basis(axis, radians), Vector3()) * *this;
}

void Transform::rotate_basis(const Vector3& axis, const real_t radians) {
    basis.rotate(axis, radians);
}

void Transform::scale(const Vector3& factor) {
    basis.scale(factor);
    origin *= factor;
}

Transform Transform::scaled(const Vector3& factor) const {
    Transform result = *this;
    result.scale(factor);
    return result;
}

void Transform::scale_basis(const Vector3& factor) {
    basis.scale(factor);
}

Transform Transform::looking_at(const Vector3& target, const Vector3& up)
    const {
    Transform result = *this;
    result.set_look_at(origin, target, up);
    return result;
}

void Transform::set_look_at(
    const Vector3& eye,
    const Vector3& target,
    const Vector3& up
) {
    const Vector3 z_vector = (eye - target).normalized();
    const Vector3 x_vector = up.cross(z_vector).normalized();
    const Vector3 y_vector = z_vector.cross(x_vector).normalized();
    basis.set_axis(0, x_vector);
    basis.set_axis(1, y_vector);
    basis.set_axis(2, z_vector);
    origin = eye;
}

void Transform::invert() {
    affine_invert();
}

Transform Transform::inverse() const {
    Transform result = *this;
    result.invert();
    return result;
}

void Transform::affine_invert() {
    basis.invert();
    origin = basis.xform(-origin);
}

Transform Transform::affine_inverse() const {
    Transform result = *this;
    result.affine_invert();
    return result;
}

void Transform::orthonormalize() {
    basis.orthonormalize();
}

Transform Transform::orthonormalized() const {
    Transform result = *this;
    result.orthonormalize();
    return result;
}

Vector3 Transform::xform(const Vector3& vector3) const {
    return {
        basis.elements[0].dot(vector3) + origin.x,
        basis.elements[1].dot(vector3) + origin.y,
        basis.elements[2].dot(vector3) + origin.z
    };
}

Vector3 Transform::xform_inv(const Vector3& vector3) const {
    const Vector3 inverse_vector = vector3 - origin;
    return {
        basis.elements[0][0] * inverse_vector.x
            + basis.elements[1][0] * inverse_vector.y
            + basis.elements[2][0] * inverse_vector.z,
        basis.elements[0][1] * inverse_vector.x
            + basis.elements[1][1] * inverse_vector.y
            + basis.elements[2][1] * inverse_vector.z,
        basis.elements[0][2] * inverse_vector.x
            + basis.elements[1][2] * inverse_vector.y
            + basis.elements[2][2] * inverse_vector.z
    };
}

Plane Transform::xform(const Plane& plane) const {
    const Vector3 point     = xform(plane.normal * plane.d);
    const Vector3 direction = xform(point + plane.normal);
    const Vector3 normal    = (direction - point).normalized();
    const real_t distance   = normal.dot(point);
    return {normal, distance};
}

Plane Transform::xform_inv(const Plane& plane) const {
    const Vector3 point     = xform_inv(plane.normal * plane.d);
    const Vector3 direction = xform_inv(point + plane.normal);
    const Vector3 normal    = (direction - point).normalized();
    const real_t distance   = normal.dot(point);
    return {normal, distance};
}

AABB Transform::xform(const AABB& aabb) const {
    const Vector3 position = xform(aabb.position);
    const Vector3 x_length = basis.get_axis(0) * aabb.size.x;
    const Vector3 y_length = basis.get_axis(1) * aabb.size.y;
    const Vector3 z_length = basis.get_axis(2) * aabb.size.z;
    AABB result;
    result.position = position;
    result.expand_to(position + x_length);
    result.expand_to(position + y_length);
    result.expand_to(position + z_length);
    result.expand_to(position + x_length + y_length);
    result.expand_to(position + x_length + z_length);
    result.expand_to(position + y_length + z_length);
    result.expand_to(position + x_length + y_length + z_length);
    return result;
}

AABB Transform::xform_inv(const AABB& aabb) const {
    const Vector3 vertices[8] = {
        Vector3{
                aabb.position.x + aabb.size.x,
                aabb.position.y + aabb.size.y,
                aabb.position.z + aabb.size.z
        },
        Vector3{
                aabb.position.x + aabb.size.x,
                aabb.position.y + aabb.size.y,
                aabb.position.z
        },
        Vector3{
                aabb.position.x + aabb.size.x,
                aabb.position.y,
                aabb.position.z + aabb.size.z
        },
        Vector3{
                aabb.position.x + aabb.size.x,
                aabb.position.y,
                aabb.position.z
        },
        Vector3{
                aabb.position.x,
                aabb.position.y + aabb.size.y,
                aabb.position.z + aabb.size.z
        },
        Vector3{
                aabb.position.x,
                aabb.position.y + aabb.size.y,
                aabb.position.z
        },
        Vector3{
                aabb.position.x,
                aabb.position.y,
                aabb.position.z + aabb.size.z
        },
        Vector3{aabb.position.x,               aabb.position.y, aabb.position.z}
    };

    AABB result;
    result.position = xform_inv(vertices[0]);
    for (int i = 1; i < 8; i++) {
        result.expand_to(xform_inv(vertices[i]));
    }
    return result;
}

Transform Transform::inverse_xform(const Transform& other) const {
    const Vector3 translation = other.origin - origin;
    return {basis.transpose_xform(other.basis), basis.xform(translation)};
}

Transform Transform::interpolate_with(const Transform& to, const real_t factor)
    const {
    const Vector3 from_position = origin;
    const Quat from_rotation    = basis;
    const Vector3 from_scale    = basis.get_scale();
    const Vector3 to_position   = to.origin;
    const Quat to_rotation      = to.basis;
    const Vector3 to_scale      = to.basis.get_scale();
    Transform result;
    result.basis = from_rotation.slerp(to_rotation, factor);
    result.basis.scale(from_scale.linear_interpolate(to_scale, factor));
    result.origin = from_position.linear_interpolate(to_position, factor);
    return result;
}

bool operator==(const Transform& left, const Transform& right) {
    return left.basis == right.basis && left.origin == right.origin;
}

bool operator!=(const Transform& left, const Transform& right) {
    return !(left == right);
}

Transform operator*(Transform left, const Transform& right) {
    left *= right;
    return right;
}

Vector3 operator*(const Transform& transform, const Vector3& vector3) {
    return transform.xform(vector3);
}
} // namespace Rebel
