// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef AABB_H
#define AABB_H

#include "common/vector3.h"

namespace Rebel {
class Plane;

class AABB {
public:
    Vector3 position;
    Vector3 size;

    AABB() = default;
    AABB(const Vector3& position, const Vector3& size);

    const Vector3& get_position() const;
    void set_position(const Vector3& new_position);
    const Vector3& get_size() const;
    void set_size(const Vector3& new_size);

    bool has_no_area() const;
    bool has_no_surface() const;

    real_t get_area() const;
    void get_edge(int edge, Vector3& r_from, Vector3& r_to) const;
    Vector3 get_endpoint(int point_index) const;
    Vector3 get_longest_axis() const;
    int get_longest_axis_index() const;
    real_t get_longest_axis_size() const;
    Vector3 get_shortest_axis() const;
    int get_shortest_axis_index() const;
    real_t get_shortest_axis_size() const;
    Vector3 get_support(const Vector3& normal) const;

    bool encloses(const AABB& other) const;
    bool has_point(const Vector3& point) const;
    bool intersects(const AABB& other) const;
    bool intersects_inclusive(const AABB& other) const;
    bool intersects_convex_shape(const Plane* planes, int plane_count) const;
    bool intersects_plane(const Plane& plane) const;
    bool intersects_ray(
        const Vector3& from,
        const Vector3& direction,
        Vector3* r_clip   = nullptr,
        Vector3* r_normal = nullptr
    ) const;
    bool smits_intersect_ray(
        const Vector3& from,
        const Vector3& direction,
        real_t t0,
        real_t t1
    ) const;
    bool intersects_segment(
        const Vector3& from,
        const Vector3& to,
        Vector3* r_clip   = nullptr,
        Vector3* r_normal = nullptr
    ) const;

    AABB expand(const Vector3& vector) const;
    void expand_to(const Vector3& vector);
    AABB grow(real_t by) const;
    void grow_by(real_t amount);
    AABB intersection(const AABB& other) const;
    AABB merge(const AABB& other) const;
    void merge_with(const AABB& other);
    void project_range_in_plane(
        const Plane& plane,
        real_t& r_min,
        real_t& r_max
    ) const;

    operator String() const;
};

bool operator==(const AABB& left, const AABB& right);
bool operator!=(const AABB& left, const AABB& right);
} // namespace Rebel

#endif // AABB_H
