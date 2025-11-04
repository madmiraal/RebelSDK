// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/boxshape.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Vector3 BoxShape::get_extents() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_extents,
        (const Object*)this
    );
}

void BoxShape::set_extents(const Vector3 extents) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_extents,
        (const Object*)this,
        extents
    );
}

BoxShape* BoxShape::create() {
    return (BoxShape*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"BoxShape")()
         );
}

void BoxShape::init_method_bindings() {
    method_bindings.mb_get_extents =
        api->rebel_method_bind_get_method(
            "BoxShape",
            "get_extents"
        );
    method_bindings.mb_set_extents =
        api->rebel_method_bind_get_method(
            "BoxShape",
            "set_extents"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "BoxShape");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

BoxShape::MethodBindings BoxShape::method_bindings = {};
void* BoxShape::class_tag = nullptr;
} // namespace Rebel
