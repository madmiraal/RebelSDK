// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSHADERNODESCALARFUNC_H
#define REBEL_VISUALSHADERNODESCALARFUNC_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualshadernode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualShaderNodeScalarFunc : public VisualShaderNode {
public:
    enum Function {
        FUNC_SIN = 0,
        FUNC_COS = 1,
        FUNC_TAN = 2,
        FUNC_ASIN = 3,
        FUNC_ACOS = 4,
        FUNC_ATAN = 5,
        FUNC_SINH = 6,
        FUNC_COSH = 7,
        FUNC_TANH = 8,
        FUNC_LOG = 9,
        FUNC_EXP = 10,
        FUNC_SQRT = 11,
        FUNC_ABS = 12,
        FUNC_SIGN = 13,
        FUNC_FLOOR = 14,
        FUNC_ROUND = 15,
        FUNC_CEIL = 16,
        FUNC_FRAC = 17,
        FUNC_SATURATE = 18,
        FUNC_NEGATE = 19,
        FUNC_ACOSH = 20,
        FUNC_ASINH = 21,
        FUNC_ATANH = 22,
        FUNC_DEGREES = 23,
        FUNC_EXP2 = 24,
        FUNC_INVERSE_SQRT = 25,
        FUNC_LOG2 = 26,
        FUNC_RADIANS = 27,
        FUNC_RECIPROCAL = 28,
        FUNC_ROUNDEVEN = 29,
        FUNC_TRUNC = 30,
        FUNC_ONEMINUS = 31,
    };

    VisualShaderNodeScalarFunc::Function get_function() const;
    void set_function(const int64_t func);

    static VisualShaderNodeScalarFunc* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualShaderNodeScalarFunc";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualShaderNodeScalarFunc";
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

#endif // REBEL_VISUALSHADERNODESCALARFUNC_H
