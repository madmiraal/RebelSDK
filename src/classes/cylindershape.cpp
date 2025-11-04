// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/cylindershape.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t CylinderShape::get_height() const {
    return rebel_icall_float(
        method_bindings.mb_get_height,
        (const Object*)this
    );
}

real_t CylinderShape::get_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_radius,
        (const Object*)this
    );
}

void CylinderShape::set_height(const real_t height) {
    rebel_icall_void_float(
        method_bindings.mb_set_height,
        (const Object*)this,
        height
    );
}

void CylinderShape::set_radius(const real_t radius) {
    rebel_icall_void_float(
        method_bindings.mb_set_radius,
        (const Object*)this,
        radius
    );
}

CylinderShape* CylinderShape::create() {
    return (CylinderShape*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CylinderShape")()
         );
}

void CylinderShape::init_method_bindings() {
    method_bindings.mb_get_height =
        api->rebel_method_bind_get_method(
            "CylinderShape",
            "get_height"
        );
    method_bindings.mb_get_radius =
        api->rebel_method_bind_get_method(
            "CylinderShape",
            "get_radius"
        );
    method_bindings.mb_set_height =
        api->rebel_method_bind_get_method(
            "CylinderShape",
            "set_height"
        );
    method_bindings.mb_set_radius =
        api->rebel_method_bind_get_method(
            "CylinderShape",
            "set_radius"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CylinderShape");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CylinderShape::MethodBindings CylinderShape::method_bindings = {};
void* CylinderShape::class_tag = nullptr;
} // namespace Rebel
