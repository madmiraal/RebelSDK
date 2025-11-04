// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/progressbar.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool ProgressBar::is_percent_visible() const {
    return rebel_icall_bool(
        method_bindings.mb_is_percent_visible,
        (const Object*)this
    );
}

void ProgressBar::set_percent_visible(const bool visible) {
    rebel_icall_void_bool(
        method_bindings.mb_set_percent_visible,
        (const Object*)this,
        visible
    );
}

ProgressBar* ProgressBar::create() {
    return (ProgressBar*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ProgressBar")()
         );
}

void ProgressBar::init_method_bindings() {
    method_bindings.mb_is_percent_visible =
        api->rebel_method_bind_get_method(
            "ProgressBar",
            "is_percent_visible"
        );
    method_bindings.mb_set_percent_visible =
        api->rebel_method_bind_get_method(
            "ProgressBar",
            "set_percent_visible"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ProgressBar");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ProgressBar::MethodBindings ProgressBar::method_bindings = {};
void* ProgressBar::class_tag = nullptr;
} // namespace Rebel
