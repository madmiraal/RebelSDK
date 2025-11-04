// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptbasictypeconstant.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Variant::Type VisualScriptBasicTypeConstant::get_basic_type() const {
    return (Variant::Type)rebel_icall_int(
        method_bindings.mb_get_basic_type,
        (const Object*)this
    );
}

String VisualScriptBasicTypeConstant::get_basic_type_constant() const {
    return rebel_icall_string(
        method_bindings.mb_get_basic_type_constant,
        (const Object*)this
    );
}

void VisualScriptBasicTypeConstant::set_basic_type(const int64_t name) {
    rebel_icall_void_int(
        method_bindings.mb_set_basic_type,
        (const Object*)this,
        name
    );
}

void VisualScriptBasicTypeConstant::set_basic_type_constant(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_basic_type_constant,
        (const Object*)this,
        name
    );
}

VisualScriptBasicTypeConstant* VisualScriptBasicTypeConstant::create() {
    return (VisualScriptBasicTypeConstant*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptBasicTypeConstant")()
         );
}

void VisualScriptBasicTypeConstant::init_method_bindings() {
    method_bindings.mb_get_basic_type =
        api->rebel_method_bind_get_method(
            "VisualScriptBasicTypeConstant",
            "get_basic_type"
        );
    method_bindings.mb_get_basic_type_constant =
        api->rebel_method_bind_get_method(
            "VisualScriptBasicTypeConstant",
            "get_basic_type_constant"
        );
    method_bindings.mb_set_basic_type =
        api->rebel_method_bind_get_method(
            "VisualScriptBasicTypeConstant",
            "set_basic_type"
        );
    method_bindings.mb_set_basic_type_constant =
        api->rebel_method_bind_get_method(
            "VisualScriptBasicTypeConstant",
            "set_basic_type_constant"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptBasicTypeConstant");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptBasicTypeConstant::MethodBindings VisualScriptBasicTypeConstant::method_bindings = {};
void* VisualScriptBasicTypeConstant::class_tag = nullptr;
} // namespace Rebel
