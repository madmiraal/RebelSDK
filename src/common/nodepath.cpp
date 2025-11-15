// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/nodepath.h"

#include "common/rebelglobal.h"
#include "common/string.h"

namespace Rebel {

NodePath::NodePath() {
    const String from;
    api->rebel_node_path_new(
        &internal_node_path,
        reinterpret_cast<const rebel_string*>(&from)
    );
}

NodePath::NodePath(const NodePath& other) {
    const String from{other};
    api->rebel_node_path_new(
        &internal_node_path,
        reinterpret_cast<const rebel_string*>(&from)
    );
}

NodePath::NodePath(const rebel_node_path other) : internal_node_path(other) {}

NodePath::NodePath(const String& from) {
    api->rebel_node_path_new(
        &internal_node_path,
        reinterpret_cast<const rebel_string*>(&from)
    );
}

NodePath::NodePath(const char* contents) {
    const String from(contents);
    api->rebel_node_path_new(
        &internal_node_path,
        reinterpret_cast<const rebel_string*>(&from)
    );
}

NodePath::~NodePath() {
    api->rebel_node_path_destroy(&internal_node_path);
}

void NodePath::operator=(const NodePath& other) {
    api->rebel_node_path_destroy(&internal_node_path);
    const String other_string{other};
    api->rebel_node_path_new(
        &internal_node_path,
        reinterpret_cast<const rebel_string*>(&other_string)
    );
}

bool NodePath::operator==(const NodePath& right) const {
    return api->rebel_node_path_operator_equal(
        &internal_node_path,
        &right.internal_node_path
    );
}

NodePath::operator String() const {
    const rebel_string string =
        api->rebel_node_path_as_string(&internal_node_path);
    return String(string);
}

bool NodePath::is_empty() const {
    return api->rebel_node_path_is_empty(&internal_node_path);
}

bool NodePath::is_absolute() const {
    return api->rebel_node_path_is_absolute(&internal_node_path);
}

int NodePath::get_name_count() const {
    return api->rebel_node_path_get_name_count(&internal_node_path);
}

int NodePath::get_subname_count() const {
    return api->rebel_node_path_get_subname_count(&internal_node_path);
}

String NodePath::get_name(const int idx) const {
    const rebel_string string =
        api->rebel_node_path_get_name(&internal_node_path, idx);
    return String(string);
}

String NodePath::get_subname(const int idx) const {
    const rebel_string string =
        api->rebel_node_path_get_subname(&internal_node_path, idx);
    return String(string);
}

String NodePath::get_concatenated_subnames() const {
    const rebel_string string =
        api->rebel_node_path_get_concatenated_subnames(&internal_node_path);
    return String(string);
}

NodePath NodePath::get_as_property_path() const {
    const rebel_node_path property_path =
        core_1_1_api->rebel_node_path_get_as_property_path(&internal_node_path);
    return NodePath(property_path);
}
} // namespace Rebel
