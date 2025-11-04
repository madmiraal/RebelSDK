// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptbuiltinfunc.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
VisualScriptBuiltinFunc::BuiltinFunc VisualScriptBuiltinFunc::get_func() {
    return (VisualScriptBuiltinFunc::BuiltinFunc)rebel_icall_int(
        method_bindings.mb_get_func,
        (const Object*)this
    );
}

void VisualScriptBuiltinFunc::set_func(const int64_t which) {
    rebel_icall_void_int(
        method_bindings.mb_set_func,
        (const Object*)this,
        which
    );
}

VisualScriptBuiltinFunc* VisualScriptBuiltinFunc::create() {
    return (VisualScriptBuiltinFunc*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptBuiltinFunc")()
         );
}

void VisualScriptBuiltinFunc::init_method_bindings() {
    method_bindings.mb_get_func =
        api->rebel_method_bind_get_method(
            "VisualScriptBuiltinFunc",
            "get_func"
        );
    method_bindings.mb_set_func =
        api->rebel_method_bind_get_method(
            "VisualScriptBuiltinFunc",
            "set_func"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptBuiltinFunc");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptBuiltinFunc::MethodBindings VisualScriptBuiltinFunc::method_bindings = {};
void* VisualScriptBuiltinFunc::class_tag = nullptr;
} // namespace Rebel
