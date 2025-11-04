// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/canvasmodulate.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Color CanvasModulate::get_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_color,
        (const Object*)this
    );
}

void CanvasModulate::set_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_color,
        (const Object*)this,
        color
    );
}

CanvasModulate* CanvasModulate::create() {
    return (CanvasModulate*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CanvasModulate")()
         );
}

void CanvasModulate::init_method_bindings() {
    method_bindings.mb_get_color =
        api->rebel_method_bind_get_method(
            "CanvasModulate",
            "get_color"
        );
    method_bindings.mb_set_color =
        api->rebel_method_bind_get_method(
            "CanvasModulate",
            "set_color"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CanvasModulate");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CanvasModulate::MethodBindings CanvasModulate::method_bindings = {};
void* CanvasModulate::class_tag = nullptr;
} // namespace Rebel
