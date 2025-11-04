// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visibilitynotifier.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
AABB VisibilityNotifier::get_aabb() const {
    return rebel_icall_aabb(
        method_bindings.mb_get_aabb,
        (const Object*)this
    );
}

bool VisibilityNotifier::is_on_screen() const {
    return rebel_icall_bool(
        method_bindings.mb_is_on_screen,
        (const Object*)this
    );
}

void VisibilityNotifier::set_aabb(const AABB rect) {
    rebel_icall_void_aabb(
        method_bindings.mb_set_aabb,
        (const Object*)this,
        rect
    );
}

VisibilityNotifier* VisibilityNotifier::create() {
    return (VisibilityNotifier*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisibilityNotifier")()
         );
}

void VisibilityNotifier::init_method_bindings() {
    method_bindings.mb_get_aabb =
        api->rebel_method_bind_get_method(
            "VisibilityNotifier",
            "get_aabb"
        );
    method_bindings.mb_is_on_screen =
        api->rebel_method_bind_get_method(
            "VisibilityNotifier",
            "is_on_screen"
        );
    method_bindings.mb_set_aabb =
        api->rebel_method_bind_get_method(
            "VisibilityNotifier",
            "set_aabb"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisibilityNotifier");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisibilityNotifier::MethodBindings VisibilityNotifier::method_bindings = {};
void* VisibilityNotifier::class_tag = nullptr;
} // namespace Rebel
