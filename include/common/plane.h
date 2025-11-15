// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef PLANE_H
#define PLANE_H

#include "common/vector3.h"

namespace Rebel {

class Plane {
public:
    Vector3 normal;
    real_t d = 0;

    enum class Direction {
        CLOCKWISE,
        COUNTERCLOCKWISE
    };

    Plane() = default;
    Plane(const Vector3& normal, real_t distance);
    Plane(const Vector3& point, const Vector3& normal);
    Plane(real_t normal_x, real_t normal_y, real_t normal_z, real_t distance);
    Plane(
        const Vector3& point1,
        const Vector3& point2,
        const Vector3& point3,
        Direction direction = Direction::CLOCKWISE
    );

    operator String() const;

    Vector3 get_normal() const;
    void set_normal(const Vector3& new_normal);

    bool is_almost_like(const Plane& right) const;
    bool is_point_over(const Vector3& point) const;
    bool has_point(const Vector3& point, real_t epsilon = CMP_EPSILON) const;
    bool intersect_3(
        const Plane& plane1,
        const Plane& plane2,
        Vector3* result = nullptr
    ) const;
    bool intersects_ray(
        Vector3 from,
        Vector3 direction,
        Vector3* result = nullptr
    ) const;
    bool intersects_segment(
        Vector3 begin,
        Vector3 end,
        Vector3* result = nullptr
    ) const;

    void normalize();
    Plane normalized() const;
    real_t distance_to(const Vector3& point) const;
    Vector3 center() const;
    Vector3 get_any_point() const;
    Vector3 get_any_perpendicular_normal() const;
    Vector3 project(const Vector3& point) const;
};

Plane operator-(const Plane& right);
bool operator==(const Plane& left, const Plane& right);
bool operator!=(const Plane& left, const Plane& right);
} // namespace Rebel

#endif // PLANE_H
