// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptenginesingleton.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String VisualScriptEngineSingleton::get_singleton() {
    return rebel_icall_string(
        method_bindings.mb_get_singleton,
        (const Object*)this
    );
}

void VisualScriptEngineSingleton::set_singleton(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_singleton,
        (const Object*)this,
        name
    );
}

VisualScriptEngineSingleton* VisualScriptEngineSingleton::create() {
    return (VisualScriptEngineSingleton*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptEngineSingleton")()
         );
}

void VisualScriptEngineSingleton::init_method_bindings() {
    method_bindings.mb_get_singleton =
        api->rebel_method_bind_get_method(
            "VisualScriptEngineSingleton",
            "get_singleton"
        );
    method_bindings.mb_set_singleton =
        api->rebel_method_bind_get_method(
            "VisualScriptEngineSingleton",
            "set_singleton"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptEngineSingleton");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptEngineSingleton::MethodBindings VisualScriptEngineSingleton::method_bindings = {};
void* VisualScriptEngineSingleton::class_tag = nullptr;
} // namespace Rebel
