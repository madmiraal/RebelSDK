// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/centercontainer.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool CenterContainer::is_using_top_left() const {
    return rebel_icall_bool(
        method_bindings.mb_is_using_top_left,
        (const Object*)this
    );
}

void CenterContainer::set_use_top_left(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_top_left,
        (const Object*)this,
        enable
    );
}

CenterContainer* CenterContainer::create() {
    return (CenterContainer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CenterContainer")()
         );
}

void CenterContainer::init_method_bindings() {
    method_bindings.mb_is_using_top_left =
        api->rebel_method_bind_get_method(
            "CenterContainer",
            "is_using_top_left"
        );
    method_bindings.mb_set_use_top_left =
        api->rebel_method_bind_get_method(
            "CenterContainer",
            "set_use_top_left"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CenterContainer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CenterContainer::MethodBindings CenterContainer::method_bindings = {};
void* CenterContainer::class_tag = nullptr;
} // namespace Rebel
