// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/capsuleshape.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t CapsuleShape::get_height() const {
    return rebel_icall_float(
        method_bindings.mb_get_height,
        (const Object*)this
    );
}

real_t CapsuleShape::get_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_radius,
        (const Object*)this
    );
}

void CapsuleShape::set_height(const real_t height) {
    rebel_icall_void_float(
        method_bindings.mb_set_height,
        (const Object*)this,
        height
    );
}

void CapsuleShape::set_radius(const real_t radius) {
    rebel_icall_void_float(
        method_bindings.mb_set_radius,
        (const Object*)this,
        radius
    );
}

CapsuleShape* CapsuleShape::create() {
    return (CapsuleShape*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CapsuleShape")()
         );
}

void CapsuleShape::init_method_bindings() {
    method_bindings.mb_get_height =
        api->rebel_method_bind_get_method(
            "CapsuleShape",
            "get_height"
        );
    method_bindings.mb_get_radius =
        api->rebel_method_bind_get_method(
            "CapsuleShape",
            "get_radius"
        );
    method_bindings.mb_set_height =
        api->rebel_method_bind_get_method(
            "CapsuleShape",
            "set_height"
        );
    method_bindings.mb_set_radius =
        api->rebel_method_bind_get_method(
            "CapsuleShape",
            "set_radius"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CapsuleShape");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CapsuleShape::MethodBindings CapsuleShape::method_bindings = {};
void* CapsuleShape::class_tag = nullptr;
} // namespace Rebel
