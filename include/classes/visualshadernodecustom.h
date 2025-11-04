// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSHADERNODECUSTOM_H
#define REBEL_VISUALSHADERNODECUSTOM_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualshadernode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualShaderNodeCustom : public VisualShaderNode {
public:
    String _get_category();
    String _get_code(const Array input_vars, const Array output_vars, const int64_t mode, const int64_t type);
    String _get_description();
    String _get_global_code(const int64_t mode);
    int64_t _get_input_port_count();
    String _get_input_port_name(const int64_t port);
    int64_t _get_input_port_type(const int64_t port);
    String _get_name();
    int64_t _get_output_port_count();
    String _get_output_port_name(const int64_t port);
    int64_t _get_output_port_type(const int64_t port);
    int64_t _get_return_icon_type();
    String _get_subcategory();
    bool _is_initialized();
    void _set_initialized(const bool enabled);
    void _set_input_port_default_value(const int64_t port, const Variant value);

    static VisualShaderNodeCustom* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualShaderNodeCustom";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualShaderNodeCustom";
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
        rebel_method_bind* mb__get_category;
        rebel_method_bind* mb__get_code;
        rebel_method_bind* mb__get_description;
        rebel_method_bind* mb__get_global_code;
        rebel_method_bind* mb__get_input_port_count;
        rebel_method_bind* mb__get_input_port_name;
        rebel_method_bind* mb__get_input_port_type;
        rebel_method_bind* mb__get_name;
        rebel_method_bind* mb__get_output_port_count;
        rebel_method_bind* mb__get_output_port_name;
        rebel_method_bind* mb__get_output_port_type;
        rebel_method_bind* mb__get_return_icon_type;
        rebel_method_bind* mb__get_subcategory;
        rebel_method_bind* mb__is_initialized;
        rebel_method_bind* mb__set_initialized;
        rebel_method_bind* mb__set_input_port_default_value;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSHADERNODECUSTOM_H
