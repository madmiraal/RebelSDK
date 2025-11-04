// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodetransformmult.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
VisualShaderNodeTransformMult::Operator VisualShaderNodeTransformMult::get_operator() const {
    return (VisualShaderNodeTransformMult::Operator)rebel_icall_int(
        method_bindings.mb_get_operator,
        (const Object*)this
    );
}

void VisualShaderNodeTransformMult::set_operator(const int64_t op) {
    rebel_icall_void_int(
        method_bindings.mb_set_operator,
        (const Object*)this,
        op
    );
}

VisualShaderNodeTransformMult* VisualShaderNodeTransformMult::create() {
    return (VisualShaderNodeTransformMult*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeTransformMult")()
         );
}

void VisualShaderNodeTransformMult::init_method_bindings() {
    method_bindings.mb_get_operator =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeTransformMult",
            "get_operator"
        );
    method_bindings.mb_set_operator =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeTransformMult",
            "set_operator"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeTransformMult");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeTransformMult::MethodBindings VisualShaderNodeTransformMult::method_bindings = {};
void* VisualShaderNodeTransformMult::class_tag = nullptr;
} // namespace Rebel
