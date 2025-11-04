// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/skeleton2d.h"

#include "classes/bone2d.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Skeleton2D::_update_bone_setup() {
    rebel_icall_void(
        method_bindings.mb__update_bone_setup,
        (const Object*)this
    );
}

void Skeleton2D::_update_transform() {
    rebel_icall_void(
        method_bindings.mb__update_transform,
        (const Object*)this
    );
}

Bone2D* Skeleton2D::get_bone(const int64_t idx) {
    return (Bone2D*)rebel_icall_object_int(
        method_bindings.mb_get_bone,
        (const Object*)this,
        idx
    );
}

int64_t Skeleton2D::get_bone_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_bone_count,
        (const Object*)this
    );
}

RID Skeleton2D::get_skeleton() const {
    return rebel_icall_rid(
        method_bindings.mb_get_skeleton,
        (const Object*)this
    );
}

Skeleton2D* Skeleton2D::create() {
    return (Skeleton2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Skeleton2D")()
         );
}

void Skeleton2D::init_method_bindings() {
    method_bindings.mb__update_bone_setup =
        api->rebel_method_bind_get_method(
            "Skeleton2D",
            "_update_bone_setup"
        );
    method_bindings.mb__update_transform =
        api->rebel_method_bind_get_method(
            "Skeleton2D",
            "_update_transform"
        );
    method_bindings.mb_get_bone =
        api->rebel_method_bind_get_method(
            "Skeleton2D",
            "get_bone"
        );
    method_bindings.mb_get_bone_count =
        api->rebel_method_bind_get_method(
            "Skeleton2D",
            "get_bone_count"
        );
    method_bindings.mb_get_skeleton =
        api->rebel_method_bind_get_method(
            "Skeleton2D",
            "get_skeleton"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Skeleton2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Skeleton2D::MethodBindings Skeleton2D::method_bindings = {};
void* Skeleton2D::class_tag = nullptr;
} // namespace Rebel
