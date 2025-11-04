// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSHADERNODEGROUPBASE_H
#define REBEL_VISUALSHADERNODEGROUPBASE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualshadernode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualShaderNodeGroupBase : public VisualShaderNode {
public:
    void add_input_port(const int64_t id, const int64_t type, const String name);
    void add_output_port(const int64_t id, const int64_t type, const String name);
    void clear_input_ports();
    void clear_output_ports();
    int64_t get_free_input_port_id() const;
    int64_t get_free_output_port_id() const;
    int64_t get_input_port_count() const;
    String get_inputs() const;
    int64_t get_output_port_count() const;
    String get_outputs() const;
    Vector2 get_size() const;
    bool has_input_port(const int64_t id) const;
    bool has_output_port(const int64_t id) const;
    bool is_valid_port_name(const String name) const;
    void remove_input_port(const int64_t id);
    void remove_output_port(const int64_t id);
    void set_input_port_name(const int64_t id, const String name);
    void set_input_port_type(const int64_t id, const int64_t type);
    void set_inputs(const String inputs);
    void set_output_port_name(const int64_t id, const String name);
    void set_output_port_type(const int64_t id, const int64_t type);
    void set_outputs(const String outputs);
    void set_size(const Vector2 size);

    static VisualShaderNodeGroupBase* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualShaderNodeGroupBase";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualShaderNodeGroupBase";
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
        rebel_method_bind* mb_add_input_port;
        rebel_method_bind* mb_add_output_port;
        rebel_method_bind* mb_clear_input_ports;
        rebel_method_bind* mb_clear_output_ports;
        rebel_method_bind* mb_get_free_input_port_id;
        rebel_method_bind* mb_get_free_output_port_id;
        rebel_method_bind* mb_get_input_port_count;
        rebel_method_bind* mb_get_inputs;
        rebel_method_bind* mb_get_output_port_count;
        rebel_method_bind* mb_get_outputs;
        rebel_method_bind* mb_get_size;
        rebel_method_bind* mb_has_input_port;
        rebel_method_bind* mb_has_output_port;
        rebel_method_bind* mb_is_valid_port_name;
        rebel_method_bind* mb_remove_input_port;
        rebel_method_bind* mb_remove_output_port;
        rebel_method_bind* mb_set_input_port_name;
        rebel_method_bind* mb_set_input_port_type;
        rebel_method_bind* mb_set_inputs;
        rebel_method_bind* mb_set_output_port_name;
        rebel_method_bind* mb_set_output_port_type;
        rebel_method_bind* mb_set_outputs;
        rebel_method_bind* mb_set_size;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSHADERNODEGROUPBASE_H
