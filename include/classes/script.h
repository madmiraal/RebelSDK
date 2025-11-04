// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SCRIPT_H
#define REBEL_SCRIPT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Object;

class Script : public Resource {
public:
    bool can_instance() const;
    Ref<Script> get_base_script() const;
    String get_instance_base_type() const;
    Variant get_property_default_value(const String property);
    Dictionary get_script_constant_map();
    Array get_script_method_list();
    Array get_script_property_list();
    Array get_script_signal_list();
    String get_source_code() const;
    bool has_script_signal(const String signal_name) const;
    bool has_source_code() const;
    bool instance_has(const Object* base_object) const;
    bool is_tool() const;
    Error reload(const bool keep_state = false);
    void set_source_code(const String source);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Script";
    }

    inline static const char* get_rebel_class_name() {
        return "Script";
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
        rebel_method_bind* mb_can_instance;
        rebel_method_bind* mb_get_base_script;
        rebel_method_bind* mb_get_instance_base_type;
        rebel_method_bind* mb_get_property_default_value;
        rebel_method_bind* mb_get_script_constant_map;
        rebel_method_bind* mb_get_script_method_list;
        rebel_method_bind* mb_get_script_property_list;
        rebel_method_bind* mb_get_script_signal_list;
        rebel_method_bind* mb_get_source_code;
        rebel_method_bind* mb_has_script_signal;
        rebel_method_bind* mb_has_source_code;
        rebel_method_bind* mb_instance_has;
        rebel_method_bind* mb_is_tool;
        rebel_method_bind* mb_reload;
        rebel_method_bind* mb_set_source_code;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SCRIPT_H
