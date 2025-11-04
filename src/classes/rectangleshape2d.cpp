// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/rectangleshape2d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Vector2 RectangleShape2D::get_extents() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_extents,
        (const Object*)this
    );
}

void RectangleShape2D::set_extents(const Vector2 extents) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_extents,
        (const Object*)this,
        extents
    );
}

RectangleShape2D* RectangleShape2D::create() {
    return (RectangleShape2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"RectangleShape2D")()
         );
}

void RectangleShape2D::init_method_bindings() {
    method_bindings.mb_get_extents =
        api->rebel_method_bind_get_method(
            "RectangleShape2D",
            "get_extents"
        );
    method_bindings.mb_set_extents =
        api->rebel_method_bind_get_method(
            "RectangleShape2D",
            "set_extents"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "RectangleShape2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

RectangleShape2D::MethodBindings RectangleShape2D::method_bindings = {};
void* RectangleShape2D::class_tag = nullptr;
} // namespace Rebel
