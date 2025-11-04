// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptresourcepath.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String VisualScriptResourcePath::get_resource_path() {
    return rebel_icall_string(
        method_bindings.mb_get_resource_path,
        (const Object*)this
    );
}

void VisualScriptResourcePath::set_resource_path(const String path) {
    rebel_icall_void_string(
        method_bindings.mb_set_resource_path,
        (const Object*)this,
        path
    );
}

VisualScriptResourcePath* VisualScriptResourcePath::create() {
    return (VisualScriptResourcePath*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptResourcePath")()
         );
}

void VisualScriptResourcePath::init_method_bindings() {
    method_bindings.mb_get_resource_path =
        api->rebel_method_bind_get_method(
            "VisualScriptResourcePath",
            "get_resource_path"
        );
    method_bindings.mb_set_resource_path =
        api->rebel_method_bind_get_method(
            "VisualScriptResourcePath",
            "set_resource_path"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptResourcePath");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptResourcePath::MethodBindings VisualScriptResourcePath::method_bindings = {};
void* VisualScriptResourcePath::class_tag = nullptr;
} // namespace Rebel
