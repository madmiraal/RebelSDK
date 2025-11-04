// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptsequence.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t VisualScriptSequence::get_steps() const {
    return rebel_icall_int(
        method_bindings.mb_get_steps,
        (const Object*)this
    );
}

void VisualScriptSequence::set_steps(const int64_t steps) {
    rebel_icall_void_int(
        method_bindings.mb_set_steps,
        (const Object*)this,
        steps
    );
}

VisualScriptSequence* VisualScriptSequence::create() {
    return (VisualScriptSequence*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptSequence")()
         );
}

void VisualScriptSequence::init_method_bindings() {
    method_bindings.mb_get_steps =
        api->rebel_method_bind_get_method(
            "VisualScriptSequence",
            "get_steps"
        );
    method_bindings.mb_set_steps =
        api->rebel_method_bind_get_method(
            "VisualScriptSequence",
            "set_steps"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptSequence");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptSequence::MethodBindings VisualScriptSequence::method_bindings = {};
void* VisualScriptSequence::class_tag = nullptr;
} // namespace Rebel
