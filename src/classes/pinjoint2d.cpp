// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/pinjoint2d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t PinJoint2D::get_softness() const {
    return rebel_icall_float(
        method_bindings.mb_get_softness,
        (const Object*)this
    );
}

void PinJoint2D::set_softness(const real_t softness) {
    rebel_icall_void_float(
        method_bindings.mb_set_softness,
        (const Object*)this,
        softness
    );
}

PinJoint2D* PinJoint2D::create() {
    return (PinJoint2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PinJoint2D")()
         );
}

void PinJoint2D::init_method_bindings() {
    method_bindings.mb_get_softness =
        api->rebel_method_bind_get_method(
            "PinJoint2D",
            "get_softness"
        );
    method_bindings.mb_set_softness =
        api->rebel_method_bind_get_method(
            "PinJoint2D",
            "set_softness"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PinJoint2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PinJoint2D::MethodBindings PinJoint2D::method_bindings = {};
void* PinJoint2D::class_tag = nullptr;
} // namespace Rebel
