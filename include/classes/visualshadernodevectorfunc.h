// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSHADERNODEVECTORFUNC_H
#define REBEL_VISUALSHADERNODEVECTORFUNC_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualshadernode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualShaderNodeVectorFunc : public VisualShaderNode {
public:
    enum Function {
        FUNC_NORMALIZE = 0,
        FUNC_SATURATE = 1,
        FUNC_NEGATE = 2,
        FUNC_RECIPROCAL = 3,
        FUNC_RGB2HSV = 4,
        FUNC_HSV2RGB = 5,
        FUNC_ABS = 6,
        FUNC_ACOS = 7,
        FUNC_ACOSH = 8,
        FUNC_ASIN = 9,
        FUNC_ASINH = 10,
        FUNC_ATAN = 11,
        FUNC_ATANH = 12,
        FUNC_CEIL = 13,
        FUNC_COS = 14,
        FUNC_COSH = 15,
        FUNC_DEGREES = 16,
        FUNC_EXP = 17,
        FUNC_EXP2 = 18,
        FUNC_FLOOR = 19,
        FUNC_FRAC = 20,
        FUNC_INVERSE_SQRT = 21,
        FUNC_LOG = 22,
        FUNC_LOG2 = 23,
        FUNC_RADIANS = 24,
        FUNC_ROUND = 25,
        FUNC_ROUNDEVEN = 26,
        FUNC_SIGN = 27,
        FUNC_SIN = 28,
        FUNC_SINH = 29,
        FUNC_SQRT = 30,
        FUNC_TAN = 31,
        FUNC_TANH = 32,
        FUNC_TRUNC = 33,
        FUNC_ONEMINUS = 34,
    };

    VisualShaderNodeVectorFunc::Function get_function() const;
    void set_function(const int64_t func);

    static VisualShaderNodeVectorFunc* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualShaderNodeVectorFunc";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualShaderNodeVectorFunc";
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

#endif // REBEL_VISUALSHADERNODEVECTORFUNC_H
