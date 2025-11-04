// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSHADERNODEIS_H
#define REBEL_VISUALSHADERNODEIS_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualshadernode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualShaderNodeIs : public VisualShaderNode {
public:
    enum Function {
        FUNC_IS_INF = 0,
        FUNC_IS_NAN = 1,
    };

    VisualShaderNodeIs::Function get_function() const;
    void set_function(const int64_t func);

    static VisualShaderNodeIs* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualShaderNodeIs";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualShaderNodeIs";
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
        rebel_method_bind* mb_get_function;
        rebel_method_bind* mb_set_function;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSHADERNODEIS_H
