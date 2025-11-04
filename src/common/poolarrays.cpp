// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/poolarrays.h"

#include "common/color.h"
#include "common/defs.h"
#include "common/rebelglobal.h"
#include "common/string.h"
#include "common/vector2.h"
#include "common/vector3.h"

namespace Rebel {

PoolByteArray::PoolByteArray() {
    api->rebel_pool_byte_array_new(&_rebel_array);
}

PoolByteArray::PoolByteArray(const PoolByteArray& p_other) {
    api->rebel_pool_byte_array_new_copy(&_rebel_array, &p_other._rebel_array);
}

PoolByteArray& PoolByteArray::operator=(const PoolByteArray& p_other) {
    api->rebel_pool_byte_array_destroy(&_rebel_array);
    api->rebel_pool_byte_array_new_copy(&_rebel_array, &p_other._rebel_array);
    return *this;
}

PoolByteArray::PoolByteArray(const Array& array) {
    api->rebel_pool_byte_array_new_with_array(
        &_rebel_array,
        (rebel_array*)&array
    );
}

PoolByteArray::Read PoolByteArray::read() const {
    Read read;
    read._read_access = api->rebel_pool_byte_array_read(&_rebel_array);
    return read;
}

PoolByteArray::Write PoolByteArray::write() {
    Write write;
    write._write_access = api->rebel_pool_byte_array_write(&_rebel_array);
    return write;
}

void PoolByteArray::append(const uint8_t data) {
    api->rebel_pool_byte_array_append(&_rebel_array, data);
}

void PoolByteArray::append_array(const PoolByteArray& array) {
    api->rebel_pool_byte_array_append_array(&_rebel_array, &array._rebel_array);
}

int PoolByteArray::insert(const int idx, const uint8_t data) {
    return api->rebel_pool_byte_array_insert(&_rebel_array, idx, data);
}

void PoolByteArray::invert() {
    api->rebel_pool_byte_array_invert(&_rebel_array);
}

void PoolByteArray::push_back(const uint8_t data) {
    api->rebel_pool_byte_array_push_back(&_rebel_array, data);
}

void PoolByteArray::remove(const int idx) {
    api->rebel_pool_byte_array_remove(&_rebel_array, idx);
}

void PoolByteArray::resize(const int size) {
    api->rebel_pool_byte_array_resize(&_rebel_array, size);
}

void PoolByteArray::set(const int idx, const uint8_t data) {
    api->rebel_pool_byte_array_set(&_rebel_array, idx, data);
}

uint8_t PoolByteArray::operator[](const int idx) {
    return api->rebel_pool_byte_array_get(&_rebel_array, idx);
}

int PoolByteArray::size() const {
    return api->rebel_pool_byte_array_size(&_rebel_array);
}

PoolByteArray::~PoolByteArray() {
    api->rebel_pool_byte_array_destroy(&_rebel_array);
}

PoolIntArray::PoolIntArray() {
    api->rebel_pool_int_array_new(&_rebel_array);
}

PoolIntArray::PoolIntArray(const PoolIntArray& p_other) {
    api->rebel_pool_int_array_new_copy(&_rebel_array, &p_other._rebel_array);
}

PoolIntArray& PoolIntArray::operator=(const PoolIntArray& p_other) {
    api->rebel_pool_int_array_destroy(&_rebel_array);
    api->rebel_pool_int_array_new_copy(&_rebel_array, &p_other._rebel_array);
    return *this;
}

PoolIntArray::PoolIntArray(const Array& array) {
    api->rebel_pool_int_array_new_with_array(
        &_rebel_array,
        (rebel_array*)&array
    );
}

PoolIntArray::Read PoolIntArray::read() const {
    Read read;
    read._read_access = api->rebel_pool_int_array_read(&_rebel_array);
    return read;
}

PoolIntArray::Write PoolIntArray::write() {
    Write write;
    write._write_access = api->rebel_pool_int_array_write(&_rebel_array);
    return write;
}

void PoolIntArray::append(const int data) {
    api->rebel_pool_int_array_append(&_rebel_array, data);
}

void PoolIntArray::append_array(const PoolIntArray& array) {
    api->rebel_pool_int_array_append_array(&_rebel_array, &array._rebel_array);
}

int PoolIntArray::insert(const int idx, const int data) {
    return api->rebel_pool_int_array_insert(&_rebel_array, idx, data);
}

void PoolIntArray::invert() {
    api->rebel_pool_int_array_invert(&_rebel_array);
}

void PoolIntArray::push_back(const int data) {
    api->rebel_pool_int_array_push_back(&_rebel_array, data);
}

void PoolIntArray::remove(const int idx) {
    api->rebel_pool_int_array_remove(&_rebel_array, idx);
}

void PoolIntArray::resize(const int size) {
    api->rebel_pool_int_array_resize(&_rebel_array, size);
}

void PoolIntArray::set(const int idx, const int data) {
    api->rebel_pool_int_array_set(&_rebel_array, idx, data);
}

int PoolIntArray::operator[](const int idx) {
    return api->rebel_pool_int_array_get(&_rebel_array, idx);
}

int PoolIntArray::size() const {
    return api->rebel_pool_int_array_size(&_rebel_array);
}

PoolIntArray::~PoolIntArray() {
    api->rebel_pool_int_array_destroy(&_rebel_array);
}

PoolRealArray::PoolRealArray() {
    api->rebel_pool_real_array_new(&_rebel_array);
}

PoolRealArray::PoolRealArray(const PoolRealArray& p_other) {
    api->rebel_pool_real_array_new_copy(&_rebel_array, &p_other._rebel_array);
}

PoolRealArray& PoolRealArray::operator=(const PoolRealArray& p_other) {
    api->rebel_pool_real_array_destroy(&_rebel_array);
    api->rebel_pool_real_array_new_copy(&_rebel_array, &p_other._rebel_array);
    return *this;
}

PoolRealArray::Read PoolRealArray::read() const {
    Read read;
    read._read_access = api->rebel_pool_real_array_read(&_rebel_array);
    return read;
}

PoolRealArray::Write PoolRealArray::write() {
    Write write;
    write._write_access = api->rebel_pool_real_array_write(&_rebel_array);
    return write;
}

PoolRealArray::PoolRealArray(const Array& array) {
    api->rebel_pool_real_array_new_with_array(
        &_rebel_array,
        (rebel_array*)&array
    );
}

void PoolRealArray::append(const real_t data) {
    api->rebel_pool_real_array_append(&_rebel_array, data);
}

void PoolRealArray::append_array(const PoolRealArray& array) {
    api->rebel_pool_real_array_append_array(&_rebel_array, &array._rebel_array);
}

int PoolRealArray::insert(const int idx, const real_t data) {
    return api->rebel_pool_real_array_insert(&_rebel_array, idx, data);
}

void PoolRealArray::invert() {
    api->rebel_pool_real_array_invert(&_rebel_array);
}

void PoolRealArray::push_back(const real_t data) {
    api->rebel_pool_real_array_push_back(&_rebel_array, data);
}

void PoolRealArray::remove(const int idx) {
    api->rebel_pool_real_array_remove(&_rebel_array, idx);
}

void PoolRealArray::resize(const int size) {
    api->rebel_pool_real_array_resize(&_rebel_array, size);
}

void PoolRealArray::set(const int idx, const real_t data) {
    api->rebel_pool_real_array_set(&_rebel_array, idx, data);
}

real_t PoolRealArray::operator[](const int idx) {
    return api->rebel_pool_real_array_get(&_rebel_array, idx);
}

int PoolRealArray::size() const {
    return api->rebel_pool_real_array_size(&_rebel_array);
}

PoolRealArray::~PoolRealArray() {
    api->rebel_pool_real_array_destroy(&_rebel_array);
}

PoolStringArray::PoolStringArray() {
    api->rebel_pool_string_array_new(&_rebel_array);
}

PoolStringArray::PoolStringArray(const PoolStringArray& p_other) {
    api->rebel_pool_string_array_new_copy(&_rebel_array, &p_other._rebel_array);
}

PoolStringArray& PoolStringArray::operator=(const PoolStringArray& p_other) {
    api->rebel_pool_string_array_destroy(&_rebel_array);
    api->rebel_pool_string_array_new_copy(&_rebel_array, &p_other._rebel_array);
    return *this;
}

PoolStringArray::PoolStringArray(const Array& array) {
    api->rebel_pool_string_array_new_with_array(
        &_rebel_array,
        (rebel_array*)&array
    );
}

PoolStringArray::Read PoolStringArray::read() const {
    Read read;
    read._read_access = api->rebel_pool_string_array_read(&_rebel_array);
    return read;
}

PoolStringArray::Write PoolStringArray::write() {
    Write write;
    write._write_access = api->rebel_pool_string_array_write(&_rebel_array);
    return write;
}

void PoolStringArray::append(const String& data) {
    api->rebel_pool_string_array_append(&_rebel_array, (rebel_string*)&data);
}

void PoolStringArray::append_array(const PoolStringArray& array) {
    api->rebel_pool_string_array_append_array(
        &_rebel_array,
        &array._rebel_array
    );
}

int PoolStringArray::insert(const int idx, const String& data) {
    return api->rebel_pool_string_array_insert(
        &_rebel_array,
        idx,
        (rebel_string*)&data
    );
}

void PoolStringArray::invert() {
    api->rebel_pool_string_array_invert(&_rebel_array);
}

void PoolStringArray::push_back(const String& data) {
    api->rebel_pool_string_array_push_back(&_rebel_array, (rebel_string*)&data);
}

void PoolStringArray::remove(const int idx) {
    api->rebel_pool_string_array_remove(&_rebel_array, idx);
}

void PoolStringArray::resize(const int size) {
    api->rebel_pool_string_array_resize(&_rebel_array, size);
}

void PoolStringArray::set(const int idx, const String& data) {
    api->rebel_pool_string_array_set(&_rebel_array, idx, (rebel_string*)&data);
}

const String PoolStringArray::operator[](const int idx) {
    String s;
    rebel_string str = api->rebel_pool_string_array_get(&_rebel_array, idx);
    api->rebel_string_new_copy((rebel_string*)&s, &str);
    api->rebel_string_destroy(&str);
    return s;
}

int PoolStringArray::size() const {
    return api->rebel_pool_string_array_size(&_rebel_array);
}

PoolStringArray::~PoolStringArray() {
    api->rebel_pool_string_array_destroy(&_rebel_array);
}

PoolVector2Array::PoolVector2Array() {
    api->rebel_pool_vector2_array_new(&_rebel_array);
}

PoolVector2Array::PoolVector2Array(const PoolVector2Array& p_other) {
    api->rebel_pool_vector2_array_new_copy(
        &_rebel_array,
        &p_other._rebel_array
    );
}

PoolVector2Array& PoolVector2Array::operator=(const PoolVector2Array& p_other) {
    api->rebel_pool_vector2_array_destroy(&_rebel_array);
    api->rebel_pool_vector2_array_new_copy(
        &_rebel_array,
        &p_other._rebel_array
    );
    return *this;
}

PoolVector2Array::PoolVector2Array(const Array& array) {
    api->rebel_pool_vector2_array_new_with_array(
        &_rebel_array,
        (rebel_array*)&array
    );
}

PoolVector2Array::Read PoolVector2Array::read() const {
    Read read;
    read._read_access = api->rebel_pool_vector2_array_read(&_rebel_array);
    return read;
}

PoolVector2Array::Write PoolVector2Array::write() {
    Write write;
    write._write_access = api->rebel_pool_vector2_array_write(&_rebel_array);
    return write;
}

void PoolVector2Array::append(const Vector2& data) {
    api->rebel_pool_vector2_array_append(&_rebel_array, (rebel_vector2*)&data);
}

void PoolVector2Array::append_array(const PoolVector2Array& array) {
    api->rebel_pool_vector2_array_append_array(
        &_rebel_array,
        &array._rebel_array
    );
}

int PoolVector2Array::insert(const int idx, const Vector2& data) {
    return api->rebel_pool_vector2_array_insert(
        &_rebel_array,
        idx,
        (rebel_vector2*)&data
    );
}

void PoolVector2Array::invert() {
    api->rebel_pool_vector2_array_invert(&_rebel_array);
}

void PoolVector2Array::push_back(const Vector2& data) {
    api->rebel_pool_vector2_array_push_back(
        &_rebel_array,
        (rebel_vector2*)&data
    );
}

void PoolVector2Array::remove(const int idx) {
    api->rebel_pool_vector2_array_remove(&_rebel_array, idx);
}

void PoolVector2Array::resize(const int size) {
    api->rebel_pool_vector2_array_resize(&_rebel_array, size);
}

void PoolVector2Array::set(const int idx, const Vector2& data) {
    api->rebel_pool_vector2_array_set(
        &_rebel_array,
        idx,
        (rebel_vector2*)&data
    );
}

const Vector2 PoolVector2Array::operator[](const int idx) {
    Vector2 v;
    *(rebel_vector2*)&v = api->rebel_pool_vector2_array_get(&_rebel_array, idx);
    return v;
}

int PoolVector2Array::size() const {
    return api->rebel_pool_vector2_array_size(&_rebel_array);
}

PoolVector2Array::~PoolVector2Array() {
    api->rebel_pool_vector2_array_destroy(&_rebel_array);
}

PoolVector3Array::PoolVector3Array() {
    api->rebel_pool_vector3_array_new(&_rebel_array);
}

PoolVector3Array::PoolVector3Array(const PoolVector3Array& p_other) {
    api->rebel_pool_vector3_array_new_copy(
        &_rebel_array,
        &p_other._rebel_array
    );
}

PoolVector3Array& PoolVector3Array::operator=(const PoolVector3Array& p_other) {
    api->rebel_pool_vector3_array_destroy(&_rebel_array);
    api->rebel_pool_vector3_array_new_copy(
        &_rebel_array,
        &p_other._rebel_array
    );
    return *this;
}

PoolVector3Array::PoolVector3Array(const Array& array) {
    api->rebel_pool_vector3_array_new_with_array(
        &_rebel_array,
        (rebel_array*)&array
    );
}

PoolVector3Array::Read PoolVector3Array::read() const {
    Read read;
    read._read_access = api->rebel_pool_vector3_array_read(&_rebel_array);
    return read;
}

PoolVector3Array::Write PoolVector3Array::write() {
    Write write;
    write._write_access = api->rebel_pool_vector3_array_write(&_rebel_array);
    return write;
}

void PoolVector3Array::append(const Vector3& data) {
    api->rebel_pool_vector3_array_append(&_rebel_array, (rebel_vector3*)&data);
}

void PoolVector3Array::append_array(const PoolVector3Array& array) {
    api->rebel_pool_vector3_array_append_array(
        &_rebel_array,
        &array._rebel_array
    );
}

int PoolVector3Array::insert(const int idx, const Vector3& data) {
    return api->rebel_pool_vector3_array_insert(
        &_rebel_array,
        idx,
        (rebel_vector3*)&data
    );
}

void PoolVector3Array::invert() {
    api->rebel_pool_vector3_array_invert(&_rebel_array);
}

void PoolVector3Array::push_back(const Vector3& data) {
    api->rebel_pool_vector3_array_push_back(
        &_rebel_array,
        (rebel_vector3*)&data
    );
}

void PoolVector3Array::remove(const int idx) {
    api->rebel_pool_vector3_array_remove(&_rebel_array, idx);
}

void PoolVector3Array::resize(const int size) {
    api->rebel_pool_vector3_array_resize(&_rebel_array, size);
}

void PoolVector3Array::set(const int idx, const Vector3& data) {
    api->rebel_pool_vector3_array_set(
        &_rebel_array,
        idx,
        (rebel_vector3*)&data
    );
}

const Vector3 PoolVector3Array::operator[](const int idx) {
    Vector3 v;
    *(rebel_vector3*)&v = api->rebel_pool_vector3_array_get(&_rebel_array, idx);
    return v;
}

int PoolVector3Array::size() const {
    return api->rebel_pool_vector3_array_size(&_rebel_array);
}

PoolVector3Array::~PoolVector3Array() {
    api->rebel_pool_vector3_array_destroy(&_rebel_array);
}

PoolColorArray::PoolColorArray() {
    api->rebel_pool_color_array_new(&_rebel_array);
}

PoolColorArray::PoolColorArray(const PoolColorArray& p_other) {
    api->rebel_pool_color_array_new_copy(&_rebel_array, &p_other._rebel_array);
}

PoolColorArray& PoolColorArray::operator=(const PoolColorArray& p_other) {
    api->rebel_pool_color_array_destroy(&_rebel_array);
    api->rebel_pool_color_array_new_copy(&_rebel_array, &p_other._rebel_array);
    return *this;
}

PoolColorArray::PoolColorArray(const Array& array) {
    api->rebel_pool_color_array_new_with_array(
        &_rebel_array,
        (rebel_array*)&array
    );
}

PoolColorArray::Read PoolColorArray::read() const {
    Read read;
    read._read_access = api->rebel_pool_color_array_read(&_rebel_array);
    return read;
}

PoolColorArray::Write PoolColorArray::write() {
    Write write;
    write._write_access = api->rebel_pool_color_array_write(&_rebel_array);
    return write;
}

void PoolColorArray::append(const Color& data) {
    api->rebel_pool_color_array_append(&_rebel_array, (rebel_color*)&data);
}

void PoolColorArray::append_array(const PoolColorArray& array) {
    api->rebel_pool_color_array_append_array(
        &_rebel_array,
        &array._rebel_array
    );
}

int PoolColorArray::insert(const int idx, const Color& data) {
    return api->rebel_pool_color_array_insert(
        &_rebel_array,
        idx,
        (rebel_color*)&data
    );
}

void PoolColorArray::invert() {
    api->rebel_pool_color_array_invert(&_rebel_array);
}

void PoolColorArray::push_back(const Color& data) {
    api->rebel_pool_color_array_push_back(&_rebel_array, (rebel_color*)&data);
}

void PoolColorArray::remove(const int idx) {
    api->rebel_pool_color_array_remove(&_rebel_array, idx);
}

void PoolColorArray::resize(const int size) {
    api->rebel_pool_color_array_resize(&_rebel_array, size);
}

void PoolColorArray::set(const int idx, const Color& data) {
    api->rebel_pool_color_array_set(&_rebel_array, idx, (rebel_color*)&data);
}

const Color PoolColorArray::operator[](const int idx) {
    Color v;
    *(rebel_color*)&v = api->rebel_pool_color_array_get(&_rebel_array, idx);
    return v;
}

int PoolColorArray::size() const {
    return api->rebel_pool_color_array_size(&_rebel_array);
}

PoolColorArray::~PoolColorArray() {
    api->rebel_pool_color_array_destroy(&_rebel_array);
}

} // namespace Rebel
