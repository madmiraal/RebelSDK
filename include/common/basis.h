// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef BASIS_H
#define BASIS_H

#include "common/vector3.h"

namespace Rebel {
class Quat;

class Basis {
    // To take advantage of SIMD instructions, Rebel Engine uses row major
    // matrices. However, script interfaces use column major matrices.
    // To mimic the behavior of script interfaces we provide access to the data
    // using hidden (private) column vectors.
    template <int column>
    class ColumnVector3 {
        template <int row, int col>
        class ColumnVectorValue {
            ColumnVectorValue(const ColumnVectorValue& other) {
                *this = other;
            }

            ColumnVectorValue& operator=(const ColumnVectorValue& other) {
                if (this == &other) {
                    return *this;
                }
                *this = static_cast<real_t>(other);
                return *this;
            }

            ColumnVectorValue& operator=(const real_t& value) {
                elements[row][col] = value;
                return *this;
            }

            explicit operator real_t() const {
                return elements[row][col];
            }

            Vector3 elements[3];
        };

    public:
        enum Axis {
            AXIS_X,
            AXIS_Y,
            AXIS_Z,
        };

        union {
            ColumnVectorValue<0, column> x;
            ColumnVectorValue<1, column> y;
            ColumnVectorValue<2, column> z;
            Vector3 elements[3];
        };

        ColumnVector3& operator=(const ColumnVector3& other) {
            *this = Vector3(other);
            return *this;
        }

        ColumnVector3(const ColumnVector3& other) {
            *this = Vector3(other);
        }

        ColumnVector3& operator=(const Vector3& other) {
            elements[0][column] = other.x;
            elements[1][column] = other.y;
            elements[2][column] = other.z;
            return *this;
        }

        explicit operator Vector3() const {
            return {
                elements[0][column],
                elements[1][column],
                elements[2][column]
            };
        }

        // We need to replicate the Vector3 interface to allow operations o
        // ColumnVector3 objects without an explicit cast or intermediate
        // assignment.

        const real_t& operator[](const int axis) const {
            return elements[axis][column];
        }

        real_t& operator[](const int axis) {
            return elements[axis][column];
        }

        ColumnVector3& operator+=(const Vector3& other) {
            return *this = *this + other;
        }

        Vector3 operator+(const Vector3& other) const {
            return Vector3(*this) + other;
        }

        ColumnVector3& operator-=(const Vector3& other) {
            return *this = *this - other;
        }

        Vector3 operator-(const Vector3& other) const {
            return Vector3(*this) - other;
        }

        ColumnVector3& operator*=(const Vector3& other) {
            return *this = *this * other;
        }

        Vector3 operator*(const Vector3& other) const {
            return Vector3(*this) * other;
        }

        ColumnVector3& operator/=(const Vector3& other) {
            return *this = *this / other;
        }

        Vector3 operator/(const Vector3& other) const {
            return Vector3(*this) / other;
        }

        ColumnVector3& operator*=(real_t value) {
            return *this = *this * value;
        }

        Vector3 operator*(const real_t value) const {
            return Vector3(*this) * value;
        }

        ColumnVector3& operator/=(real_t value) {
            return *this = *this / value;
        }

        Vector3 operator/(const real_t value) const {
            return Vector3(*this) / value;
        }

        Vector3 operator-() const {
            return -Vector3(*this);
        }

        bool operator==(const Vector3& other) const {
            return Vector3(*this) == other;
        }

        bool operator!=(const Vector3& other) const {
            return Vector3(*this) != other;
        }

        bool operator<(const Vector3& other) const {
            return Vector3(*this) < other;
        }

        bool operator<=(const Vector3& other) const {
            return Vector3(*this) <= other;
        }

        Vector3 abs() const {
            return Vector3(*this).abs();
        }

        Vector3 ceil() const {
            return Vector3(*this).ceil();
        }

        Vector3 cross(const Vector3& b) const {
            return Vector3(*this).cross(b);
        }

        Vector3 linear_interpolate(const Vector3& to, const real_t factor)
            const {
            return Vector3(*this).linear_interpolate(to, factor);
        }

        Vector3 cubic_interpolate(
            const Vector3& b,
            const Vector3& pre_a,
            const Vector3& post_b,
            const real_t t
        ) const {
            return Vector3(*this).cubic_interpolate(b, pre_a, post_b, t);
        }

        Vector3 bounce(const Vector3& normal) const {
            return Vector3(*this).bounce(normal);
        }

        real_t length() const {
            return Vector3(*this).length();
        }

        real_t length_squared() const {
            return Vector3(*this).length_squared();
        }

        real_t distance_squared_to(const Vector3& b) const {
            return Vector3(*this).distance_squared_to(b);
        }

        real_t distance_to(const Vector3& b) const {
            return Vector3(*this).distance_to(b);
        }

        real_t dot(const Vector3& b) const {
            return Vector3(*this).dot(b);
        }

        real_t angle_to(const Vector3& b) const {
            return Vector3(*this).angle_to(b);
        }

        Vector3 floor() const {
            return Vector3(*this).floor();
        }

        Vector3 inverse() const {
            return Vector3(*this).inverse();
        }

        bool is_normalized() const {
            return Vector3(*this).is_normalized();
        }

        Basis outer(const Vector3& b) const {
            return Vector3(*this).outer(b);
        }

        int max_axis() const {
            return Vector3(*this).max_axis();
        }

        int min_axis() const {
            return Vector3(*this).min_axis();
        }

        void normalize() {
            Vector3 v = *this;
            v.normalize();
            *this = v;
        }

        Vector3 normalized() const {
            return Vector3(*this).normalized();
        }

        Vector3 reflect(const Vector3& by) const {
            return Vector3(*this).reflect(by);
        }

        Vector3 rotated(const Vector3& axis, const real_t phi) const {
            return Vector3(*this).rotated(axis, phi);
        }

        void rotate(const Vector3& axis, const real_t phi) {
            Vector3 result = *this;
            result.rotate(axis, phi);
            *this = result;
        }

        Vector3 slide(const Vector3& by) const {
            return Vector3(*this).slide(by);
        }

        void snap(const real_t value) {
            Vector3 result = *this;
            result.snap(value);
            *this = result;
        }

        Vector3 snapped(const float by) {
            return Vector3(*this).snapped(by);
        }

        operator String() const {
            return String(Vector3(*this));
        }
    }; // class ColumnVector3

public:
    union {
        ColumnVector3<0> x;
        ColumnVector3<1> y;
        ColumnVector3<2> z;
        Vector3 elements[3];
    };

    Basis();
    Basis(
        real_t xx,
        real_t xy,
        real_t xz,
        real_t yx,
        real_t yy,
        real_t yz,
        real_t zx,
        real_t zy,
        real_t zz
    );
    Basis(const Vector3& row1, const Vector3& row2, const Vector3& row3);
    Basis(const Quat& quaternion);
    Basis(const Vector3& euler);
    Basis(const Vector3& axis, real_t phi);
    Basis(const Basis& other);
    Basis& operator=(const Basis& other);

    Vector3 operator[](int axis) const;

    ColumnVector3<0>& operator[](const int axis) {
        // We need to do a little pointer magic to get this to work, because the
        // ColumnVector3 template takes the axis as a template parameter.
        // Don't touch this unless you're sure what you're doing!
        return reinterpret_cast<Basis*>(reinterpret_cast<real_t*>(this) + axis)
            ->x;
    }

    void operator+=(const Basis& right);
    void operator-=(const Basis& right);
    void operator*=(const Basis& right);
    void operator*=(real_t value);

    operator String() const;
    operator Quat() const;

    void set(
        real_t xx,
        real_t xy,
        real_t xz,
        real_t yx,
        real_t yy,
        real_t yz,
        real_t zx,
        real_t zy,
        real_t zz
    );

    Vector3 get_row(int row) const;
    void set_row(int row, const Vector3& values);

    Vector3 get_column(int column) const;
    Vector3 get_main_diagonal() const;

    Vector3 get_axis(int axis) const;
    void set_axis(int axis, const Vector3& value);

    int get_orthogonal_index() const;
    void set_orthogonal_index(int index);

    Vector3 get_euler() const;
    void set_euler(const Vector3& euler);
    Vector3 get_euler_yxz() const;
    void set_euler_yxz(const Vector3& euler);
    Vector3 get_euler_xyz() const;
    void set_euler_xyz(const Vector3& euler);

    bool is_symmetric() const;
    bool is_orthogonal() const;
    bool is_rotation() const;
    real_t determinant() const;

    void invert();
    Basis inverse() const;

    void transpose();
    Basis transposed() const;

    void orthonormalize();
    Basis orthonormalized() const;

    Basis diagonalize();

    void rotate(const Vector3& axis, real_t phi);
    Basis rotated(const Vector3& axis, real_t phi) const;

    Vector3 get_scale() const;
    void scale(const Vector3& factor);
    Basis scaled(const Vector3& factor) const;

    Basis slerp(const Basis& to, float weight) const;
    Vector3 xform(const Vector3& vector) const;
    Vector3 xform_inv(const Vector3& vector) const;
    Basis transpose_xform(const Basis& m) const;

    // Transposed dot products
    real_t tdotx(const Vector3& v) const;
    real_t tdoty(const Vector3& v) const;
    real_t tdotz(const Vector3& v) const;
};

bool isequal_approx(const Basis& left, const Basis& right);
bool operator==(const Basis& left, const Basis& right);
bool operator!=(const Basis& left, const Basis& right);
Basis operator+(Basis left, const Basis& right);
Basis operator-(Basis left, const Basis& right);
Basis operator*(Basis left, const Basis& right);
Basis operator*(Basis left, real_t value);
Basis operator*(real_t value, Basis right);
} // namespace Rebel

#endif // BASIS_H
