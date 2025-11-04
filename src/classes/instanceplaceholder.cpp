// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/instanceplaceholder.h"

#include "classes/icalls.h"
#include "classes/node.h"
#include "classes/packedscene.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Node* InstancePlaceholder::create_instance(const bool replace, const Ref<PackedScene> custom_scene) {
    return (Node*)rebel_icall_object_bool_object(
        method_bindings.mb_create_instance,
        (const Object*)this,
        replace,
        custom_scene.ptr()
    );
}

String InstancePlaceholder::get_instance_path() const {
    return rebel_icall_string(
        method_bindings.mb_get_instance_path,
        (const Object*)this
    );
}

Dictionary InstancePlaceholder::get_stored_values(const bool with_order) {
    return rebel_icall_dictionary_bool(
        method_bindings.mb_get_stored_values,
        (const Object*)this,
        with_order
    );
}

void InstancePlaceholder::replace_by_instance(const Ref<PackedScene> custom_scene) {
    rebel_icall_void_object(
        method_bindings.mb_replace_by_instance,
        (const Object*)this,
        custom_scene.ptr()
    );
}

void InstancePlaceholder::init_method_bindings() {
    method_bindings.mb_create_instance =
        api->rebel_method_bind_get_method(
            "InstancePlaceholder",
            "create_instance"
        );
    method_bindings.mb_get_instance_path =
        api->rebel_method_bind_get_method(
            "InstancePlaceholder",
            "get_instance_path"
        );
    method_bindings.mb_get_stored_values =
        api->rebel_method_bind_get_method(
            "InstancePlaceholder",
            "get_stored_values"
        );
    method_bindings.mb_replace_by_instance =
        api->rebel_method_bind_get_method(
            "InstancePlaceholder",
            "replace_by_instance"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "InstancePlaceholder");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

InstancePlaceholder::MethodBindings InstancePlaceholder::method_bindings = {};
void* InstancePlaceholder::class_tag = nullptr;
} // namespace Rebel
