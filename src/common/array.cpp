// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/array.h"

#include "classes/object.h"
#include "common/rebelglobal.h"
#include "common/string.h"
#include "common/variant.h"

#include <cstdlib>

namespace Rebel {
Array::Array() {
    api->rebel_array_new(&internal_array);
}

Array::Array(const Array& other) {
    api->rebel_array_new_copy(&internal_array, &other.internal_array);
}

Array::Array(const rebel_array& other) {
    internal_array = other;
}

Array::Array(const PoolByteArray& pool_byte_array) {
    api->rebel_array_new_pool_byte_array(
        &internal_array,
        (rebel_pool_byte_array*)&pool_byte_array
    );
}

Array::Array(const PoolColorArray& pool_color_array) {
    api->rebel_array_new_pool_color_array(
        &internal_array,
        (rebel_pool_color_array*)&pool_color_array
    );
}

Array::Array(const PoolIntArray& pool_int_array) {
    api->rebel_array_new_pool_int_array(
        &internal_array,
        (rebel_pool_int_array*)&pool_int_array
    );
}

Array::Array(const PoolRealArray& pool_real_array) {
    api->rebel_array_new_pool_real_array(
        &internal_array,
        (rebel_pool_real_array*)&pool_real_array
    );
}

Array::Array(const PoolStringArray& pool_string_array) {
    api->rebel_array_new_pool_string_array(
        &internal_array,
        (rebel_pool_string_array*)&pool_string_array
    );
}

Array::Array(const PoolVector2Array& pool_vector2_array) {
    api->rebel_array_new_pool_vector2_array(
        &internal_array,
        (rebel_pool_vector2_array*)&pool_vector2_array
    );
}

Array::Array(const PoolVector3Array& pool_vector3_array) {
    api->rebel_array_new_pool_vector3_array(
        &internal_array,
        (rebel_pool_vector3_array*)&pool_vector3_array
    );
}

Array::~Array() {
    api->rebel_array_destroy(&internal_array);
}

Array& Array::operator=(const Array& other) {
    api->rebel_array_destroy(&internal_array);
    api->rebel_array_new_copy(&internal_array, &other.internal_array);
    return *this;
}

Variant& Array::operator[](const int index) {
    rebel_variant* v = api->rebel_array_operator_index(&internal_array, index);
    // We assume it's ok to reinterpret because the value is a pointer whose
    // data is already owned by the array, so can return a reference without
    // constructing a Variant
    return *reinterpret_cast<Variant*>(v);
}

const Variant& Array::operator[](const int index) const {
    // Yes, I'm casting away the const... you can hate me now.
    // since the result is
    rebel_variant* v =
        api->rebel_array_operator_index((rebel_array*)&internal_array, index);
    return *reinterpret_cast<const Variant*>(v);
}

void Array::append(const Variant& v) {
    api->rebel_array_append(&internal_array, (rebel_variant*)&v);
}

Variant Array::back() const {
    rebel_variant v = api->rebel_array_back(&internal_array);
    return Variant(v);
}

int Array::bsearch(const Variant& value, const bool before) {
    return api
        ->rebel_array_bsearch(&internal_array, (rebel_variant*)&value, before);
}

int Array::bsearch_custom(
    const Variant& value,
    const Object* obj,
    const String& func,
    const bool before
) {
    return api->rebel_array_bsearch_custom(
        &internal_array,
        (rebel_variant*)&value,
        (rebel_object*)obj,
        (rebel_string*)&func,
        before
    );
}

void Array::clear() {
    api->rebel_array_clear(&internal_array);
}

int Array::count(const Variant& v) const {
    return api->rebel_array_count(&internal_array, (rebel_variant*)&v);
}

Array Array::duplicate(const bool deep) const {
    rebel_array arr =
        core_1_1_api->rebel_array_duplicate(&internal_array, deep);
    return Array(arr);
}

bool Array::empty() const {
    return api->rebel_array_empty(&internal_array);
}

void Array::erase(const Variant& v) {
    api->rebel_array_erase(&internal_array, (rebel_variant*)&v);
}

int Array::find(const Variant& what, const int from) const {
    return api->rebel_array_find(&internal_array, (rebel_variant*)&what, from);
}

int Array::find_last(const Variant& what) const {
    return api->rebel_array_find_last(&internal_array, (rebel_variant*)&what);
}

Variant Array::front() const {
    rebel_variant v = api->rebel_array_front(&internal_array);
    return Variant(v);
}

bool Array::has(const Variant& what) const {
    return api->rebel_array_has(&internal_array, (rebel_variant*)&what);
}

uint32_t Array::hash() const {
    return api->rebel_array_hash(&internal_array);
}

void Array::insert(const int pos, const Variant& value) {
    api->rebel_array_insert(&internal_array, pos, (rebel_variant*)&value);
}

void Array::invert() {
    api->rebel_array_invert(&internal_array);
}

Variant Array::max() const {
    rebel_variant v = core_1_1_api->rebel_array_max(&internal_array);
    return Variant(v);
}

Variant Array::min() const {
    rebel_variant v = core_1_1_api->rebel_array_min(&internal_array);
    return Variant(v);
}

Variant Array::pop_back() {
    rebel_variant v = api->rebel_array_pop_back(&internal_array);
    return Variant(v);
}

Variant Array::pop_front() {
    rebel_variant v = api->rebel_array_pop_front(&internal_array);
    return Variant(v);
}

void Array::push_back(const Variant& v) {
    api->rebel_array_push_back(&internal_array, (rebel_variant*)&v);
}

void Array::push_front(const Variant& v) {
    api->rebel_array_push_front(&internal_array, (rebel_variant*)&v);
}

void Array::remove(const int idx) {
    api->rebel_array_remove(&internal_array, idx);
}

void Array::resize(const int size) {
    api->rebel_array_resize(&internal_array, size);
}

int Array::rfind(const Variant& what, const int from) const {
    return api->rebel_array_rfind(&internal_array, (rebel_variant*)&what, from);
}

int Array::size() const {
    return api->rebel_array_size(&internal_array);
}

void Array::sort() {
    api->rebel_array_sort(&internal_array);
}

void Array::sort_custom(Object* obj, const String& func) {
    api->rebel_array_sort_custom(
        &internal_array,
        (rebel_object*)obj,
        (rebel_string*)&func
    );
}

void Array::shuffle() {
    core_1_1_api->rebel_array_shuffle(&internal_array);
}
} // namespace Rebel
