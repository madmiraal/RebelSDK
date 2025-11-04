// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/viewporttexture.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
NodePath ViewportTexture::get_viewport_path_in_scene() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_viewport_path_in_scene,
        (const Object*)this
    );
}

void ViewportTexture::set_viewport_path_in_scene(const NodePath path) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_viewport_path_in_scene,
        (const Object*)this,
        path
    );
}

ViewportTexture* ViewportTexture::create() {
    return (ViewportTexture*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ViewportTexture")()
         );
}

void ViewportTexture::init_method_bindings() {
    method_bindings.mb_get_viewport_path_in_scene =
        api->rebel_method_bind_get_method(
            "ViewportTexture",
            "get_viewport_path_in_scene"
        );
    method_bindings.mb_set_viewport_path_in_scene =
        api->rebel_method_bind_get_method(
            "ViewportTexture",
            "set_viewport_path_in_scene"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ViewportTexture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ViewportTexture::MethodBindings ViewportTexture::method_bindings = {};
void* ViewportTexture::class_tag = nullptr;
} // namespace Rebel
