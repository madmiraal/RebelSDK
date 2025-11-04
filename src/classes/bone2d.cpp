// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/bone2d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Bone2D::apply_rest() {
    rebel_icall_void(
        method_bindings.mb_apply_rest,
        (const Object*)this
    );
}

real_t Bone2D::get_default_length() const {
    return rebel_icall_float(
        method_bindings.mb_get_default_length,
        (const Object*)this
    );
}

int64_t Bone2D::get_index_in_skeleton() const {
    return rebel_icall_int(
        method_bindings.mb_get_index_in_skeleton,
        (const Object*)this
    );
}

Transform2D Bone2D::get_rest() const {
    return rebel_icall_transform2d(
        method_bindings.mb_get_rest,
        (const Object*)this
    );
}

Transform2D Bone2D::get_skeleton_rest() const {
    return rebel_icall_transform2d(
        method_bindings.mb_get_skeleton_rest,
        (const Object*)this
    );
}

void Bone2D::set_default_length(const real_t default_length) {
    rebel_icall_void_float(
        method_bindings.mb_set_default_length,
        (const Object*)this,
        default_length
    );
}

void Bone2D::set_rest(const Transform2D rest) {
    rebel_icall_void_transform2d(
        method_bindings.mb_set_rest,
        (const Object*)this,
        rest
    );
}

Bone2D* Bone2D::create() {
    return (Bone2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Bone2D")()
         );
}

void Bone2D::init_method_bindings() {
    method_bindings.mb_apply_rest =
        api->rebel_method_bind_get_method(
            "Bone2D",
            "apply_rest"
        );
    method_bindings.mb_get_default_length =
        api->rebel_method_bind_get_method(
            "Bone2D",
            "get_default_length"
        );
    method_bindings.mb_get_index_in_skeleton =
        api->rebel_method_bind_get_method(
            "Bone2D",
            "get_index_in_skeleton"
        );
    method_bindings.mb_get_rest =
        api->rebel_method_bind_get_method(
            "Bone2D",
            "get_rest"
        );
    method_bindings.mb_get_skeleton_rest =
        api->rebel_method_bind_get_method(
            "Bone2D",
            "get_skeleton_rest"
        );
    method_bindings.mb_set_default_length =
        api->rebel_method_bind_get_method(
            "Bone2D",
            "set_default_length"
        );
    method_bindings.mb_set_rest =
        api->rebel_method_bind_get_method(
            "Bone2D",
            "set_rest"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Bone2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Bone2D::MethodBindings Bone2D::method_bindings = {};
void* Bone2D::class_tag = nullptr;
} // namespace Rebel
