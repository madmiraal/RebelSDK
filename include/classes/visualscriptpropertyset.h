// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSCRIPTPROPERTYSET_H
#define REBEL_VISUALSCRIPTPROPERTYSET_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualscriptnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualScriptPropertySet : public VisualScriptNode {
public:
    enum AssignOp {
        ASSIGN_OP_NONE = 0,
        ASSIGN_OP_ADD = 1,
        ASSIGN_OP_SUB = 2,
        ASSIGN_OP_MUL = 3,
        ASSIGN_OP_DIV = 4,
        ASSIGN_OP_MOD = 5,
        ASSIGN_OP_SHIFT_LEFT = 6,
        ASSIGN_OP_SHIFT_RIGHT = 7,
        ASSIGN_OP_BIT_AND = 8,
        ASSIGN_OP_BIT_OR = 9,
        ASSIGN_OP_BIT_XOR = 10,
    };

    enum CallMode {
        CALL_MODE_SELF = 0,
        CALL_MODE_NODE_PATH = 1,
        CALL_MODE_INSTANCE = 2,
        CALL_MODE_BASIC_TYPE = 3,
    };

    Dictionary _get_type_cache() const;
    void _set_type_cache(const Dictionary type_cache);
    VisualScriptPropertySet::AssignOp get_assign_op() const;
    NodePath get_base_path() const;
    String get_base_script() const;
    String get_base_type() const;
    Variant::Type get_basic_type() const;
    VisualScriptPropertySet::CallMode get_call_mode() const;
    String get_index() const;
    String get_property() const;
    void set_assign_op(const int64_t assign_op);
    void set_base_path(const NodePath base_path);
    void set_base_script(const String base_script);
    void set_base_type(const String base_type);
    void set_basic_type(const int64_t basic_type);
    void set_call_mode(const int64_t mode);
    void set_index(const String index);
    void set_property(const String property);

    static VisualScriptPropertySet* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualScriptPropertySet";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualScriptPropertySet";
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
        rebel_method_bind* mb_get_assign_op;
        rebel_method_bind* mb_get_base_path;
        rebel_method_bind* mb_get_base_script;
        rebel_method_bind* mb_get_base_type;
        rebel_method_bind* mb_get_basic_type;
        rebel_method_bind* mb_get_call_mode;
        rebel_method_bind* mb_get_index;
        rebel_method_bind* mb_get_property;
        rebel_method_bind* mb_set_assign_op;
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

#endif // REBEL_VISUALSCRIPTPROPERTYSET_H
