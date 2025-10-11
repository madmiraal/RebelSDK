// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/aabb.h"

#include "common/plane.h"

#include <utility>

namespace Rebel {
AABB::AABB(const Vector3& position, const Vector3& size) :
    position(position),
    size(size) {}

const Vector3& AABB::get_position() const {
    return position;
}

void AABB::set_position(const Vector3& new_position) {
    position = new_position;
}

const Vector3& AABB::get_size() const {
    return size;
}

void AABB::set_size(const Vector3& new_size) {
    size = new_size;
}

bool AABB::has_no_area() const {
    return size.x <= CMP_EPSILON || size.y <= CMP_EPSILON
        || size.z <= CMP_EPSILON;
}

bool AABB::has_no_surface() const {
    return size.x <= CMP_EPSILON && size.y <= CMP_EPSILON
        && size.z <= CMP_EPSILON;
}

real_t AABB::get_area() const {
    return size.x * size.y * size.z;
}

void AABB::get_edge(const int edge, Vector3& r_from, Vector3& r_to) const {
    switch (edge) {
        case 0: {
            r_from = Vector3(position.x + size.x, position.y, position.z);
            r_to   = Vector3(position.x, position.y, position.z);
        } break;
        case 1: {
            r_from =
                Vector3(position.x + size.x, position.y, position.z + size.z);
            r_to = Vector3(position.x + size.x, position.y, position.z);
        } break;
        case 2: {
            r_from = Vector3(position.x, position.y, position.z + size.z);
            r_to =
                Vector3(position.x + size.x, position.y, position.z + size.z);
        } break;
        case 3: {
            r_from = Vector3(position.x, position.y, position.z);
            r_to   = Vector3(position.x, position.y, position.z + size.z);
        } break;
        case 4: {
            r_from = Vector3(position.x, position.y + size.y, position.z);
            r_to =
                Vector3(position.x + size.x, position.y + size.y, position.z);
        } break;
        case 5: {
            r_from =
                Vector3(position.x + size.x, position.y + size.y, position.z);
            r_to = Vector3(
                position.x + size.x,
                position.y + size.y,
                position.z + size.z
            );
        } break;
        case 6: {
            r_from = Vector3(
                position.x + size.x,
                position.y + size.y,
                position.z + size.z
            );
            r_to =
                Vector3(position.x, position.y + size.y, position.z + size.z);
        } break;
        case 7: {
            r_from =
                Vector3(position.x, position.y + size.y, position.z + size.z);
            r_to = Vector3(position.x, position.y + size.y, position.z);
        } break;
        case 8: {
            r_from = Vector3(position.x, position.y, position.z + size.z);
            r_to =
                Vector3(position.x, position.y + size.y, position.z + size.z);
        } break;
        case 9: {
            r_from = Vector3(position.x, position.y, position.z);
            r_to   = Vector3(position.x, position.y + size.y, position.z);
        } break;
        case 10: {
            r_from = Vector3(position.x + size.x, position.y, position.z);
            r_to =
                Vector3(position.x + size.x, position.y + size.y, position.z);
        } break;
        case 11: {
            r_from =
                Vector3(position.x + size.x, position.y, position.z + size.z);
            r_to = Vector3(
                position.x + size.x,
                position.y + size.y,
                position.z + size.z
            );
        } break;
        default:
            ERR_FAIL_INDEX(edge, 12);
    }
}

Vector3 AABB::get_endpoint(const int point_index) const {
    switch (point_index) {
        case 0:
            return {position.x, position.y, position.z};
        case 1:
            return {position.x, position.y, position.z + size.z};
        case 2:
            return {position.x, position.y + size.y, position.z};
        case 3:
            return {position.x, position.y + size.y, position.z + size.z};
        case 4:
            return {position.x + size.x, position.y, position.z};
        case 5:
            return {position.x + size.x, position.y, position.z + size.z};
        case 6:
            return {position.x + size.x, position.y + size.y, position.z};
        case 7:
            return {
                position.x + size.x,
                position.y + size.y,
                position.z + size.z
            };
        default:
            ERR_FAIL_V(Vector3());
    }
}

Vector3 AABB::get_longest_axis() const {
    switch (get_longest_axis_index()) {
        case 0:
            return {1, 0, 0};
        case 1:
            return {0, 1, 0};
        case 2:
            return {0, 0, 1};
        default:
            return {0, 0, 0};
    }
}

int AABB::get_longest_axis_index() const {
    int axis_index  = 0;
    real_t max_size = size.x;
    if (size.y > max_size) {
        axis_index = 1;
        max_size   = size.y;
    }
    if (size.z > max_size) {
        axis_index = 2;
    }
    return axis_index;
}

real_t AABB::get_longest_axis_size() const {
    real_t max_size = size.x;
    if (size.y > max_size) {
        max_size = size.y;
    }
    if (size.z > max_size) {
        max_size = size.z;
    }
    return max_size;
}

Vector3 AABB::get_shortest_axis() const {
    switch (get_shortest_axis_index()) {
        case 0:
            return {1, 0, 0};
        case 1:
            return {0, 1, 0};
        case 2:
            return {0, 0, 1};
        default:
            return {0, 0, 0};
    }
}

int AABB::get_shortest_axis_index() const {
    int axis_index  = 0;
    real_t max_size = size.x;
    if (size.y < max_size) {
        axis_index = 1;
        max_size   = size.y;
    }
    if (size.z < max_size) {
        axis_index = 2;
    }
    return axis_index;
}

real_t AABB::get_shortest_axis_size() const {
    real_t max_size = size.x;
    if (size.y < max_size) {
        max_size = size.y;
    }
    if (size.z < max_size) {
        max_size = size.z;
    }
    return max_size;
}

Vector3 AABB::get_support(const Vector3& normal) const {
    const Vector3 half_extents = size * 0.5;
    const Vector3 offset       = position + half_extents;
    return Vector3(
               normal.x > 0 ? -half_extents.x : half_extents.x,
               normal.y > 0 ? -half_extents.y : half_extents.y,
               normal.z > 0 ? -half_extents.z : half_extents.z
           )
         + offset;
}

bool AABB::encloses(const AABB& other) const {
    const Vector3 this_min  = position;
    const Vector3 this_max  = position + size;
    const Vector3 other_min = other.position;
    const Vector3 other_max = other.position + other.size;
    return this_min.x <= other_min.x && this_max.x > other_max.x
        && this_min.y <= other_min.y && this_max.y > other_max.y
        && this_min.z <= other_min.z && this_max.z > other_max.z;
}

bool AABB::has_point(const Vector3& point) const {
    if (point.x < position.x) {
        return false;
    }
    if (point.y < position.y) {
        return false;
    }
    if (point.z < position.z) {
        return false;
    }
    if (point.x > position.x + size.x) {
        return false;
    }
    if (point.y > position.y + size.y) {
        return false;
    }
    if (point.z > position.z + size.z) {
        return false;
    }
    return true;
}

bool AABB::intersects(const AABB& other) const {
    if (position.x >= other.position.x + other.size.x) {
        return false;
    }
    if (position.x + size.x <= other.position.x) {
        return false;
    }
    if (position.y >= other.position.y + other.size.y) {
        return false;
    }
    if (position.y + size.y <= other.position.y) {
        return false;
    }
    if (position.z >= other.position.z + other.size.z) {
        return false;
    }
    if (position.z + size.z <= other.position.z) {
        return false;
    }
    return true;
}

bool AABB::intersects_inclusive(const AABB& other) const {
    if (position.x > other.position.x + other.size.x) {
        return false;
    }
    if (position.x + size.x < other.position.x) {
        return false;
    }
    if (position.y > other.position.y + other.size.y) {
        return false;
    }
    if (position.y + size.y < other.position.y) {
        return false;
    }
    if (position.z > other.position.z + other.size.z) {
        return false;
    }
    if (position.z + size.z < other.position.z) {
        return false;
    }
    return true;
}

bool AABB::intersects_convex_shape(const Plane* planes, const int plane_count)
    const {
    const Vector3 half_extents = size * 0.5;
    const Vector3 offset       = position + half_extents;
    for (int i = 0; i < plane_count; i++) {
        const Plane& p = planes[i];
        Vector3 point(
            p.normal.x > 0 ? -half_extents.x : half_extents.x,
            p.normal.y > 0 ? -half_extents.y : half_extents.y,
            p.normal.z > 0 ? -half_extents.z : half_extents.z
        );
        point += offset;
        if (p.is_point_over(point)) {
            return false;
        }
    }
    return true;
}

bool AABB::intersects_plane(const Plane& plane) const {
    const Vector3 points[8] = {
        Vector3(position.x, position.y, position.z),
        Vector3(position.x, position.y, position.z + size.z),
        Vector3(position.x, position.y + size.y, position.z),
        Vector3(position.x, position.y + size.y, position.z + size.z),
        Vector3(position.x + size.x, position.y, position.z),
        Vector3(position.x + size.x, position.y, position.z + size.z),
        Vector3(position.x + size.x, position.y + size.y, position.z),
        Vector3(position.x + size.x, position.y + size.y, position.z + size.z),
    };
    bool over  = false;
    bool under = false;
    for (auto point : points) {
        if (plane.distance_to(point) > 0) {
            over = true;
        } else {
            under = true;
        }
    }
    return over && under;
}

bool AABB::intersects_ray(
    const Vector3& from,
    const Vector3& direction,
    Vector3* r_clip,
    Vector3* r_normal
) const {
    Vector3 c1, c2;
    Vector3 end = position + size;
    real_t near = -1e20;
    real_t far  = 1e20;
    int axis    = 0;
    for (int i = 0; i < 3; i++) {
        if (direction[i] == 0) {
            // Ray parallel to the plane in this direction.
            if (from[i] < position[i] || from[i] > end[i]) {
                return false;
            }
        }
        c1[i] = (position[i] - from[i]) / direction[i];
        c2[i] = (end[i] - from[i]) / direction[i];
        if (c1[i] > c2[i]) {
            std::swap(c1, c2);
        }
        if (c1[i] > near) {
            near = c1[i];
            axis = i;
        }
        if (c2[i] < far) {
            far = c2[i];
        }
        if (near > far || far < 0) {
            return false;
        }
    }
    if (r_clip) {
        *r_clip = c1;
    }
    if (r_normal) {
        *r_normal         = Vector3();
        (*r_normal)[axis] = direction[axis] > 0 ? 1 : -1;
    }
    return true;
}

bool AABB::smits_intersect_ray(
    const Vector3& from,
    const Vector3& direction,
    const real_t t0,
    const real_t t1
) const {
    const real_t x_inverse = 1.0f / direction.x;
    const real_t y_inverse = 1.0f / direction.y;
    const real_t z_inverse = 1.0f / direction.z;
    const Vector3 upbound  = position + size;
    real_t t_x_min, t_x_max, t_y_min, t_y_max, t_z_min, t_z_max;
    if (direction.x >= 0) {
        t_x_min = (position.x - from.x) * x_inverse;
        t_x_max = (upbound.x - from.x) * x_inverse;
    } else {
        t_x_min = (upbound.x - from.x) * x_inverse;
        t_x_max = (position.x - from.x) * x_inverse;
    }
    if (direction.y >= 0) {
        t_y_min = (position.y - from.y) * y_inverse;
        t_y_max = (upbound.y - from.y) * y_inverse;
    } else {
        t_y_min = (upbound.y - from.y) * y_inverse;
        t_y_max = (position.y - from.y) * y_inverse;
    }
    if (t_x_min > t_y_max || t_y_min > t_x_max) {
        return false;
    }
    if (t_y_min > t_x_min) {
        t_x_min = t_y_min;
    }
    if (t_y_max < t_x_max) {
        t_x_max = t_y_max;
    }
    if (direction.z >= 0) {
        t_z_min = (position.z - from.z) * z_inverse;
        t_z_max = (upbound.z - from.z) * z_inverse;
    } else {
        t_z_min = (upbound.z - from.z) * z_inverse;
        t_z_max = (position.z - from.z) * z_inverse;
    }
    if (t_x_min > t_z_max || t_z_min > t_x_max) {
        return false;
    }
    if (t_z_min > t_x_min) {
        t_x_min = t_z_min;
    }
    if (t_z_max < t_x_max) {
        t_x_max = t_z_max;
    }
    return t_x_min < t1 && t_x_max > t0;
}

bool AABB::intersects_segment(
    const Vector3& from,
    const Vector3& to,
    Vector3* r_clip,
    Vector3* r_normal
) const {
    real_t min  = 0;
    real_t max  = 1;
    int axis    = 0;
    real_t sign = 0;
    for (int i = 0; i < 3; i++) {
        const real_t seg_from  = from[i];
        const real_t seg_to    = to[i];
        const real_t box_begin = position[i];
        const real_t box_end   = box_begin + size[i];
        real_t clip_min, clip_max;
        real_t clip_sign;
        if (seg_from < seg_to) {
            if (seg_from > box_end || seg_to < box_begin) {
                return false;
            }
            const real_t length = seg_to - seg_from;
            clip_min =
                seg_from < box_begin ? (box_begin - seg_from) / length : 0;
            clip_max  = seg_to > box_end ? (box_end - seg_from) / length : 1;
            clip_sign = -1.0;
        } else {
            if (seg_to > box_end || seg_from < box_begin) {
                return false;
            }
            const real_t length = seg_to - seg_from;
            clip_min = seg_from > box_end ? (box_end - seg_from) / length : 0;
            clip_max = seg_to < box_begin ? (box_begin - seg_from) / length : 1;
            clip_sign = 1.0;
        }
        if (clip_min > min) {
            min  = clip_min;
            axis = i;
            sign = clip_sign;
        }
        if (clip_max < max) {
            max = clip_max;
        }
        if (max < min) {
            return false;
        }
    }
    const Vector3 rel = to - from;
    if (r_normal) {
        Vector3 normal;
        normal[axis] = sign;
        *r_normal    = normal;
    }
    if (r_clip) {
        *r_clip = from + rel * min;
    }
    return true;
}

AABB AABB::expand(const Vector3& vector) const {
    AABB aabb = *this;
    aabb.expand_to(vector);
    return aabb;
}

void AABB::expand_to(const Vector3& vector) {
    Vector3 begin = position;
    Vector3 end   = position + size;
    if (vector.x < begin.x) {
        begin.x = vector.x;
    }
    if (vector.y < begin.y) {
        begin.y = vector.y;
    }
    if (vector.z < begin.z) {
        begin.z = vector.z;
    }

    if (vector.x > end.x) {
        end.x = vector.x;
    }
    if (vector.y > end.y) {
        end.y = vector.y;
    }
    if (vector.z > end.z) {
        end.z = vector.z;
    }
    position = begin;
    size     = end - begin;
}

AABB AABB::grow(const real_t by) const {
    AABB aabb = *this;
    aabb.grow_by(by);
    return aabb;
}

void AABB::grow_by(const real_t amount) {
    position.x -= amount;
    position.y -= amount;
    position.z -= amount;
    size.x     += 2.0f * amount;
    size.y     += 2.0f * amount;
    size.z     += 2.0f * amount;
}

AABB AABB::intersection(const AABB& other) const {
    const Vector3 this_min  = position;
    const Vector3 this_max  = position + size;
    const Vector3 other_min = other.position;
    const Vector3 other_max = other.position + other.size;
    if (this_min.x > other_max.x || this_max.x < other_min.x
        || this_min.y > other_max.y || this_max.y < other_min.y
        || this_min.z > other_max.z || this_max.z < other_min.z) {
        return {};
    }
    Vector3 min, max;
    min.x = this_min.x > other_min.x ? this_min.x : other_min.x;
    max.x = this_max.x < other_max.x ? this_max.x : other_max.x;
    min.y = this_min.y > other_min.y ? this_min.y : other_min.y;
    max.y = this_max.y < other_max.y ? this_max.y : other_max.y;
    min.z = this_min.z > other_min.z ? this_min.z : other_min.z;
    max.z = this_max.z < other_max.z ? this_max.z : other_max.z;
    return {min, max - min};
}

AABB AABB::merge(const AABB& other) const {
    AABB aabb = *this;
    aabb.merge_with(other);
    return aabb;
}

void AABB::merge_with(const AABB& other) {
    const Vector3 beg_1 = position;
    const Vector3 beg_2 = other.position;
    const Vector3 end_1 = Vector3(size.x, size.y, size.z) + beg_1;
    const Vector3 end_2 =
        Vector3(other.size.x, other.size.y, other.size.z) + beg_2;
    Vector3 min, max;
    min.x    = beg_1.x < beg_2.x ? beg_1.x : beg_2.x;
    min.y    = beg_1.y < beg_2.y ? beg_1.y : beg_2.y;
    min.z    = beg_1.z < beg_2.z ? beg_1.z : beg_2.z;
    max.x    = end_1.x > end_2.x ? end_1.x : end_2.x;
    max.y    = end_1.y > end_2.y ? end_1.y : end_2.y;
    max.z    = end_1.z > end_2.z ? end_1.z : end_2.z;
    position = min;
    size     = max - min;
}

void AABB::project_range_in_plane(
    const Plane& plane,
    real_t& r_min,
    real_t& r_max
) const {
    const Vector3 half_extents(size.x * 0.5f, size.y * 0.5f, size.z * 0.5f);
    const Vector3 center(
        position.x + half_extents.x,
        position.y + half_extents.y,
        position.z + half_extents.z
    );
    const real_t length   = plane.normal.abs().dot(half_extents);
    const real_t distance = plane.distance_to(center);
    r_min                 = distance - length;
    r_max                 = distance + length;
}

AABB::operator String() const {
    return String() + position + " - " + size;
}

bool operator==(const AABB& left, const AABB& right) {
    return left.position == right.position && left.size == right.size;
}

bool operator!=(const AABB& left, const AABB& right) {
    return !(left == right);
}
} // namespace Rebel
