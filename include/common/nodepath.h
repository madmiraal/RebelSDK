// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef NODEPATH_H
#define NODEPATH_H

#include "api/gdnative/node_path.h"
#include "common/string.h"

namespace Rebel {

class NodePath {
    rebel_node_path _node_path;

    friend class Variant;

    inline explicit NodePath(rebel_node_path node_path) {
        _node_path = node_path;
    }

public:
    NodePath();

    NodePath(const NodePath& other);

    NodePath(const String& from);

    NodePath(const char* contents);

    String get_name(const int idx) const;

    int get_name_count() const;

    String get_subname(const int idx) const;

    int get_subname_count() const;

    bool is_absolute() const;

    bool is_empty() const;

    NodePath get_as_property_path() const;

    String get_concatenated_subnames() const;

    operator String() const;

    void operator=(const NodePath& other);

    bool operator==(const NodePath& other);

    ~NodePath();
};

} // namespace Rebel

#endif // NODEPATH_H
