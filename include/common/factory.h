// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef FACTORY_H
#define FACTORY_H

namespace Rebel {
namespace Factory {
// Add multiple values.
template <typename T>
T append_all(T destination) {
    return destination;
}

template <typename T, typename Value>
T append_all(T destination, Value value) {
    destination.append(value);
    return destination;
}

template <typename T, typename Value, typename... Values>
T append_all(T destination, Value value, Values... values) {
    destination.append(value);
    return append_all(destination, values...);
}

// Add multiple key value pairs.
template <typename T>
T add_all(T destination) {
    return destination;
}

template <typename T, typename Key, typename Value>
T add_all(T destination, Key key, Value value) {
    destination[key] = value;
    return destination;
}

template <typename T, typename Key, typename Value, typename... KeyValues>
T add_all(T destination, Key key, Value value, KeyValues... key_values) {
    destination[key] = value;
    return add_all(destination, key_values...);
}
} // namespace Factory
} // namespace Rebel

#endif // FACTORY_H
