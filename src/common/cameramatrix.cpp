// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/cameramatrix.h"

#include "common/aabb.h"
#include "common/plane.h"
#include "common/rebelmath.h"
#include "common/rect2.h"
#include "common/string.h"
#include "common/transform.h"
#include "common/vector2.h"
#include "common/vector3.h"

#include <cmath>

namespace Rebel {
namespace {
real_t get_fov_y(const real_t fov_x, const real_t aspect) {
    return Math::rad2deg(
        std::atan(aspect * std::tan(Math::deg2rad(fov_x) / 2)) * 2
    );
}

double absd(const double g) {
    union {
        double d;
        uint64_t i;
    } u;

    u.d  = g;
    u.i &= (uint64_t)9223372036854775807ll;
    return u.d;
}
} // namespace

CameraMatrix::CameraMatrix() {
    set_identity();
}

CameraMatrix::CameraMatrix(const Transform& transform) :
    matrix{
        {transform.basis.elements[0][0],
         transform.basis.elements[1][0],
         transform.basis.elements[2][0],
         0                                                                        },
        {transform.basis.elements[0][1],
         transform.basis.elements[1][1],
         transform.basis.elements[2][1],
         0                                                                        },
        {transform.basis.elements[0][2],
         transform.basis.elements[1][2],
         transform.basis.elements[2][2],
         0                                                                        },
        {transform.origin.x,             transform.origin.y, transform.origin.z, 1}
} {}

CameraMatrix::operator String() const {
    String string;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            string += String(j > 0 ? ", " : "\n") + String::num(matrix[i][j]);
        }
    }
    return string;
}

CameraMatrix::operator Transform() const {
    Transform transform(
        matrix[0][0],
        matrix[0][1],
        matrix[0][2],
        matrix[1][0],
        matrix[1][1],
        matrix[1][2],
        matrix[2][0],
        matrix[2][1],
        matrix[2][2],
        matrix[3][0],
        matrix[3][1],
        matrix[3][2]
    );
    return transform;
}

bool CameraMatrix::is_orthogonal() const {
    return matrix[3][3] == 1.0;
}

real_t CameraMatrix::get_z_far() const {
    Plane plane  = get_far_plane();
    plane.normal = -plane.normal;
    plane.normalize();
    return plane.d;
}

real_t CameraMatrix::get_z_near() const {
    Plane plane = get_near_plane();
    plane.normalize();
    return plane.d;
}

real_t CameraMatrix::get_aspect() const {
    const Vector2 viewport_half_extents = get_viewport_half_extents();
    return viewport_half_extents.x / viewport_half_extents.y;
}

real_t CameraMatrix::get_fov() const {
    Plane right_plane = get_right_plane();
    right_plane.normalize();
    if (matrix[2][0] == 0 && matrix[2][1] == 0) {
        return Math::rad2deg(std::acos(std::abs(right_plane.normal.x))) * 2.f;
    }
    // Asymmetrical frustum. Calculate the left plane's angle.
    Plane left_plane = get_left_plane();
    left_plane.normalize();
    return Math::rad2deg(std::acos(std::abs(left_plane.normal.x)))
         + Math::rad2deg(std::acos(std::abs(right_plane.normal.x)));
}

Vector2 CameraMatrix::get_viewport_half_extents() const {
    Plane near_plane = get_near_plane();
    near_plane.normalize();
    Plane right_plane = get_right_plane();
    right_plane.normalize();
    Plane top_plane = get_top_plane();
    top_plane.normalize();
    Vector3 intersection;
    near_plane.intersect_3(right_plane, top_plane, &intersection);
    return {intersection.x, intersection.y};
}

int CameraMatrix::get_pixels_per_meter(const int pixel_width) const {
    const Vector3 result = xform(Vector3(1, 0, -1));
    return static_cast<int>((result.x / 2 + 0.5) * pixel_width);
}

std::vector<Plane> CameraMatrix::get_projection_planes(
    const Transform& transform
) const {
    std::vector<Plane> planes;
    Plane near_plane  = get_near_plane();
    near_plane.normal = -near_plane.normal;
    near_plane.normalize();
    planes.push_back(transform.xform(near_plane));

    Plane far_plane  = get_far_plane();
    far_plane.normal = -far_plane.normal;
    far_plane.normalize();
    planes.push_back(transform.xform(far_plane));

    Plane left_plane  = get_left_plane();
    left_plane.normal = -left_plane.normal;
    left_plane.normalize();
    planes.push_back(transform.xform(left_plane));

    Plane top_plane  = get_top_plane();
    top_plane.normal = -top_plane.normal;
    top_plane.normalize();
    planes.push_back(transform.xform(top_plane));

    Plane right_plane  = get_right_plane();
    right_plane.normal = -right_plane.normal;
    right_plane.normalize();
    planes.push_back(transform.xform(right_plane));

    Plane bottom_plane  = get_bottom_plane();
    bottom_plane.normal = -bottom_plane.normal;
    bottom_plane.normalize();
    planes.push_back(transform.xform(bottom_plane));
    return planes;
}

bool CameraMatrix::get_endpoints(
    const Transform& transform,
    Vector3* end_points
) const {
    const std::vector<Plane> planes  = get_projection_planes(Transform());
    const Planes intersections[8][3] = {
        {PLANE_FAR,  PLANE_LEFT,  PLANE_TOP   },
        {PLANE_FAR,  PLANE_LEFT,  PLANE_BOTTOM},
        {PLANE_FAR,  PLANE_RIGHT, PLANE_TOP   },
        {PLANE_FAR,  PLANE_RIGHT, PLANE_BOTTOM},
        {PLANE_NEAR, PLANE_LEFT,  PLANE_TOP   },
        {PLANE_NEAR, PLANE_LEFT,  PLANE_BOTTOM},
        {PLANE_NEAR, PLANE_RIGHT, PLANE_TOP   },
        {PLANE_NEAR, PLANE_RIGHT, PLANE_BOTTOM},
    };
    for (int i = 0; i < 8; i++) {
        Vector3 end_point;
        const bool success = planes[intersections[i][0]].intersect_3(
            planes[intersections[i][1]],
            planes[intersections[i][2]],
            &end_point
        );
        ERR_FAIL_COND_V(!success, false);
        end_points[i] = transform.xform(end_point);
    }
    return true;
}

void CameraMatrix::set_identity() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matrix[i][j] = i == j ? 1 : 0;
        }
    }
}

void CameraMatrix::set_zero() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matrix[i][j] = 0;
        }
    }
}

void CameraMatrix::set_light_bias() {
    matrix[0][0] = .5f;
    matrix[0][1] = 0;
    matrix[0][2] = 0;
    matrix[0][3] = 0;
    matrix[1][0] = 0;
    matrix[1][1] = .5f;
    matrix[1][2] = 0;
    matrix[1][3] = 0;
    matrix[2][0] = 0;
    matrix[2][1] = 0;
    matrix[2][2] = .5f;
    matrix[2][3] = 0;
    matrix[3][0] = .5f;
    matrix[3][1] = .5f;
    matrix[3][2] = .5f;
    matrix[3][3] = 1.f;
}

void CameraMatrix::set_light_atlas_rect(const Rect2& rect2) {
    matrix[0][0] = rect2.size.width;
    matrix[0][1] = 0;
    matrix[0][2] = 0;
    matrix[0][3] = 0;
    matrix[1][0] = 0;
    matrix[1][1] = rect2.size.height;
    matrix[1][2] = 0;
    matrix[1][3] = 0;
    matrix[2][0] = 0;
    matrix[2][1] = 0;
    matrix[2][2] = 1.f;
    matrix[2][3] = 0;
    matrix[3][0] = rect2.position.x;
    matrix[3][1] = rect2.position.y;
    matrix[3][2] = 0;
    matrix[3][3] = 1.f;
}

void CameraMatrix::set_perspective(
    real_t fov_y_degrees,
    const real_t aspect,
    const real_t z_near,
    const real_t z_far,
    const bool flip_fov
) {
    if (flip_fov) {
        fov_y_degrees = get_fov_y(fov_y_degrees, 1.f / aspect);
    }
    const real_t radians = Math::deg2rad(fov_y_degrees);
    const real_t z_delta = z_far - z_near;
    const real_t sine    = std::sin(radians);
    const real_t cot     = std::cos(radians) / sine;
    if (z_delta == 0 || sine == 0 || aspect == 0) {
        return;
    }
    set_identity();
    matrix[0][0] = cot / aspect;
    matrix[1][1] = cot;
    matrix[2][2] = -(z_far + z_near) / z_delta;
    matrix[2][3] = -1;
    matrix[3][2] = -2 * z_near * z_far / z_delta;
    matrix[3][3] = 0;
}

void CameraMatrix::set_perspective(
    real_t fov_y_degrees,
    const real_t aspect,
    const real_t z_near,
    const real_t z_far,
    const bool flip_fov,
    const int eye,
    const real_t intraocular_distance,
    const real_t convergence_distance
) {
    if (flip_fov) {
        fov_y_degrees = get_fov_y(fov_y_degrees, 1 / aspect);
    }
    const real_t y_max = z_near * std::tan(Math::deg2rad(fov_y_degrees));
    const real_t x_max = y_max * aspect;
    const real_t frustum_shift =
        intraocular_distance / 2 * z_near / convergence_distance;
    real_t left, right, modeltranslation;
    switch (eye) {
        case 1: { // Left eye.
            left             = -x_max + frustum_shift;
            right            = x_max + frustum_shift;
            modeltranslation = intraocular_distance / 2;
        } break;
        case 2: { // Right eye,
            left             = -x_max - frustum_shift;
            right            = x_max - frustum_shift;
            modeltranslation = -intraocular_distance / 2;
        } break;
        default: { // Mono
            // Should give the same result as set_perspective(
            // fov_y_degrees, aspect, z_near, z_far, flip_fov)
            left             = -x_max;
            right            = x_max;
            modeltranslation = 0.0;
        } break;
    }
    set_frustum(left, right, -y_max, y_max, z_near, z_far);

    // Translate matrix by (modeltranslation, 0.0, 0.0)
    CameraMatrix translation_matrix;
    translation_matrix.matrix[3][0] = modeltranslation;
    *this                           = *this * translation_matrix;
}

void CameraMatrix::set_for_hmd(
    const int eye,
    const real_t aspect,
    const real_t intraocular_distance,
    const real_t display_width,
    const real_t display_to_lens,
    const real_t over_sample,
    const real_t z_near,
    const real_t z_far
) {
    // Calculate the base frustum without considering lens magnification.
    real_t f1 = intraocular_distance / 2.f / display_to_lens;
    real_t f2 = (display_width - intraocular_distance) / 2.f / display_to_lens;
    real_t f3 = display_width / 4.f / display_to_lens;

    // Apply over sample factor to increase FOV.
    // Over sample is always a balance between performance and FOV to sacrifice.
    const real_t add  = (f1 + f2) * (over_sample - 1.f) / 2.f;
    f1               += add;
    f2               += add;
    f3               *= over_sample;
    // Keep aspect ratio.
    f3               /= aspect;

    switch (eye) {
        case 1: { // Left eye.
            set_frustum(
                -f2 * z_near,
                f1 * z_near,
                -f3 * z_near,
                f3 * z_near,
                z_near,
                z_far
            );
        } break;
        case 2: { // Right eye.
            set_frustum(
                -f1 * z_near,
                f2 * z_near,
                -f3 * z_near,
                f3 * z_near,
                z_near,
                z_far
            );
        } break;
        default: { // Mono
            // Does not apply here!
        } break;
    }
}

void CameraMatrix::set_orthogonal(
    real_t size,
    const real_t aspect,
    const real_t z_near,
    const real_t z_far,
    const bool flip_fov
) {
    if (!flip_fov) {
        size *= aspect;
    }
    set_orthogonal(
        -size / 2,
        +size / 2,
        -size / aspect / 2,
        +size / aspect / 2,
        z_near,
        z_far
    );
}

void CameraMatrix::set_orthogonal(
    const real_t left,
    const real_t right,
    const real_t bottom,
    const real_t top,
    const real_t z_near,
    const real_t z_far
) {
    matrix[0][0] = 2.f / (right - left);
    matrix[0][1] = 0;
    matrix[0][2] = 0;
    matrix[0][3] = 0;
    matrix[1][0] = 0;
    matrix[1][1] = 2.f / (top - bottom);
    matrix[1][2] = 0;
    matrix[1][3] = 0;
    matrix[2][0] = 0;
    matrix[2][1] = 0;
    matrix[2][2] = -2.f / (z_far - z_near);
    matrix[2][3] = 0;
    matrix[3][0] = -((right + left) / (right - left));
    matrix[3][1] = -((top + bottom) / (top - bottom));
    matrix[3][2] = -((z_far + z_near) / (z_far - z_near));
    matrix[3][3] = 1.f;
}

void CameraMatrix::set_frustum(
    const real_t left,
    const real_t right,
    const real_t bottom,
    const real_t top,
    const real_t z_near,
    const real_t z_far
) {
    ERR_FAIL_COND(right <= left);
    ERR_FAIL_COND(top <= bottom);
    ERR_FAIL_COND(z_far <= z_near);
    matrix[0][0] = 2.f * z_near / (right - left);
    matrix[0][1] = 0;
    matrix[0][2] = 0;
    matrix[0][3] = 0;
    matrix[1][0] = 0;
    matrix[1][1] = 2.f * z_near / (top - bottom);
    matrix[1][2] = 0;
    matrix[1][3] = 0;
    matrix[2][0] = (right + left) / (right - left);
    matrix[2][1] = (top + bottom) / (top - bottom);
    matrix[2][2] = -(z_far + z_near) / (z_far - z_near);
    matrix[2][3] = -1.f;
    matrix[3][0] = 0;
    matrix[3][1] = 0;
    matrix[3][2] = -2.f * z_far * z_near / (z_far - z_near);
    matrix[3][3] = 0;
}

void CameraMatrix::set_frustum(
    real_t size,
    const real_t aspect,
    const Vector2 offset,
    const real_t z_near,
    const real_t z_far,
    const bool flip_fov
) {
    if (!flip_fov) {
        size *= aspect;
    }
    set_frustum(
        -size / 2.f + offset.x,
        +size / 2.f + offset.x,
        -size / aspect / 2.f + offset.y,
        +size / aspect / 2.f + offset.y,
        z_near,
        z_far
    );
}

void CameraMatrix::invert() {
    // Pivot matrix locations.
    int pivot_i[4], pivot_j[4];
    real_t determinant = 1.0;
    for (int k = 0; k < 4; k++) {
        // Locate pivot element.
        real_t pivot_value = matrix[k][k];
        pivot_i[k]         = k;
        pivot_j[k]         = k;
        for (int i = k; i < 4; i++) {
            for (int j = k; j < 4; j++) {
                if (absd(matrix[i][j]) > absd(pivot_value)) {
                    pivot_i[k]  = i;
                    pivot_j[k]  = j;
                    pivot_value = matrix[i][j];
                }
            }
        }
        // Determinant is the product of pivots.
        determinant *= pivot_value;
        ERR_FAIL_COND(absd(determinant) < 1e-7);

        // Interchange rows.
        int row = pivot_i[k];
        if (row != k) {
            for (int j = 0; j < 4; j++) {
                const real_t temp = -matrix[k][j];
                matrix[k][j]      = matrix[row][j];
                matrix[row][j]    = temp;
            }
        }

        // Interchange columns.
        int col = pivot_j[k];
        if (col != k) { /** If columns are different **/
            for (int i = 0; i < 4; i++) {
                const real_t temp = -matrix[i][k];
                matrix[i][k]      = matrix[i][col];
                matrix[i][col]    = temp;
            }
        }

        // Divide column by minus pivot value.
        for (row = 0; row < 4; row++) {
            if (row != k) {
                matrix[row][k] /= -pivot_value;
            }
        }

        // Reduce the matrix.
        for (row = 0; row < 4; row++) {
            const real_t value = matrix[row][k];
            for (col = 0; col < 4; col++) {
                if (row != k && col != k) {
                    matrix[row][col] += value * matrix[k][col];
                }
            }
        }

        // Divide row by pivot.
        for (col = 0; col < 4; col++) {
            if (col != k) {
                matrix[k][col] /= pivot_value;
            }
        }

        // Replace pivot by reciprocal.
        matrix[k][k] = 1.f / pivot_value;
    }

    // Final interchange of rows and columns.
    // Ignore 1 by 1 corner.
    for (int k = 4 - 2; k >= 0; k--) {
        const int row = pivot_j[k];
        if (row != k) {
            for (int j = 0; j < 4; j++) {
                const real_t temp = matrix[k][j];
                matrix[k][j]      = -matrix[row][j];
                matrix[row][j]    = temp;
            }
        }
        const int col = pivot_i[k];
        if (col != k) {
            for (int i = 0; i < 4; i++) {
                const real_t temp = matrix[i][k];
                matrix[i][k]      = -matrix[i][col];
                matrix[i][col]    = temp;
            }
        }
    }
}

CameraMatrix CameraMatrix::inverse() const {
    CameraMatrix cm = *this;
    cm.invert();
    return cm;
}

Vector3 CameraMatrix::xform(const Vector3& vector) const {
    Vector3 ret;
    ret.x = matrix[0][0] * vector.x + matrix[1][0] * vector.y
          + matrix[2][0] * vector.z + matrix[3][0];
    ret.y = matrix[0][1] * vector.x + matrix[1][1] * vector.y
          + matrix[2][1] * vector.z + matrix[3][1];
    ret.z = matrix[0][2] * vector.x + matrix[1][2] * vector.y
          + matrix[2][2] * vector.z + matrix[3][2];
    const real_t w = matrix[0][3] * vector.x + matrix[1][3] * vector.y
                   + matrix[2][3] * vector.z + matrix[3][3];
    return ret / w;
}

Plane CameraMatrix::xform4(const Plane& plane) const {
    Plane ret;

    ret.normal.x = matrix[0][0] * plane.normal.x + matrix[1][0] * plane.normal.y
                 + matrix[2][0] * plane.normal.z + matrix[3][0] * plane.d;
    ret.normal.y = matrix[0][1] * plane.normal.x + matrix[1][1] * plane.normal.y
                 + matrix[2][1] * plane.normal.z + matrix[3][1] * plane.d;
    ret.normal.z = matrix[0][2] * plane.normal.x + matrix[1][2] * plane.normal.y
                 + matrix[2][2] * plane.normal.z + matrix[3][2] * plane.d;
    ret.d = matrix[0][3] * plane.normal.x + matrix[1][3] * plane.normal.y
          + matrix[2][3] * plane.normal.z + matrix[3][3] * plane.d;
    return ret;
}

void CameraMatrix::make_scale(const Vector3& scale) {
    set_identity();
    matrix[0][0] = scale.x;
    matrix[1][1] = scale.y;
    matrix[2][2] = scale.z;
}

void CameraMatrix::scale_translate_to_fit(const AABB& aabb) {
    const Vector3 min = aabb.position;
    const Vector3 max = aabb.position + aabb.size;

    matrix[0][0] = 2 / (max.x - min.x);
    matrix[1][0] = 0;
    matrix[2][0] = 0;
    matrix[3][0] = -(max.x + min.x) / (max.x - min.x);

    matrix[0][1] = 0;
    matrix[1][1] = 2 / (max.y - min.y);
    matrix[2][1] = 0;
    matrix[3][1] = -(max.y + min.y) / (max.y - min.y);

    matrix[0][2] = 0;
    matrix[1][2] = 0;
    matrix[2][2] = 2 / (max.z - min.z);
    matrix[3][2] = -(max.z + min.z) / (max.z - min.z);

    matrix[0][3] = 0;
    matrix[1][3] = 0;
    matrix[2][3] = 0;
    matrix[3][3] = 1;
}

// Fast Plane Extraction from combined modelview/projection matrices.
// References:
// https://web.archive.org/web/20011221205252/http://www.markmorley.com/opengl/frustumculling.html
// https://web.archive.org/web/20061020020112/http://www2.ravensoft.com/users/ggribb/plane%20extraction.pdf
Plane CameraMatrix::get_far_plane() const {
    return {
        matrix[0][3] - matrix[0][2],
        matrix[1][3] - matrix[1][2],
        matrix[2][3] - matrix[2][2],
        matrix[3][3] - matrix[3][2]
    };
}

Plane CameraMatrix::get_near_plane() const {
    return {
        matrix[0][3] + matrix[0][2],
        matrix[1][3] + matrix[1][2],
        matrix[2][3] + matrix[2][2],
        matrix[3][3] + matrix[3][2]
    };
}

Plane CameraMatrix::get_left_plane() const {
    return {
        matrix[0][3] + matrix[0][0],
        matrix[1][3] + matrix[1][0],
        matrix[2][3] + matrix[2][0],
        matrix[3][3] + matrix[3][0]
    };
}

Plane CameraMatrix::get_right_plane() const {
    return {
        matrix[0][3] - matrix[0][0],
        matrix[1][3] - matrix[1][0],
        matrix[2][3] - matrix[2][0],
        matrix[3][3] - matrix[3][0]
    };
}

Plane CameraMatrix::get_top_plane() const {
    return {
        matrix[0][3] - matrix[0][1],
        matrix[1][3] - matrix[1][1],
        matrix[2][3] - matrix[2][1],
        matrix[3][3] - matrix[3][1]
    };
}

Plane CameraMatrix::get_bottom_plane() const {
    return {
        matrix[0][3] + matrix[0][1],
        matrix[1][3] + matrix[1][1],
        matrix[2][3] + matrix[2][1],
        matrix[3][3] + matrix[3][1]
    };
}

CameraMatrix operator*(const CameraMatrix& left, const CameraMatrix& right) {
    CameraMatrix result;
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 4; i++) {
            real_t ab = 0;
            for (int k = 0; k < 4; k++) {
                ab += left.matrix[k][i] * right.matrix[j][k];
            }
            result.matrix[j][i] = ab;
        }
    }
    return result;
}
} // namespace Rebel
