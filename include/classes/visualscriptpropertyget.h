// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSCRIPTPROPERTYGET_H
#define REBEL_VISUALSCRIPTPROPERTYGET_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualscriptnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualScriptPropertyGet : public VisualScriptNode {
public:
    enum CallMode {
        CALL_MODE_SELF = 0,
        CALL_MODE_NODE_PATH = 1,
        CALL_MODE_INSTANCE = 2,
        CALL_MODE_BASIC_TYPE = 3,
    };

    Variant::Type _get_type_cache() const;
    void _set_type_cache(const int64_t type_cache);
    NodePath get_base_path() const;
    String get_base_script() const;
    String get_base_type() const;
    Variant::Type get_basic_type() const;
    VisualScriptPropertyGet::CallMode get_call_mode() const;
    String get_index() const;
    String get_property() const;
    void set_base_path(const NodePath base_path);
    void set_base_script(const String base_script);
    void set_base_type(const String base_type);
    void set_basic_type(const int64_t basic_type);
    void set_call_mode(const int64_t mode);
    void set_index(const String index);
    void set_property(const String property);

    static VisualScriptPropertyGet* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualScriptPropertyGet";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualScriptPropertyGet";
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
        rebel_method_bind* mb__get_type_cache;
        rebel_method_bind* mb__set_type_cache;
        rebel_method_bind* mb_get_base_path;
        rebel_method_bind* mb_get_base_script;
        rebel_method_bind* mb_get_base_type;
        rebel_method_bind* mb_get_basic_type;
        rebel_method_bind* mb_get_call_mode;
        rebel_method_bind* mb_get_index;
        rebel_method_bind* mb_get_property;
        rebel_method_bind* mb_set_base_path;
        rebel_method_bind* mb_set_base_script;
        rebel_method_bind* mb_set_base_type;
        rebel_method_bind* mb_set_basic_type;
        rebel_method_bind* mb_set_call_mode;
        rebel_method_bind* mb_set_index;
        rebel_method_bind* mb_set_property;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSCRIPTPROPERTYGET_H
