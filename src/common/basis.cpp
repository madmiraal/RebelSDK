// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/basis.h"

#include "common/defs.h"
#include "common/quat.h"
#include "common/vector3.h"

#include <cmath>
#include <utility>

namespace Rebel {
namespace {
real_t cofactor(
    const Vector3 elements[3],
    const int row1,
    const int col1,
    const int row2,
    const int col2
) {
    return elements[row1][col1] * elements[row2][col2]
         - elements[row1][col2] * elements[row2][col1];
}

Basis get_x_rotation_matrix(const real_t x) {
    const real_t cos_x = std::cos(x);
    const real_t sin_x = std::sin(x);
    return {1.0, 0.0, 0.0, 0.0, cos_x, -sin_x, 0.0, sin_x, cos_x};
}

Basis get_y_rotation_matrix(const real_t y) {
    const real_t cos_y = std::cos(y);
    const real_t sin_y = std::sin(y);
    return {cos_y, 0.0, sin_y, 0.0, 1.0, 0.0, -sin_y, 0.0, cos_y};
}

Basis get_z_rotation_matrix(const real_t z) {
    const real_t cos_z = std::cos(z);
    const real_t sin_z = std::sin(z);
    return {cos_z, -sin_z, 0.0, sin_z, cos_z, 0.0, 0.0, 0.0, 1.0};
}
} // namespace

static const Basis orthogonal_bases[24] = {
    Basis(1, 0, 0, 0, 1, 0, 0, 0, 1),    Basis(0, -1, 0, 1, 0, 0, 0, 0, 1),
    Basis(-1, 0, 0, 0, -1, 0, 0, 0, 1),  Basis(0, 1, 0, -1, 0, 0, 0, 0, 1),
    Basis(1, 0, 0, 0, 0, -1, 0, 1, 0),   Basis(0, 0, 1, 1, 0, 0, 0, 1, 0),
    Basis(-1, 0, 0, 0, 0, 1, 0, 1, 0),   Basis(0, 0, -1, -1, 0, 0, 0, 1, 0),
    Basis(1, 0, 0, 0, -1, 0, 0, 0, -1),  Basis(0, 1, 0, 1, 0, 0, 0, 0, -1),
    Basis(-1, 0, 0, 0, 1, 0, 0, 0, -1),  Basis(0, -1, 0, -1, 0, 0, 0, 0, -1),
    Basis(1, 0, 0, 0, 0, 1, 0, -1, 0),   Basis(0, 0, -1, 1, 0, 0, 0, -1, 0),
    Basis(-1, 0, 0, 0, 0, -1, 0, -1, 0), Basis(0, 0, 1, -1, 0, 0, 0, -1, 0),
    Basis(0, 0, 1, 0, 1, 0, -1, 0, 0),   Basis(0, -1, 0, 0, 0, 1, -1, 0, 0),
    Basis(0, 0, -1, 0, -1, 0, -1, 0, 0), Basis(0, 1, 0, 0, 0, -1, -1, 0, 0),
    Basis(0, 0, 1, 0, -1, 0, 1, 0, 0),   Basis(0, 1, 0, 0, 0, 1, 1, 0, 0),
    Basis(0, 0, -1, 0, 1, 0, 1, 0, 0),   Basis(0, -1, 0, 0, 0, -1, 1, 0, 0)
};

Basis::Basis() :
    elements{
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
} {}

Basis::Basis(
    const real_t xx,
    const real_t xy,
    const real_t xz,
    const real_t yx,
    const real_t yy,
    const real_t yz,
    const real_t zx,
    const real_t zy,
    const real_t zz
) :
    elements{
        {xx, xy, xz},
        {yx, yy, yz},
        {zx, zy, zz}
} {}

Basis::Basis(const Vector3& row1, const Vector3& row2, const Vector3& row3) :
    elements{row1, row2, row3} {}

Basis::Basis(const Quat& quaternion) {
    const real_t s  = 2.f / quaternion.length_squared();
    const real_t xs = quaternion.x * s;
    const real_t ys = quaternion.y * s;
    const real_t zs = quaternion.z * s;
    const real_t wx = quaternion.w * xs;
    const real_t wy = quaternion.w * ys;
    const real_t wz = quaternion.w * zs;
    const real_t xx = quaternion.x * xs;
    const real_t xy = quaternion.x * ys;
    const real_t xz = quaternion.x * zs;
    const real_t yy = quaternion.y * ys;
    const real_t yz = quaternion.y * zs;
    const real_t zz = quaternion.z * zs;
    set(1.f - (yy + zz),
        xy - wz,
        xz + wy,
        xy + wz,
        1.f - (xx + zz),
        yz - wx,
        xz - wy,
        yz + wx,
        1.f - (xx + yy));
}

Basis::Basis(const Vector3& euler) {
    set_euler(euler);
}

Basis::Basis(const Vector3& axis, const real_t phi) {
    // Rotation matrix from axis and angle, see
    // https://en.wikipedia.org/wiki/Rotation_matrix#Rotation_matrix_from_axis_and_angle
    const Vector3 axis_2(axis.x * axis.x, axis.y * axis.y, axis.z * axis.z);
    const real_t cos_phi = std::cos(phi);
    const real_t sin_phi = std::sin(phi);

    elements[0][0] = axis_2.x + cos_phi * (1 - axis_2.x);
    elements[0][1] = axis.x * axis.y * (1 - cos_phi) - axis.z * sin_phi;
    elements[0][2] = axis.z * axis.x * (1 - cos_phi) + axis.y * sin_phi;
    elements[1][0] = axis.x * axis.y * (1 - cos_phi) + axis.z * sin_phi;
    elements[1][1] = axis_2.y + cos_phi * (1 - axis_2.y);
    elements[1][2] = axis.y * axis.z * (1 - cos_phi) - axis.x * sin_phi;
    elements[2][0] = axis.z * axis.x * (1 - cos_phi) - axis.y * sin_phi;
    elements[2][1] = axis.y * axis.z * (1 - cos_phi) + axis.x * sin_phi;
    elements[2][2] = axis_2.z + cos_phi * (1 - axis_2.z);
}

Basis::Basis(const Basis& other) :
    elements{other.elements[0], other.elements[1], other.elements[2]} {}

Basis& Basis::operator=(const Basis& other) {
    elements[0] = other.elements[0];
    elements[1] = other.elements[1];
    elements[2] = other.elements[2];
    return *this;
}

Vector3 Basis::operator[](const int axis) const {
    return get_axis(axis);
}

void Basis::operator+=(const Basis& right) {
    elements[0] += right.elements[0];
    elements[1] += right.elements[1];
    elements[2] += right.elements[2];
}

void Basis::operator-=(const Basis& right) {
    elements[0] -= right.elements[0];
    elements[1] -= right.elements[1];
    elements[2] -= right.elements[2];
}

void Basis::operator*=(const Basis& right) {
    set(right.tdotx(elements[0]),
        right.tdoty(elements[0]),
        right.tdotz(elements[0]),
        right.tdotx(elements[1]),
        right.tdoty(elements[1]),
        right.tdotz(elements[1]),
        right.tdotx(elements[2]),
        right.tdoty(elements[2]),
        right.tdotz(elements[2]));
}

void Basis::operator*=(const real_t value) {
    elements[0] *= value;
    elements[1] *= value;
    elements[2] *= value;
}

Basis::operator String() const {
    String s;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i != 0 || j != 0) {
                s += ", ";
            }

            s += String::num(elements[i][j]);
        }
    }
    return s;
}

Basis::operator Quat() const {
    real_t result[4];
    const real_t trace = elements[0][0] + elements[1][1] + elements[2][2];
    if (trace > 0.0) {
        real_t size = std::sqrt(trace + 1);
        result[3]   = size / 2;
        size        = 1 / result[3];
        result[0]   = (elements[2][1] - elements[1][2]) * size;
        result[1]   = (elements[0][2] - elements[2][0]) * size;
        result[2]   = (elements[1][0] - elements[0][1]) * size;
    } else {
        const int i = elements[0][0] < elements[1][1]
                        ? (elements[1][1] < elements[2][2] ? 2 : 1)
                    : elements[0][0] < elements[2][2] ? 2
                                                      : 0;
        const int j = (i + 1) % 3;
        const int k = (i + 2) % 3;

        real_t size =
            std::sqrt(elements[i][i] - elements[j][j] - elements[k][k] + 1);
        result[i] = size / 2;
        size      = 1 / result[i];
        result[3] = (elements[k][j] - elements[j][k]) * size;
        result[j] = (elements[j][i] + elements[i][j]) * size;
        result[k] = (elements[k][i] + elements[i][k]) * size;
    }
    return {result[0], result[1], result[2], result[3]};
}

void Basis::set(
    const real_t xx,
    const real_t xy,
    const real_t xz,
    const real_t yx,
    const real_t yy,
    const real_t yz,
    const real_t zx,
    const real_t zy,
    const real_t zz
) {
    elements[0][0] = xx;
    elements[0][1] = xy;
    elements[0][2] = xz;
    elements[1][0] = yx;
    elements[1][1] = yy;
    elements[1][2] = yz;
    elements[2][0] = zx;
    elements[2][1] = zy;
    elements[2][2] = zz;
}

Vector3 Basis::get_row(const int row) const {
    return {elements[row][0], elements[row][1], elements[row][2]};
}

void Basis::set_row(const int row, const Vector3& values) {
    elements[row][0] = values.x;
    elements[row][1] = values.y;
    elements[row][2] = values.z;
}

Vector3 Basis::get_column(const int column) const {
    return {elements[0][column], elements[1][column], elements[2][column]};
}

Vector3 Basis::get_main_diagonal() const {
    return {elements[0][0], elements[1][1], elements[2][2]};
}

Vector3 Basis::get_axis(const int axis) const {
    return {elements[0][axis], elements[1][axis], elements[2][axis]};
}

void Basis::set_axis(const int axis, const Vector3& value) {
    elements[0][axis] = value.x;
    elements[1][axis] = value.y;
    elements[2][axis] = value.z;
}

int Basis::get_orthogonal_index() const {
    Basis orthogonal = *this;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            real_t value = orthogonal[i][j];
            if (value > 0.5) {
                value = 1.0;
            } else if (value < -0.5) {
                value = -1.0;
            } else {
                value = 0;
            }
            orthogonal[i][j] = value;
        }
    }

    for (int i = 0; i < 24; i++) {
        if (orthogonal_bases[i] == orthogonal) {
            return i;
        }
    }
    return 0;
}

void Basis::set_orthogonal_index(const int index) {
    ERR_FAIL_INDEX(index, 24);
    *this = orthogonal_bases[index];
}

Vector3 Basis::get_euler() const {
    return get_euler_yxz();
}

void Basis::set_euler(const Vector3& euler) {
    set_euler_yxz(euler);
}

// Returns a vector containing the Euler angles of rotation.
// Uses YXZ convention, where Z is the first rotation, then X, then Y.
Vector3 Basis::get_euler_yxz() const {
    ERR_FAIL_COND_V(!is_rotation(), {});
    // Euler angles in YXZ convention.
    // See https://en.wikipedia.org/wiki/Euler_angles#Rotation_matrix
    //
    // rot =  cy*cz+sy*sx*sz    cz*sy*sx-cy*sz        cx*sy
    //        cx*sz             cx*cz                 -sx
    //        cy*sx*sz-cz*sy    cy*cz*sx+sy*sz        cy*cx
    real_t x           = 0;
    real_t y           = 0;
    real_t z           = 0;
    const real_t sin_x = -elements[1][2];
    if (sin_x > -1) {
        if (sin_x < 1) {
            if (elements[1][0] == 0 && elements[0][1] == 0
                && elements[0][2] == 0 && elements[2][0] == 0
                && elements[0][0] == 1) {
                // This is a pure X rotation.
                x = std::atan2(sin_x, elements[1][1]);
            } else {
                x = std::asin(sin_x);
                y = std::atan2(elements[0][2], elements[2][2]);
                z = std::atan2(elements[1][0], elements[1][1]);
            }
        } else {
            // TODO: Check this logic: sin_x > -1 and sin_x < 1 doesn't mean
            // sin_x == 1
            x = Math_PI / 2;
            y = -std::atan2(-elements[0][1], elements[0][0]);
        }
    } else {
        // sin_x == -1
        x = -Math_PI / 2;
        y = -std::atan2(-elements[0][1], elements[0][0]);
    }
    return {x, y, z};
}

// The euler vector represents the Euler angles of rotation around each axis.
// Uses YXZ convention, where Z is the first rotation, then X, then Y.
void Basis::set_euler_yxz(const Vector3& euler) {
    const Basis x_rotation = get_x_rotation_matrix(euler.x);
    const Basis y_rotation = get_y_rotation_matrix(euler.y);
    const Basis z_rotation = get_z_rotation_matrix(euler.z);
    *this                  = y_rotation * (x_rotation * z_rotation);
}

// Returns a vector containing the Euler angles of rotation.
// Uses XYZ convention, where Z is the first rotation, then Y, then X.
Vector3 Basis::get_euler_xyz() const {
    ERR_FAIL_COND_V(!is_rotation(), {});
    // Euler angles in XYZ convention.
    // See https://en.wikipedia.org/wiki/Euler_angles#Rotation_matrix
    //
    // rot =  cy*cz          -cy*sz           sy
    //        cz*sx*sy+cx*sz  cx*cz-sx*sy*sz -cy*sx
    //       -cx*cz*sy+sx*sz  cz*sx+cx*sy*sz  cx*cy
    real_t x           = 0;
    real_t y           = 0;
    real_t z           = 0;
    const real_t sin_y = elements[0][2];
    if (sin_y < 1.0) {
        if (sin_y > -1.0) {
            if (elements[1][0] == 0 && elements[0][1] == 0
                && elements[1][2] == 0 && elements[2][1] == 0
                && elements[1][1] == 1) {
                // This a pure Y rotation.
                y = std::atan2(elements[0][2], elements[0][0]);
            } else {
                x = std::atan2(-elements[1][2], elements[2][2]);
                y = std::asin(sin_y);
                z = std::atan2(-elements[0][1], elements[0][0]);
            }
        } else {
            x = -std::atan2(elements[0][1], elements[1][1]);
            y = -Math_PI / 2;
        }
    } else {
        x = atan2(elements[0][1], elements[1][1]);
        y = Math_PI / 2;
    }
    return {x, y, z};
}

// The euler vector represents the Euler angles of rotation around each axis.
// Uses XYZ convention, where Z is the first rotation, then Y, then X.
void Basis::set_euler_xyz(const Vector3& euler) {
    const Basis x_rotation = get_x_rotation_matrix(euler.x);
    const Basis y_rotation = get_y_rotation_matrix(euler.y);
    const Basis z_rotation = get_z_rotation_matrix(euler.z);
    *this                  = x_rotation * (y_rotation * z_rotation);
}

bool Basis::is_symmetric() const {
    if (std::fabs(elements[0][1] - elements[1][0]) > CMP_EPSILON) {
        return false;
    }
    if (std::fabs(elements[0][2] - elements[2][0]) > CMP_EPSILON) {
        return false;
    }
    if (std::fabs(elements[1][2] - elements[2][1]) > CMP_EPSILON) {
        return false;
    }
    return true;
}

bool Basis::is_orthogonal() const {
    const Basis id;
    const Basis m = *this * transposed();
    return isequal_approx(id, m);
}

bool Basis::is_rotation() const {
    return std::fabs(determinant() - 1) < CMP_EPSILON && is_orthogonal();
}

real_t Basis::determinant() const {
    return elements[0][0]
             * (elements[1][1] * elements[2][2]
                - elements[2][1] * elements[1][2])
         - elements[1][0]
               * (elements[0][1] * elements[2][2]
                  - elements[2][1] * elements[0][2])
         + elements[2][0]
               * (elements[0][1] * elements[1][2]
                  - elements[1][1] * elements[0][2]);
}

void Basis::invert() {
    const real_t cofactors[3] = {
        cofactor(elements, 1, 1, 2, 2),
        cofactor(elements, 1, 2, 2, 0),
        cofactor(elements, 1, 0, 2, 1)
    };
    const real_t determinant = elements[0][0] * cofactors[0]
                             + elements[0][1] * cofactors[1]
                             + elements[0][2] * cofactors[2];

    ERR_FAIL_COND(determinant == 0);

    const real_t size = 1.0f / determinant;

    set(cofactors[0] * size,
        cofactor(elements, 0, 2, 2, 1) * size,
        cofactor(elements, 0, 1, 1, 2) * size,
        cofactors[1] * size,
        cofactor(elements, 0, 0, 2, 2) * size,
        cofactor(elements, 0, 2, 1, 0) * size,
        cofactors[2] * size,
        cofactor(elements, 0, 1, 2, 0) * size,
        cofactor(elements, 0, 0, 1, 1) * size);
}

Basis Basis::inverse() const {
    Basis b = *this;
    b.invert();
    return b;
}

void Basis::transpose() {
    std::swap(elements[0][1], elements[1][0]);
    std::swap(elements[0][2], elements[2][0]);
    std::swap(elements[1][2], elements[2][1]);
}

Basis Basis::transposed() const {
    Basis b = *this;
    b.transpose();
    return b;
}

void Basis::orthonormalize() {
    ERR_FAIL_COND(determinant() == 0);
    // Gram-Schmidt Process
    Vector3 x = get_axis(0);
    Vector3 y = get_axis(1);
    Vector3 z = get_axis(2);

    x.normalize();
    y = y - x * x.dot(y);
    y.normalize();
    z = z - x * x.dot(z) - y * y.dot(z);
    z.normalize();

    set_axis(0, x);
    set_axis(1, y);
    set_axis(2, z);
}

Basis Basis::orthonormalized() const {
    Basis b = *this;
    b.orthonormalize();
    return b;
}

Basis Basis::diagonalize() {
    ERR_FAIL_COND_V(!is_symmetric(), {});
    Basis result;
    constexpr int maximum_iterations = 1024;
    int iteration                    = 0;
    real_t off_matrix_norm_2         = elements[0][1] * elements[0][1]
                             + elements[0][2] * elements[0][2]
                             + elements[1][2] * elements[1][2];
    while (off_matrix_norm_2 > CMP_EPSILON2 && iteration++ < maximum_iterations
    ) {
        // Find the pivot element.
        const real_t el01_2 = elements[0][1] * elements[0][1];
        const real_t el02_2 = elements[0][2] * elements[0][2];
        const real_t el12_2 = elements[1][2] * elements[1][2];
        int i, j;
        if (el01_2 > el02_2) {
            if (el12_2 > el01_2) {
                i = 1;
                j = 2;
            } else {
                i = 0;
                j = 1;
            }
        } else {
            if (el12_2 > el02_2) {
                i = 1;
                j = 2;
            } else {
                i = 0;
                j = 2;
            }
        }

        // Compute the rotation angle.
        real_t angle;
        if (fabs(elements[j][j] - elements[i][i]) < CMP_EPSILON) {
            angle = Math_PI / 4;
        } else {
            angle = std::atan(
                        2 * elements[i][j] / (elements[j][j] - elements[i][i])
                    )
                  / 2;
        }

        // Compute the rotation matrix.
        Basis rotation;
        rotation.elements[i][i] = rotation.elements[j][j] = std::cos(angle);
        rotation.elements[i][j] = -(rotation.elements[j][i] = std::sin(angle));

        // Update the off matrix norm.
        off_matrix_norm_2 -= elements[i][j] * elements[i][j];

        // Apply the rotation.
        *this  = rotation * *this * rotation.transposed();
        result = rotation * result;
    }
    return result;
}

void Basis::rotate(const Vector3& axis, const real_t phi) {
    *this = rotated(axis, phi);
}

Basis Basis::rotated(const Vector3& axis, const real_t phi) const {
    return Basis(axis, phi) * *this;
}

Vector3 Basis::get_scale() const {
    // Assumes M = R.S, perform a polar decomposition to extract R and S.
    // TODO: Do a proper polar decomposition.
    const real_t sign = determinant() > 0 ? 1 : -1;
    const real_t x =
        Vector3(elements[0][0], elements[1][0], elements[2][0]).length();
    const real_t y =
        Vector3(elements[0][1], elements[1][1], elements[2][1]).length();
    const real_t z =
        Vector3(elements[0][2], elements[1][2], elements[2][2]).length();
    return {sign * x, sign * y, sign * z};
}

void Basis::scale(const Vector3& factor) {
    elements[0][0] *= factor.x;
    elements[0][1] *= factor.x;
    elements[0][2] *= factor.x;
    elements[1][0] *= factor.y;
    elements[1][1] *= factor.y;
    elements[1][2] *= factor.y;
    elements[2][0] *= factor.z;
    elements[2][1] *= factor.z;
    elements[2][2] *= factor.z;
}

Basis Basis::scaled(const Vector3& factor) const {
    Basis b = *this;
    b.scale(factor);
    return b;
}

Basis Basis::slerp(const Basis& to, const float weight) const {
    ERR_FAIL_COND_V(!is_rotation(), Basis());
    ERR_FAIL_COND_V(!to.is_rotation(), Basis());
    // TODO: Make more efficient: Implement directly without using quaternions.
    const Quat from_quaternion(*this);
    const Quat to_quaternion(to);
    const Quat result = from_quaternion.slerp(to_quaternion, weight);
    return {result};
}

Vector3 Basis::xform(const Vector3& vector) const {
    return {
        elements[0].dot(vector),
        elements[1].dot(vector),
        elements[2].dot(vector)
    };
}

Vector3 Basis::xform_inv(const Vector3& vector) const {
    return {
        elements[0][0] * vector.x + elements[1][0] * vector.y
            + elements[2][0] * vector.z,
        elements[0][1] * vector.x + elements[1][1] * vector.y
            + elements[2][1] * vector.z,
        elements[0][2] * vector.x + elements[1][2] * vector.y
            + elements[2][2] * vector.z
    };
}

Basis Basis::transpose_xform(const Basis& m) const {
    return {
        elements[0].x * m[0].x + elements[1].x * m[1].x
            + elements[2].x * m[2].x,
        elements[0].x * m[0].y + elements[1].x * m[1].y
            + elements[2].x * m[2].y,
        elements[0].x * m[0].z + elements[1].x * m[1].z
            + elements[2].x * m[2].z,
        elements[0].y * m[0].x + elements[1].y * m[1].x
            + elements[2].y * m[2].x,
        elements[0].y * m[0].y + elements[1].y * m[1].y
            + elements[2].y * m[2].y,
        elements[0].y * m[0].z + elements[1].y * m[1].z
            + elements[2].y * m[2].z,
        elements[0].z * m[0].x + elements[1].z * m[1].x
            + elements[2].z * m[2].x,
        elements[0].z * m[0].y + elements[1].z * m[1].y
            + elements[2].z * m[2].y,
        elements[0].z * m[0].z + elements[1].z * m[1].z + elements[2].z * m[2].z
    };
}

real_t Basis::tdotx(const Vector3& v) const {
    return elements[0][0] * v[0] + elements[1][0] * v[1]
         + elements[2][0] * v[2];
}

real_t Basis::tdoty(const Vector3& v) const {
    return elements[0][1] * v[0] + elements[1][1] * v[1]
         + elements[2][1] * v[2];
}

real_t Basis::tdotz(const Vector3& v) const {
    return elements[0][2] * v[0] + elements[1][2] * v[1]
         + elements[2][2] * v[2];
}

bool isequal_approx(const Basis& left, const Basis& right) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (fabs(left.elements[i][j] - right.elements[i][j]) < CMP_EPSILON
                == false) {
                return false;
            }
        }
    }
    return true;
}

bool operator==(const Basis& left, const Basis& right) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (left.elements[i][j] != right.elements[i][j]) {
                return false;
            }
        }
    }
    return true;
}

bool operator!=(const Basis& left, const Basis& right) {
    return !(left == right);
}

Basis operator+(Basis left, const Basis& right) {
    left += right;
    return left;
}

Basis operator-(Basis left, const Basis& right) {
    left -= right;
    return left;
}

Basis operator*(Basis left, const Basis& right) {
    left *= right;
    return left;
}

Basis operator*(Basis left, const real_t value) {
    left *= value;
    return left;
}

Basis operator*(const real_t value, Basis right) {
    right *= value;
    return right;
}
} // namespace Rebel
