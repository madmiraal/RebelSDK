// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/styleboxline.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Color StyleBoxLine::get_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_color,
        (const Object*)this
    );
}

real_t StyleBoxLine::get_grow_begin() const {
    return rebel_icall_float(
        method_bindings.mb_get_grow_begin,
        (const Object*)this
    );
}

real_t StyleBoxLine::get_grow_end() const {
    return rebel_icall_float(
        method_bindings.mb_get_grow_end,
        (const Object*)this
    );
}

int64_t StyleBoxLine::get_thickness() const {
    return rebel_icall_int(
        method_bindings.mb_get_thickness,
        (const Object*)this
    );
}

bool StyleBoxLine::is_vertical() const {
    return rebel_icall_bool(
        method_bindings.mb_is_vertical,
        (const Object*)this
    );
}

void StyleBoxLine::set_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_color,
        (const Object*)this,
        color
    );
}

void StyleBoxLine::set_grow_begin(const real_t offset) {
    rebel_icall_void_float(
        method_bindings.mb_set_grow_begin,
        (const Object*)this,
        offset
    );
}

void StyleBoxLine::set_grow_end(const real_t offset) {
    rebel_icall_void_float(
        method_bindings.mb_set_grow_end,
        (const Object*)this,
        offset
    );
}

void StyleBoxLine::set_thickness(const int64_t thickness) {
    rebel_icall_void_int(
        method_bindings.mb_set_thickness,
        (const Object*)this,
        thickness
    );
}

void StyleBoxLine::set_vertical(const bool vertical) {
    rebel_icall_void_bool(
        method_bindings.mb_set_vertical,
        (const Object*)this,
        vertical
    );
}

StyleBoxLine* StyleBoxLine::create() {
    return (StyleBoxLine*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"StyleBoxLine")()
         );
}

void StyleBoxLine::init_method_bindings() {
    method_bindings.mb_get_color =
        api->rebel_method_bind_get_method(
            "StyleBoxLine",
            "get_color"
        );
    method_bindings.mb_get_grow_begin =
        api->rebel_method_bind_get_method(
            "StyleBoxLine",
            "get_grow_begin"
        );
    method_bindings.mb_get_grow_end =
        api->rebel_method_bind_get_method(
            "StyleBoxLine",
            "get_grow_end"
        );
    method_bindings.mb_get_thickness =
        api->rebel_method_bind_get_method(
            "StyleBoxLine",
            "get_thickness"
        );
    method_bindings.mb_is_vertical =
        api->rebel_method_bind_get_method(
            "StyleBoxLine",
            "is_vertical"
        );
    method_bindings.mb_set_color =
        api->rebel_method_bind_get_method(
            "StyleBoxLine",
            "set_color"
        );
    method_bindings.mb_set_grow_begin =
        api->rebel_method_bind_get_method(
            "StyleBoxLine",
            "set_grow_begin"
        );
    method_bindings.mb_set_grow_end =
        api->rebel_method_bind_get_method(
            "StyleBoxLine",
            "set_grow_end"
        );
    method_bindings.mb_set_thickness =
        api->rebel_method_bind_get_method(
            "StyleBoxLine",
            "set_thickness"
        );
    method_bindings.mb_set_vertical =
        api->rebel_method_bind_get_method(
            "StyleBoxLine",
            "set_vertical"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "StyleBoxLine");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

StyleBoxLine::MethodBindings StyleBoxLine::method_bindings = {};
void* StyleBoxLine::class_tag = nullptr;
} // namespace Rebel
