// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/array.h"

#include "common/rebelglobal.h"
#include "common/variant.h"

#include <cstdlib>

namespace Rebel {

class Object;

Array::Array() {
    api->rebel_array_new(&_rebel_array);
}

Array::Array(const Array& other) {
    api->rebel_array_new_copy(&_rebel_array, &other._rebel_array);
}

Array& Array::operator=(const Array& other) {
    api->rebel_array_destroy(&_rebel_array);
    api->rebel_array_new_copy(&_rebel_array, &other._rebel_array);
    return *this;
}

Array::Array(const PoolByteArray& a) {
    api->rebel_array_new_pool_byte_array(
        &_rebel_array,
        (rebel_pool_byte_array*)&a
    );
}

Array::Array(const PoolIntArray& a) {
    api->rebel_array_new_pool_int_array(
        &_rebel_array,
        (rebel_pool_int_array*)&a
    );
}

Array::Array(const PoolRealArray& a) {
    api->rebel_array_new_pool_real_array(
        &_rebel_array,
        (rebel_pool_real_array*)&a
    );
}

Array::Array(const PoolStringArray& a) {
    api->rebel_array_new_pool_string_array(
        &_rebel_array,
        (rebel_pool_string_array*)&a
    );
}

Array::Array(const PoolVector2Array& a) {
    api->rebel_array_new_pool_vector2_array(
        &_rebel_array,
        (rebel_pool_vector2_array*)&a
    );
}

Array::Array(const PoolVector3Array& a) {
    api->rebel_array_new_pool_vector3_array(
        &_rebel_array,
        (rebel_pool_vector3_array*)&a
    );
}

Array::Array(const PoolColorArray& a) {
    api->rebel_array_new_pool_color_array(
        &_rebel_array,
        (rebel_pool_color_array*)&a
    );
}

Variant& Array::operator[](const int idx) {
    rebel_variant* v = api->rebel_array_operator_index(&_rebel_array, idx);
    // We assume it's ok to reinterpret because the value is a pointer whose
    // data is already owned by the array, so can return a reference without
    // constructing a Variant
    return *reinterpret_cast<Variant*>(v);
}

const Variant& Array::operator[](const int idx) const {
    // Yes, I'm casting away the const... you can hate me now.
    // since the result is
    rebel_variant* v =
        api->rebel_array_operator_index((rebel_array*)&_rebel_array, idx);
    return *reinterpret_cast<const Variant*>(v);
}

void Array::append(const Variant& v) {
    api->rebel_array_append(&_rebel_array, (rebel_variant*)&v);
}

void Array::clear() {
    api->rebel_array_clear(&_rebel_array);
}

int Array::count(const Variant& v) {
    return api->rebel_array_count(&_rebel_array, (rebel_variant*)&v);
}

bool Array::empty() const {
    return api->rebel_array_empty(&_rebel_array);
}

void Array::erase(const Variant& v) {
    api->rebel_array_erase(&_rebel_array, (rebel_variant*)&v);
}

Variant Array::front() const {
    rebel_variant v = api->rebel_array_front(&_rebel_array);
    return Variant(v);
}

Variant Array::back() const {
    rebel_variant v = api->rebel_array_back(&_rebel_array);
    return Variant(v);
}

int Array::find(const Variant& what, const int from) const {
    return api->rebel_array_find(&_rebel_array, (rebel_variant*)&what, from);
}

int Array::find_last(const Variant& what) const {
    return api->rebel_array_find_last(&_rebel_array, (rebel_variant*)&what);
}

bool Array::has(const Variant& what) const {
    return api->rebel_array_has(&_rebel_array, (rebel_variant*)&what);
}

uint32_t Array::hash() const {
    return api->rebel_array_hash(&_rebel_array);
}

void Array::insert(const int pos, const Variant& value) {
    api->rebel_array_insert(&_rebel_array, pos, (rebel_variant*)&value);
}

void Array::invert() {
    api->rebel_array_invert(&_rebel_array);
}

Variant Array::pop_back() {
    rebel_variant v = api->rebel_array_pop_back(&_rebel_array);
    return Variant(v);
}

Variant Array::pop_front() {
    rebel_variant v = api->rebel_array_pop_front(&_rebel_array);
    return Variant(v);
}

void Array::push_back(const Variant& v) {
    api->rebel_array_push_back(&_rebel_array, (rebel_variant*)&v);
}

void Array::push_front(const Variant& v) {
    api->rebel_array_push_front(&_rebel_array, (rebel_variant*)&v);
}

void Array::remove(const int idx) {
    api->rebel_array_remove(&_rebel_array, idx);
}

int Array::size() const {
    return api->rebel_array_size(&_rebel_array);
}

void Array::resize(const int size) {
    api->rebel_array_resize(&_rebel_array, size);
}

int Array::rfind(const Variant& what, const int from) const {
    return api->rebel_array_rfind(&_rebel_array, (rebel_variant*)&what, from);
}

void Array::sort() {
    api->rebel_array_sort(&_rebel_array);
}

void Array::sort_custom(Object* obj, const String& func) {
    api->rebel_array_sort_custom(
        &_rebel_array,
        (rebel_object*)obj,
        (rebel_string*)&func
    );
}

int Array::bsearch(const Variant& value, const bool before) {
    return api
        ->rebel_array_bsearch(&_rebel_array, (rebel_variant*)&value, before);
}

int Array::bsearch_custom(
    const Variant& value,
    const Object* obj,
    const String& func,
    const bool before
) {
    return api->rebel_array_bsearch_custom(
        &_rebel_array,
        (rebel_variant*)&value,
        (rebel_object*)obj,
        (rebel_string*)&func,
        before
    );
}

Array Array::duplicate(const bool deep) const {
    rebel_array arr = core_1_1_api->rebel_array_duplicate(&_rebel_array, deep);
    return Array(arr);
}

Variant Array::max() const {
    rebel_variant v = core_1_1_api->rebel_array_max(&_rebel_array);
    return Variant(v);
}

Variant Array::min() const {
    rebel_variant v = core_1_1_api->rebel_array_min(&_rebel_array);
    return Variant(v);
}

void Array::shuffle() {
    core_1_1_api->rebel_array_shuffle(&_rebel_array);
}

Array::~Array() {
    api->rebel_array_destroy(&_rebel_array);
}

} // namespace Rebel
