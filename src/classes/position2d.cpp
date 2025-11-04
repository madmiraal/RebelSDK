// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/position2d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t Position2D::_get_gizmo_extents() const {
    return rebel_icall_float(
        method_bindings.mb__get_gizmo_extents,
        (const Object*)this
    );
}

void Position2D::_set_gizmo_extents(const real_t extents) {
    rebel_icall_void_float(
        method_bindings.mb__set_gizmo_extents,
        (const Object*)this,
        extents
    );
}

Position2D* Position2D::create() {
    return (Position2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Position2D")()
         );
}

void Position2D::init_method_bindings() {
    method_bindings.mb__get_gizmo_extents =
        api->rebel_method_bind_get_method(
            "Position2D",
            "_get_gizmo_extents"
        );
    method_bindings.mb__set_gizmo_extents =
        api->rebel_method_bind_get_method(
            "Position2D",
            "_set_gizmo_extents"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Position2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Position2D::MethodBindings Position2D::method_bindings = {};
void* Position2D::class_tag = nullptr;
} // namespace Rebel
