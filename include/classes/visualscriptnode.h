// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSCRIPTNODE_H
#define REBEL_VISUALSCRIPTNODE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualScript;

class VisualScriptNode : public Resource {
public:
    Array _get_default_input_values() const;
    void _set_default_input_values(const Array values);
    Variant get_default_input_value(const int64_t port_idx) const;
    Ref<VisualScript> get_visual_script() const;
    void ports_changed_notify();
    void set_default_input_value(const int64_t port_idx, const Variant value);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualScriptNode";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualScriptNode";
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
        rebel_method_bind* mb__get_default_input_values;
        rebel_method_bind* mb__set_default_input_values;
        rebel_method_bind* mb_get_default_input_value;
        rebel_method_bind* mb_get_visual_script;
        rebel_method_bind* mb_ports_changed_notify;
        rebel_method_bind* mb_set_default_input_value;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSCRIPTNODE_H
