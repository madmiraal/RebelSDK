// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptmathconstant.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
VisualScriptMathConstant::MathConstant VisualScriptMathConstant::get_math_constant() {
    return (VisualScriptMathConstant::MathConstant)rebel_icall_int(
        method_bindings.mb_get_math_constant,
        (const Object*)this
    );
}

void VisualScriptMathConstant::set_math_constant(const int64_t which) {
    rebel_icall_void_int(
        method_bindings.mb_set_math_constant,
        (const Object*)this,
        which
    );
}

VisualScriptMathConstant* VisualScriptMathConstant::create() {
    return (VisualScriptMathConstant*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptMathConstant")()
         );
}

void VisualScriptMathConstant::init_method_bindings() {
    method_bindings.mb_get_math_constant =
        api->rebel_method_bind_get_method(
            "VisualScriptMathConstant",
            "get_math_constant"
        );
    method_bindings.mb_set_math_constant =
        api->rebel_method_bind_get_method(
            "VisualScriptMathConstant",
            "set_math_constant"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptMathConstant");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptMathConstant::MethodBindings VisualScriptMathConstant::method_bindings = {};
void* VisualScriptMathConstant::class_tag = nullptr;
} // namespace Rebel
