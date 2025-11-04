// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/multimeshinstance.h"

#include "classes/icalls.h"
#include "classes/multimesh.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<MultiMesh> MultiMeshInstance::get_multimesh() const {
    return Ref<MultiMesh>::create_ref(rebel_icall_object(
        method_bindings.mb_get_multimesh,
        (const Object*)this
    ));
}

void MultiMeshInstance::set_multimesh(const Ref<MultiMesh> multimesh) {
    rebel_icall_void_object(
        method_bindings.mb_set_multimesh,
        (const Object*)this,
        multimesh.ptr()
    );
}

MultiMeshInstance* MultiMeshInstance::create() {
    return (MultiMeshInstance*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"MultiMeshInstance")()
         );
}

void MultiMeshInstance::init_method_bindings() {
    method_bindings.mb_get_multimesh =
        api->rebel_method_bind_get_method(
            "MultiMeshInstance",
            "get_multimesh"
        );
    method_bindings.mb_set_multimesh =
        api->rebel_method_bind_get_method(
            "MultiMeshInstance",
            "set_multimesh"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "MultiMeshInstance");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

MultiMeshInstance::MethodBindings MultiMeshInstance::method_bindings = {};
void* MultiMeshInstance::class_tag = nullptr;
} // namespace Rebel
