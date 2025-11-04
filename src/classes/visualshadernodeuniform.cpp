// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodeuniform.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String VisualShaderNodeUniform::get_uniform_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_uniform_name,
        (const Object*)this
    );
}

void VisualShaderNodeUniform::set_uniform_name(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_uniform_name,
        (const Object*)this,
        name
    );
}

void VisualShaderNodeUniform::init_method_bindings() {
    method_bindings.mb_get_uniform_name =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeUniform",
            "get_uniform_name"
        );
    method_bindings.mb_set_uniform_name =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeUniform",
            "set_uniform_name"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeUniform");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeUniform::MethodBindings VisualShaderNodeUniform::method_bindings = {};
void* VisualShaderNodeUniform::class_tag = nullptr;
} // namespace Rebel
