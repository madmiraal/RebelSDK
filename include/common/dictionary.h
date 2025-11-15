// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef DICTIONARY_H
#define DICTIONARY_H

#include "api/gdnative/dictionary.h"
#include "common/factory.h"
#include "common/variant.h"

namespace Rebel {
class Dictionary {
public:
    Dictionary();
    Dictionary(const Dictionary& other);
    ~Dictionary();

    template <class... Args>
    static Dictionary make(Args... args) {
        return Factory::add_all(Dictionary(), args...);
    }

    Dictionary& operator=(const Dictionary& other);
    Variant& operator[](const Variant& key);
    const Variant& operator[](const Variant& key) const;

    bool empty() const;
    bool has(const Variant& key) const;
    bool has_all(const Array& keys) const;
    int size() const;
    void clear();
    void erase(const Variant& key);
    uint32_t hash() const;
    Array keys() const;
    Array values() const;
    String to_json() const;

private:
    rebel_dictionary internal_dictionary;
    friend Variant::operator Dictionary() const;
    explicit Dictionary(const rebel_dictionary& other);
};
} // namespace Rebel

#endif // DICTIONARY_H
