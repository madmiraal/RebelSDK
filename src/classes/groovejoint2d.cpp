// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/groovejoint2d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t GrooveJoint2D::get_initial_offset() const {
    return rebel_icall_float(
        method_bindings.mb_get_initial_offset,
        (const Object*)this
    );
}

real_t GrooveJoint2D::get_length() const {
    return rebel_icall_float(
        method_bindings.mb_get_length,
        (const Object*)this
    );
}

void GrooveJoint2D::set_initial_offset(const real_t offset) {
    rebel_icall_void_float(
        method_bindings.mb_set_initial_offset,
        (const Object*)this,
        offset
    );
}

void GrooveJoint2D::set_length(const real_t length) {
    rebel_icall_void_float(
        method_bindings.mb_set_length,
        (const Object*)this,
        length
    );
}

GrooveJoint2D* GrooveJoint2D::create() {
    return (GrooveJoint2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GrooveJoint2D")()
         );
}

void GrooveJoint2D::init_method_bindings() {
    method_bindings.mb_get_initial_offset =
        api->rebel_method_bind_get_method(
            "GrooveJoint2D",
            "get_initial_offset"
        );
    method_bindings.mb_get_length =
        api->rebel_method_bind_get_method(
            "GrooveJoint2D",
            "get_length"
        );
    method_bindings.mb_set_initial_offset =
        api->rebel_method_bind_get_method(
            "GrooveJoint2D",
            "set_initial_offset"
        );
    method_bindings.mb_set_length =
        api->rebel_method_bind_get_method(
            "GrooveJoint2D",
            "set_length"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GrooveJoint2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GrooveJoint2D::MethodBindings GrooveJoint2D::method_bindings = {};
void* GrooveJoint2D::class_tag = nullptr;
} // namespace Rebel
