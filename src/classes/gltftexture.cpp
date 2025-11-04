// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/gltftexture.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t GLTFTexture::get_src_image() const {
    return rebel_icall_int(
        method_bindings.mb_get_src_image,
        (const Object*)this
    );
}

void GLTFTexture::set_src_image(const int64_t src_image) {
    rebel_icall_void_int(
        method_bindings.mb_set_src_image,
        (const Object*)this,
        src_image
    );
}

GLTFTexture* GLTFTexture::create() {
    return (GLTFTexture*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GLTFTexture")()
         );
}

void GLTFTexture::init_method_bindings() {
    method_bindings.mb_get_src_image =
        api->rebel_method_bind_get_method(
            "GLTFTexture",
            "get_src_image"
        );
    method_bindings.mb_set_src_image =
        api->rebel_method_bind_get_method(
            "GLTFTexture",
            "set_src_image"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GLTFTexture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GLTFTexture::MethodBindings GLTFTexture::method_bindings = {};
void* GLTFTexture::class_tag = nullptr;
} // namespace Rebel
