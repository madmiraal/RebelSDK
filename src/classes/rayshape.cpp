// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/rayshape.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t RayShape::get_length() const {
    return rebel_icall_float(
        method_bindings.mb_get_length,
        (const Object*)this
    );
}

bool RayShape::get_slips_on_slope() const {
    return rebel_icall_bool(
        method_bindings.mb_get_slips_on_slope,
        (const Object*)this
    );
}

void RayShape::set_length(const real_t length) {
    rebel_icall_void_float(
        method_bindings.mb_set_length,
        (const Object*)this,
        length
    );
}

void RayShape::set_slips_on_slope(const bool active) {
    rebel_icall_void_bool(
        method_bindings.mb_set_slips_on_slope,
        (const Object*)this,
        active
    );
}

RayShape* RayShape::create() {
    return (RayShape*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"RayShape")()
         );
}

void RayShape::init_method_bindings() {
    method_bindings.mb_get_length =
        api->rebel_method_bind_get_method(
            "RayShape",
            "get_length"
        );
    method_bindings.mb_get_slips_on_slope =
        api->rebel_method_bind_get_method(
            "RayShape",
            "get_slips_on_slope"
        );
    method_bindings.mb_set_length =
        api->rebel_method_bind_get_method(
            "RayShape",
            "set_length"
        );
    method_bindings.mb_set_slips_on_slope =
        api->rebel_method_bind_get_method(
            "RayShape",
            "set_slips_on_slope"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "RayShape");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

RayShape::MethodBindings RayShape::method_bindings = {};
void* RayShape::class_tag = nullptr;
} // namespace Rebel
