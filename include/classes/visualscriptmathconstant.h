// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSCRIPTMATHCONSTANT_H
#define REBEL_VISUALSCRIPTMATHCONSTANT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualscriptnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualScriptMathConstant : public VisualScriptNode {
public:
    enum MathConstant {
        MATH_CONSTANT_ONE = 0,
        MATH_CONSTANT_PI = 1,
        MATH_CONSTANT_HALF_PI = 2,
        MATH_CONSTANT_TAU = 3,
        MATH_CONSTANT_E = 4,
        MATH_CONSTANT_SQRT2 = 5,
        MATH_CONSTANT_INF = 6,
        MATH_CONSTANT_NAN = 7,
        MATH_CONSTANT_MAX = 8,
    };

    VisualScriptMathConstant::MathConstant get_math_constant();
    void set_math_constant(const int64_t which);

    static VisualScriptMathConstant* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualScriptMathConstant";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualScriptMathConstant";
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
        rebel_method_bind* mb_get_math_constant;
        rebel_method_bind* mb_set_math_constant;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSCRIPTMATHCONSTANT_H
