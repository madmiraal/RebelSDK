// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef DICTIONARY_H
#define DICTIONARY_H

#include "api/gdnative/dictionary.h"
#include "common/array.h"
#include "common/variant.h"

namespace Rebel {

class Dictionary {
    rebel_dictionary _rebel_dictionary;

    friend Variant::operator Dictionary() const;

    inline explicit Dictionary(const rebel_dictionary& other) {
        _rebel_dictionary = other;
    }

public:
    Dictionary();
    Dictionary(const Dictionary& other);
    Dictionary& operator=(const Dictionary& other);

    template <class... Args>
    static Dictionary make(Args... args) {
        return helpers::add_all(Dictionary(), args...);
    }

    void clear();

    bool empty() const;

    void erase(const Variant& key);

    bool has(const Variant& key) const;

    bool has_all(const Array& keys) const;

    uint32_t hash() const;

    Array keys() const;

    Variant& operator[](const Variant& key);

    const Variant& operator[](const Variant& key) const;

    int size() const;

    String to_json() const;

    Array values() const;

    ~Dictionary();
};

} // namespace Rebel

#endif // DICTIONARY_H
