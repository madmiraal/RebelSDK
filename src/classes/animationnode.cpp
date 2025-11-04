// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animationnode.h"

#include "classes/animationnode.h"
#include "classes/icalls.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array AnimationNode::_get_filters() const {
    return rebel_icall_array(
        method_bindings.mb__get_filters,
        (const Object*)this
    );
}

void AnimationNode::_set_filters(const Array filters) {
    rebel_icall_void_array(
        method_bindings.mb__set_filters,
        (const Object*)this,
        filters
    );
}

void AnimationNode::add_input(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_add_input,
        (const Object*)this,
        name
    );
}

void AnimationNode::blend_animation(const String animation, const real_t time, const real_t delta, const bool seeked, const real_t blend) {
    rebel_icall_void_string_float_float_bool_float(
        method_bindings.mb_blend_animation,
        (const Object*)this,
        animation,
        time,
        delta,
        seeked,
        blend
    );
}

real_t AnimationNode::blend_input(const int64_t input_index, const real_t time, const bool seek, const real_t blend, const int64_t filter, const bool optimize) {
    return rebel_icall_float_int_float_bool_float_int_bool(
        method_bindings.mb_blend_input,
        (const Object*)this,
        input_index,
        time,
        seek,
        blend,
        filter,
        optimize
    );
}

real_t AnimationNode::blend_node(const String name, const Ref<AnimationNode> node, const real_t time, const bool seek, const real_t blend, const int64_t filter, const bool optimize) {
    return rebel_icall_float_string_object_float_bool_float_int_bool(
        method_bindings.mb_blend_node,
        (const Object*)this,
        name,
        node.ptr(),
        time,
        seek,
        blend,
        filter,
        optimize
    );
}

String AnimationNode::get_caption() {
    return rebel_icall_string(
        method_bindings.mb_get_caption,
        (const Object*)this
    );
}

Object* AnimationNode::get_child_by_name(const String name) {
    return (Object*)rebel_icall_object_string(
        method_bindings.mb_get_child_by_name,
        (const Object*)this,
        name
    );
}

Dictionary AnimationNode::get_child_nodes() {
    return rebel_icall_dictionary(
        method_bindings.mb_get_child_nodes,
        (const Object*)this
    );
}

int64_t AnimationNode::get_input_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_input_count,
        (const Object*)this
    );
}

String AnimationNode::get_input_name(const int64_t input) {
    return rebel_icall_string_int(
        method_bindings.mb_get_input_name,
        (const Object*)this,
        input
    );
}

Variant AnimationNode::get_parameter(const String name) const {
    return rebel_icall_variant_string(
        method_bindings.mb_get_parameter,
        (const Object*)this,
        name
    );
}

Variant AnimationNode::get_parameter_default_value(const String name) {
    return rebel_icall_variant_string(
        method_bindings.mb_get_parameter_default_value,
        (const Object*)this,
        name
    );
}

Array AnimationNode::get_parameter_list() {
    return rebel_icall_array(
        method_bindings.mb_get_parameter_list,
        (const Object*)this
    );
}

String AnimationNode::has_filter() {
    return rebel_icall_string(
        method_bindings.mb_has_filter,
        (const Object*)this
    );
}

bool AnimationNode::is_filter_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_filter_enabled,
        (const Object*)this
    );
}

bool AnimationNode::is_path_filtered(const NodePath path) const {
    return rebel_icall_bool_nodepath(
        method_bindings.mb_is_path_filtered,
        (const Object*)this,
        path
    );
}

void AnimationNode::process(const real_t time, const bool seek) {
    rebel_icall_void_float_bool(
        method_bindings.mb_process,
        (const Object*)this,
        time,
        seek
    );
}

void AnimationNode::remove_input(const int64_t index) {
    rebel_icall_void_int(
        method_bindings.mb_remove_input,
        (const Object*)this,
        index
    );
}

void AnimationNode::set_filter_enabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_filter_enabled,
        (const Object*)this,
        enable
    );
}

void AnimationNode::set_filter_path(const NodePath path, const bool enable) {
    rebel_icall_void_nodepath_bool(
        method_bindings.mb_set_filter_path,
        (const Object*)this,
        path,
        enable
    );
}

void AnimationNode::set_parameter(const String name, const Variant value) {
    rebel_icall_void_string_variant(
        method_bindings.mb_set_parameter,
        (const Object*)this,
        name,
        value
    );
}

AnimationNode* AnimationNode::create() {
    return (AnimationNode*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AnimationNode")()
         );
}

void AnimationNode::init_method_bindings() {
    method_bindings.mb__get_filters =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "_get_filters"
        );
    method_bindings.mb__set_filters =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "_set_filters"
        );
    method_bindings.mb_add_input =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "add_input"
        );
    method_bindings.mb_blend_animation =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "blend_animation"
        );
    method_bindings.mb_blend_input =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "blend_input"
        );
    method_bindings.mb_blend_node =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "blend_node"
        );
    method_bindings.mb_get_caption =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "get_caption"
        );
    method_bindings.mb_get_child_by_name =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "get_child_by_name"
        );
    method_bindings.mb_get_child_nodes =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "get_child_nodes"
        );
    method_bindings.mb_get_input_count =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "get_input_count"
        );
    method_bindings.mb_get_input_name =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "get_input_name"
        );
    method_bindings.mb_get_parameter =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "get_parameter"
        );
    method_bindings.mb_get_parameter_default_value =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "get_parameter_default_value"
        );
    method_bindings.mb_get_parameter_list =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "get_parameter_list"
        );
    method_bindings.mb_has_filter =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "has_filter"
        );
    method_bindings.mb_is_filter_enabled =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "is_filter_enabled"
        );
    method_bindings.mb_is_path_filtered =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "is_path_filtered"
        );
    method_bindings.mb_process =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "process"
        );
    method_bindings.mb_remove_input =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "remove_input"
        );
    method_bindings.mb_set_filter_enabled =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "set_filter_enabled"
        );
    method_bindings.mb_set_filter_path =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "set_filter_path"
        );
    method_bindings.mb_set_parameter =
        api->rebel_method_bind_get_method(
            "AnimationNode",
            "set_parameter"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AnimationNode");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AnimationNode::MethodBindings AnimationNode::method_bindings = {};
void* AnimationNode::class_tag = nullptr;
} // namespace Rebel
