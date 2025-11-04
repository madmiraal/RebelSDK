// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodescalarop.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
VisualShaderNodeScalarOp::Operator VisualShaderNodeScalarOp::get_operator() const {
    return (VisualShaderNodeScalarOp::Operator)rebel_icall_int(
        method_bindings.mb_get_operator,
        (const Object*)this
    );
}

void VisualShaderNodeScalarOp::set_operator(const int64_t op) {
    rebel_icall_void_int(
        method_bindings.mb_set_operator,
        (const Object*)this,
        op
    );
}

VisualShaderNodeScalarOp* VisualShaderNodeScalarOp::create() {
    return (VisualShaderNodeScalarOp*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeScalarOp")()
         );
}

void VisualShaderNodeScalarOp::init_method_bindings() {
    method_bindings.mb_get_operator =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeScalarOp",
            "get_operator"
        );
    method_bindings.mb_set_operator =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeScalarOp",
            "set_operator"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeScalarOp");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeScalarOp::MethodBindings VisualShaderNodeScalarOp::method_bindings = {};
void* VisualShaderNodeScalarOp::class_tag = nullptr;
} // namespace Rebel
