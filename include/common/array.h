// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef ARRAY_H
#define ARRAY_H

#include "api/gdnative/array.h"
#include "common/factory.h"

namespace Rebel {
class Object;
class PoolByteArray;
class PoolColorArray;
class PoolIntArray;
class PoolRealArray;
class PoolStringArray;
class PoolVector2Array;
class PoolVector3Array;
class String;
class Variant;

class Array {
public:
    Array();
    Array(const Array& other);
    Array(const PoolByteArray& pool_byte_array);
    Array(const PoolColorArray& pool_color_array);
    Array(const PoolIntArray& pool_int_array);
    Array(const PoolRealArray& pool_real_array);
    Array(const PoolStringArray& pool_string_array);
    Array(const PoolVector2Array& pool_vector2_array);
    Array(const PoolVector3Array& pool_vector3_array);
    ~Array();

    template <class... Args>
    static Array make(Args... args) {
        return Factory::append_all(Array(), args...);
    }

    Array& operator=(const Array& other);
    Variant& operator[](int index);
    const Variant& operator[](int index) const;

    void append(const Variant& v);
    Variant back() const;
    int bsearch(const Variant& value, bool before = true);
    int bsearch_custom(
        const Variant& value,
        const Object* obj,
        const String& func,
        bool before = true
    );
    void clear();
    int count(const Variant& v) const;
    Array duplicate(bool deep = false) const;
    bool empty() const;
    void erase(const Variant& v);
    int find(const Variant& what, int from = 0) const;
    int find_last(const Variant& what) const;
    Variant front() const;
    bool has(const Variant& what) const;
    uint32_t hash() const;
    void insert(int pos, const Variant& value);
    void invert();
    Variant max() const;
    Variant min() const;
    Variant pop_back();
    Variant pop_front();
    void push_back(const Variant& v);
    void push_front(const Variant& v);
    void remove(int idx);
    void resize(int size);
    int rfind(const Variant& what, int from = -1) const;
    int size() const;
    void sort();
    void sort_custom(Object* obj, const String& func);
    void shuffle();

private:
    rebel_array internal_array{};

    friend class Variant;
    friend class Dictionary;
    friend class String;

    explicit Array(const rebel_array& other);
};
} // namespace Rebel

#endif // ARRAY_H
