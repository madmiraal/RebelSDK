// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/pluginscript.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Variant PluginScript::new_(const Array& args) {
    size_t arg_count = args.size();

    rebel_variant** var_args =
        (rebel_variant**)alloca(sizeof(rebel_variant*) * arg_count);
    for (int i = 0; i < args.size(); i++) {
        var_args[i] = (rebel_variant*) &((Array&) args)[i];
    }

    Variant result;
    *(rebel_variant*) &result = api->rebel_method_bind_call(
        method_bindings.mb_new,
        ((const Object *)this)->owner,
        (const rebel_variant**) var_args,
        arg_count,
        nullptr
    );
    return result;
}

PluginScript* PluginScript::create() {
    return (PluginScript*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PluginScript")()
         );
}

void PluginScript::init_method_bindings() {
    method_bindings.mb_new =
        api->rebel_method_bind_get_method(
            "PluginScript",
            "new"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PluginScript");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PluginScript::MethodBindings PluginScript::method_bindings = {};
void* PluginScript::class_tag = nullptr;
} // namespace Rebel
