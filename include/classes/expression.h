// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EXPRESSION_H
#define REBEL_EXPRESSION_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Object;

class Expression : public Reference {
public:
    Variant execute(const Array inputs = Array(), const Object* base_instance = nullptr, const bool show_error = true);
    String get_error_text() const;
    bool has_execute_failed() const;
    Error parse(const String expression, const PoolStringArray input_names = PoolStringArray());

    static Expression* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Expression";
    }

    inline static const char* get_rebel_class_name() {
        return "Expression";
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
        rebel_method_bind* mb_execute;
        rebel_method_bind* mb_get_error_text;
        rebel_method_bind* mb_has_execute_failed;
        rebel_method_bind* mb_parse;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EXPRESSION_H
