// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptconstructor.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Dictionary VisualScriptConstructor::get_constructor() const {
    return rebel_icall_dictionary(
        method_bindings.mb_get_constructor,
        (const Object*)this
    );
}

Variant::Type VisualScriptConstructor::get_constructor_type() const {
    return (Variant::Type)rebel_icall_int(
        method_bindings.mb_get_constructor_type,
        (const Object*)this
    );
}

void VisualScriptConstructor::set_constructor(const Dictionary constructor) {
    rebel_icall_void_dictionary(
        method_bindings.mb_set_constructor,
        (const Object*)this,
        constructor
    );
}

void VisualScriptConstructor::set_constructor_type(const int64_t type) {
    rebel_icall_void_int(
        method_bindings.mb_set_constructor_type,
        (const Object*)this,
        type
    );
}

VisualScriptConstructor* VisualScriptConstructor::create() {
    return (VisualScriptConstructor*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptConstructor")()
         );
}

void VisualScriptConstructor::init_method_bindings() {
    method_bindings.mb_get_constructor =
        api->rebel_method_bind_get_method(
            "VisualScriptConstructor",
            "get_constructor"
        );
    method_bindings.mb_get_constructor_type =
        api->rebel_method_bind_get_method(
            "VisualScriptConstructor",
            "get_constructor_type"
        );
    method_bindings.mb_set_constructor =
        api->rebel_method_bind_get_method(
            "VisualScriptConstructor",
            "set_constructor"
        );
    method_bindings.mb_set_constructor_type =
        api->rebel_method_bind_get_method(
            "VisualScriptConstructor",
            "set_constructor_type"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptConstructor");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptConstructor::MethodBindings VisualScriptConstructor::method_bindings = {};
void* VisualScriptConstructor::class_tag = nullptr;
} // namespace Rebel
