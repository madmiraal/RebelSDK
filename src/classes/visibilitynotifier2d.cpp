// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visibilitynotifier2d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Rect2 VisibilityNotifier2D::get_rect() const {
    return rebel_icall_rect2(
        method_bindings.mb_get_rect,
        (const Object*)this
    );
}

bool VisibilityNotifier2D::is_on_screen() const {
    return rebel_icall_bool(
        method_bindings.mb_is_on_screen,
        (const Object*)this
    );
}

void VisibilityNotifier2D::set_rect(const Rect2 rect) {
    rebel_icall_void_rect2(
        method_bindings.mb_set_rect,
        (const Object*)this,
        rect
    );
}

VisibilityNotifier2D* VisibilityNotifier2D::create() {
    return (VisibilityNotifier2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisibilityNotifier2D")()
         );
}

void VisibilityNotifier2D::init_method_bindings() {
    method_bindings.mb_get_rect =
        api->rebel_method_bind_get_method(
            "VisibilityNotifier2D",
            "get_rect"
        );
    method_bindings.mb_is_on_screen =
        api->rebel_method_bind_get_method(
            "VisibilityNotifier2D",
            "is_on_screen"
        );
    method_bindings.mb_set_rect =
        api->rebel_method_bind_get_method(
            "VisibilityNotifier2D",
            "set_rect"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisibilityNotifier2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisibilityNotifier2D::MethodBindings VisibilityNotifier2D::method_bindings = {};
void* VisibilityNotifier2D::class_tag = nullptr;
} // namespace Rebel
