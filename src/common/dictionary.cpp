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
    api->rebel_dictionary_new(&internal_dictionary);
}

Dictionary::Dictionary(const rebel_dictionary& other) :
    internal_dictionary(other) {}

Dictionary::Dictionary(const Dictionary& other) {
    api->rebel_dictionary_new_copy(
        &internal_dictionary,
        &other.internal_dictionary
    );
}

Dictionary::~Dictionary() {
    api->rebel_dictionary_destroy(&internal_dictionary);
}

Dictionary& Dictionary::operator=(const Dictionary& other) {
    api->rebel_dictionary_destroy(&internal_dictionary);
    api->rebel_dictionary_new_copy(
        &internal_dictionary,
        &other.internal_dictionary
    );
    return *this;
}

Variant& Dictionary::operator[](const Variant& key) {
    rebel_variant* value = api->rebel_dictionary_operator_index(
        &internal_dictionary,
        reinterpret_cast<const rebel_variant*>(&key)
    );
    return *reinterpret_cast<Variant*>(value);
}

const Variant& Dictionary::operator[](const Variant& key) const {
    rebel_variant* value = api->rebel_dictionary_operator_index(
        const_cast<rebel_dictionary*>(&internal_dictionary),
        reinterpret_cast<const rebel_variant*>(&key)
    );
    return *reinterpret_cast<Variant*>(value);
}

bool Dictionary::empty() const {
    return api->rebel_dictionary_empty(&internal_dictionary);
}

bool Dictionary::has(const Variant& key) const {
    return api->rebel_dictionary_has(
        &internal_dictionary,
        reinterpret_cast<const rebel_variant*>(&key)
    );
}

bool Dictionary::has_all(const Array& keys) const {
    return api->rebel_dictionary_has_all(
        &internal_dictionary,
        reinterpret_cast<const rebel_array*>(&keys)
    );
}

int Dictionary::size() const {
    return api->rebel_dictionary_size(&internal_dictionary);
}

void Dictionary::clear() {
    api->rebel_dictionary_clear(&internal_dictionary);
}

void Dictionary::erase(const Variant& key) {
    api->rebel_dictionary_erase(
        &internal_dictionary,
        reinterpret_cast<const rebel_variant*>(&key)
    );
}

uint32_t Dictionary::hash() const {
    return api->rebel_dictionary_hash(&internal_dictionary);
}

Array Dictionary::keys() const {
    const rebel_array array = api->rebel_dictionary_keys(&internal_dictionary);
    return Array(array);
}

Array Dictionary::values() const {
    const rebel_array array =
        api->rebel_dictionary_values(&internal_dictionary);
    return Array(array);
}

String Dictionary::to_json() const {
    const rebel_string json_string =
        api->rebel_dictionary_to_json(&internal_dictionary);
    return String(json_string);
}
} // namespace Rebel
