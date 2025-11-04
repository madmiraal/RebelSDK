// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/gdscriptfunctionstate.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Variant GDScriptFunctionState::_signal_callback(const Array& args) {
    size_t arg_count = args.size();

    rebel_variant** var_args =
        (rebel_variant**)alloca(sizeof(rebel_variant*) * arg_count);
    for (int i = 0; i < args.size(); i++) {
        var_args[i] = (rebel_variant*) &((Array&) args)[i];
    }

    Variant result;
    *(rebel_variant*) &result = api->rebel_method_bind_call(
        method_bindings.mb__signal_callback,
        ((const Object *)this)->owner,
        (const rebel_variant**) var_args,
        arg_count,
        nullptr
    );
    return result;
}

bool GDScriptFunctionState::is_valid(const bool extended_check) const {
    return rebel_icall_bool_bool(
        method_bindings.mb_is_valid,
        (const Object*)this,
        extended_check
    );
}

Variant GDScriptFunctionState::resume(const Variant arg) {
    return rebel_icall_variant_variant(
        method_bindings.mb_resume,
        (const Object*)this,
        arg
    );
}

void GDScriptFunctionState::init_method_bindings() {
    method_bindings.mb__signal_callback =
        api->rebel_method_bind_get_method(
            "GDScriptFunctionState",
            "_signal_callback"
        );
    method_bindings.mb_is_valid =
        api->rebel_method_bind_get_method(
            "GDScriptFunctionState",
            "is_valid"
        );
    method_bindings.mb_resume =
        api->rebel_method_bind_get_method(
            "GDScriptFunctionState",
            "resume"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GDScriptFunctionState");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GDScriptFunctionState::MethodBindings GDScriptFunctionState::method_bindings = {};
void* GDScriptFunctionState::class_tag = nullptr;
} // namespace Rebel
