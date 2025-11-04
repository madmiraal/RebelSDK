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
    String from = "";
    api->rebel_node_path_new(&_node_path, (rebel_string*)&from);
}

NodePath::NodePath(const NodePath& other) {
    String from = other;
    api->rebel_node_path_new(&_node_path, (rebel_string*)&from);
}

NodePath::NodePath(const String& from) {
    api->rebel_node_path_new(&_node_path, (rebel_string*)&from);
}

NodePath::NodePath(const char* contents) {
    String from = contents;
    api->rebel_node_path_new(&_node_path, (rebel_string*)&from);
}

String NodePath::get_name(const int idx) const {
    rebel_string str = api->rebel_node_path_get_name(&_node_path, idx);
    return String(str);
}

int NodePath::get_name_count() const {
    return api->rebel_node_path_get_name_count(&_node_path);
}

String NodePath::get_subname(const int idx) const {
    rebel_string str = api->rebel_node_path_get_subname(&_node_path, idx);
    return String(str);
}

int NodePath::get_subname_count() const {
    return api->rebel_node_path_get_subname_count(&_node_path);
}

bool NodePath::is_absolute() const {
    return api->rebel_node_path_is_absolute(&_node_path);
}

bool NodePath::is_empty() const {
    return api->rebel_node_path_is_empty(&_node_path);
}

NodePath NodePath::get_as_property_path() const {
    rebel_node_path path =
        core_1_1_api->rebel_node_path_get_as_property_path(&_node_path);
    return NodePath(path);
}

String NodePath::get_concatenated_subnames() const {
    rebel_string str =
        api->rebel_node_path_get_concatenated_subnames(&_node_path);
    return String(str);
}

NodePath::operator String() const {
    rebel_string str = api->rebel_node_path_as_string(&_node_path);
    return String(str);
}

bool NodePath::operator==(const NodePath& other) {
    return api->rebel_node_path_operator_equal(&_node_path, &other._node_path);
}

void NodePath::operator=(const NodePath& other) {
    api->rebel_node_path_destroy(&_node_path);

    String other_string = (String)other;

    api->rebel_node_path_new(&_node_path, (rebel_string*)&other_string);
}

NodePath::~NodePath() {
    api->rebel_node_path_destroy(&_node_path);
}

} // namespace Rebel
