// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptclassconstant.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String VisualScriptClassConstant::get_base_type() {
    return rebel_icall_string(
        method_bindings.mb_get_base_type,
        (const Object*)this
    );
}

String VisualScriptClassConstant::get_class_constant() {
    return rebel_icall_string(
        method_bindings.mb_get_class_constant,
        (const Object*)this
    );
}

void VisualScriptClassConstant::set_base_type(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_base_type,
        (const Object*)this,
        name
    );
}

void VisualScriptClassConstant::set_class_constant(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_class_constant,
        (const Object*)this,
        name
    );
}

VisualScriptClassConstant* VisualScriptClassConstant::create() {
    return (VisualScriptClassConstant*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptClassConstant")()
         );
}

void VisualScriptClassConstant::init_method_bindings() {
    method_bindings.mb_get_base_type =
        api->rebel_method_bind_get_method(
            "VisualScriptClassConstant",
            "get_base_type"
        );
    method_bindings.mb_get_class_constant =
        api->rebel_method_bind_get_method(
            "VisualScriptClassConstant",
            "get_class_constant"
        );
    method_bindings.mb_set_base_type =
        api->rebel_method_bind_get_method(
            "VisualScriptClassConstant",
            "set_base_type"
        );
    method_bindings.mb_set_class_constant =
        api->rebel_method_bind_get_method(
            "VisualScriptClassConstant",
            "set_class_constant"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptClassConstant");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptClassConstant::MethodBindings VisualScriptClassConstant::method_bindings = {};
void* VisualScriptClassConstant::class_tag = nullptr;
} // namespace Rebel
