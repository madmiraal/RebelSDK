// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/variant.h"

#include "classes/object.h"
#include "common/commontypes.h"
#include "common/rebelglobal.h"

namespace Rebel {
Variant::Variant() {
    api->rebel_variant_new_nil(&internal_variant);
}

Variant::Variant(const Variant& other) {
    api->rebel_variant_new_copy(&internal_variant, &other.internal_variant);
}

Variant::Variant(const bool from_bool) {
    api->rebel_variant_new_bool(&internal_variant, from_bool);
}

Variant::Variant(const signed char from_signed_char) {
    api->rebel_variant_new_int(&internal_variant, from_signed_char);
}

Variant::Variant(const unsigned char from_unsigned_char) {
    api->rebel_variant_new_uint(&internal_variant, from_unsigned_char);
}

Variant::Variant(const short from_short) {
    api->rebel_variant_new_int(&internal_variant, from_short);
}

Variant::Variant(const unsigned short from_unsigned_short) {
    api->rebel_variant_new_uint(&internal_variant, from_unsigned_short);
}

Variant::Variant(const int from_int) {
    api->rebel_variant_new_int(&internal_variant, from_int);
}

Variant::Variant(const unsigned int from_unsigned_int) {
    api->rebel_variant_new_uint(&internal_variant, from_unsigned_int);
}

Variant::Variant(const int64_t from_64_bit_int) {
    api->rebel_variant_new_int(&internal_variant, from_64_bit_int);
}

Variant::Variant(const uint64_t from_unsigned_64_bit_int) {
    api->rebel_variant_new_uint(&internal_variant, from_unsigned_64_bit_int);
}

Variant::Variant(const float from_float) {
    api->rebel_variant_new_real(&internal_variant, from_float);
}

Variant::Variant(const double from_double) {
    api->rebel_variant_new_real(&internal_variant, from_double);
}

Variant::Variant(const String& string) {
    api->rebel_variant_new_string(
        &internal_variant,
        reinterpret_cast<const rebel_string*>(&string)
    );
}

Variant::Variant(const char* const characters) {
    const String string(characters);
    api->rebel_variant_new_string(
        &internal_variant,
        reinterpret_cast<const rebel_string*>(&string)
    );
}

Variant::Variant(const wchar_t* wide_characters) {
    const String string(wide_characters);
    api->rebel_variant_new_string(
        &internal_variant,
        reinterpret_cast<const rebel_string*>(&string)
    );
}

Variant::Variant(const Object* object) {
    if (object) {
        api->rebel_variant_new_object(&internal_variant, object->owner);
    } else {
        api->rebel_variant_new_nil(&internal_variant);
    }
}

Variant::Variant(const Vector2& vector2) {
    api->rebel_variant_new_vector2(
        &internal_variant,
        reinterpret_cast<const rebel_vector2*>(&vector2)
    );
}

Variant::Variant(const Vector3& vector3) {
    api->rebel_variant_new_vector3(
        &internal_variant,
        reinterpret_cast<const rebel_vector3*>(&vector3)
    );
}

Variant::Variant(const Quat& quaternion) {
    api->rebel_variant_new_quat(
        &internal_variant,
        reinterpret_cast<const rebel_quat*>(&quaternion)
    );
}

Variant::Variant(const Rect2& rect2) {
    api->rebel_variant_new_rect2(
        &internal_variant,
        reinterpret_cast<const rebel_rect2*>(&rect2)
    );
}

Variant::Variant(const AABB& aabb) {
    api->rebel_variant_new_aabb(
        &internal_variant,
        reinterpret_cast<const rebel_aabb*>(&aabb)
    );
}

Variant::Variant(const Basis& basis) {
    api->rebel_variant_new_basis(
        &internal_variant,
        reinterpret_cast<const rebel_basis*>(&basis)
    );
}

Variant::Variant(const Transform2D& transform2d) {
    api->rebel_variant_new_transform2d(
        &internal_variant,
        reinterpret_cast<const rebel_transform2d*>(&transform2d)
    );
}

Variant::Variant(const Transform& transform) {
    api->rebel_variant_new_transform(
        &internal_variant,
        reinterpret_cast<const rebel_transform*>(&transform)
    );
}

Variant::Variant(const Plane& plane) {
    api->rebel_variant_new_plane(
        &internal_variant,
        reinterpret_cast<const rebel_plane*>(&plane)
    );
}

Variant::Variant(const Color& color) {
    api->rebel_variant_new_color(
        &internal_variant,
        reinterpret_cast<const rebel_color*>(&color)
    );
}

Variant::Variant(const NodePath& node_path) {
    api->rebel_variant_new_node_path(
        &internal_variant,
        reinterpret_cast<const rebel_node_path*>(&node_path)
    );
}

Variant::Variant(const RID& rid) {
    api->rebel_variant_new_rid(
        &internal_variant,
        reinterpret_cast<const rebel_rid*>(&rid)
    );
}

Variant::Variant(const Dictionary& dictionary) {
    api->rebel_variant_new_dictionary(
        &internal_variant,
        reinterpret_cast<const rebel_dictionary*>(&dictionary)
    );
}

Variant::Variant(const Array& array) {
    api->rebel_variant_new_array(
        &internal_variant,
        reinterpret_cast<const rebel_array*>(&array)
    );
}

Variant::Variant(const PoolByteArray& byte_array) {
    api->rebel_variant_new_pool_byte_array(
        &internal_variant,
        reinterpret_cast<const rebel_pool_byte_array*>(&byte_array)
    );
}

Variant::Variant(const PoolColorArray& color_array) {
    api->rebel_variant_new_pool_color_array(
        &internal_variant,
        reinterpret_cast<const rebel_pool_color_array*>(&color_array)
    );
}

Variant::Variant(const PoolIntArray& int_array) {
    api->rebel_variant_new_pool_int_array(
        &internal_variant,
        reinterpret_cast<const rebel_pool_int_array*>(&int_array)
    );
}

Variant::Variant(const PoolRealArray& real_array) {
    api->rebel_variant_new_pool_real_array(
        &internal_variant,
        reinterpret_cast<const rebel_pool_real_array*>(&real_array)
    );
}

Variant::Variant(const PoolStringArray& string_array) {
    api->rebel_variant_new_pool_string_array(
        &internal_variant,
        reinterpret_cast<const rebel_pool_string_array*>(&string_array)
    );
}

Variant::Variant(const PoolVector2Array& vector2_array) {
    api->rebel_variant_new_pool_vector2_array(
        &internal_variant,
        reinterpret_cast<const rebel_pool_vector2_array*>(&vector2_array)
    );
}

Variant::Variant(const PoolVector3Array& vector3_array) {
    api->rebel_variant_new_pool_vector3_array(
        &internal_variant,
        reinterpret_cast<const rebel_pool_vector3_array*>(&vector3_array)
    );
}

Variant::~Variant() {
    api->rebel_variant_destroy(&internal_variant);
}

Variant& Variant::operator=(const Variant& other) {
    api->rebel_variant_destroy(&internal_variant);
    api->rebel_variant_new_copy(&internal_variant, &other.internal_variant);
    return *this;
}

Variant::operator bool() const {
    return booleanize();
}

Variant::operator signed char() const {
    return static_cast<signed char>(api->rebel_variant_as_int(&internal_variant)
    );
}

Variant::operator unsigned char() const {
    return static_cast<unsigned char>(
        api->rebel_variant_as_uint(&internal_variant)
    );
}

Variant::operator short() const {
    return static_cast<short>(api->rebel_variant_as_int(&internal_variant));
}

Variant::operator unsigned short() const {
    return static_cast<unsigned short>(
        api->rebel_variant_as_uint(&internal_variant)
    );
}

Variant::operator int() const {
    return static_cast<int>(api->rebel_variant_as_int(&internal_variant));
}

Variant::operator unsigned int() const {
    return static_cast<unsigned int>(
        api->rebel_variant_as_uint(&internal_variant)
    );
}

Variant::operator int64_t() const {
    return api->rebel_variant_as_int(&internal_variant);
}

Variant::operator uint64_t() const {
    return api->rebel_variant_as_uint(&internal_variant);
}

Variant::operator wchar_t() const {
    return static_cast<wchar_t>(api->rebel_variant_as_int(&internal_variant));
}

Variant::operator float() const {
    return static_cast<float>(api->rebel_variant_as_real(&internal_variant));
}

Variant::operator double() const {
    return api->rebel_variant_as_real(&internal_variant);
}

Variant::operator String() const {
    const rebel_string string = api->rebel_variant_as_string(&internal_variant);
    return String(string);
}

Variant::operator Vector2() const {
    rebel_vector2 vector2 = api->rebel_variant_as_vector2(&internal_variant);
    return *reinterpret_cast<Vector2*>(&vector2);
}

Variant::operator Vector3() const {
    rebel_vector3 vector3 = api->rebel_variant_as_vector3(&internal_variant);
    return *reinterpret_cast<Vector3*>(&vector3);
}

Variant::operator Quat() const {
    rebel_quat quat = api->rebel_variant_as_quat(&internal_variant);
    return *reinterpret_cast<Quat*>(&quat);
}

Variant::operator Rect2() const {
    rebel_rect2 rect2 = api->rebel_variant_as_rect2(&internal_variant);
    return *reinterpret_cast<Rect2*>(&rect2);
}

Variant::operator AABB() const {
    rebel_aabb aabb = api->rebel_variant_as_aabb(&internal_variant);
    return *reinterpret_cast<AABB*>(&aabb);
}

Variant::operator Basis() const {
    rebel_basis basis = api->rebel_variant_as_basis(&internal_variant);
    return *reinterpret_cast<Basis*>(&basis);
}

Variant::operator Transform2D() const {
    rebel_transform2d transform2d =
        api->rebel_variant_as_transform2d(&internal_variant);
    return *reinterpret_cast<Transform2D*>(&transform2d);
}

Variant::operator Transform() const {
    rebel_transform transform =
        api->rebel_variant_as_transform(&internal_variant);
    return *reinterpret_cast<Transform*>(&transform);
}

Variant::operator Plane() const {
    rebel_plane plane = api->rebel_variant_as_plane(&internal_variant);
    return *reinterpret_cast<Plane*>(&plane);
}

Variant::operator Color() const {
    rebel_color color = api->rebel_variant_as_color(&internal_variant);
    return *reinterpret_cast<Color*>(&color);
}

Variant::operator NodePath() const {
    return NodePath(api->rebel_variant_as_node_path(&internal_variant));
}

Variant::operator RID() const {
    rebel_rid rid = api->rebel_variant_as_rid(&internal_variant);
    return *reinterpret_cast<RID*>(&rid);
}

Variant::operator Dictionary() const {
    return Dictionary(api->rebel_variant_as_dictionary(&internal_variant));
}

Variant::operator Array() const {
    return Array(api->rebel_variant_as_array(&internal_variant));
}

Variant::operator PoolByteArray() const {
    return PoolByteArray(api->rebel_variant_as_pool_byte_array(&internal_variant
    ));
}

Variant::operator PoolColorArray() const {
    return PoolColorArray(
        api->rebel_variant_as_pool_color_array(&internal_variant)
    );
}

Variant::operator PoolIntArray() const {
    return PoolIntArray(api->rebel_variant_as_pool_int_array(&internal_variant)
    );
}

Variant::operator PoolRealArray() const {
    return PoolRealArray(api->rebel_variant_as_pool_real_array(&internal_variant
    ));
}

Variant::operator PoolStringArray() const {
    return PoolStringArray(
        api->rebel_variant_as_pool_string_array(&internal_variant)
    );
}

Variant::operator PoolVector2Array() const {
    return PoolVector2Array(
        api->rebel_variant_as_pool_vector2_array(&internal_variant)
    );
}

Variant::operator PoolVector3Array() const {
    return PoolVector3Array(
        api->rebel_variant_as_pool_vector3_array(&internal_variant)
    );
}

Variant::operator rebel_object*() const {
    return api->rebel_variant_as_object(&internal_variant);
}

bool Variant::operator==(const Variant& right) const {
    return api->rebel_variant_operator_equal(
        &internal_variant,
        &right.internal_variant
    );
}

bool Variant::operator<(const Variant& right) const {
    return api->rebel_variant_operator_less(
        &internal_variant,
        &right.internal_variant
    );
}

bool Variant::booleanize() const {
    return api->rebel_variant_booleanize(&internal_variant);
}

bool Variant::hash_compare(const Variant& right) const {
    return api->rebel_variant_hash_compare(
        &internal_variant,
        &right.internal_variant
    );
}

bool Variant::has_method(const String& method) const {
    return api->rebel_variant_has_method(
        &internal_variant,
        reinterpret_cast<const rebel_string*>(&method)
    );
}

Variant::Type Variant::get_type() const {
    return static_cast<Type>(api->rebel_variant_get_type(&internal_variant));
}

Variant Variant::call(
    const String& method,
    const Variant** arguments,
    const int argument_count
) {
    return Variant(api->rebel_variant_call(
        &internal_variant,
        reinterpret_cast<const rebel_string*>(&method),
        reinterpret_cast<const rebel_variant**>(arguments),
        argument_count,
        nullptr
    ));
}

Variant::Variant(const rebel_variant& other) : internal_variant(other) {}

bool operator!=(const Variant& left, const Variant& right) {
    return !(left == right);
}

bool operator<=(const Variant& left, const Variant& right) {
    return left < right || left == right;
}

bool operator>(const Variant& left, const Variant& right) {
    return !(left <= right);
}

bool operator>=(const Variant& left, const Variant& right) {
    return left > right || left == right;
}
} // namespace Rebel
