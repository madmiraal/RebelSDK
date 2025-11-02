// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef CAMERA_MATRIX_H
#define CAMERA_MATRIX_H

#include "common/defs.h"

#include <vector>

namespace Rebel {
class AABB;
class Plane;
class Rect2;
class String;
class Transform;
class Vector2;
class Vector3;

class CameraMatrix {
public:
    enum Planes {
        PLANE_NEAR,
        PLANE_FAR,
        PLANE_LEFT,
        PLANE_TOP,
        PLANE_RIGHT,
        PLANE_BOTTOM
    };

    real_t matrix[4][4]{};

    CameraMatrix();
    CameraMatrix(const Transform& transform);

    operator String() const;
    operator Transform() const;

    bool is_orthogonal() const;

    real_t get_z_far() const;
    real_t get_z_near() const;
    real_t get_aspect() const;
    real_t get_fov() const;

    Vector2 get_viewport_half_extents() const;
    int get_pixels_per_meter(int pixel_width) const;
    std::vector<Plane> get_projection_planes(const Transform& transform) const;
    bool get_endpoints(const Transform& transform, Vector3* end_points) const;

    void set_identity();
    void set_zero();
    void set_light_bias();
    void set_light_atlas_rect(const Rect2& rect2);
    void set_perspective(
        real_t fov_y_degrees,
        real_t aspect,
        real_t z_near,
        real_t z_far,
        bool flip_fov = false
    );
    void set_perspective(
        real_t fov_y_degrees,
        real_t aspect,
        real_t z_near,
        real_t z_far,
        bool flip_fov,
        int eye,
        real_t intraocular_distance,
        real_t convergence_distance
    );
    void set_for_hmd(
        int eye,
        real_t aspect,
        real_t intraocular_distance,
        real_t display_width,
        real_t display_to_lens,
        real_t over_sample,
        real_t z_near,
        real_t z_far
    );
    void set_orthogonal(
        real_t left,
        real_t right,
        real_t bottom,
        real_t top,
        real_t z_near,
        real_t z_far
    );
    void set_orthogonal(
        real_t size,
        real_t aspect,
        real_t z_near,
        real_t z_far,
        bool flip_fov = false
    );
    void set_frustum(
        real_t left,
        real_t right,
        real_t bottom,
        real_t top,
        real_t z_near,
        real_t z_far
    );
    void set_frustum(
        real_t size,
        real_t aspect,
        Vector2 offset,
        real_t z_near,
        real_t z_far,
        bool flip_fov = false
    );

    void invert();
    CameraMatrix inverse() const;

    Vector3 xform(const Vector3& vector) const;
    Plane xform4(const Plane& plane) const;

    void make_scale(const Vector3& scale);
    void scale_translate_to_fit(const AABB& aabb);

private:
    Plane get_far_plane() const;
    Plane get_near_plane() const;
    Plane get_left_plane() const;
    Plane get_right_plane() const;
    Plane get_top_plane() const;
    Plane get_bottom_plane() const;
};

CameraMatrix operator*(const CameraMatrix& left, const CameraMatrix& right);
} // namespace Rebel

#endif // CAMERA_MATRIX_H
