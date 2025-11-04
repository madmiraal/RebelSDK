// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/referencerect.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Color ReferenceRect::get_border_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_border_color,
        (const Object*)this
    );
}

real_t ReferenceRect::get_border_width() const {
    return rebel_icall_float(
        method_bindings.mb_get_border_width,
        (const Object*)this
    );
}

bool ReferenceRect::get_editor_only() const {
    return rebel_icall_bool(
        method_bindings.mb_get_editor_only,
        (const Object*)this
    );
}

void ReferenceRect::set_border_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_border_color,
        (const Object*)this,
        color
    );
}

void ReferenceRect::set_border_width(const real_t width) {
    rebel_icall_void_float(
        method_bindings.mb_set_border_width,
        (const Object*)this,
        width
    );
}

void ReferenceRect::set_editor_only(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_editor_only,
        (const Object*)this,
        enabled
    );
}

ReferenceRect* ReferenceRect::create() {
    return (ReferenceRect*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ReferenceRect")()
         );
}

void ReferenceRect::init_method_bindings() {
    method_bindings.mb_get_border_color =
        api->rebel_method_bind_get_method(
            "ReferenceRect",
            "get_border_color"
        );
    method_bindings.mb_get_border_width =
        api->rebel_method_bind_get_method(
            "ReferenceRect",
            "get_border_width"
        );
    method_bindings.mb_get_editor_only =
        api->rebel_method_bind_get_method(
            "ReferenceRect",
            "get_editor_only"
        );
    method_bindings.mb_set_border_color =
        api->rebel_method_bind_get_method(
            "ReferenceRect",
            "set_border_color"
        );
    method_bindings.mb_set_border_width =
        api->rebel_method_bind_get_method(
            "ReferenceRect",
            "set_border_width"
        );
    method_bindings.mb_set_editor_only =
        api->rebel_method_bind_get_method(
            "ReferenceRect",
            "set_editor_only"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ReferenceRect");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ReferenceRect::MethodBindings ReferenceRect::method_bindings = {};
void* ReferenceRect::class_tag = nullptr;
} // namespace Rebel
