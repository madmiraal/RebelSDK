// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSCRIPT_H
#define REBEL_VISUALSCRIPT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/script.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualScriptNode;

class VisualScript : public Script {
public:
    Dictionary _get_data() const;
    void _node_ports_changed(const int64_t arg0);
    void _set_data(const Dictionary data);
    void add_custom_signal(const String name);
    void add_function(const String name);
    void add_node(const String func, const int64_t id, const Ref<VisualScriptNode> node, const Vector2 position = Vector2(0, 0));
    void add_variable(const String name, const Variant default_value = Variant(), const bool _export = false);
    void custom_signal_add_argument(const String name, const int64_t type, const String argname, const int64_t index = -1);
    int64_t custom_signal_get_argument_count(const String name) const;
    String custom_signal_get_argument_name(const String name, const int64_t argidx) const;
    Variant::Type custom_signal_get_argument_type(const String name, const int64_t argidx) const;
    void custom_signal_remove_argument(const String name, const int64_t argidx);
    void custom_signal_set_argument_name(const String name, const int64_t argidx, const String argname);
    void custom_signal_set_argument_type(const String name, const int64_t argidx, const int64_t type);
    void custom_signal_swap_argument(const String name, const int64_t argidx, const int64_t withidx);
    void data_connect(const String func, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port);
    void data_disconnect(const String func, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port);
    int64_t get_function_node_id(const String name) const;
    Vector2 get_function_scroll(const String name) const;
    Ref<VisualScriptNode> get_node(const String func, const int64_t id) const;
    Vector2 get_node_position(const String func, const int64_t id) const;
    Variant get_variable_default_value(const String name) const;
    bool get_variable_export(const String name) const;
    Dictionary get_variable_info(const String name) const;
    bool has_custom_signal(const String name) const;
    bool has_data_connection(const String func, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) const;
    bool has_function(const String name) const;
    bool has_node(const String func, const int64_t id) const;
    bool has_sequence_connection(const String func, const int64_t from_node, const int64_t from_output, const int64_t to_node) const;
    bool has_variable(const String name) const;
    void remove_custom_signal(const String name);
    void remove_function(const String name);
    void remove_node(const String func, const int64_t id);
    void remove_variable(const String name);
    void rename_custom_signal(const String name, const String new_name);
    void rename_function(const String name, const String new_name);
    void rename_variable(const String name, const String new_name);
    void sequence_connect(const String func, const int64_t from_node, const int64_t from_output, const int64_t to_node);
    void sequence_disconnect(const String func, const int64_t from_node, const int64_t from_output, const int64_t to_node);
    void set_function_scroll(const String name, const Vector2 ofs);
    void set_instance_base_type(const String type);
    void set_node_position(const String func, const int64_t id, const Vector2 position);
    void set_variable_default_value(const String name, const Variant value);
    void set_variable_export(const String name, const bool enable);
    void set_variable_info(const String name, const Dictionary value);

    static VisualScript* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualScript";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualScript";
    }

    inline static Object* from_variant(Variant variant) {
        rebel_object* object = (rebel_object*)variant;
        if (!object) {
            return nullptr;
        }
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                object
            );
    }

private:
    struct MethodBindings {
        rebel_method_bind* mb__get_data;
        rebel_method_bind* mb__node_ports_changed;
        rebel_method_bind* mb__set_data;
        rebel_method_bind* mb_add_custom_signal;
        rebel_method_bind* mb_add_function;
        rebel_method_bind* mb_add_node;
        rebel_method_bind* mb_add_variable;
        rebel_method_bind* mb_custom_signal_add_argument;
        rebel_method_bind* mb_custom_signal_get_argument_count;
        rebel_method_bind* mb_custom_signal_get_argument_name;
        rebel_method_bind* mb_custom_signal_get_argument_type;
        rebel_method_bind* mb_custom_signal_remove_argument;
        rebel_method_bind* mb_custom_signal_set_argument_name;
        rebel_method_bind* mb_custom_signal_set_argument_type;
        rebel_method_bind* mb_custom_signal_swap_argument;
        rebel_method_bind* mb_data_connect;
        rebel_method_bind* mb_data_disconnect;
        rebel_method_bind* mb_get_function_node_id;
        rebel_method_bind* mb_get_function_scroll;
        rebel_method_bind* mb_get_node;
        rebel_method_bind* mb_get_node_position;
        rebel_method_bind* mb_get_variable_default_value;
        rebel_method_bind* mb_get_variable_export;
        rebel_method_bind* mb_get_variable_info;
        rebel_method_bind* mb_has_custom_signal;
        rebel_method_bind* mb_has_data_connection;
        rebel_method_bind* mb_has_function;
        rebel_method_bind* mb_has_node;
        rebel_method_bind* mb_has_sequence_connection;
        rebel_method_bind* mb_has_variable;
        rebel_method_bind* mb_remove_custom_signal;
        rebel_method_bind* mb_remove_function;
        rebel_method_bind* mb_remove_node;
        rebel_method_bind* mb_remove_variable;
        rebel_method_bind* mb_rename_custom_signal;
        rebel_method_bind* mb_rename_function;
        rebel_method_bind* mb_rename_variable;
        rebel_method_bind* mb_sequence_connect;
        rebel_method_bind* mb_sequence_disconnect;
        rebel_method_bind* mb_set_function_scroll;
        rebel_method_bind* mb_set_instance_base_type;
        rebel_method_bind* mb_set_node_position;
        rebel_method_bind* mb_set_variable_default_value;
        rebel_method_bind* mb_set_variable_export;
        rebel_method_bind* mb_set_variable_info;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSCRIPT_H
