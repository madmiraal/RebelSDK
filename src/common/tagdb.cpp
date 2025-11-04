// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/tagdb.h"

#include "common/rebelglobal.h"

#include <unordered_map>

namespace Rebel {
namespace TagDB {

std::unordered_map<size_t, size_t> parent_to;

void register_type(size_t type_tag, size_t base_type_tag) {
    if (type_tag == base_type_tag) {
        return;
    }
    parent_to[type_tag] = base_type_tag;
}

bool is_type_known(size_t type_tag) {
    return parent_to.find(type_tag) != parent_to.end();
}

void register_global_type(
    const char* name,
    size_t type_tag,
    size_t base_type_tag
) {
    nativescript_1_1_api->rebel_nativescript_set_global_type_tag(
        RegisterState::language_index,
        name,
        (const void*)type_tag
    );

    register_type(type_tag, base_type_tag);
}

bool is_type_compatible(size_t ask_tag, size_t have_tag) {
    if (have_tag == 0) {
        return false;
    }

    size_t tag = have_tag;

    while (tag != 0) {
        if (tag == ask_tag) {
            return true;
        }

        tag = parent_to[tag];
    }

    return false;
}
} // namespace TagDB
} // namespace Rebel
