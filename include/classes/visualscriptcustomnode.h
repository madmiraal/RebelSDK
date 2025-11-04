// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSCRIPTCUSTOMNODE_H
#define REBEL_VISUALSCRIPTCUSTOMNODE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualscriptnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualScriptCustomNode : public VisualScriptNode {
public:
    enum StartMode {
        START_MODE_BEGIN_SEQUENCE = 0,
        START_MODE_CONTINUE_SEQUENCE = 1,
        START_MODE_RESUME_YIELD = 2,
    };

    static const int STEP_EXIT_FUNCTION_BIT = 134217728;
    static const int STEP_GO_BACK_BIT = 33554432;
    static const int STEP_NO_ADVANCE_BIT = 67108864;
    static const int STEP_PUSH_STACK_BIT = 16777216;
    static const int STEP_YIELD_BIT = 268435456;

    String _get_caption();
    String _get_category();
    int64_t _get_input_value_port_count();
    int64_t _get_input_value_port_hint(const int64_t idx);
    String _get_input_value_port_hint_string(const int64_t idx);
    String _get_input_value_port_name(const int64_t idx);
    int64_t _get_input_value_port_type(const int64_t idx);
    int64_t _get_output_sequence_port_count();
    String _get_output_sequence_port_text(const int64_t idx);
    int64_t _get_output_value_port_count();
    int64_t _get_output_value_port_hint(const int64_t idx);
    String _get_output_value_port_hint_string(const int64_t idx);
    String _get_output_value_port_name(const int64_t idx);
    int64_t _get_output_value_port_type(const int64_t idx);
    String _get_text();
    int64_t _get_working_memory_size();
    bool _has_input_sequence_port();
    void _script_changed();
    Variant _step(const Array inputs, const Array outputs, const int64_t start_mode, const Array working_mem);

    static VisualScriptCustomNode* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualScriptCustomNode";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualScriptCustomNode";
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
        rebel_method_bind* mb__get_caption;
        rebel_method_bind* mb__get_category;
        rebel_method_bind* mb__get_input_value_port_count;
        rebel_method_bind* mb__get_input_value_port_hint;
        rebel_method_bind* mb__get_input_value_port_hint_string;
        rebel_method_bind* mb__get_input_value_port_name;
        rebel_method_bind* mb__get_input_value_port_type;
        rebel_method_bind* mb__get_output_sequence_port_count;
        rebel_method_bind* mb__get_output_sequence_port_text;
        rebel_method_bind* mb__get_output_value_port_count;
        rebel_method_bind* mb__get_output_value_port_hint;
        rebel_method_bind* mb__get_output_value_port_hint_string;
        rebel_method_bind* mb__get_output_value_port_name;
        rebel_method_bind* mb__get_output_value_port_type;
        rebel_method_bind* mb__get_text;
        rebel_method_bind* mb__get_working_memory_size;
        rebel_method_bind* mb__has_input_sequence_port;
        rebel_method_bind* mb__script_changed;
        rebel_method_bind* mb__step;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSCRIPTCUSTOMNODE_H
