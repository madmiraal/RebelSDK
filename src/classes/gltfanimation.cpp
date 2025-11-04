// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/gltfanimation.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool GLTFAnimation::get_loop() const {
    return rebel_icall_bool(
        method_bindings.mb_get_loop,
        (const Object*)this
    );
}

void GLTFAnimation::set_loop(const bool loop) {
    rebel_icall_void_bool(
        method_bindings.mb_set_loop,
        (const Object*)this,
        loop
    );
}

GLTFAnimation* GLTFAnimation::create() {
    return (GLTFAnimation*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GLTFAnimation")()
         );
}

void GLTFAnimation::init_method_bindings() {
    method_bindings.mb_get_loop =
        api->rebel_method_bind_get_method(
            "GLTFAnimation",
            "get_loop"
        );
    method_bindings.mb_set_loop =
        api->rebel_method_bind_get_method(
            "GLTFAnimation",
            "set_loop"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GLTFAnimation");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GLTFAnimation::MethodBindings GLTFAnimation::method_bindings = {};
void* GLTFAnimation::class_tag = nullptr;
} // namespace Rebel
