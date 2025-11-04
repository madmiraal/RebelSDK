// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/dictionary.h"

#include "common/array.h"
#include "common/rebelglobal.h"
#include "common/variant.h"

namespace Rebel {

Dictionary::Dictionary() {
    api->rebel_dictionary_new(&_rebel_dictionary);
}

Dictionary::Dictionary(const Dictionary& other) {
    api->rebel_dictionary_new_copy(
        &_rebel_dictionary,
        &other._rebel_dictionary
    );
}

Dictionary& Dictionary::operator=(const Dictionary& other) {
    api->rebel_dictionary_destroy(&_rebel_dictionary);
    api->rebel_dictionary_new_copy(
        &_rebel_dictionary,
        &other._rebel_dictionary
    );
    return *this;
}

void Dictionary::clear() {
    api->rebel_dictionary_clear(&_rebel_dictionary);
}

bool Dictionary::empty() const {
    return api->rebel_dictionary_empty(&_rebel_dictionary);
}

void Dictionary::erase(const Variant& key) {
    api->rebel_dictionary_erase(&_rebel_dictionary, (rebel_variant*)&key);
}

bool Dictionary::has(const Variant& key) const {
    return api->rebel_dictionary_has(&_rebel_dictionary, (rebel_variant*)&key);
}

bool Dictionary::has_all(const Array& keys) const {
    return api->rebel_dictionary_has_all(
        &_rebel_dictionary,
        (rebel_array*)&keys
    );
}

uint32_t Dictionary::hash() const {
    return api->rebel_dictionary_hash(&_rebel_dictionary);
}

Array Dictionary::keys() const {
    rebel_array a = api->rebel_dictionary_keys(&_rebel_dictionary);
    return Array(a);
}

Variant& Dictionary::operator[](const Variant& key) {
    rebel_variant* v = api->rebel_dictionary_operator_index(
        &_rebel_dictionary,
        (rebel_variant*)&key
    );
    return *reinterpret_cast<Variant*>(v);
}

const Variant& Dictionary::operator[](const Variant& key) const {
    rebel_variant* v = api->rebel_dictionary_operator_index(
        (rebel_dictionary*)&_rebel_dictionary,
        (rebel_variant*)&key
    );
    return *reinterpret_cast<Variant*>(v);
}

int Dictionary::size() const {
    return api->rebel_dictionary_size(&_rebel_dictionary);
}

String Dictionary::to_json() const {
    rebel_string s = api->rebel_dictionary_to_json(&_rebel_dictionary);
    return String(s);
}

Array Dictionary::values() const {
    rebel_array a = api->rebel_dictionary_values(&_rebel_dictionary);
    return Array(a);
}

Dictionary::~Dictionary() {
    api->rebel_dictionary_destroy(&_rebel_dictionary);
}

} // namespace Rebel
