// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscripttypecast.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String VisualScriptTypeCast::get_base_script() const {
    return rebel_icall_string(
        method_bindings.mb_get_base_script,
        (const Object*)this
    );
}

String VisualScriptTypeCast::get_base_type() const {
    return rebel_icall_string(
        method_bindings.mb_get_base_type,
        (const Object*)this
    );
}

void VisualScriptTypeCast::set_base_script(const String path) {
    rebel_icall_void_string(
        method_bindings.mb_set_base_script,
        (const Object*)this,
        path
    );
}

void VisualScriptTypeCast::set_base_type(const String type) {
    rebel_icall_void_string(
        method_bindings.mb_set_base_type,
        (const Object*)this,
        type
    );
}

VisualScriptTypeCast* VisualScriptTypeCast::create() {
    return (VisualScriptTypeCast*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptTypeCast")()
         );
}

void VisualScriptTypeCast::init_method_bindings() {
    method_bindings.mb_get_base_script =
        api->rebel_method_bind_get_method(
            "VisualScriptTypeCast",
            "get_base_script"
        );
    method_bindings.mb_get_base_type =
        api->rebel_method_bind_get_method(
            "VisualScriptTypeCast",
            "get_base_type"
        );
    method_bindings.mb_set_base_script =
        api->rebel_method_bind_get_method(
            "VisualScriptTypeCast",
            "set_base_script"
        );
    method_bindings.mb_set_base_type =
        api->rebel_method_bind_get_method(
            "VisualScriptTypeCast",
            "set_base_type"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptTypeCast");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptTypeCast::MethodBindings VisualScriptTypeCast::method_bindings = {};
void* VisualScriptTypeCast::class_tag = nullptr;
} // namespace Rebel
