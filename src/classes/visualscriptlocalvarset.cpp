// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptlocalvarset.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String VisualScriptLocalVarSet::get_var_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_var_name,
        (const Object*)this
    );
}

Variant::Type VisualScriptLocalVarSet::get_var_type() const {
    return (Variant::Type)rebel_icall_int(
        method_bindings.mb_get_var_type,
        (const Object*)this
    );
}

void VisualScriptLocalVarSet::set_var_name(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_var_name,
        (const Object*)this,
        name
    );
}

void VisualScriptLocalVarSet::set_var_type(const int64_t type) {
    rebel_icall_void_int(
        method_bindings.mb_set_var_type,
        (const Object*)this,
        type
    );
}

VisualScriptLocalVarSet* VisualScriptLocalVarSet::create() {
    return (VisualScriptLocalVarSet*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptLocalVarSet")()
         );
}

void VisualScriptLocalVarSet::init_method_bindings() {
    method_bindings.mb_get_var_name =
        api->rebel_method_bind_get_method(
            "VisualScriptLocalVarSet",
            "get_var_name"
        );
    method_bindings.mb_get_var_type =
        api->rebel_method_bind_get_method(
            "VisualScriptLocalVarSet",
            "get_var_type"
        );
    method_bindings.mb_set_var_name =
        api->rebel_method_bind_get_method(
            "VisualScriptLocalVarSet",
            "set_var_name"
        );
    method_bindings.mb_set_var_type =
        api->rebel_method_bind_get_method(
            "VisualScriptLocalVarSet",
            "set_var_type"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptLocalVarSet");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptLocalVarSet::MethodBindings VisualScriptLocalVarSet::method_bindings = {};
void* VisualScriptLocalVarSet::class_tag = nullptr;
} // namespace Rebel
