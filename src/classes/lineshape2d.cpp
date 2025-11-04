// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/lineshape2d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t LineShape2D::get_d() const {
    return rebel_icall_float(
        method_bindings.mb_get_d,
        (const Object*)this
    );
}

Vector2 LineShape2D::get_normal() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_normal,
        (const Object*)this
    );
}

void LineShape2D::set_d(const real_t d) {
    rebel_icall_void_float(
        method_bindings.mb_set_d,
        (const Object*)this,
        d
    );
}

void LineShape2D::set_normal(const Vector2 normal) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_normal,
        (const Object*)this,
        normal
    );
}

LineShape2D* LineShape2D::create() {
    return (LineShape2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"LineShape2D")()
         );
}

void LineShape2D::init_method_bindings() {
    method_bindings.mb_get_d =
        api->rebel_method_bind_get_method(
            "LineShape2D",
            "get_d"
        );
    method_bindings.mb_get_normal =
        api->rebel_method_bind_get_method(
            "LineShape2D",
            "get_normal"
        );
    method_bindings.mb_set_d =
        api->rebel_method_bind_get_method(
            "LineShape2D",
            "set_d"
        );
    method_bindings.mb_set_normal =
        api->rebel_method_bind_get_method(
            "LineShape2D",
            "set_normal"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "LineShape2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

LineShape2D::MethodBindings LineShape2D::method_bindings = {};
void* LineShape2D::class_tag = nullptr;
} // namespace Rebel
