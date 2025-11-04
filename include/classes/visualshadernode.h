// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSHADERNODE_H
#define REBEL_VISUALSHADERNODE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualShaderNode : public Resource {
public:
    enum PortType {
        PORT_TYPE_SCALAR = 0,
        PORT_TYPE_VECTOR = 1,
        PORT_TYPE_BOOLEAN = 2,
        PORT_TYPE_TRANSFORM = 3,
        PORT_TYPE_SAMPLER = 4,
        PORT_TYPE_MAX = 5,
    };

    Array get_default_input_values() const;
    Variant get_input_port_default_value(const int64_t port) const;
    int64_t get_output_port_for_preview() const;
    void set_default_input_values(const Array values);
    void set_input_port_default_value(const int64_t port, const Variant value);
    void set_output_port_for_preview(const int64_t port);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualShaderNode";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualShaderNode";
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
        rebel_method_bind* mb_get_default_input_values;
        rebel_method_bind* mb_get_input_port_default_value;
        rebel_method_bind* mb_get_output_port_for_preview;
        rebel_method_bind* mb_set_default_input_values;
        rebel_method_bind* mb_set_input_port_default_value;
        rebel_method_bind* mb_set_output_port_for_preview;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSHADERNODE_H
