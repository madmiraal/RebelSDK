// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef NODE_PATH_H
#define NODE_PATH_H

#include "api/gdnative/node_path.h"
#include "common/string.h"

namespace Rebel {

class NodePath {
public:
    NodePath();
    NodePath(const NodePath& other);
    NodePath(const String& from);
    NodePath(const char* contents);
    ~NodePath();

    void operator=(const NodePath& other);
    bool operator==(const NodePath& right) const;
    operator String() const;

    bool is_empty() const;
    bool is_absolute() const;
    int get_name_count() const;
    int get_subname_count() const;
    String get_name(int idx) const;
    String get_subname(int idx) const;
    String get_concatenated_subnames() const;
    NodePath get_as_property_path() const;

private:
    rebel_node_path internal_node_path;

    friend class Variant;

    explicit NodePath(rebel_node_path other);
};
} // namespace Rebel

#endif // NODE_PATH_H
