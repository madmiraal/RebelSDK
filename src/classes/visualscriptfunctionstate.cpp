// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptfunctionstate.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Variant VisualScriptFunctionState::_signal_callback(const Array& args) {
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

void VisualScriptFunctionState::connect_to_signal(const Object* obj, const String signals, const Array args) {
    rebel_icall_void_object_string_array(
        method_bindings.mb_connect_to_signal,
        (const Object*)this,
        obj,
        signals,
        args
    );
}

bool VisualScriptFunctionState::is_valid() const {
    return rebel_icall_bool(
        method_bindings.mb_is_valid,
        (const Object*)this
    );
}

Variant VisualScriptFunctionState::resume(const Array args) {
    return rebel_icall_variant_array(
        method_bindings.mb_resume,
        (const Object*)this,
        args
    );
}

VisualScriptFunctionState* VisualScriptFunctionState::create() {
    return (VisualScriptFunctionState*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptFunctionState")()
         );
}

void VisualScriptFunctionState::init_method_bindings() {
    method_bindings.mb__signal_callback =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionState",
            "_signal_callback"
        );
    method_bindings.mb_connect_to_signal =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionState",
            "connect_to_signal"
        );
    method_bindings.mb_is_valid =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionState",
            "is_valid"
        );
    method_bindings.mb_resume =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionState",
            "resume"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptFunctionState");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptFunctionState::MethodBindings VisualScriptFunctionState::method_bindings = {};
void* VisualScriptFunctionState::class_tag = nullptr;
} // namespace Rebel
