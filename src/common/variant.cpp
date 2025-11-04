// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/variant.h"

#include "classes/object.h"
#include "common/commontypes.h"
#include "common/defs.h"
#include "common/rebelglobal.h"

namespace Rebel {

Variant::Variant() {
    api->rebel_variant_new_nil(&_rebel_variant);
}

Variant::Variant(const Variant& v) {
    api->rebel_variant_new_copy(&_rebel_variant, &v._rebel_variant);
}

Variant::Variant(bool p_bool) {
    api->rebel_variant_new_bool(&_rebel_variant, p_bool);
}

Variant::Variant(signed int p_int) // real one
{
    api->rebel_variant_new_int(&_rebel_variant, p_int);
}

Variant::Variant(unsigned int p_int) {
    api->rebel_variant_new_uint(&_rebel_variant, p_int);
}

Variant::Variant(signed short p_short) // real one
{
    api->rebel_variant_new_int(&_rebel_variant, (int)p_short);
}

Variant::Variant(int64_t p_char) // real one
{
    api->rebel_variant_new_int(&_rebel_variant, p_char);
}

Variant::Variant(uint64_t p_char) {
    api->rebel_variant_new_uint(&_rebel_variant, p_char);
}

Variant::Variant(float p_float) {
    api->rebel_variant_new_real(&_rebel_variant, p_float);
}

Variant::Variant(double p_double) {
    api->rebel_variant_new_real(&_rebel_variant, p_double);
}

Variant::Variant(const String& p_string) {
    api->rebel_variant_new_string(&_rebel_variant, (rebel_string*)&p_string);
}

Variant::Variant(const char* const p_cstring) {
    String s = String(p_cstring);
    api->rebel_variant_new_string(&_rebel_variant, (rebel_string*)&s);
}

Variant::Variant(const wchar_t* p_wstring) {
    String s = p_wstring;
    api->rebel_variant_new_string(&_rebel_variant, (rebel_string*)&s);
}

Variant::Variant(const Vector2& p_vector2) {
    api->rebel_variant_new_vector2(&_rebel_variant, (rebel_vector2*)&p_vector2);
}

Variant::Variant(const Rect2& p_rect2) {
    api->rebel_variant_new_rect2(&_rebel_variant, (rebel_rect2*)&p_rect2);
}

Variant::Variant(const Vector3& p_vector3) {
    api->rebel_variant_new_vector3(&_rebel_variant, (rebel_vector3*)&p_vector3);
}

Variant::Variant(const Plane& p_plane) {
    api->rebel_variant_new_plane(&_rebel_variant, (rebel_plane*)&p_plane);
}

Variant::Variant(const AABB& p_aabb) {
    api->rebel_variant_new_aabb(&_rebel_variant, (rebel_aabb*)&p_aabb);
}

Variant::Variant(const Quat& p_quat) {
    api->rebel_variant_new_quat(&_rebel_variant, (rebel_quat*)&p_quat);
}

Variant::Variant(const Basis& p_transform) {
    api->rebel_variant_new_basis(&_rebel_variant, (rebel_basis*)&p_transform);
}

Variant::Variant(const Transform2D& p_transform) {
    api->rebel_variant_new_transform2d(
        &_rebel_variant,
        (rebel_transform2d*)&p_transform
    );
}

Variant::Variant(const Transform& p_transform) {
    api->rebel_variant_new_transform(
        &_rebel_variant,
        (rebel_transform*)&p_transform
    );
}

Variant::Variant(const Color& p_color) {
    api->rebel_variant_new_color(&_rebel_variant, (rebel_color*)&p_color);
}

Variant::Variant(const NodePath& p_path) {
    api->rebel_variant_new_node_path(
        &_rebel_variant,
        (rebel_node_path*)&p_path
    );
}

Variant::Variant(const RID& p_rid) {
    api->rebel_variant_new_rid(&_rebel_variant, (rebel_rid*)&p_rid);
}

Variant::Variant(const Object* p_object) {
    if (p_object) {
        api->rebel_variant_new_object(&_rebel_variant, p_object->owner);
    } else {
        api->rebel_variant_new_nil(&_rebel_variant);
    }
}

Variant::Variant(const Dictionary& p_dictionary) {
    api->rebel_variant_new_dictionary(
        &_rebel_variant,
        (rebel_dictionary*)&p_dictionary
    );
}

Variant::Variant(const Array& p_array) {
    api->rebel_variant_new_array(&_rebel_variant, (rebel_array*)&p_array);
}

Variant::Variant(const PoolByteArray& p_raw_array) {
    api->rebel_variant_new_pool_byte_array(
        &_rebel_variant,
        (rebel_pool_byte_array*)&p_raw_array
    );
}

Variant::Variant(const PoolIntArray& p_int_array) {
    api->rebel_variant_new_pool_int_array(
        &_rebel_variant,
        (rebel_pool_int_array*)&p_int_array
    );
}

Variant::Variant(const PoolRealArray& p_real_array) {
    api->rebel_variant_new_pool_real_array(
        &_rebel_variant,
        (rebel_pool_real_array*)&p_real_array
    );
}

Variant::Variant(const PoolStringArray& p_string_array) {
    api->rebel_variant_new_pool_string_array(
        &_rebel_variant,
        (rebel_pool_string_array*)&p_string_array
    );
}

Variant::Variant(const PoolVector2Array& p_vector2_array) {
    api->rebel_variant_new_pool_vector2_array(
        &_rebel_variant,
        (rebel_pool_vector2_array*)&p_vector2_array
    );
}

Variant::Variant(const PoolVector3Array& p_vector3_array) {
    api->rebel_variant_new_pool_vector3_array(
        &_rebel_variant,
        (rebel_pool_vector3_array*)&p_vector3_array
    );
}

Variant::Variant(const PoolColorArray& p_color_array) {
    api->rebel_variant_new_pool_color_array(
        &_rebel_variant,
        (rebel_pool_color_array*)&p_color_array
    );
}

Variant& Variant::operator=(const Variant& v) {
    api->rebel_variant_destroy(&_rebel_variant);
    api->rebel_variant_new_copy(&_rebel_variant, &v._rebel_variant);
    return *this;
}

Variant::operator bool() const {
    return booleanize();
}

Variant::operator signed int() const {
    return api->rebel_variant_as_int(&_rebel_variant);
}

Variant::operator unsigned int() const // this is the real one
{
    return api->rebel_variant_as_uint(&_rebel_variant);
}

Variant::operator signed short() const {
    return api->rebel_variant_as_int(&_rebel_variant);
}

Variant::operator unsigned short() const {
    return api->rebel_variant_as_uint(&_rebel_variant);
}

Variant::operator signed char() const {
    return api->rebel_variant_as_int(&_rebel_variant);
}

Variant::operator unsigned char() const {
    return api->rebel_variant_as_uint(&_rebel_variant);
}

Variant::operator int64_t() const {
    return api->rebel_variant_as_int(&_rebel_variant);
}

Variant::operator uint64_t() const {
    return api->rebel_variant_as_uint(&_rebel_variant);
}

Variant::operator wchar_t() const {
    return api->rebel_variant_as_int(&_rebel_variant);
}

Variant::operator float() const {
    return api->rebel_variant_as_real(&_rebel_variant);
}

Variant::operator double() const {
    return api->rebel_variant_as_real(&_rebel_variant);
}

Variant::operator String() const {
    rebel_string s = api->rebel_variant_as_string(&_rebel_variant);
    return String(s);
}

Variant::operator Vector2() const {
    rebel_vector2 s = api->rebel_variant_as_vector2(&_rebel_variant);
    return *(Vector2*)&s;
}

Variant::operator Rect2() const {
    rebel_rect2 s = api->rebel_variant_as_rect2(&_rebel_variant);
    return *(Rect2*)&s;
}

Variant::operator Vector3() const {
    rebel_vector3 s = api->rebel_variant_as_vector3(&_rebel_variant);
    return *(Vector3*)&s;
}

Variant::operator Plane() const {
    rebel_plane s = api->rebel_variant_as_plane(&_rebel_variant);
    return *(Plane*)&s;
}

Variant::operator AABB() const {
    rebel_aabb s = api->rebel_variant_as_aabb(&_rebel_variant);
    return *(AABB*)&s;
}

Variant::operator Quat() const {
    rebel_quat s = api->rebel_variant_as_quat(&_rebel_variant);
    return *(Quat*)&s;
}

Variant::operator Basis() const {
    rebel_basis s = api->rebel_variant_as_basis(&_rebel_variant);
    return *(Basis*)&s;
}

Variant::operator Transform() const {
    rebel_transform s = api->rebel_variant_as_transform(&_rebel_variant);
    return *(Transform*)&s;
}

Variant::operator Transform2D() const {
    rebel_transform2d s = api->rebel_variant_as_transform2d(&_rebel_variant);
    return *(Transform2D*)&s;
}

Variant::operator Color() const {
    rebel_color s = api->rebel_variant_as_color(&_rebel_variant);
    return *(Color*)&s;
}

Variant::operator NodePath() const {
    rebel_node_path ret = api->rebel_variant_as_node_path(&_rebel_variant);
    return NodePath(ret);
}

Variant::operator RID() const {
    rebel_rid s = api->rebel_variant_as_rid(&_rebel_variant);
    return *(RID*)&s;
}

Variant::operator Dictionary() const {
    Dictionary ret(api->rebel_variant_as_dictionary(&_rebel_variant));
    return ret;
}

Variant::operator Array() const {
    Array ret(api->rebel_variant_as_array(&_rebel_variant));
    return ret;
}

Variant::operator PoolByteArray() const {
    rebel_pool_byte_array ret =
        api->rebel_variant_as_pool_byte_array(&_rebel_variant);
    return PoolByteArray(ret);
}

Variant::operator PoolIntArray() const {
    rebel_pool_int_array ret =
        api->rebel_variant_as_pool_int_array(&_rebel_variant);
    return PoolIntArray(ret);
}

Variant::operator PoolRealArray() const {
    rebel_pool_real_array ret =
        api->rebel_variant_as_pool_real_array(&_rebel_variant);
    return PoolRealArray(ret);
}

Variant::operator PoolStringArray() const {
    rebel_pool_string_array ret =
        api->rebel_variant_as_pool_string_array(&_rebel_variant);
    return PoolStringArray(ret);
}

Variant::operator PoolVector2Array() const {
    rebel_pool_vector2_array ret =
        api->rebel_variant_as_pool_vector2_array(&_rebel_variant);
    return PoolVector2Array(ret);
}

Variant::operator PoolVector3Array() const {
    rebel_pool_vector3_array ret =
        api->rebel_variant_as_pool_vector3_array(&_rebel_variant);
    return PoolVector3Array(ret);
}

Variant::operator PoolColorArray() const {
    rebel_pool_color_array ret =
        api->rebel_variant_as_pool_color_array(&_rebel_variant);
    return PoolColorArray(ret);
}

Variant::operator rebel_object*() const {
    return api->rebel_variant_as_object(&_rebel_variant);
}

Variant::Type Variant::get_type() const {
    return static_cast<Type>(api->rebel_variant_get_type(&_rebel_variant));
}

Variant Variant::call(
    const String& method,
    const Variant** args,
    const int arg_count
) {
    rebel_variant v = api->rebel_variant_call(
        &_rebel_variant,
        (rebel_string*)&method,
        (const rebel_variant**)args,
        arg_count,
        nullptr
    );
    return Variant(v);
}

bool Variant::has_method(const String& method) {
    return api->rebel_variant_has_method(
        &_rebel_variant,
        (rebel_string*)&method
    );
}

bool Variant::operator==(const Variant& b) const {
    return api->rebel_variant_operator_equal(
        &_rebel_variant,
        &b._rebel_variant
    );
}

bool Variant::operator!=(const Variant& b) const {
    return !(*this == b);
}

bool Variant::operator<(const Variant& b) const {
    return api->rebel_variant_operator_less(&_rebel_variant, &b._rebel_variant);
}

bool Variant::operator<=(const Variant& b) const {
    return (*this < b) || (*this == b);
}

bool Variant::operator>(const Variant& b) const {
    return !(*this <= b);
}

bool Variant::operator>=(const Variant& b) const {
    return !(*this < b);
}

bool Variant::hash_compare(const Variant& b) const {
    return api->rebel_variant_hash_compare(&_rebel_variant, &b._rebel_variant);
}

bool Variant::booleanize() const {
    return api->rebel_variant_booleanize(&_rebel_variant);
}

Variant::~Variant() {
    api->rebel_variant_destroy(&_rebel_variant);
}

} // namespace Rebel
