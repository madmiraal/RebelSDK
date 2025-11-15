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
// PoolByteArray
PoolByteArray::Read::Read(const Read& other) {
    internal_read =
        api->rebel_pool_byte_array_read_access_copy(other.internal_read);
}

PoolByteArray::Read::~Read() {
    api->rebel_pool_byte_array_read_access_destroy(internal_read);
}

void PoolByteArray::Read::operator=(const Read& other) {
    api->rebel_pool_byte_array_read_access_operator_assign(
        internal_read,
        other.internal_read
    );
}

const uint8_t& PoolByteArray::Read::operator[](const int index) const {
    return ptr()[index];
}

const uint8_t* PoolByteArray::Read::ptr() const {
    return api->rebel_pool_byte_array_read_access_ptr(internal_read);
}

PoolByteArray::Write::Write(const Write& other) {
    internal_write =
        api->rebel_pool_byte_array_write_access_copy(other.internal_write);
}

PoolByteArray::Write::~Write() {
    api->rebel_pool_byte_array_write_access_destroy(internal_write);
}

void PoolByteArray::Write::operator=(const Write& other) {
    api->rebel_pool_byte_array_write_access_operator_assign(
        internal_write,
        other.internal_write
    );
}

uint8_t& PoolByteArray::Write::operator[](const int index) const {
    return ptr()[index];
}

uint8_t* PoolByteArray::Write::ptr() const {
    return api->rebel_pool_byte_array_write_access_ptr(internal_write);
}

PoolByteArray::PoolByteArray() {
    api->rebel_pool_byte_array_new(&internal_array);
}

PoolByteArray::PoolByteArray(const PoolByteArray& other) {
    api->rebel_pool_byte_array_new_copy(&internal_array, &other.internal_array);
}

PoolByteArray::PoolByteArray(const Array& array) {
    api->rebel_pool_byte_array_new_with_array(
        &internal_array,
        reinterpret_cast<const rebel_array*>(&array)
    );
}

PoolByteArray::PoolByteArray(const rebel_pool_byte_array other) {
    internal_array = other;
}

PoolByteArray::~PoolByteArray() {
    api->rebel_pool_byte_array_destroy(&internal_array);
}

PoolByteArray& PoolByteArray::operator=(const PoolByteArray& other) {
    api->rebel_pool_byte_array_destroy(&internal_array);
    api->rebel_pool_byte_array_new_copy(&internal_array, &other.internal_array);
    return *this;
}

uint8_t PoolByteArray::operator[](const int index) const {
    return api->rebel_pool_byte_array_get(&internal_array, index);
}

PoolByteArray::Read PoolByteArray::read() const {
    Read read;
    read.internal_read = api->rebel_pool_byte_array_read(&internal_array);
    return read;
}

PoolByteArray::Write PoolByteArray::write() {
    Write write;
    write.internal_write = api->rebel_pool_byte_array_write(&internal_array);
    return write;
}

int PoolByteArray::size() const {
    return api->rebel_pool_byte_array_size(&internal_array);
}

void PoolByteArray::resize(const int size) {
    api->rebel_pool_byte_array_resize(&internal_array, size);
}

void PoolByteArray::append(const uint8_t value) {
    api->rebel_pool_byte_array_append(&internal_array, value);
}

void PoolByteArray::append_array(const PoolByteArray& array) {
    api->rebel_pool_byte_array_append_array(
        &internal_array,
        &array.internal_array
    );
}

void PoolByteArray::push_back(const uint8_t value) {
    api->rebel_pool_byte_array_push_back(&internal_array, value);
}

int PoolByteArray::insert(const int index, const uint8_t value) {
    return api->rebel_pool_byte_array_insert(&internal_array, index, value);
}

void PoolByteArray::remove(const int index) {
    api->rebel_pool_byte_array_remove(&internal_array, index);
}

void PoolByteArray::set(const int index, const uint8_t value) {
    api->rebel_pool_byte_array_set(&internal_array, index, value);
}

void PoolByteArray::invert() {
    api->rebel_pool_byte_array_invert(&internal_array);
}

// PoolColorArray
PoolColorArray::Read::Read(const Read& other) {
    internal_read =
        api->rebel_pool_color_array_read_access_copy(other.internal_read);
}

PoolColorArray::Read::~Read() {
    api->rebel_pool_color_array_read_access_destroy(internal_read);
}

void PoolColorArray::Read::operator=(const Read& other) {
    api->rebel_pool_color_array_read_access_operator_assign(
        internal_read,
        other.internal_read
    );
}

const Color& PoolColorArray::Read::operator[](const int index) const {
    return ptr()[index];
}

const Color* PoolColorArray::Read::ptr() const {
    return reinterpret_cast<const Color*>(
        api->rebel_pool_color_array_read_access_ptr(internal_read)
    );
}

PoolColorArray::Write::Write(const Write& other) {
    internal_write =
        api->rebel_pool_color_array_write_access_copy(other.internal_write);
}

PoolColorArray::Write::~Write() {
    api->rebel_pool_color_array_write_access_destroy(internal_write);
}

void PoolColorArray::Write::operator=(const Write& other) {
    api->rebel_pool_color_array_write_access_operator_assign(
        internal_write,
        other.internal_write
    );
}

Color& PoolColorArray::Write::operator[](const int index) const {
    return ptr()[index];
}

Color* PoolColorArray::Write::ptr() const {
    return reinterpret_cast<Color*>(
        api->rebel_pool_color_array_write_access_ptr(internal_write)
    );
}

PoolColorArray::PoolColorArray() {
    api->rebel_pool_color_array_new(&internal_array);
}

PoolColorArray::PoolColorArray(const PoolColorArray& other) {
    api->rebel_pool_color_array_new_copy(
        &internal_array,
        &other.internal_array
    );
}

PoolColorArray::PoolColorArray(const Array& array) {
    api->rebel_pool_color_array_new_with_array(
        &internal_array,
        reinterpret_cast<const rebel_array*>(&array)
    );
}

PoolColorArray::PoolColorArray(const rebel_pool_color_array other) {
    internal_array = other;
}

PoolColorArray::~PoolColorArray() {
    api->rebel_pool_color_array_destroy(&internal_array);
}

PoolColorArray& PoolColorArray::operator=(const PoolColorArray& other) {
    api->rebel_pool_color_array_destroy(&internal_array);
    api->rebel_pool_color_array_new_copy(
        &internal_array,
        &other.internal_array
    );
    return *this;
}

Color PoolColorArray::operator[](const int index) const {
    Color color;
    *reinterpret_cast<rebel_color*>(&color) =
        api->rebel_pool_color_array_get(&internal_array, index);
    return color;
}

PoolColorArray::Read PoolColorArray::read() const {
    Read read;
    read.internal_read = api->rebel_pool_color_array_read(&internal_array);
    return read;
}

PoolColorArray::Write PoolColorArray::write() {
    Write write;
    write.internal_write = api->rebel_pool_color_array_write(&internal_array);
    return write;
}

int PoolColorArray::size() const {
    return api->rebel_pool_color_array_size(&internal_array);
}

void PoolColorArray::resize(const int size) {
    api->rebel_pool_color_array_resize(&internal_array, size);
}

void PoolColorArray::append(const Color& value) {
    api->rebel_pool_color_array_append(
        &internal_array,
        reinterpret_cast<const rebel_color*>(&value)
    );
}

void PoolColorArray::append_array(const PoolColorArray& array) {
    api->rebel_pool_color_array_append_array(
        &internal_array,
        &array.internal_array
    );
}

void PoolColorArray::push_back(const Color& value) {
    api->rebel_pool_color_array_push_back(
        &internal_array,
        reinterpret_cast<const rebel_color*>(&value)
    );
}

int PoolColorArray::insert(const int index, const Color& value) {
    return api->rebel_pool_color_array_insert(
        &internal_array,
        index,
        reinterpret_cast<const rebel_color*>(&value)
    );
}

void PoolColorArray::remove(const int index) {
    api->rebel_pool_color_array_remove(&internal_array, index);
}

void PoolColorArray::set(const int index, const Color& value) {
    api->rebel_pool_color_array_set(
        &internal_array,
        index,
        reinterpret_cast<const rebel_color*>(&value)
    );
}

void PoolColorArray::invert() {
    api->rebel_pool_color_array_invert(&internal_array);
}

// PoolIntArray
PoolIntArray::Read::Read(const Read& other) {
    internal_read =
        api->rebel_pool_int_array_read_access_copy(other.internal_read);
}

PoolIntArray::Read::~Read() {
    api->rebel_pool_int_array_read_access_destroy(internal_read);
}

void PoolIntArray::Read::operator=(const Read& other) {
    api->rebel_pool_int_array_read_access_operator_assign(
        internal_read,
        other.internal_read
    );
}

const int& PoolIntArray::Read::operator[](const int index) const {
    return ptr()[index];
}

const int* PoolIntArray::Read::ptr() const {
    return api->rebel_pool_int_array_read_access_ptr(internal_read);
}

PoolIntArray::Write::Write(const Write& other) {
    internal_write =
        api->rebel_pool_int_array_write_access_copy(other.internal_write);
}

PoolIntArray::Write::~Write() {
    api->rebel_pool_int_array_write_access_destroy(internal_write);
}

void PoolIntArray::Write::operator=(const Write& other) {
    api->rebel_pool_int_array_write_access_operator_assign(
        internal_write,
        other.internal_write
    );
}

int& PoolIntArray::Write::operator[](const int index) const {
    return ptr()[index];
}

int* PoolIntArray::Write::ptr() const {
    return api->rebel_pool_int_array_write_access_ptr(internal_write);
}

PoolIntArray::PoolIntArray() {
    api->rebel_pool_int_array_new(&internal_array);
}

PoolIntArray::PoolIntArray(const PoolIntArray& other) {
    api->rebel_pool_int_array_new_copy(&internal_array, &other.internal_array);
}

PoolIntArray::PoolIntArray(const Array& array) {
    api->rebel_pool_int_array_new_with_array(
        &internal_array,
        reinterpret_cast<const rebel_array*>(&array)
    );
}

PoolIntArray::PoolIntArray(const rebel_pool_int_array other) {
    internal_array = other;
}

PoolIntArray::~PoolIntArray() {
    api->rebel_pool_int_array_destroy(&internal_array);
}

PoolIntArray& PoolIntArray::operator=(const PoolIntArray& other) {
    api->rebel_pool_int_array_destroy(&internal_array);
    api->rebel_pool_int_array_new_copy(&internal_array, &other.internal_array);
    return *this;
}

int PoolIntArray::operator[](const int index) const {
    return api->rebel_pool_int_array_get(&internal_array, index);
}

PoolIntArray::Read PoolIntArray::read() const {
    Read read;
    read.internal_read = api->rebel_pool_int_array_read(&internal_array);
    return read;
}

PoolIntArray::Write PoolIntArray::write() {
    Write write;
    write.internal_write = api->rebel_pool_int_array_write(&internal_array);
    return write;
}

int PoolIntArray::size() const {
    return api->rebel_pool_int_array_size(&internal_array);
}

void PoolIntArray::resize(const int size) {
    api->rebel_pool_int_array_resize(&internal_array, size);
}

void PoolIntArray::append(const int value) {
    api->rebel_pool_int_array_append(&internal_array, value);
}

void PoolIntArray::append_array(const PoolIntArray& array) {
    api->rebel_pool_int_array_append_array(
        &internal_array,
        &array.internal_array
    );
}

void PoolIntArray::push_back(const int value) {
    api->rebel_pool_int_array_push_back(&internal_array, value);
}

int PoolIntArray::insert(const int index, const int value) {
    return api->rebel_pool_int_array_insert(&internal_array, index, value);
}

void PoolIntArray::remove(const int index) {
    api->rebel_pool_int_array_remove(&internal_array, index);
}

void PoolIntArray::set(const int index, const int value) {
    api->rebel_pool_int_array_set(&internal_array, index, value);
}

void PoolIntArray::invert() {
    api->rebel_pool_int_array_invert(&internal_array);
}

// PoolRealArray
PoolRealArray::Read::Read(const Read& other) {
    internal_read =
        api->rebel_pool_real_array_read_access_copy(other.internal_read);
}

PoolRealArray::Read::~Read() {
    api->rebel_pool_real_array_read_access_destroy(internal_read);
}

void PoolRealArray::Read::operator=(const Read& other) {
    api->rebel_pool_real_array_read_access_operator_assign(
        internal_read,
        other.internal_read
    );
}

const real_t& PoolRealArray::Read::operator[](const int index) const {
    return ptr()[index];
}

const real_t* PoolRealArray::Read::ptr() const {
    return api->rebel_pool_real_array_read_access_ptr(internal_read);
}

PoolRealArray::Write::Write(const Write& other) {
    internal_write =
        api->rebel_pool_real_array_write_access_copy(other.internal_write);
}

PoolRealArray::Write::~Write() {
    api->rebel_pool_real_array_write_access_destroy(internal_write);
}

void PoolRealArray::Write::operator=(const Write& other) {
    api->rebel_pool_real_array_write_access_operator_assign(
        internal_write,
        other.internal_write
    );
}

real_t& PoolRealArray::Write::operator[](const int index) const {
    return ptr()[index];
}

real_t* PoolRealArray::Write::ptr() const {
    return api->rebel_pool_real_array_write_access_ptr(internal_write);
}

PoolRealArray::PoolRealArray() {
    api->rebel_pool_real_array_new(&internal_array);
}

PoolRealArray::PoolRealArray(const PoolRealArray& other) {
    api->rebel_pool_real_array_new_copy(&internal_array, &other.internal_array);
}

PoolRealArray::PoolRealArray(const Array& array) {
    api->rebel_pool_real_array_new_with_array(
        &internal_array,
        reinterpret_cast<const rebel_array*>(&array)
    );
}

PoolRealArray::PoolRealArray(const rebel_pool_real_array other) {
    internal_array = other;
}

PoolRealArray::~PoolRealArray() {
    api->rebel_pool_real_array_destroy(&internal_array);
}

PoolRealArray& PoolRealArray::operator=(const PoolRealArray& other) {
    api->rebel_pool_real_array_destroy(&internal_array);
    api->rebel_pool_real_array_new_copy(&internal_array, &other.internal_array);
    return *this;
}

real_t PoolRealArray::operator[](const int index) const {
    return api->rebel_pool_real_array_get(&internal_array, index);
}

PoolRealArray::Read PoolRealArray::read() const {
    Read read;
    read.internal_read = api->rebel_pool_real_array_read(&internal_array);
    return read;
}

PoolRealArray::Write PoolRealArray::write() {
    Write write;
    write.internal_write = api->rebel_pool_real_array_write(&internal_array);
    return write;
}

int PoolRealArray::size() const {
    return api->rebel_pool_real_array_size(&internal_array);
}

void PoolRealArray::resize(const int size) {
    api->rebel_pool_real_array_resize(&internal_array, size);
}

void PoolRealArray::append(const real_t value) {
    api->rebel_pool_real_array_append(&internal_array, value);
}

void PoolRealArray::append_array(const PoolRealArray& array) {
    api->rebel_pool_real_array_append_array(
        &internal_array,
        &array.internal_array
    );
}

void PoolRealArray::push_back(const real_t value) {
    api->rebel_pool_real_array_push_back(&internal_array, value);
}

int PoolRealArray::insert(const int index, const real_t value) {
    return api->rebel_pool_real_array_insert(&internal_array, index, value);
}

void PoolRealArray::remove(const int index) {
    api->rebel_pool_real_array_remove(&internal_array, index);
}

void PoolRealArray::set(const int index, const real_t value) {
    api->rebel_pool_real_array_set(&internal_array, index, value);
}

void PoolRealArray::invert() {
    api->rebel_pool_real_array_invert(&internal_array);
}

// PoolStringArray
PoolStringArray::Read::Read(const Read& other) {
    internal_read =
        api->rebel_pool_string_array_read_access_copy(other.internal_read);
}

PoolStringArray::Read::~Read() {
    api->rebel_pool_string_array_read_access_destroy(internal_read);
}

void PoolStringArray::Read::operator=(const Read& other) {
    api->rebel_pool_string_array_read_access_operator_assign(
        internal_read,
        other.internal_read
    );
}

const String& PoolStringArray::Read::operator[](const int index) const {
    return ptr()[index];
}

const String* PoolStringArray::Read::ptr() const {
    return reinterpret_cast<const String*>(
        api->rebel_pool_string_array_read_access_ptr(internal_read)
    );
}

PoolStringArray::Write::Write(const Write& other) {
    internal_write =
        api->rebel_pool_string_array_write_access_copy(other.internal_write);
}

PoolStringArray::Write::~Write() {
    api->rebel_pool_string_array_write_access_destroy(internal_write);
}

void PoolStringArray::Write::operator=(const Write& other) {
    api->rebel_pool_string_array_write_access_operator_assign(
        internal_write,
        other.internal_write
    );
}

String& PoolStringArray::Write::operator[](const int index) const {
    return ptr()[index];
}

String* PoolStringArray::Write::ptr() const {
    return reinterpret_cast<String*>(
        api->rebel_pool_string_array_write_access_ptr(internal_write)
    );
}

PoolStringArray::PoolStringArray() {
    api->rebel_pool_string_array_new(&internal_array);
}

PoolStringArray::PoolStringArray(const PoolStringArray& other) {
    api->rebel_pool_string_array_new_copy(
        &internal_array,
        &other.internal_array
    );
}

PoolStringArray::PoolStringArray(const Array& array) {
    api->rebel_pool_string_array_new_with_array(
        &internal_array,
        reinterpret_cast<const rebel_array*>(&array)
    );
}

PoolStringArray::PoolStringArray(const rebel_pool_string_array other) {
    internal_array = other;
}

PoolStringArray::~PoolStringArray() {
    api->rebel_pool_string_array_destroy(&internal_array);
}

PoolStringArray& PoolStringArray::operator=(const PoolStringArray& other) {
    api->rebel_pool_string_array_destroy(&internal_array);
    api->rebel_pool_string_array_new_copy(
        &internal_array,
        &other.internal_array
    );
    return *this;
}

String PoolStringArray::operator[](const int index) const {
    String result;
    rebel_string string =
        api->rebel_pool_string_array_get(&internal_array, index);
    api->rebel_string_new_copy(
        reinterpret_cast<rebel_string*>(&result),
        &string
    );
    api->rebel_string_destroy(&string);
    return result;
}

PoolStringArray::Read PoolStringArray::read() const {
    Read read;
    read.internal_read = api->rebel_pool_string_array_read(&internal_array);
    return read;
}

PoolStringArray::Write PoolStringArray::write() {
    Write write;
    write.internal_write = api->rebel_pool_string_array_write(&internal_array);
    return write;
}

int PoolStringArray::size() const {
    return api->rebel_pool_string_array_size(&internal_array);
}

void PoolStringArray::resize(const int size) {
    api->rebel_pool_string_array_resize(&internal_array, size);
}

void PoolStringArray::append(const String& value) {
    api->rebel_pool_string_array_append(
        &internal_array,
        reinterpret_cast<const rebel_string*>(&value)
    );
}

void PoolStringArray::append_array(const PoolStringArray& array) {
    api->rebel_pool_string_array_append_array(
        &internal_array,
        &array.internal_array
    );
}

void PoolStringArray::push_back(const String& value) {
    api->rebel_pool_string_array_push_back(
        &internal_array,
        reinterpret_cast<const rebel_string*>(&value)
    );
}

int PoolStringArray::insert(const int index, const String& value) {
    return api->rebel_pool_string_array_insert(
        &internal_array,
        index,
        reinterpret_cast<const rebel_string*>(&value)
    );
}

void PoolStringArray::remove(const int index) {
    api->rebel_pool_string_array_remove(&internal_array, index);
}

void PoolStringArray::set(const int index, const String& value) {
    api->rebel_pool_string_array_set(
        &internal_array,
        index,
        reinterpret_cast<const rebel_string*>(&value)
    );
}

void PoolStringArray::invert() {
    api->rebel_pool_string_array_invert(&internal_array);
}

// PoolVector2Array
PoolVector2Array::Read::Read(const Read& other) {
    internal_read =
        api->rebel_pool_vector2_array_read_access_copy(other.internal_read);
}

PoolVector2Array::Read::~Read() {
    api->rebel_pool_vector2_array_read_access_destroy(internal_read);
}

void PoolVector2Array::Read::operator=(const Read& other) {
    api->rebel_pool_vector2_array_read_access_operator_assign(
        internal_read,
        other.internal_read
    );
}

const Vector2& PoolVector2Array::Read::operator[](const int index) const {
    return ptr()[index];
}

const Vector2* PoolVector2Array::Read::ptr() const {
    return reinterpret_cast<const Vector2*>(
        api->rebel_pool_vector2_array_read_access_ptr(internal_read)
    );
}

PoolVector2Array::Write::Write(const Write& other) {
    internal_write =
        api->rebel_pool_vector2_array_write_access_copy(other.internal_write);
}

PoolVector2Array::Write::~Write() {
    api->rebel_pool_vector2_array_write_access_destroy(internal_write);
}

void PoolVector2Array::Write::operator=(const Write& other) {
    api->rebel_pool_vector2_array_write_access_operator_assign(
        internal_write,
        other.internal_write
    );
}

Vector2& PoolVector2Array::Write::operator[](const int index) const {
    return ptr()[index];
}

Vector2* PoolVector2Array::Write::ptr() const {
    return reinterpret_cast<Vector2*>(
        api->rebel_pool_vector2_array_write_access_ptr(internal_write)
    );
}

PoolVector2Array::PoolVector2Array() {
    api->rebel_pool_vector2_array_new(&internal_array);
}

PoolVector2Array::PoolVector2Array(const PoolVector2Array& other) {
    api->rebel_pool_vector2_array_new_copy(
        &internal_array,
        &other.internal_array
    );
}

PoolVector2Array::PoolVector2Array(const Array& array) {
    api->rebel_pool_vector2_array_new_with_array(
        &internal_array,
        reinterpret_cast<const rebel_array*>(&array)
    );
}

PoolVector2Array::PoolVector2Array(const rebel_pool_vector2_array other) {
    internal_array = other;
}

PoolVector2Array::~PoolVector2Array() {
    api->rebel_pool_vector2_array_destroy(&internal_array);
}

PoolVector2Array& PoolVector2Array::operator=(const PoolVector2Array& other) {
    api->rebel_pool_vector2_array_destroy(&internal_array);
    api->rebel_pool_vector2_array_new_copy(
        &internal_array,
        &other.internal_array
    );
    return *this;
}

Vector2 PoolVector2Array::operator[](const int index) const {
    Vector2 vector;
    *reinterpret_cast<rebel_vector2*>(&vector) =
        api->rebel_pool_vector2_array_get(&internal_array, index);
    return vector;
}

PoolVector2Array::Read PoolVector2Array::read() const {
    Read read;
    read.internal_read = api->rebel_pool_vector2_array_read(&internal_array);
    return read;
}

PoolVector2Array::Write PoolVector2Array::write() {
    Write write;
    write.internal_write = api->rebel_pool_vector2_array_write(&internal_array);
    return write;
}

int PoolVector2Array::size() const {
    return api->rebel_pool_vector2_array_size(&internal_array);
}

void PoolVector2Array::resize(const int size) {
    api->rebel_pool_vector2_array_resize(&internal_array, size);
}

void PoolVector2Array::append(const Vector2& value) {
    api->rebel_pool_vector2_array_append(
        &internal_array,
        reinterpret_cast<const rebel_vector2*>(&value)
    );
}

void PoolVector2Array::append_array(const PoolVector2Array& array) {
    api->rebel_pool_vector2_array_append_array(
        &internal_array,
        &array.internal_array
    );
}

void PoolVector2Array::push_back(const Vector2& value) {
    api->rebel_pool_vector2_array_push_back(
        &internal_array,
        reinterpret_cast<const rebel_vector2*>(&value)
    );
}

int PoolVector2Array::insert(const int index, const Vector2& value) {
    return api->rebel_pool_vector2_array_insert(
        &internal_array,
        index,
        reinterpret_cast<const rebel_vector2*>(&value)
    );
}

void PoolVector2Array::remove(const int index) {
    api->rebel_pool_vector2_array_remove(&internal_array, index);
}

void PoolVector2Array::set(const int index, const Vector2& value) {
    api->rebel_pool_vector2_array_set(
        &internal_array,
        index,
        reinterpret_cast<const rebel_vector2*>(&value)
    );
}

void PoolVector2Array::invert() {
    api->rebel_pool_vector2_array_invert(&internal_array);
}

// PoolVector3Array
PoolVector3Array::Read::Read(const Read& other) {
    internal_read =
        api->rebel_pool_vector3_array_read_access_copy(other.internal_read);
}

PoolVector3Array::Read::~Read() {
    api->rebel_pool_vector3_array_read_access_destroy(internal_read);
}

void PoolVector3Array::Read::operator=(const Read& other) {
    api->rebel_pool_vector3_array_read_access_operator_assign(
        internal_read,
        other.internal_read
    );
}

const Vector3& PoolVector3Array::Read::operator[](const int index) const {
    return ptr()[index];
}

const Vector3* PoolVector3Array::Read::ptr() const {
    return reinterpret_cast<const Vector3*>(
        api->rebel_pool_vector3_array_read_access_ptr(internal_read)
    );
}

PoolVector3Array::Write::Write(const Write& other) {
    internal_write =
        api->rebel_pool_vector3_array_write_access_copy(other.internal_write);
}

PoolVector3Array::Write::~Write() {
    api->rebel_pool_vector3_array_write_access_destroy(internal_write);
}

void PoolVector3Array::Write::operator=(const Write& other) {
    api->rebel_pool_vector3_array_write_access_operator_assign(
        internal_write,
        other.internal_write
    );
}

Vector3& PoolVector3Array::Write::operator[](const int index) const {
    return ptr()[index];
}

Vector3* PoolVector3Array::Write::ptr() const {
    return reinterpret_cast<Vector3*>(
        api->rebel_pool_vector3_array_write_access_ptr(internal_write)
    );
}

PoolVector3Array::PoolVector3Array() {
    api->rebel_pool_vector3_array_new(&internal_array);
}

PoolVector3Array::PoolVector3Array(const PoolVector3Array& other) {
    api->rebel_pool_vector3_array_new_copy(
        &internal_array,
        &other.internal_array
    );
}

PoolVector3Array::PoolVector3Array(const Array& array) {
    api->rebel_pool_vector3_array_new_with_array(
        &internal_array,
        reinterpret_cast<const rebel_array*>(&array)
    );
}

PoolVector3Array::PoolVector3Array(const rebel_pool_vector3_array other) {
    internal_array = other;
}

PoolVector3Array::~PoolVector3Array() {
    api->rebel_pool_vector3_array_destroy(&internal_array);
}

PoolVector3Array& PoolVector3Array::operator=(const PoolVector3Array& other) {
    api->rebel_pool_vector3_array_destroy(&internal_array);
    api->rebel_pool_vector3_array_new_copy(
        &internal_array,
        &other.internal_array
    );
    return *this;
}

Vector3 PoolVector3Array::operator[](const int index) const {
    Vector3 vector;
    *reinterpret_cast<rebel_vector3*>(&vector) =
        api->rebel_pool_vector3_array_get(&internal_array, index);
    return vector;
}

PoolVector3Array::Read PoolVector3Array::read() const {
    Read read;
    read.internal_read = api->rebel_pool_vector3_array_read(&internal_array);
    return read;
}

PoolVector3Array::Write PoolVector3Array::write() {
    Write write;
    write.internal_write = api->rebel_pool_vector3_array_write(&internal_array);
    return write;
}

int PoolVector3Array::size() const {
    return api->rebel_pool_vector3_array_size(&internal_array);
}

void PoolVector3Array::resize(const int size) {
    api->rebel_pool_vector3_array_resize(&internal_array, size);
}

void PoolVector3Array::append(const Vector3& value) {
    api->rebel_pool_vector3_array_append(
        &internal_array,
        reinterpret_cast<const rebel_vector3*>(&value)
    );
}

void PoolVector3Array::append_array(const PoolVector3Array& array) {
    api->rebel_pool_vector3_array_append_array(
        &internal_array,
        &array.internal_array
    );
}

void PoolVector3Array::push_back(const Vector3& value) {
    api->rebel_pool_vector3_array_push_back(
        &internal_array,
        reinterpret_cast<const rebel_vector3*>(&value)
    );
}

int PoolVector3Array::insert(const int index, const Vector3& value) {
    return api->rebel_pool_vector3_array_insert(
        &internal_array,
        index,
        reinterpret_cast<const rebel_vector3*>(&value)
    );
}

void PoolVector3Array::remove(const int index) {
    api->rebel_pool_vector3_array_remove(&internal_array, index);
}

void PoolVector3Array::set(const int index, const Vector3& value) {
    api->rebel_pool_vector3_array_set(
        &internal_array,
        index,
        reinterpret_cast<const rebel_vector3*>(&value)
    );
}

void PoolVector3Array::invert() {
    api->rebel_pool_vector3_array_invert(&internal_array);
}

} // namespace Rebel
