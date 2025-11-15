// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef POOLARRAYS_H
#define POOLARRAYS_H

#include "api/gdnative/pool_arrays.h"
#include "common/defs.h"

namespace Rebel {
class Array;
class Color;
class String;
class Vector2;
class Vector3;

class PoolByteArray {
public:
    class Read {
    public:
        Read() = default;
        Read(const Read& other);
        ~Read();
        void operator=(const Read& other);
        const uint8_t& operator[](int index) const;
        const uint8_t* ptr() const;

    private:
        rebel_pool_byte_array_read_access* internal_read = nullptr;
        friend class PoolByteArray;
    };

    class Write {
    public:
        Write() = default;
        Write(const Write& other);
        ~Write();
        void operator=(const Write& other);
        uint8_t& operator[](int index) const;
        uint8_t* ptr() const;

    private:
        rebel_pool_byte_array_write_access* internal_write = nullptr;
        friend class PoolByteArray;
    };

    PoolByteArray();
    PoolByteArray(const PoolByteArray& other);
    PoolByteArray(const Array& array);
    ~PoolByteArray();

    PoolByteArray& operator=(const PoolByteArray& other);
    uint8_t operator[](int index) const;

    Read read() const;
    Write write();

    int size() const;
    void resize(int size);
    void append(uint8_t value);
    void append_array(const PoolByteArray& array);
    void push_back(uint8_t value);
    int insert(int index, uint8_t value);
    void remove(int index);
    void set(int index, uint8_t value);
    void invert();

private:
    rebel_pool_byte_array internal_array;

    friend class String;
    friend class Variant;

    explicit PoolByteArray(rebel_pool_byte_array other);
};

class PoolColorArray {
public:
    class Read {
    public:
        Read() = default;
        Read(const Read& other);
        ~Read();
        void operator=(const Read& other);
        const Color& operator[](int index) const;
        const Color* ptr() const;

    private:
        rebel_pool_color_array_read_access* internal_read = nullptr;
        friend class PoolColorArray;
    };

    class Write {
    public:
        Write() = default;
        Write(const Write& other);
        ~Write();
        void operator=(const Write& other);
        Color& operator[](int index) const;
        Color* ptr() const;

    private:
        rebel_pool_color_array_write_access* internal_write = nullptr;
        friend class PoolColorArray;
    };

    PoolColorArray();
    PoolColorArray(const PoolColorArray& other);
    PoolColorArray(const Array& array);
    ~PoolColorArray();

    PoolColorArray& operator=(const PoolColorArray& other);
    Color operator[](int index) const;

    Read read() const;
    Write write();

    int size() const;
    void resize(int size);
    void append(const Color& value);
    void append_array(const PoolColorArray& array);
    void push_back(const Color& value);
    int insert(int index, const Color& value);
    void remove(int index);
    void set(int index, const Color& value);
    void invert();

private:
    rebel_pool_color_array internal_array;

    friend class String;
    friend class Variant;

    explicit PoolColorArray(rebel_pool_color_array other);
};

class PoolIntArray {
public:
    class Read {
    public:
        Read() = default;
        Read(const Read& other);
        ~Read();
        void operator=(const Read& other);
        const int& operator[](int index) const;
        const int* ptr() const;

    private:
        rebel_pool_int_array_read_access* internal_read = nullptr;
        friend class PoolIntArray;
    };

    class Write {
    public:
        Write() = default;
        Write(const Write& other);
        ~Write();
        void operator=(const Write& other);
        int& operator[](int index) const;
        int* ptr() const;

    private:
        rebel_pool_int_array_write_access* internal_write = nullptr;
        friend class PoolIntArray;
    };

    PoolIntArray();
    PoolIntArray(const PoolIntArray& other);
    PoolIntArray(const Array& array);
    ~PoolIntArray();

    PoolIntArray& operator=(const PoolIntArray& other);
    int operator[](int index) const;

    Read read() const;
    Write write();

    int size() const;
    void resize(int size);
    void append(int value);
    void append_array(const PoolIntArray& array);
    void push_back(int value);
    int insert(int index, int value);
    void remove(int index);
    void set(int index, int value);
    void invert();

private:
    rebel_pool_int_array internal_array;

    friend class String;
    friend class Variant;

    explicit PoolIntArray(rebel_pool_int_array other);
};

class PoolRealArray {
public:
    class Read {
    public:
        Read() = default;
        Read(const Read& other);
        ~Read();
        void operator=(const Read& other);
        const real_t& operator[](int index) const;
        const real_t* ptr() const;

    private:
        rebel_pool_real_array_read_access* internal_read = nullptr;
        friend class PoolRealArray;
    };

    class Write {
    public:
        Write() = default;
        Write(const Write& other);
        ~Write();
        void operator=(const Write& other);
        real_t& operator[](int index) const;
        real_t* ptr() const;

    private:
        rebel_pool_real_array_write_access* internal_write = nullptr;
        friend class PoolRealArray;
    };

    PoolRealArray();
    PoolRealArray(const PoolRealArray& other);
    PoolRealArray(const Array& array);
    ~PoolRealArray();

    PoolRealArray& operator=(const PoolRealArray& other);
    real_t operator[](int index) const;

    Read read() const;
    Write write();

    int size() const;
    void resize(int size);
    void append(real_t value);
    void append_array(const PoolRealArray& array);
    void push_back(real_t value);
    int insert(int index, real_t value);
    void remove(int index);
    void set(int index, real_t value);
    void invert();

private:
    rebel_pool_real_array internal_array;

    friend class String;
    friend class Variant;

    explicit PoolRealArray(rebel_pool_real_array other);
};

class PoolStringArray {
public:
    class Read {
    public:
        Read() = default;
        Read(const Read& other);
        ~Read();
        void operator=(const Read& other);
        const String& operator[](int index) const;
        const String* ptr() const;

    private:
        rebel_pool_string_array_read_access* internal_read = nullptr;
        friend class PoolStringArray;
    };

    class Write {
    public:
        Write() = default;
        Write(const Write& other);
        ~Write();
        void operator=(const Write& other);
        String& operator[](int index) const;
        String* ptr() const;

    private:
        rebel_pool_string_array_write_access* internal_write = nullptr;
        friend class PoolStringArray;
    };

    PoolStringArray();
    PoolStringArray(const PoolStringArray& other);
    PoolStringArray(const Array& array);
    ~PoolStringArray();

    PoolStringArray& operator=(const PoolStringArray& other);
    String operator[](int index) const;

    Read read() const;
    Write write();

    int size() const;
    void resize(int size);
    void append(const String& value);
    void append_array(const PoolStringArray& array);
    void push_back(const String& value);
    int insert(int index, const String& value);
    void remove(int index);
    void set(int index, const String& value);
    void invert();

private:
    rebel_pool_string_array internal_array;

    friend class String;
    friend class Variant;

    explicit PoolStringArray(rebel_pool_string_array other);
};

class PoolVector2Array {
public:
    class Read {
    public:
        Read() = default;
        Read(const Read& other);
        ~Read();
        void operator=(const Read& other);
        const Vector2& operator[](int index) const;
        const Vector2* ptr() const;

    private:
        rebel_pool_vector2_array_read_access* internal_read = nullptr;
        friend class PoolVector2Array;
    };

    class Write {
    public:
        Write() = default;
        Write(const Write& other);
        ~Write();
        void operator=(const Write& other);
        Vector2& operator[](int index) const;
        Vector2* ptr() const;

    private:
        rebel_pool_vector2_array_write_access* internal_write = nullptr;
        friend class PoolVector2Array;
    };

    PoolVector2Array();
    PoolVector2Array(const PoolVector2Array& other);
    PoolVector2Array(const Array& array);
    ~PoolVector2Array();

    PoolVector2Array& operator=(const PoolVector2Array& other);
    Vector2 operator[](int index) const;

    Read read() const;
    Write write();

    int size() const;
    void resize(int size);
    void append(const Vector2& value);
    void append_array(const PoolVector2Array& array);
    void push_back(const Vector2& value);
    int insert(int index, const Vector2& value);
    void remove(int index);
    void set(int index, const Vector2& value);
    void invert();

private:
    rebel_pool_vector2_array internal_array;

    friend class String;
    friend class Variant;

    explicit PoolVector2Array(rebel_pool_vector2_array other);
};

class PoolVector3Array {
public:
    class Read {
    public:
        Read() = default;
        Read(const Read& other);
        ~Read();
        void operator=(const Read& other);
        const Vector3& operator[](int index) const;
        const Vector3* ptr() const;

    private:
        rebel_pool_vector3_array_read_access* internal_read = nullptr;
        friend class PoolVector3Array;
    };

    class Write {
    public:
        Write() = default;
        Write(const Write& other);
        ~Write();
        void operator=(const Write& other);
        Vector3& operator[](int index) const;
        Vector3* ptr() const;

    private:
        rebel_pool_vector3_array_write_access* internal_write = nullptr;
        friend class PoolVector3Array;
    };

    PoolVector3Array();
    PoolVector3Array(const PoolVector3Array& other);
    PoolVector3Array(const Array& array);
    ~PoolVector3Array();

    PoolVector3Array& operator=(const PoolVector3Array& other);
    Vector3 operator[](int index) const;

    Read read() const;
    Write write();

    int size() const;
    void resize(int size);
    void append(const Vector3& value);
    void append_array(const PoolVector3Array& array);
    void push_back(const Vector3& value);
    int insert(int index, const Vector3& value);
    void remove(int index);
    void set(int index, const Vector3& value);
    void invert();

private:
    rebel_pool_vector3_array internal_array;

    friend class String;
    friend class Variant;

    explicit PoolVector3Array(rebel_pool_vector3_array other);
};
} // namespace Rebel

#endif // POOLARRAYS_H
