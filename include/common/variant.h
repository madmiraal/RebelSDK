// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef VARIANT_H
#define VARIANT_H

#include "api/gdnative/variant.h"
#include "common/aabb.h"
#include "common/basis.h"
#include "common/color.h"
#include "common/defs.h"
#include "common/nodepath.h"
#include "common/plane.h"
#include "common/poolarrays.h"
#include "common/quat.h"
#include "common/rect2.h"
#include "common/rid.h"
#include "common/string.h"
#include "common/transform.h"
#include "common/transform2d.h"
#include "common/vector2.h"
#include "common/vector3.h"

namespace Rebel {
class Dictionary;
class Array;

class Variant {
public:
    enum Type {
        NIL,
        BOOL,
        INT,
        REAL,
        STRING,
        VECTOR2,
        RECT2,
        VECTOR3,
        TRANSFORM2D,
        PLANE,
        QUAT,
        // TODO: Rename to AABB
        RECT3,
        BASIS,
        TRANSFORM,
        COLOR,
        NODE_PATH,
        _RID,
        OBJECT,
        DICTIONARY,
        ARRAY,
        POOL_BYTE_ARRAY,
        POOL_INT_ARRAY,
        POOL_REAL_ARRAY,
        POOL_STRING_ARRAY,
        POOL_VECTOR2_ARRAY,
        POOL_VECTOR3_ARRAY,
        POOL_COLOR_ARRAY,
        VARIANT_MAX
    };

    enum Operator {
        OP_EQUAL,
        OP_NOT_EQUAL,
        OP_LESS,
        OP_LESS_EQUAL,
        OP_GREATER,
        OP_GREATER_EQUAL,
        OP_ADD,
        OP_SUBSTRACT,
        OP_MULTIPLY,
        OP_DIVIDE,
        OP_NEGATE,
        OP_POSITIVE,
        OP_MODULE,
        OP_STRING_CONCAT,
        OP_SHIFT_LEFT,
        OP_SHIFT_RIGHT,
        OP_BIT_AND,
        OP_BIT_OR,
        OP_BIT_XOR,
        OP_BIT_NEGATE,
        OP_AND,
        OP_OR,
        OP_XOR,
        OP_NOT,
        OP_IN,
        OP_MAX
    };

    Variant();
    Variant(const Variant& other);
    Variant(bool from_bool);
    Variant(signed char from_signed_char);
    Variant(unsigned char from_unsigned_char);
    Variant(short from_short);
    Variant(unsigned short from_unsigned_short);
    Variant(int from_int);
    Variant(unsigned int from_unsigned_int);
    Variant(int64_t from_64_bit_int);
    Variant(uint64_t from_unsigned_64_bit_int);
    Variant(float from_float);
    Variant(double from_double);
    Variant(const String& string);
    Variant(const char* characters);
    Variant(const wchar_t* wide_characters);
    Variant(const Vector2& vector2);
    Variant(const Vector3& vector3);
    Variant(const Quat& quaternion);
    Variant(const Rect2& rect2);
    Variant(const AABB& aabb);
    Variant(const Basis& basis);
    Variant(const Transform2D& transform2d);
    Variant(const Transform& transform);
    Variant(const Plane& plane);
    Variant(const Color& color);
    Variant(const NodePath& node_path);
    Variant(const RID& rid);
    Variant(const Dictionary& dictionary);
    Variant(const Array& array);
    Variant(const PoolByteArray& byte_array);
    Variant(const PoolColorArray& color_array);
    Variant(const PoolIntArray& int_array);
    Variant(const PoolRealArray& real_array);
    Variant(const PoolStringArray& string_array);
    Variant(const PoolVector2Array& vector2_array);
    Variant(const PoolVector3Array& vector3_array);
    Variant(const Object* object);
    ~Variant();

    Variant& operator=(const Variant& other);

    operator bool() const;
    operator signed char() const;
    operator unsigned char() const;
    operator short() const;
    operator unsigned short() const;
    operator int() const;
    operator unsigned int() const;
    operator int64_t() const;
    operator uint64_t() const;
    operator wchar_t() const;
    operator float() const;
    operator double() const;
    operator String() const;
    operator Vector2() const;
    operator Vector3() const;
    operator Quat() const;
    operator Rect2() const;
    operator AABB() const;
    operator Basis() const;
    operator Transform2D() const;
    operator Transform() const;
    operator Plane() const;
    operator Color() const;
    operator NodePath() const;
    operator RID() const;
    operator Dictionary() const;
    operator Array() const;
    operator PoolByteArray() const;
    operator PoolColorArray() const;
    operator PoolIntArray() const;
    operator PoolRealArray() const;
    operator PoolStringArray() const;
    operator PoolVector2Array() const;
    operator PoolVector3Array() const;
    operator rebel_object*() const;

    template <typename T>
    operator T*() const {
        return static_cast<T*>(T::from_variant(*this));
    }

    bool operator==(const Variant& right) const;
    bool operator<(const Variant& right) const;

    bool booleanize() const;
    bool hash_compare(const Variant& right) const;

    bool has_method(const String& method) const;

    Type get_type() const;

    Variant call(
        const String& method,
        const Variant** arguments,
        int argument_count
    );

private:
    rebel_variant internal_variant;

    friend class Array;

    explicit Variant(const rebel_variant& other);
};

bool operator!=(const Variant& left, const Variant& right);
bool operator<=(const Variant& left, const Variant& right);
bool operator>(const Variant& left, const Variant& right);
bool operator>=(const Variant& left, const Variant& right);
} // namespace Rebel

#endif // VARIANT_H
