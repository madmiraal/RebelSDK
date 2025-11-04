// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/colorrect.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Color ColorRect::get_frame_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_frame_color,
        (const Object*)this
    );
}

void ColorRect::set_frame_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_frame_color,
        (const Object*)this,
        color
    );
}

ColorRect* ColorRect::create() {
    return (ColorRect*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ColorRect")()
         );
}

void ColorRect::init_method_bindings() {
    method_bindings.mb_get_frame_color =
        api->rebel_method_bind_get_method(
            "ColorRect",
            "get_frame_color"
        );
    method_bindings.mb_set_frame_color =
        api->rebel_method_bind_get_method(
            "ColorRect",
            "set_frame_color"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ColorRect");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ColorRect::MethodBindings ColorRect::method_bindings = {};
void* ColorRect::class_tag = nullptr;
} // namespace Rebel
