// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptdeconstruct.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array VisualScriptDeconstruct::_get_elem_cache() const {
    return rebel_icall_array(
        method_bindings.mb__get_elem_cache,
        (const Object*)this
    );
}

void VisualScriptDeconstruct::_set_elem_cache(const Array _cache) {
    rebel_icall_void_array(
        method_bindings.mb__set_elem_cache,
        (const Object*)this,
        _cache
    );
}

Variant::Type VisualScriptDeconstruct::get_deconstruct_type() const {
    return (Variant::Type)rebel_icall_int(
        method_bindings.mb_get_deconstruct_type,
        (const Object*)this
    );
}

void VisualScriptDeconstruct::set_deconstruct_type(const int64_t type) {
    rebel_icall_void_int(
        method_bindings.mb_set_deconstruct_type,
        (const Object*)this,
        type
    );
}

VisualScriptDeconstruct* VisualScriptDeconstruct::create() {
    return (VisualScriptDeconstruct*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptDeconstruct")()
         );
}

void VisualScriptDeconstruct::init_method_bindings() {
    method_bindings.mb__get_elem_cache =
        api->rebel_method_bind_get_method(
            "VisualScriptDeconstruct",
            "_get_elem_cache"
        );
    method_bindings.mb__set_elem_cache =
        api->rebel_method_bind_get_method(
            "VisualScriptDeconstruct",
            "_set_elem_cache"
        );
    method_bindings.mb_get_deconstruct_type =
        api->rebel_method_bind_get_method(
            "VisualScriptDeconstruct",
            "get_deconstruct_type"
        );
    method_bindings.mb_set_deconstruct_type =
        api->rebel_method_bind_get_method(
            "VisualScriptDeconstruct",
            "set_deconstruct_type"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptDeconstruct");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptDeconstruct::MethodBindings VisualScriptDeconstruct::method_bindings = {};
void* VisualScriptDeconstruct::class_tag = nullptr;
} // namespace Rebel
