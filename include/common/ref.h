// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef REF_H
#define REF_H

#include "common/rebelglobal.h"
#include "common/variant.h"

namespace Rebel {
class Reference;

template <class T>
class Ref {
public:
    Ref() = default;

    Ref(T* new_object) {
        if (new_object) {
            init_ref(new_object);
        }
    }

    Ref(const Ref& other) {
        *this = other;
    }

    template <class T_Other>
    Ref(const Ref<T_Other>& other) {
        *this = other;
    }

    Ref(const Variant& variant) {
        *this = variant;
    }

    ~Ref() {
        unref();
    }

    void operator=(const Ref& other) {
        set_ref(other.object);
    }

    template <class T_Other>
    void operator=(const Ref<T_Other>& other) {
        set_ref(other.object);
    }

    void operator=(const Variant& variant) {
        const Object* other_object = T::from_variant(variant);
        set_ref(other_object);
    }

    T* operator->() {
        return object;
    }

    const T* operator->() const {
        return object;
    }

    T* operator*() {
        return object;
    }

    const T* operator*() const {
        return object;
    }

    T* ptr() {
        return object;
    }

    const T* ptr() const {
        return object;
    }

    operator Variant() const {
        // Note: the C API handles the cases where the object is a Reference,
        // so Rebel Engine will correctly construct the Variant with a RefPtr.
        return Variant(object);
    }

    bool is_valid() const {
        return object != nullptr;
    }

    bool is_null() const {
        return object == nullptr;
    }

    void unref() {
        // TODO Should this be protected with mutexes?
        if (object && object->unreference()) {
            object->free();
        }
        object = nullptr;
    }

    void instance() {
        init_ref(T::create());
    }

    // Used to encapsulate return values without adding to the refcount.
    static Ref create_ref(Object* object) {
        Ref result;
        result.object = static_cast<T*>(object);
        return result;
    }

private:
    T* object = nullptr;

    void set_ref(T* other_object) {
        if (object == other_object) {
            return;
        }
        unref();
        object = other_object;
        if (object) {
            object->reference();
        }
    }

    void init_ref(T* new_object) {
        ERR_FAIL_COND(new_object == nullptr);
        if (new_object->init_ref()) {
            object = new_object;
        }
    }
};

template <class T>
bool operator==(const Ref<T>& left, const Ref<T>& right) {
    return left.object == right.object;
}

template <class T>
bool operator!=(const Ref<T>& left, const Ref<T>& right) {
    return !(left == right);
}

template <class T>
bool operator<(const Ref<T>& left, const Ref<T>& right) {
    return left.object < right.object;
}

template <class T>
bool operator<=(const Ref<T>& left, const Ref<T>& right) {
    return left == right || left < right;
}

template <class T>
bool operator>(const Ref<T>& left, const Ref<T>& right) {
    return !(left <= right);
}

template <class T>
bool operator>=(const Ref<T>& left, const Ref<T>& right) {
    return !(left < right);
}
} // namespace Rebel

#endif // REF_H
