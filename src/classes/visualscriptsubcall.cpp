// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptsubcall.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Variant VisualScriptSubCall::_subcall(const Variant arguments) {
    return rebel_icall_variant_variant(
        method_bindings.mb__subcall,
        (const Object*)this,
        arguments
    );
}

VisualScriptSubCall* VisualScriptSubCall::create() {
    return (VisualScriptSubCall*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptSubCall")()
         );
}

void VisualScriptSubCall::init_method_bindings() {
    method_bindings.mb__subcall =
        api->rebel_method_bind_get_method(
            "VisualScriptSubCall",
            "_subcall"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptSubCall");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptSubCall::MethodBindings VisualScriptSubCall::method_bindings = {};
void* VisualScriptSubCall::class_tag = nullptr;
} // namespace Rebel
