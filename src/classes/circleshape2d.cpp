// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/circleshape2d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t CircleShape2D::get_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_radius,
        (const Object*)this
    );
}

void CircleShape2D::set_radius(const real_t radius) {
    rebel_icall_void_float(
        method_bindings.mb_set_radius,
        (const Object*)this,
        radius
    );
}

CircleShape2D* CircleShape2D::create() {
    return (CircleShape2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CircleShape2D")()
         );
}

void CircleShape2D::init_method_bindings() {
    method_bindings.mb_get_radius =
        api->rebel_method_bind_get_method(
            "CircleShape2D",
            "get_radius"
        );
    method_bindings.mb_set_radius =
        api->rebel_method_bind_get_method(
            "CircleShape2D",
            "set_radius"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CircleShape2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CircleShape2D::MethodBindings CircleShape2D::method_bindings = {};
void* CircleShape2D::class_tag = nullptr;
} // namespace Rebel
