// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSCRIPTLISTS_H
#define REBEL_VISUALSCRIPTLISTS_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualscriptnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualScriptLists : public VisualScriptNode {
public:
    void add_input_data_port(const int64_t type, const String name, const int64_t index);
    void add_output_data_port(const int64_t type, const String name, const int64_t index);
    void remove_input_data_port(const int64_t index);
    void remove_output_data_port(const int64_t index);
    void set_input_data_port_name(const int64_t index, const String name);
    void set_input_data_port_type(const int64_t index, const int64_t type);
    void set_output_data_port_name(const int64_t index, const String name);
    void set_output_data_port_type(const int64_t index, const int64_t type);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualScriptLists";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualScriptLists";
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
        rebel_method_bind* mb_add_input_data_port;
        rebel_method_bind* mb_add_output_data_port;
        rebel_method_bind* mb_remove_input_data_port;
        rebel_method_bind* mb_remove_output_data_port;
        rebel_method_bind* mb_set_input_data_port_name;
        rebel_method_bind* mb_set_input_data_port_type;
        rebel_method_bind* mb_set_output_data_port_name;
        rebel_method_bind* mb_set_output_data_port_type;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSCRIPTLISTS_H
