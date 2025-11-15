// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/plane.h"

#include <cmath>

namespace Rebel {
constexpr real_t PLANE_DOT_EPSILON = 0.999;
constexpr real_t PLANE_EPSILON     = 0.0001;

Plane::Plane(const Vector3& normal, const real_t distance) :
    normal(normal),
    d(distance) {}

Plane::Plane(const Vector3& point, const Vector3& normal) :
    Plane{normal, normal.dot(point)} {}

Plane::Plane(
    real_t normal_x,
    real_t normal_y,
    real_t normal_z,
    const real_t distance
) :
    Plane{
        {normal_x, normal_y, normal_z},
        distance
} {}

Plane::Plane(
    const Vector3& point1,
    const Vector3& point2,
    const Vector3& point3,
    const Direction direction
) {
    if (direction == Direction::CLOCKWISE) {
        normal = (point1 - point3).cross(point1 - point2);
    } else {
        normal = (point1 - point2).cross(point1 - point3);
    }
    normal.normalize();
    d = normal.dot(point1);
}

Plane::operator String() const {
    // TODO
    // return normal.operator String() + ", " + rtos(d);
    return {};
}

Vector3 Plane::get_normal() const {
    return normal;
}

void Plane::set_normal(const Vector3& new_normal) {
    normal = new_normal;
}

bool Plane::is_almost_like(const Plane& right) const {
    return normal.dot(right.normal) > PLANE_DOT_EPSILON
        && fabs(d - right.d) < PLANE_EPSILON;
}

bool Plane::is_point_over(const Vector3& point) const {
    return normal.dot(point) > d;
}

bool Plane::has_point(const Vector3& point, const real_t epsilon) const {
    const double separation = fabs(normal.dot(point) - d);
    return separation <= epsilon;
}

bool Plane::intersect_3(
    const Plane& plane1,
    const Plane& plane2,
    Vector3* result
) const {
    const real_t alignment =
        vec3_cross(normal, plane1.normal).dot(plane2.normal);
    if (fabs(alignment) <= CMP_EPSILON) {
        return false;
    }
    if (result) {
        *result = (vec3_cross(plane1.normal, plane2.normal) * d
                   + vec3_cross(plane2.normal, normal) * plane1.d
                   + vec3_cross(normal, plane1.normal) * plane2.d)
                / alignment;
    }
    return true;
}

bool Plane::intersects_ray(
    const Vector3 from,
    const Vector3 direction,
    Vector3* result
) const {
    const real_t alignment = normal.dot(direction);
    if (fabs(alignment) <= CMP_EPSILON) {
        return false;
    }
    const real_t distance = (normal.dot(from) - d) / alignment;
    if (distance > CMP_EPSILON) {
        return false;
    }
    if (result) {
        *result = from + direction * -distance;
    }
    return true;
}

bool Plane::intersects_segment(
    const Vector3 begin,
    const Vector3 end,
    Vector3* result
) const {
    const Vector3 direction = begin - end;
    const real_t alignment  = normal.dot(direction);
    if (fabs(alignment) <= CMP_EPSILON) {
        return false;
    }
    const real_t distance = (normal.dot(begin) - d) / alignment;
    if (distance < -CMP_EPSILON || distance > 1.0 + CMP_EPSILON) {
        return false;
    }
    if (result) {
        *result = begin + direction * -distance;
    }
    return true;
}

void Plane::normalize() {
    const real_t length = normal.length();
    if (length == 0) {
        d = 0;
        return;
    }
    normal /= length;
    d      /= length;
}

Plane Plane::normalized() const {
    Plane result = *this;
    result.normalize();
    return result;
}

real_t Plane::distance_to(const Vector3& point) const {
    return normal.dot(point) - d;
}

Vector3 Plane::center() const {
    return normal * d;
}

Vector3 Plane::get_any_point() const {
    return normal * d;
}

Vector3 Plane::get_any_perpendicular_normal() const {
    const Vector3 x_axis{1, 0, 0};
    const Vector3 y_axis{0, 1, 0};
    const Vector3 axis =
        fabs(normal.dot(x_axis)) > PLANE_DOT_EPSILON ? y_axis : x_axis;
    const Vector3 result = axis - normal * normal.dot(axis);
    return result.normalized();
}

Vector3 Plane::project(const Vector3& point) const {
    return point - normal * distance_to(point);
}

Plane operator-(const Plane& right) {
    return {-right.normal, -right.d};
}

bool operator==(const Plane& left, const Plane& right) {
    return left.normal == right.normal && left.d == right.d;
}

bool operator!=(const Plane& left, const Plane& right) {
    return !(left == right);
}
} // namespace Rebel
