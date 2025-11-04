// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptselect.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Variant::Type VisualScriptSelect::get_typed() const {
    return (Variant::Type)rebel_icall_int(
        method_bindings.mb_get_typed,
        (const Object*)this
    );
}

void VisualScriptSelect::set_typed(const int64_t type) {
    rebel_icall_void_int(
        method_bindings.mb_set_typed,
        (const Object*)this,
        type
    );
}

VisualScriptSelect* VisualScriptSelect::create() {
    return (VisualScriptSelect*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptSelect")()
         );
}

void VisualScriptSelect::init_method_bindings() {
    method_bindings.mb_get_typed =
        api->rebel_method_bind_get_method(
            "VisualScriptSelect",
            "get_typed"
        );
    method_bindings.mb_set_typed =
        api->rebel_method_bind_get_method(
            "VisualScriptSelect",
            "set_typed"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptSelect");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptSelect::MethodBindings VisualScriptSelect::method_bindings = {};
void* VisualScriptSelect::class_tag = nullptr;
} // namespace Rebel
