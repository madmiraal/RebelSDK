// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/planeshape.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Plane PlaneShape::get_plane() const {
    return rebel_icall_plane(
        method_bindings.mb_get_plane,
        (const Object*)this
    );
}

void PlaneShape::set_plane(const Plane plane) {
    rebel_icall_void_plane(
        method_bindings.mb_set_plane,
        (const Object*)this,
        plane
    );
}

PlaneShape* PlaneShape::create() {
    return (PlaneShape*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PlaneShape")()
         );
}

void PlaneShape::init_method_bindings() {
    method_bindings.mb_get_plane =
        api->rebel_method_bind_get_method(
            "PlaneShape",
            "get_plane"
        );
    method_bindings.mb_set_plane =
        api->rebel_method_bind_get_method(
            "PlaneShape",
            "set_plane"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PlaneShape");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PlaneShape::MethodBindings PlaneShape::method_bindings = {};
void* PlaneShape::class_tag = nullptr;
} // namespace Rebel
