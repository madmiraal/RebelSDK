// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptpreload.h"

#include "classes/icalls.h"
#include "classes/resource.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<Resource> VisualScriptPreload::get_preload() const {
    return Ref<Resource>::create_ref(rebel_icall_object(
        method_bindings.mb_get_preload,
        (const Object*)this
    ));
}

void VisualScriptPreload::set_preload(const Ref<Resource> resource) {
    rebel_icall_void_object(
        method_bindings.mb_set_preload,
        (const Object*)this,
        resource.ptr()
    );
}

VisualScriptPreload* VisualScriptPreload::create() {
    return (VisualScriptPreload*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptPreload")()
         );
}

void VisualScriptPreload::init_method_bindings() {
    method_bindings.mb_get_preload =
        api->rebel_method_bind_get_method(
            "VisualScriptPreload",
            "get_preload"
        );
    method_bindings.mb_set_preload =
        api->rebel_method_bind_get_method(
            "VisualScriptPreload",
            "set_preload"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptPreload");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptPreload::MethodBindings VisualScriptPreload::method_bindings = {};
void* VisualScriptPreload::class_tag = nullptr;
} // namespace Rebel
