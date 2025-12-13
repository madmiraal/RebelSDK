// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef RECT2_H
#define RECT2_H

#include "common/vector2.h"

namespace Rebel {
class String;
class Transform2D;
typedef Vector2 Point2;
typedef Vector2 Size2;

class Rect2 {
public:
    Point2 position;
    Size2 size;

    Rect2() = default;
    Rect2(const Point2& position, const Size2& size);
    Rect2(real_t x, real_t y, real_t width, real_t height);

    operator String() const;

    const Point2& get_position() const;
    void set_position(const Point2& new_position);
    const Size2& get_size() const;
    void set_size(const Size2& new_size);

    real_t get_area() const;
    real_t distance_to(const Point2& point) const;

    Rect2 grow(real_t amount) const;
    Rect2 expand(const Point2& point) const;
    void expand_to(const Point2& point);
    Rect2 clip(const Rect2& other) const;
    Rect2 merge(const Rect2& other) const;

    bool has_no_area() const;
    bool no_area() const;
    bool has_point(const Point2& point) const;
    bool encloses(const Rect2& other) const;
    bool intersects(const Rect2& other) const;
    bool intersects_transformed(
        const Transform2D& transform,
        const Rect2& other
    ) const;
    bool intersects_segment(
        const Point2& from,
        const Point2& to,
        Point2* r_position = nullptr,
        Vector2* r_normal  = nullptr
    ) const;
};

bool operator==(const Rect2& left, const Rect2& right);
bool operator!=(const Rect2& left, const Rect2& right);
} // namespace Rebel

#endif // RECT2_H
