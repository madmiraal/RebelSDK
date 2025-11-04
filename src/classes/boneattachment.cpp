// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/boneattachment.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String BoneAttachment::get_bone_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_bone_name,
        (const Object*)this
    );
}

void BoneAttachment::set_bone_name(const String bone_name) {
    rebel_icall_void_string(
        method_bindings.mb_set_bone_name,
        (const Object*)this,
        bone_name
    );
}

BoneAttachment* BoneAttachment::create() {
    return (BoneAttachment*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"BoneAttachment")()
         );
}

void BoneAttachment::init_method_bindings() {
    method_bindings.mb_get_bone_name =
        api->rebel_method_bind_get_method(
            "BoneAttachment",
            "get_bone_name"
        );
    method_bindings.mb_set_bone_name =
        api->rebel_method_bind_get_method(
            "BoneAttachment",
            "set_bone_name"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "BoneAttachment");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

BoneAttachment::MethodBindings BoneAttachment::method_bindings = {};
void* BoneAttachment::class_tag = nullptr;
} // namespace Rebel
