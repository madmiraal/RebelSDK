// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/springarm.h"

#include "classes/icalls.h"
#include "classes/shape.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void SpringArm::add_excluded_object(const RID RID) {
    rebel_icall_void_rid(
        method_bindings.mb_add_excluded_object,
        (const Object*)this,
        RID
    );
}

void SpringArm::clear_excluded_objects() {
    rebel_icall_void(
        method_bindings.mb_clear_excluded_objects,
        (const Object*)this
    );
}

int64_t SpringArm::get_collision_mask() {
    return rebel_icall_int(
        method_bindings.mb_get_collision_mask,
        (const Object*)this
    );
}

real_t SpringArm::get_hit_length() {
    return rebel_icall_float(
        method_bindings.mb_get_hit_length,
        (const Object*)this
    );
}

real_t SpringArm::get_length() const {
    return rebel_icall_float(
        method_bindings.mb_get_length,
        (const Object*)this
    );
}

real_t SpringArm::get_margin() {
    return rebel_icall_float(
        method_bindings.mb_get_margin,
        (const Object*)this
    );
}

Ref<Shape> SpringArm::get_shape() const {
    return Ref<Shape>::create_ref(rebel_icall_object(
        method_bindings.mb_get_shape,
        (const Object*)this
    ));
}

bool SpringArm::remove_excluded_object(const RID RID) {
    return rebel_icall_bool_rid(
        method_bindings.mb_remove_excluded_object,
        (const Object*)this,
        RID
    );
}

void SpringArm::set_collision_mask(const int64_t mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_mask,
        (const Object*)this,
        mask
    );
}

void SpringArm::set_length(const real_t length) {
    rebel_icall_void_float(
        method_bindings.mb_set_length,
        (const Object*)this,
        length
    );
}

void SpringArm::set_margin(const real_t margin) {
    rebel_icall_void_float(
        method_bindings.mb_set_margin,
        (const Object*)this,
        margin
    );
}

void SpringArm::set_shape(const Ref<Shape> shape) {
    rebel_icall_void_object(
        method_bindings.mb_set_shape,
        (const Object*)this,
        shape.ptr()
    );
}

SpringArm* SpringArm::create() {
    return (SpringArm*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"SpringArm")()
         );
}

void SpringArm::init_method_bindings() {
    method_bindings.mb_add_excluded_object =
        api->rebel_method_bind_get_method(
            "SpringArm",
            "add_excluded_object"
        );
    method_bindings.mb_clear_excluded_objects =
        api->rebel_method_bind_get_method(
            "SpringArm",
            "clear_excluded_objects"
        );
    method_bindings.mb_get_collision_mask =
        api->rebel_method_bind_get_method(
            "SpringArm",
            "get_collision_mask"
        );
    method_bindings.mb_get_hit_length =
        api->rebel_method_bind_get_method(
            "SpringArm",
            "get_hit_length"
        );
    method_bindings.mb_get_length =
        api->rebel_method_bind_get_method(
            "SpringArm",
            "get_length"
        );
    method_bindings.mb_get_margin =
        api->rebel_method_bind_get_method(
            "SpringArm",
            "get_margin"
        );
    method_bindings.mb_get_shape =
        api->rebel_method_bind_get_method(
            "SpringArm",
            "get_shape"
        );
    method_bindings.mb_remove_excluded_object =
        api->rebel_method_bind_get_method(
            "SpringArm",
            "remove_excluded_object"
        );
    method_bindings.mb_set_collision_mask =
        api->rebel_method_bind_get_method(
            "SpringArm",
            "set_collision_mask"
        );
    method_bindings.mb_set_length =
        api->rebel_method_bind_get_method(
            "SpringArm",
            "set_length"
        );
    method_bindings.mb_set_margin =
        api->rebel_method_bind_get_method(
            "SpringArm",
            "set_margin"
        );
    method_bindings.mb_set_shape =
        api->rebel_method_bind_get_method(
            "SpringArm",
            "set_shape"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "SpringArm");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

SpringArm::MethodBindings SpringArm::method_bindings = {};
void* SpringArm::class_tag = nullptr;
} // namespace Rebel
