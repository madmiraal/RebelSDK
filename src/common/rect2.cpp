// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/rect2.h"

#include "common/rebelmath.h"
#include "common/string.h"
#include "common/transform2d.h"
#include "common/vector2.h"

namespace Rebel {
Rect2::Rect2(const Point2& position, const Size2& size) :
    position(position),
    size(size) {}

Rect2::Rect2(
    const real_t x,
    const real_t y,
    const real_t width,
    const real_t height
) :
    position{x, y},
    size{width, height} {}

Rect2::operator String() const {
    return String(position) + ", " + String(size);
}

const Point2& Rect2::get_position() const {
    return position;
}

void Rect2::set_position(const Point2& new_position) {
    position = new_position;
}

const Size2& Rect2::get_size() const {
    return size;
}

void Rect2::set_size(const Size2& new_size) {
    size = new_size;
}

real_t Rect2::get_area() const {
    return size.width * size.height;
}

real_t Rect2::distance_to(const Point2& point) const {
    real_t distance = 1e20f;
    if (point.x < position.x) {
        distance = Math::min(distance, position.x - point.x);
    }
    if (point.y < position.y) {
        distance = Math::min(distance, position.y - point.y);
    }
    if (point.x >= position.x + size.x) {
        distance = Math::min(point.x - (position.x + size.x), distance);
    }
    if (point.y >= position.y + size.y) {
        distance = Math::min(point.y - (position.y + size.y), distance);
    }
    if (distance == 1e20f) {
        return 0;
    }
    return distance;
}

Rect2 Rect2::grow(const real_t amount) const {
    Rect2 result        = *this;
    result.position.x  -= amount;
    result.position.y  -= amount;
    result.size.width  += amount * 2;
    result.size.height += amount * 2;
    return result;
}

Rect2 Rect2::expand(const Vector2& point) const {
    Rect2 result = *this;
    result.expand_to(point);
    return result;
}

void Rect2::expand_to(const Point2& point) {
    Vector2 begin = position;
    Vector2 end   = position + size;
    if (point.x < begin.x) {
        begin.x = point.x;
    }
    if (point.y < begin.y) {
        begin.y = point.y;
    }
    if (point.x > end.x) {
        end.x = point.x;
    }
    if (point.y > end.y) {
        end.y = point.y;
    }
    position = begin;
    size     = end - begin;
}

Rect2 Rect2::clip(const Rect2& other) const {
    if (!intersects(other)) {
        return {};
    }
    const real_t minimum_x = Math::max(other.position.x, position.x);
    const real_t minimum_y = Math::max(other.position.y, position.y);
    const real_t maximum_x =
        Math::min(other.position.x + other.size.width, position.x + size.width);
    const real_t maximum_y = Math::min(
        other.position.y + other.size.height,
        position.y + size.height
    );
    return {minimum_x, minimum_y, maximum_x - minimum_x, maximum_y - minimum_y};
}

Rect2 Rect2::merge(const Rect2& other) const {
    const real_t minimum_x = Math::min(other.position.x, position.x);
    const real_t minimum_y = Math::min(other.position.y, position.y);
    const real_t maximum_x =
        Math::max(other.position.x + other.size.width, position.x + size.width);
    const real_t maximum_y = Math::max(
        other.position.y + other.size.height,
        position.y + size.height
    );
    return {minimum_x, minimum_y, maximum_x - minimum_x, maximum_y - minimum_y};
}

bool Rect2::has_no_area() const {
    return size.x <= 0 || size.y <= 0;
}

bool Rect2::no_area() const {
    return has_no_area();
}

bool Rect2::has_point(const Point2& point) const {
    if (point.x < position.x) {
        return false;
    }
    if (point.y < position.y) {
        return false;
    }
    if (point.x >= position.x + size.x) {
        return false;
    }
    if (point.y >= position.y + size.y) {
        return false;
    }
    return true;
}

bool Rect2::encloses(const Rect2& other) const {
    return other.position.x >= position.x && other.position.y >= position.y
        && other.position.x + other.size.x < position.x + size.x
        && other.position.y + other.size.y < position.y + size.y;
}

bool Rect2::intersects(const Rect2& other) const {
    if (position.x >= other.position.x + other.size.width) {
        return false;
    }
    if (position.x + size.width <= other.position.x) {
        return false;
    }
    if (position.y >= other.position.y + other.size.height) {
        return false;
    }
    if (position.y + size.height <= other.position.y) {
        return false;
    }
    return true;
}

bool Rect2::intersects_transformed(
    const Transform2D& transform,
    const Rect2& other
) const {
    const Vector2 other_points[4] = {
        transform.xform(other.position),
        transform.xform(
            Vector2{other.position.x + other.size.x, other.position.y}
        ),
        transform.xform(
            Vector2{other.position.x, other.position.y + other.size.y}
        ),
        transform.xform(Vector2{
            other.position.x + other.size.x,
            other.position.y + other.size.y
        }),
    };
    if (!(has_point(other_points[0]) || has_point(other_points[1])
          || has_point(other_points[2]) || has_point(other_points[3]))) {
        return false;
    }

    const Vector2 points[4] = {
        position,
        Vector2(position.x + size.x, position.y),
        Vector2(position.x, position.y + size.y),
        Vector2(position.x + size.x, position.y + size.y),
    };

    const real_t this_dp00 = transform.elements[0].dot(points[0]);
    real_t this_maximum0   = this_dp00;
    real_t this_minimum0   = this_dp00;
    const real_t this_dp01 = transform.elements[0].dot(points[1]);
    this_maximum0          = Math::max(this_dp01, this_maximum0);
    this_minimum0          = Math::min(this_dp01, this_minimum0);
    const real_t this_dp02 = transform.elements[0].dot(points[2]);
    this_maximum0          = Math::max(this_dp02, this_maximum0);
    this_minimum0          = Math::min(this_dp02, this_minimum0);
    const real_t this_dp03 = transform.elements[0].dot(points[3]);
    this_maximum0          = Math::max(this_dp03, this_maximum0);
    this_minimum0          = Math::min(this_dp03, this_minimum0);

    const real_t other_dp00 = transform.elements[0].dot(other_points[0]);
    real_t other_maximum0   = other_dp00;
    real_t other_minimum0   = other_dp00;
    const real_t other_dp01 = transform.elements[0].dot(other_points[1]);
    other_maximum0          = Math::max(other_dp01, other_maximum0);
    other_minimum0          = Math::min(other_dp01, other_minimum0);
    const real_t other_dp02 = transform.elements[0].dot(other_points[2]);
    other_maximum0          = Math::max(other_dp02, other_maximum0);
    other_minimum0          = Math::min(other_dp02, other_minimum0);
    const real_t other_dp03 = transform.elements[0].dot(other_points[3]);
    other_maximum0          = Math::max(other_dp03, other_maximum0);
    other_minimum0          = Math::min(other_dp03, other_minimum0);

    if (this_minimum0 > other_maximum0 || other_minimum0 > this_maximum0) {
        return false;
    }

    const real_t this_dp10 = transform.elements[1].dot(points[0]);
    real_t this_maximum1   = this_dp10;
    real_t this_minimum1   = this_dp10;
    const real_t this_dp11 = transform.elements[1].dot(points[1]);
    this_maximum1          = Math::max(this_dp11, this_maximum1);
    this_minimum1          = Math::min(this_dp11, this_minimum1);
    const real_t this_dp12 = transform.elements[1].dot(points[2]);
    this_maximum1          = Math::max(this_dp12, this_maximum1);
    this_minimum1          = Math::min(this_dp12, this_minimum1);
    const real_t this_dp13 = transform.elements[1].dot(points[3]);
    this_maximum1          = Math::max(this_dp13, this_maximum1);
    this_minimum1          = Math::min(this_dp13, this_minimum1);

    const real_t other_dp10 = transform.elements[1].dot(other_points[0]);
    real_t other_maximum1   = other_dp10;
    real_t other_minimum1   = other_dp10;
    const real_t other_dp11 = transform.elements[1].dot(other_points[1]);
    other_maximum1          = Math::max(other_dp11, other_maximum1);
    other_minimum1          = Math::min(other_dp11, other_minimum1);
    const real_t other_dp12 = transform.elements[1].dot(other_points[2]);
    other_maximum1          = Math::max(other_dp12, other_maximum1);
    other_minimum1          = Math::min(other_dp12, other_minimum1);
    const real_t other_dp13 = transform.elements[1].dot(other_points[3]);
    other_maximum1          = Math::max(other_dp13, other_maximum1);
    other_minimum1          = Math::min(other_dp13, other_minimum1);

    if (this_minimum1 > other_maximum1 || other_minimum1 > this_maximum1) {
        return false;
    }

    return true;
}

bool Rect2::intersects_segment(
    const Point2& from,
    const Point2& to,
    Point2* r_position,
    Vector2* r_normal
) const {
    real_t minimum        = 0;
    real_t maximum        = 1;
    int intersection_axis = 0;
    real_t normal_sign    = 0;

    for (int axis = 0; axis < 2; axis++) {
        const real_t box_begin = position[axis];
        const real_t box_end   = box_begin + size[axis];
        real_t axis_minimum    = 0;
        real_t axis_maximum    = 1;
        real_t axis_sign;

        if (from[axis] < to[axis]) {
            if (from[axis] > box_end || to[axis] < box_begin) {
                return false;
            }
            const real_t length = to[axis] - from[axis];
            if (from[axis] < box_begin) {
                axis_minimum = (box_begin - from[axis]) / length;
            }
            if (to[axis] > box_end) {
                axis_maximum = (box_end - from[axis]) / length;
            }
            axis_sign = -1.0;
        } else {
            if (to[axis] > box_end || from[axis] < box_begin) {
                return false;
            }
            const real_t length = to[axis] - from[axis];
            if (from[axis] > box_end) {
                axis_minimum = (box_end - from[axis]) / length;
            }
            if (to[axis] < box_begin) {
                axis_maximum = (box_begin - from[axis]) / length;
            }
            axis_sign = 1.0;
        }

        if (axis_minimum > minimum) {
            minimum           = axis_minimum;
            intersection_axis = axis;
            normal_sign       = axis_sign;
        }
        if (axis_maximum < maximum) {
            maximum = axis_maximum;
        }
        if (maximum < minimum) {
            return false;
        }
    }

    const Vector2 direction = to - from;
    if (r_normal) {
        *r_normal                      = Vector2{};
        (*r_normal)[intersection_axis] = normal_sign;
    }
    if (r_position) {
        *r_position = from + direction * minimum;
    }

    return true;
}

bool operator==(const Rect2& left, const Rect2& right) {
    return left.position == right.position && left.size == right.size;
}

bool operator!=(const Rect2& left, const Rect2& right) {
    return !(left == right);
}
} // namespace Rebel
