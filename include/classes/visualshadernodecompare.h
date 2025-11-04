// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSHADERNODECOMPARE_H
#define REBEL_VISUALSHADERNODECOMPARE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualshadernode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualShaderNodeCompare : public VisualShaderNode {
public:
    enum ComparisonType {
        CTYPE_SCALAR = 0,
        CTYPE_VECTOR = 1,
        CTYPE_BOOLEAN = 2,
        CTYPE_TRANSFORM = 3,
    };

    enum Function {
        FUNC_EQUAL = 0,
        FUNC_NOT_EQUAL = 1,
        FUNC_GREATER_THAN = 2,
        FUNC_GREATER_THAN_EQUAL = 3,
        FUNC_LESS_THAN = 4,
        FUNC_LESS_THAN_EQUAL = 5,
    };

    enum Condition {
        COND_ALL = 0,
        COND_ANY = 1,
    };

    VisualShaderNodeCompare::ComparisonType get_comparison_type() const;
    VisualShaderNodeCompare::Condition get_condition() const;
    VisualShaderNodeCompare::Function get_function() const;
    void set_comparison_type(const int64_t type);
    void set_condition(const int64_t condition);
    void set_function(const int64_t func);

    static VisualShaderNodeCompare* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualShaderNodeCompare";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualShaderNodeCompare";
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
        rebel_method_bind* mb_get_comparison_type;
        rebel_method_bind* mb_get_condition;
        rebel_method_bind* mb_get_function;
        rebel_method_bind* mb_set_comparison_type;
        rebel_method_bind* mb_set_condition;
        rebel_method_bind* mb_set_function;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSHADERNODECOMPARE_H
