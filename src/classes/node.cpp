// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/node.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/inputeventkey.h"
#include "classes/multiplayerapi.h"
#include "classes/node.h"
#include "classes/scenetree.h"
#include "classes/viewport.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Node::_enter_tree() {
    rebel_icall_void(
        method_bindings.mb__enter_tree,
        (const Object*)this
    );
}

void Node::_exit_tree() {
    rebel_icall_void(
        method_bindings.mb__exit_tree,
        (const Object*)this
    );
}

String Node::_get_configuration_warning() {
    return rebel_icall_string(
        method_bindings.mb__get_configuration_warning,
        (const Object*)this
    );
}

String Node::_get_editor_description() const {
    return rebel_icall_string(
        method_bindings.mb__get_editor_description,
        (const Object*)this
    );
}

NodePath Node::_get_import_path() const {
    return rebel_icall_nodepath(
        method_bindings.mb__get_import_path,
        (const Object*)this
    );
}

void Node::_input(const Ref<InputEvent> event) {
    rebel_icall_void_object(
        method_bindings.mb__input,
        (const Object*)this,
        event.ptr()
    );
}

void Node::_physics_process(const real_t delta) {
    rebel_icall_void_float(
        method_bindings.mb__physics_process,
        (const Object*)this,
        delta
    );
}

void Node::_process(const real_t delta) {
    rebel_icall_void_float(
        method_bindings.mb__process,
        (const Object*)this,
        delta
    );
}

void Node::_ready() {
    rebel_icall_void(
        method_bindings.mb__ready,
        (const Object*)this
    );
}

void Node::_set_editor_description(const String editor_description) {
    rebel_icall_void_string(
        method_bindings.mb__set_editor_description,
        (const Object*)this,
        editor_description
    );
}

void Node::_set_import_path(const NodePath import_path) {
    rebel_icall_void_nodepath(
        method_bindings.mb__set_import_path,
        (const Object*)this,
        import_path
    );
}

void Node::_unhandled_input(const Ref<InputEvent> event) {
    rebel_icall_void_object(
        method_bindings.mb__unhandled_input,
        (const Object*)this,
        event.ptr()
    );
}

void Node::_unhandled_key_input(const Ref<InputEventKey> event) {
    rebel_icall_void_object(
        method_bindings.mb__unhandled_key_input,
        (const Object*)this,
        event.ptr()
    );
}

void Node::add_child(const Node* node, const bool legible_unique_name) {
    rebel_icall_void_object_bool(
        method_bindings.mb_add_child,
        (const Object*)this,
        node,
        legible_unique_name
    );
}

void Node::add_child_below_node(const Node* node, const Node* child_node, const bool legible_unique_name) {
    rebel_icall_void_object_object_bool(
        method_bindings.mb_add_child_below_node,
        (const Object*)this,
        node,
        child_node,
        legible_unique_name
    );
}

void Node::add_to_group(const String group, const bool persistent) {
    rebel_icall_void_string_bool(
        method_bindings.mb_add_to_group,
        (const Object*)this,
        group,
        persistent
    );
}

bool Node::can_process() const {
    return rebel_icall_bool(
        method_bindings.mb_can_process,
        (const Object*)this
    );
}

Node* Node::duplicate(const int64_t flags) const {
    return (Node*)rebel_icall_object_int(
        method_bindings.mb_duplicate,
        (const Object*)this,
        flags
    );
}

Node* Node::find_node(const String mask, const bool recursive, const bool owned) const {
    return (Node*)rebel_icall_object_string_bool_bool(
        method_bindings.mb_find_node,
        (const Object*)this,
        mask,
        recursive,
        owned
    );
}

Node* Node::find_parent(const String mask) const {
    return (Node*)rebel_icall_object_string(
        method_bindings.mb_find_parent,
        (const Object*)this,
        mask
    );
}

Node* Node::get_child(const int64_t idx) const {
    return (Node*)rebel_icall_object_int(
        method_bindings.mb_get_child,
        (const Object*)this,
        idx
    );
}

int64_t Node::get_child_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_child_count,
        (const Object*)this
    );
}

Array Node::get_children() const {
    return rebel_icall_array(
        method_bindings.mb_get_children,
        (const Object*)this
    );
}

Ref<MultiplayerAPI> Node::get_custom_multiplayer() const {
    return Ref<MultiplayerAPI>::create_ref(rebel_icall_object(
        method_bindings.mb_get_custom_multiplayer,
        (const Object*)this
    ));
}

String Node::get_filename() const {
    return rebel_icall_string(
        method_bindings.mb_get_filename,
        (const Object*)this
    );
}

Array Node::get_groups() const {
    return rebel_icall_array(
        method_bindings.mb_get_groups,
        (const Object*)this
    );
}

int64_t Node::get_index() const {
    return rebel_icall_int(
        method_bindings.mb_get_index,
        (const Object*)this
    );
}

Ref<MultiplayerAPI> Node::get_multiplayer() const {
    return Ref<MultiplayerAPI>::create_ref(rebel_icall_object(
        method_bindings.mb_get_multiplayer,
        (const Object*)this
    ));
}

String Node::get_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_name,
        (const Object*)this
    );
}

int64_t Node::get_network_master() const {
    return rebel_icall_int(
        method_bindings.mb_get_network_master,
        (const Object*)this
    );
}

Node* Node::get_node_internal(const NodePath path) const {
    return (Node*)rebel_icall_object_nodepath(
        method_bindings.mb_get_node_internal,
        (const Object*)this,
        path
    );
}

Array Node::get_node_and_resource(const NodePath path) {
    return rebel_icall_array_nodepath(
        method_bindings.mb_get_node_and_resource,
        (const Object*)this,
        path
    );
}

Node* Node::get_node_or_null(const NodePath path) const {
    return (Node*)rebel_icall_object_nodepath(
        method_bindings.mb_get_node_or_null,
        (const Object*)this,
        path
    );
}

Node* Node::get_owner() const {
    return (Node*)rebel_icall_object(
        method_bindings.mb_get_owner,
        (const Object*)this
    );
}

Node* Node::get_parent() const {
    return (Node*)rebel_icall_object(
        method_bindings.mb_get_parent,
        (const Object*)this
    );
}

NodePath Node::get_path() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_path,
        (const Object*)this
    );
}

NodePath Node::get_path_to(const Node* node) const {
    return rebel_icall_nodepath_object(
        method_bindings.mb_get_path_to,
        (const Object*)this,
        node
    );
}

Node::PauseMode Node::get_pause_mode() const {
    return (Node::PauseMode)rebel_icall_int(
        method_bindings.mb_get_pause_mode,
        (const Object*)this
    );
}

real_t Node::get_physics_process_delta_time() const {
    return rebel_icall_float(
        method_bindings.mb_get_physics_process_delta_time,
        (const Object*)this
    );
}

int64_t Node::get_position_in_parent() const {
    return rebel_icall_int(
        method_bindings.mb_get_position_in_parent,
        (const Object*)this
    );
}

real_t Node::get_process_delta_time() const {
    return rebel_icall_float(
        method_bindings.mb_get_process_delta_time,
        (const Object*)this
    );
}

int64_t Node::get_process_priority() const {
    return rebel_icall_int(
        method_bindings.mb_get_process_priority,
        (const Object*)this
    );
}

bool Node::get_scene_instance_load_placeholder() const {
    return rebel_icall_bool(
        method_bindings.mb_get_scene_instance_load_placeholder,
        (const Object*)this
    );
}

SceneTree* Node::get_tree() const {
    return (SceneTree*)rebel_icall_object(
        method_bindings.mb_get_tree,
        (const Object*)this
    );
}

Viewport* Node::get_viewport() const {
    return (Viewport*)rebel_icall_object(
        method_bindings.mb_get_viewport,
        (const Object*)this
    );
}

bool Node::has_node(const NodePath path) const {
    return rebel_icall_bool_nodepath(
        method_bindings.mb_has_node,
        (const Object*)this,
        path
    );
}

bool Node::has_node_and_resource(const NodePath path) const {
    return rebel_icall_bool_nodepath(
        method_bindings.mb_has_node_and_resource,
        (const Object*)this,
        path
    );
}

bool Node::is_a_parent_of(const Node* node) const {
    return rebel_icall_bool_object(
        method_bindings.mb_is_a_parent_of,
        (const Object*)this,
        node
    );
}

bool Node::is_displayed_folded() const {
    return rebel_icall_bool(
        method_bindings.mb_is_displayed_folded,
        (const Object*)this
    );
}

bool Node::is_greater_than(const Node* node) const {
    return rebel_icall_bool_object(
        method_bindings.mb_is_greater_than,
        (const Object*)this,
        node
    );
}

bool Node::is_in_group(const String group) const {
    return rebel_icall_bool_string(
        method_bindings.mb_is_in_group,
        (const Object*)this,
        group
    );
}

bool Node::is_inside_tree() const {
    return rebel_icall_bool(
        method_bindings.mb_is_inside_tree,
        (const Object*)this
    );
}

bool Node::is_network_master() const {
    return rebel_icall_bool(
        method_bindings.mb_is_network_master,
        (const Object*)this
    );
}

bool Node::is_physics_processing() const {
    return rebel_icall_bool(
        method_bindings.mb_is_physics_processing,
        (const Object*)this
    );
}

bool Node::is_physics_processing_internal() const {
    return rebel_icall_bool(
        method_bindings.mb_is_physics_processing_internal,
        (const Object*)this
    );
}

bool Node::is_processing() const {
    return rebel_icall_bool(
        method_bindings.mb_is_processing,
        (const Object*)this
    );
}

bool Node::is_processing_input() const {
    return rebel_icall_bool(
        method_bindings.mb_is_processing_input,
        (const Object*)this
    );
}

bool Node::is_processing_internal() const {
    return rebel_icall_bool(
        method_bindings.mb_is_processing_internal,
        (const Object*)this
    );
}

bool Node::is_processing_unhandled_input() const {
    return rebel_icall_bool(
        method_bindings.mb_is_processing_unhandled_input,
        (const Object*)this
    );
}

bool Node::is_processing_unhandled_key_input() const {
    return rebel_icall_bool(
        method_bindings.mb_is_processing_unhandled_key_input,
        (const Object*)this
    );
}

void Node::move_child(const Node* child_node, const int64_t to_position) {
    rebel_icall_void_object_int(
        method_bindings.mb_move_child,
        (const Object*)this,
        child_node,
        to_position
    );
}

void Node::print_stray_nodes() {
    rebel_icall_void(
        method_bindings.mb_print_stray_nodes,
        (const Object*)this
    );
}

void Node::print_tree() {
    rebel_icall_void(
        method_bindings.mb_print_tree,
        (const Object*)this
    );
}

void Node::print_tree_pretty() {
    rebel_icall_void(
        method_bindings.mb_print_tree_pretty,
        (const Object*)this
    );
}

void Node::propagate_call(const String method, const Array args, const bool parent_first) {
    rebel_icall_void_string_array_bool(
        method_bindings.mb_propagate_call,
        (const Object*)this,
        method,
        args,
        parent_first
    );
}

void Node::propagate_notification(const int64_t what) {
    rebel_icall_void_int(
        method_bindings.mb_propagate_notification,
        (const Object*)this,
        what
    );
}

void Node::queue_free() {
    rebel_icall_void(
        method_bindings.mb_queue_free,
        (const Object*)this
    );
}

void Node::raise() {
    rebel_icall_void(
        method_bindings.mb_raise,
        (const Object*)this
    );
}

void Node::remove_and_skip() {
    rebel_icall_void(
        method_bindings.mb_remove_and_skip,
        (const Object*)this
    );
}

void Node::remove_child(const Node* node) {
    rebel_icall_void_object(
        method_bindings.mb_remove_child,
        (const Object*)this,
        node
    );
}

void Node::remove_from_group(const String group) {
    rebel_icall_void_string(
        method_bindings.mb_remove_from_group,
        (const Object*)this,
        group
    );
}

void Node::replace_by(const Node* node, const bool keep_data) {
    rebel_icall_void_object_bool(
        method_bindings.mb_replace_by,
        (const Object*)this,
        node,
        keep_data
    );
}

void Node::request_ready() {
    rebel_icall_void(
        method_bindings.mb_request_ready,
        (const Object*)this
    );
}

Variant Node::rpc(const String method, const Array& args) {
    size_t arg_count = 1 + args.size();
    Variant arg_values[1];
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[0]);
    arg_values[0] = method;

    rebel_variant** var_args =
        (rebel_variant**)alloca(sizeof(rebel_variant*) * arg_count);
    var_args[0] = (rebel_variant*) &arg_values[0];
    for (int i = 0; i < args.size(); i++) {
        var_args[1 + i] = (rebel_variant*) &((Array&) args)[i];
    }

    Variant result;
    *(rebel_variant*) &result = api->rebel_method_bind_call(
        method_bindings.mb_rpc,
        ((const Object *)this)->owner,
        (const rebel_variant**) var_args,
        arg_count,
        nullptr
    );

    api->rebel_variant_destroy((rebel_variant *) &var_args[0]);
    return result;
}

void Node::rpc_config(const String method, const int64_t mode) {
    rebel_icall_void_string_int(
        method_bindings.mb_rpc_config,
        (const Object*)this,
        method,
        mode
    );
}

Variant Node::rpc_id(const int64_t peer_id, const String method, const Array& args) {
    size_t arg_count = 2 + args.size();
    Variant arg_values[2];
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[0]);
    arg_values[0] = peer_id;
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[1]);
    arg_values[1] = method;

    rebel_variant** var_args =
        (rebel_variant**)alloca(sizeof(rebel_variant*) * arg_count);
    var_args[0] = (rebel_variant*) &arg_values[0];
    var_args[1] = (rebel_variant*) &arg_values[1];
    for (int i = 0; i < args.size(); i++) {
        var_args[2 + i] = (rebel_variant*) &((Array&) args)[i];
    }

    Variant result;
    *(rebel_variant*) &result = api->rebel_method_bind_call(
        method_bindings.mb_rpc_id,
        ((const Object *)this)->owner,
        (const rebel_variant**) var_args,
        arg_count,
        nullptr
    );

    api->rebel_variant_destroy((rebel_variant *) &var_args[0]);
    api->rebel_variant_destroy((rebel_variant *) &var_args[1]);
    return result;
}

Variant Node::rpc_unreliable(const String method, const Array& args) {
    size_t arg_count = 1 + args.size();
    Variant arg_values[1];
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[0]);
    arg_values[0] = method;

    rebel_variant** var_args =
        (rebel_variant**)alloca(sizeof(rebel_variant*) * arg_count);
    var_args[0] = (rebel_variant*) &arg_values[0];
    for (int i = 0; i < args.size(); i++) {
        var_args[1 + i] = (rebel_variant*) &((Array&) args)[i];
    }

    Variant result;
    *(rebel_variant*) &result = api->rebel_method_bind_call(
        method_bindings.mb_rpc_unreliable,
        ((const Object *)this)->owner,
        (const rebel_variant**) var_args,
        arg_count,
        nullptr
    );

    api->rebel_variant_destroy((rebel_variant *) &var_args[0]);
    return result;
}

Variant Node::rpc_unreliable_id(const int64_t peer_id, const String method, const Array& args) {
    size_t arg_count = 2 + args.size();
    Variant arg_values[2];
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[0]);
    arg_values[0] = peer_id;
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[1]);
    arg_values[1] = method;

    rebel_variant** var_args =
        (rebel_variant**)alloca(sizeof(rebel_variant*) * arg_count);
    var_args[0] = (rebel_variant*) &arg_values[0];
    var_args[1] = (rebel_variant*) &arg_values[1];
    for (int i = 0; i < args.size(); i++) {
        var_args[2 + i] = (rebel_variant*) &((Array&) args)[i];
    }

    Variant result;
    *(rebel_variant*) &result = api->rebel_method_bind_call(
        method_bindings.mb_rpc_unreliable_id,
        ((const Object *)this)->owner,
        (const rebel_variant**) var_args,
        arg_count,
        nullptr
    );

    api->rebel_variant_destroy((rebel_variant *) &var_args[0]);
    api->rebel_variant_destroy((rebel_variant *) &var_args[1]);
    return result;
}

void Node::rset(const String property, const Variant value) {
    rebel_icall_void_string_variant(
        method_bindings.mb_rset,
        (const Object*)this,
        property,
        value
    );
}

void Node::rset_config(const String property, const int64_t mode) {
    rebel_icall_void_string_int(
        method_bindings.mb_rset_config,
        (const Object*)this,
        property,
        mode
    );
}

void Node::rset_id(const int64_t peer_id, const String property, const Variant value) {
    rebel_icall_void_int_string_variant(
        method_bindings.mb_rset_id,
        (const Object*)this,
        peer_id,
        property,
        value
    );
}

void Node::rset_unreliable(const String property, const Variant value) {
    rebel_icall_void_string_variant(
        method_bindings.mb_rset_unreliable,
        (const Object*)this,
        property,
        value
    );
}

void Node::rset_unreliable_id(const int64_t peer_id, const String property, const Variant value) {
    rebel_icall_void_int_string_variant(
        method_bindings.mb_rset_unreliable_id,
        (const Object*)this,
        peer_id,
        property,
        value
    );
}

void Node::set_custom_multiplayer(const Ref<MultiplayerAPI> api) {
    rebel_icall_void_object(
        method_bindings.mb_set_custom_multiplayer,
        (const Object*)this,
        api.ptr()
    );
}

void Node::set_display_folded(const bool fold) {
    rebel_icall_void_bool(
        method_bindings.mb_set_display_folded,
        (const Object*)this,
        fold
    );
}

void Node::set_filename(const String filename) {
    rebel_icall_void_string(
        method_bindings.mb_set_filename,
        (const Object*)this,
        filename
    );
}

void Node::set_name(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_name,
        (const Object*)this,
        name
    );
}

void Node::set_network_master(const int64_t id, const bool recursive) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_network_master,
        (const Object*)this,
        id,
        recursive
    );
}

void Node::set_owner(const Node* owner) {
    rebel_icall_void_object(
        method_bindings.mb_set_owner,
        (const Object*)this,
        owner
    );
}

void Node::set_pause_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_pause_mode,
        (const Object*)this,
        mode
    );
}

void Node::set_physics_process(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_physics_process,
        (const Object*)this,
        enable
    );
}

void Node::set_physics_process_internal(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_physics_process_internal,
        (const Object*)this,
        enable
    );
}

void Node::set_process(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_process,
        (const Object*)this,
        enable
    );
}

void Node::set_process_input(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_process_input,
        (const Object*)this,
        enable
    );
}

void Node::set_process_internal(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_process_internal,
        (const Object*)this,
        enable
    );
}

void Node::set_process_priority(const int64_t priority) {
    rebel_icall_void_int(
        method_bindings.mb_set_process_priority,
        (const Object*)this,
        priority
    );
}

void Node::set_process_unhandled_input(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_process_unhandled_input,
        (const Object*)this,
        enable
    );
}

void Node::set_process_unhandled_key_input(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_process_unhandled_key_input,
        (const Object*)this,
        enable
    );
}

void Node::set_scene_instance_load_placeholder(const bool load_placeholder) {
    rebel_icall_void_bool(
        method_bindings.mb_set_scene_instance_load_placeholder,
        (const Object*)this,
        load_placeholder
    );
}

void Node::update_configuration_warning() {
    rebel_icall_void(
        method_bindings.mb_update_configuration_warning,
        (const Object*)this
    );
}

Node* Node::create() {
    return (Node*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Node")()
         );
}

void Node::init_method_bindings() {
    method_bindings.mb__enter_tree =
        api->rebel_method_bind_get_method(
            "Node",
            "_enter_tree"
        );
    method_bindings.mb__exit_tree =
        api->rebel_method_bind_get_method(
            "Node",
            "_exit_tree"
        );
    method_bindings.mb__get_configuration_warning =
        api->rebel_method_bind_get_method(
            "Node",
            "_get_configuration_warning"
        );
    method_bindings.mb__get_editor_description =
        api->rebel_method_bind_get_method(
            "Node",
            "_get_editor_description"
        );
    method_bindings.mb__get_import_path =
        api->rebel_method_bind_get_method(
            "Node",
            "_get_import_path"
        );
    method_bindings.mb__input =
        api->rebel_method_bind_get_method(
            "Node",
            "_input"
        );
    method_bindings.mb__physics_process =
        api->rebel_method_bind_get_method(
            "Node",
            "_physics_process"
        );
    method_bindings.mb__process =
        api->rebel_method_bind_get_method(
            "Node",
            "_process"
        );
    method_bindings.mb__ready =
        api->rebel_method_bind_get_method(
            "Node",
            "_ready"
        );
    method_bindings.mb__set_editor_description =
        api->rebel_method_bind_get_method(
            "Node",
            "_set_editor_description"
        );
    method_bindings.mb__set_import_path =
        api->rebel_method_bind_get_method(
            "Node",
            "_set_import_path"
        );
    method_bindings.mb__unhandled_input =
        api->rebel_method_bind_get_method(
            "Node",
            "_unhandled_input"
        );
    method_bindings.mb__unhandled_key_input =
        api->rebel_method_bind_get_method(
            "Node",
            "_unhandled_key_input"
        );
    method_bindings.mb_add_child =
        api->rebel_method_bind_get_method(
            "Node",
            "add_child"
        );
    method_bindings.mb_add_child_below_node =
        api->rebel_method_bind_get_method(
            "Node",
            "add_child_below_node"
        );
    method_bindings.mb_add_to_group =
        api->rebel_method_bind_get_method(
            "Node",
            "add_to_group"
        );
    method_bindings.mb_can_process =
        api->rebel_method_bind_get_method(
            "Node",
            "can_process"
        );
    method_bindings.mb_duplicate =
        api->rebel_method_bind_get_method(
            "Node",
            "duplicate"
        );
    method_bindings.mb_find_node =
        api->rebel_method_bind_get_method(
            "Node",
            "find_node"
        );
    method_bindings.mb_find_parent =
        api->rebel_method_bind_get_method(
            "Node",
            "find_parent"
        );
    method_bindings.mb_get_child =
        api->rebel_method_bind_get_method(
            "Node",
            "get_child"
        );
    method_bindings.mb_get_child_count =
        api->rebel_method_bind_get_method(
            "Node",
            "get_child_count"
        );
    method_bindings.mb_get_children =
        api->rebel_method_bind_get_method(
            "Node",
            "get_children"
        );
    method_bindings.mb_get_custom_multiplayer =
        api->rebel_method_bind_get_method(
            "Node",
            "get_custom_multiplayer"
        );
    method_bindings.mb_get_filename =
        api->rebel_method_bind_get_method(
            "Node",
            "get_filename"
        );
    method_bindings.mb_get_groups =
        api->rebel_method_bind_get_method(
            "Node",
            "get_groups"
        );
    method_bindings.mb_get_index =
        api->rebel_method_bind_get_method(
            "Node",
            "get_index"
        );
    method_bindings.mb_get_multiplayer =
        api->rebel_method_bind_get_method(
            "Node",
            "get_multiplayer"
        );
    method_bindings.mb_get_name =
        api->rebel_method_bind_get_method(
            "Node",
            "get_name"
        );
    method_bindings.mb_get_network_master =
        api->rebel_method_bind_get_method(
            "Node",
            "get_network_master"
        );
    method_bindings.mb_get_node_internal =
        api->rebel_method_bind_get_method(
            "Node",
            "get_node"
        );
    method_bindings.mb_get_node_and_resource =
        api->rebel_method_bind_get_method(
            "Node",
            "get_node_and_resource"
        );
    method_bindings.mb_get_node_or_null =
        api->rebel_method_bind_get_method(
            "Node",
            "get_node_or_null"
        );
    method_bindings.mb_get_owner =
        api->rebel_method_bind_get_method(
            "Node",
            "get_owner"
        );
    method_bindings.mb_get_parent =
        api->rebel_method_bind_get_method(
            "Node",
            "get_parent"
        );
    method_bindings.mb_get_path =
        api->rebel_method_bind_get_method(
            "Node",
            "get_path"
        );
    method_bindings.mb_get_path_to =
        api->rebel_method_bind_get_method(
            "Node",
            "get_path_to"
        );
    method_bindings.mb_get_pause_mode =
        api->rebel_method_bind_get_method(
            "Node",
            "get_pause_mode"
        );
    method_bindings.mb_get_physics_process_delta_time =
        api->rebel_method_bind_get_method(
            "Node",
            "get_physics_process_delta_time"
        );
    method_bindings.mb_get_position_in_parent =
        api->rebel_method_bind_get_method(
            "Node",
            "get_position_in_parent"
        );
    method_bindings.mb_get_process_delta_time =
        api->rebel_method_bind_get_method(
            "Node",
            "get_process_delta_time"
        );
    method_bindings.mb_get_process_priority =
        api->rebel_method_bind_get_method(
            "Node",
            "get_process_priority"
        );
    method_bindings.mb_get_scene_instance_load_placeholder =
        api->rebel_method_bind_get_method(
            "Node",
            "get_scene_instance_load_placeholder"
        );
    method_bindings.mb_get_tree =
        api->rebel_method_bind_get_method(
            "Node",
            "get_tree"
        );
    method_bindings.mb_get_viewport =
        api->rebel_method_bind_get_method(
            "Node",
            "get_viewport"
        );
    method_bindings.mb_has_node =
        api->rebel_method_bind_get_method(
            "Node",
            "has_node"
        );
    method_bindings.mb_has_node_and_resource =
        api->rebel_method_bind_get_method(
            "Node",
            "has_node_and_resource"
        );
    method_bindings.mb_is_a_parent_of =
        api->rebel_method_bind_get_method(
            "Node",
            "is_a_parent_of"
        );
    method_bindings.mb_is_displayed_folded =
        api->rebel_method_bind_get_method(
            "Node",
            "is_displayed_folded"
        );
    method_bindings.mb_is_greater_than =
        api->rebel_method_bind_get_method(
            "Node",
            "is_greater_than"
        );
    method_bindings.mb_is_in_group =
        api->rebel_method_bind_get_method(
            "Node",
            "is_in_group"
        );
    method_bindings.mb_is_inside_tree =
        api->rebel_method_bind_get_method(
            "Node",
            "is_inside_tree"
        );
    method_bindings.mb_is_network_master =
        api->rebel_method_bind_get_method(
            "Node",
            "is_network_master"
        );
    method_bindings.mb_is_physics_processing =
        api->rebel_method_bind_get_method(
            "Node",
            "is_physics_processing"
        );
    method_bindings.mb_is_physics_processing_internal =
        api->rebel_method_bind_get_method(
            "Node",
            "is_physics_processing_internal"
        );
    method_bindings.mb_is_processing =
        api->rebel_method_bind_get_method(
            "Node",
            "is_processing"
        );
    method_bindings.mb_is_processing_input =
        api->rebel_method_bind_get_method(
            "Node",
            "is_processing_input"
        );
    method_bindings.mb_is_processing_internal =
        api->rebel_method_bind_get_method(
            "Node",
            "is_processing_internal"
        );
    method_bindings.mb_is_processing_unhandled_input =
        api->rebel_method_bind_get_method(
            "Node",
            "is_processing_unhandled_input"
        );
    method_bindings.mb_is_processing_unhandled_key_input =
        api->rebel_method_bind_get_method(
            "Node",
            "is_processing_unhandled_key_input"
        );
    method_bindings.mb_move_child =
        api->rebel_method_bind_get_method(
            "Node",
            "move_child"
        );
    method_bindings.mb_print_stray_nodes =
        api->rebel_method_bind_get_method(
            "Node",
            "print_stray_nodes"
        );
    method_bindings.mb_print_tree =
        api->rebel_method_bind_get_method(
            "Node",
            "print_tree"
        );
    method_bindings.mb_print_tree_pretty =
        api->rebel_method_bind_get_method(
            "Node",
            "print_tree_pretty"
        );
    method_bindings.mb_propagate_call =
        api->rebel_method_bind_get_method(
            "Node",
            "propagate_call"
        );
    method_bindings.mb_propagate_notification =
        api->rebel_method_bind_get_method(
            "Node",
            "propagate_notification"
        );
    method_bindings.mb_queue_free =
        api->rebel_method_bind_get_method(
            "Node",
            "queue_free"
        );
    method_bindings.mb_raise =
        api->rebel_method_bind_get_method(
            "Node",
            "raise"
        );
    method_bindings.mb_remove_and_skip =
        api->rebel_method_bind_get_method(
            "Node",
            "remove_and_skip"
        );
    method_bindings.mb_remove_child =
        api->rebel_method_bind_get_method(
            "Node",
            "remove_child"
        );
    method_bindings.mb_remove_from_group =
        api->rebel_method_bind_get_method(
            "Node",
            "remove_from_group"
        );
    method_bindings.mb_replace_by =
        api->rebel_method_bind_get_method(
            "Node",
            "replace_by"
        );
    method_bindings.mb_request_ready =
        api->rebel_method_bind_get_method(
            "Node",
            "request_ready"
        );
    method_bindings.mb_rpc =
        api->rebel_method_bind_get_method(
            "Node",
            "rpc"
        );
    method_bindings.mb_rpc_config =
        api->rebel_method_bind_get_method(
            "Node",
            "rpc_config"
        );
    method_bindings.mb_rpc_id =
        api->rebel_method_bind_get_method(
            "Node",
            "rpc_id"
        );
    method_bindings.mb_rpc_unreliable =
        api->rebel_method_bind_get_method(
            "Node",
            "rpc_unreliable"
        );
    method_bindings.mb_rpc_unreliable_id =
        api->rebel_method_bind_get_method(
            "Node",
            "rpc_unreliable_id"
        );
    method_bindings.mb_rset =
        api->rebel_method_bind_get_method(
            "Node",
            "rset"
        );
    method_bindings.mb_rset_config =
        api->rebel_method_bind_get_method(
            "Node",
            "rset_config"
        );
    method_bindings.mb_rset_id =
        api->rebel_method_bind_get_method(
            "Node",
            "rset_id"
        );
    method_bindings.mb_rset_unreliable =
        api->rebel_method_bind_get_method(
            "Node",
            "rset_unreliable"
        );
    method_bindings.mb_rset_unreliable_id =
        api->rebel_method_bind_get_method(
            "Node",
            "rset_unreliable_id"
        );
    method_bindings.mb_set_custom_multiplayer =
        api->rebel_method_bind_get_method(
            "Node",
            "set_custom_multiplayer"
        );
    method_bindings.mb_set_display_folded =
        api->rebel_method_bind_get_method(
            "Node",
            "set_display_folded"
        );
    method_bindings.mb_set_filename =
        api->rebel_method_bind_get_method(
            "Node",
            "set_filename"
        );
    method_bindings.mb_set_name =
        api->rebel_method_bind_get_method(
            "Node",
            "set_name"
        );
    method_bindings.mb_set_network_master =
        api->rebel_method_bind_get_method(
            "Node",
            "set_network_master"
        );
    method_bindings.mb_set_owner =
        api->rebel_method_bind_get_method(
            "Node",
            "set_owner"
        );
    method_bindings.mb_set_pause_mode =
        api->rebel_method_bind_get_method(
            "Node",
            "set_pause_mode"
        );
    method_bindings.mb_set_physics_process =
        api->rebel_method_bind_get_method(
            "Node",
            "set_physics_process"
        );
    method_bindings.mb_set_physics_process_internal =
        api->rebel_method_bind_get_method(
            "Node",
            "set_physics_process_internal"
        );
    method_bindings.mb_set_process =
        api->rebel_method_bind_get_method(
            "Node",
            "set_process"
        );
    method_bindings.mb_set_process_input =
        api->rebel_method_bind_get_method(
            "Node",
            "set_process_input"
        );
    method_bindings.mb_set_process_internal =
        api->rebel_method_bind_get_method(
            "Node",
            "set_process_internal"
        );
    method_bindings.mb_set_process_priority =
        api->rebel_method_bind_get_method(
            "Node",
            "set_process_priority"
        );
    method_bindings.mb_set_process_unhandled_input =
        api->rebel_method_bind_get_method(
            "Node",
            "set_process_unhandled_input"
        );
    method_bindings.mb_set_process_unhandled_key_input =
        api->rebel_method_bind_get_method(
            "Node",
            "set_process_unhandled_key_input"
        );
    method_bindings.mb_set_scene_instance_load_placeholder =
        api->rebel_method_bind_get_method(
            "Node",
            "set_scene_instance_load_placeholder"
        );
    method_bindings.mb_update_configuration_warning =
        api->rebel_method_bind_get_method(
            "Node",
            "update_configuration_warning"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Node");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Node::MethodBindings Node::method_bindings = {};
void* Node::class_tag = nullptr;
} // namespace Rebel
