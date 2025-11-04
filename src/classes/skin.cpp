// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/skin.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Skin::add_bind(const int64_t bone, const Transform pose) {
    rebel_icall_void_int_transform(
        method_bindings.mb_add_bind,
        (const Object*)this,
        bone,
        pose
    );
}

void Skin::clear_binds() {
    rebel_icall_void(
        method_bindings.mb_clear_binds,
        (const Object*)this
    );
}

int64_t Skin::get_bind_bone(const int64_t bind_index) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_bind_bone,
        (const Object*)this,
        bind_index
    );
}

int64_t Skin::get_bind_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_bind_count,
        (const Object*)this
    );
}

String Skin::get_bind_name(const int64_t bind_index) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_bind_name,
        (const Object*)this,
        bind_index
    );
}

Transform Skin::get_bind_pose(const int64_t bind_index) const {
    return rebel_icall_transform_int(
        method_bindings.mb_get_bind_pose,
        (const Object*)this,
        bind_index
    );
}

void Skin::set_bind_bone(const int64_t bind_index, const int64_t bone) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_bind_bone,
        (const Object*)this,
        bind_index,
        bone
    );
}

void Skin::set_bind_count(const int64_t bind_count) {
    rebel_icall_void_int(
        method_bindings.mb_set_bind_count,
        (const Object*)this,
        bind_count
    );
}

void Skin::set_bind_name(const int64_t bind_index, const String name) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_bind_name,
        (const Object*)this,
        bind_index,
        name
    );
}

void Skin::set_bind_pose(const int64_t bind_index, const Transform pose) {
    rebel_icall_void_int_transform(
        method_bindings.mb_set_bind_pose,
        (const Object*)this,
        bind_index,
        pose
    );
}

Skin* Skin::create() {
    return (Skin*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Skin")()
         );
}

void Skin::init_method_bindings() {
    method_bindings.mb_add_bind =
        api->rebel_method_bind_get_method(
            "Skin",
            "add_bind"
        );
    method_bindings.mb_clear_binds =
        api->rebel_method_bind_get_method(
            "Skin",
            "clear_binds"
        );
    method_bindings.mb_get_bind_bone =
        api->rebel_method_bind_get_method(
            "Skin",
            "get_bind_bone"
        );
    method_bindings.mb_get_bind_count =
        api->rebel_method_bind_get_method(
            "Skin",
            "get_bind_count"
        );
    method_bindings.mb_get_bind_name =
        api->rebel_method_bind_get_method(
            "Skin",
            "get_bind_name"
        );
    method_bindings.mb_get_bind_pose =
        api->rebel_method_bind_get_method(
            "Skin",
            "get_bind_pose"
        );
    method_bindings.mb_set_bind_bone =
        api->rebel_method_bind_get_method(
            "Skin",
            "set_bind_bone"
        );
    method_bindings.mb_set_bind_count =
        api->rebel_method_bind_get_method(
            "Skin",
            "set_bind_count"
        );
    method_bindings.mb_set_bind_name =
        api->rebel_method_bind_get_method(
            "Skin",
            "set_bind_name"
        );
    method_bindings.mb_set_bind_pose =
        api->rebel_method_bind_get_method(
            "Skin",
            "set_bind_pose"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Skin");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Skin::MethodBindings Skin::method_bindings = {};
void* Skin::class_tag = nullptr;
} // namespace Rebel
