// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodeuniformref.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String VisualShaderNodeUniformRef::get_uniform_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_uniform_name,
        (const Object*)this
    );
}

void VisualShaderNodeUniformRef::set_uniform_name(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_uniform_name,
        (const Object*)this,
        name
    );
}

VisualShaderNodeUniformRef* VisualShaderNodeUniformRef::create() {
    return (VisualShaderNodeUniformRef*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeUniformRef")()
         );
}

void VisualShaderNodeUniformRef::init_method_bindings() {
    method_bindings.mb_get_uniform_name =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeUniformRef",
            "get_uniform_name"
        );
    method_bindings.mb_set_uniform_name =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeUniformRef",
            "set_uniform_name"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeUniformRef");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeUniformRef::MethodBindings VisualShaderNodeUniformRef::method_bindings = {};
void* VisualShaderNodeUniformRef::class_tag = nullptr;
} // namespace Rebel
