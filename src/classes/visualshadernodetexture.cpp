// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodetexture.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
VisualShaderNodeTexture::Source VisualShaderNodeTexture::get_source() const {
    return (VisualShaderNodeTexture::Source)rebel_icall_int(
        method_bindings.mb_get_source,
        (const Object*)this
    );
}

Ref<Texture> VisualShaderNodeTexture::get_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_texture,
        (const Object*)this
    ));
}

VisualShaderNodeTexture::TextureType VisualShaderNodeTexture::get_texture_type() const {
    return (VisualShaderNodeTexture::TextureType)rebel_icall_int(
        method_bindings.mb_get_texture_type,
        (const Object*)this
    );
}

void VisualShaderNodeTexture::set_source(const int64_t value) {
    rebel_icall_void_int(
        method_bindings.mb_set_source,
        (const Object*)this,
        value
    );
}

void VisualShaderNodeTexture::set_texture(const Ref<Texture> value) {
    rebel_icall_void_object(
        method_bindings.mb_set_texture,
        (const Object*)this,
        value.ptr()
    );
}

void VisualShaderNodeTexture::set_texture_type(const int64_t value) {
    rebel_icall_void_int(
        method_bindings.mb_set_texture_type,
        (const Object*)this,
        value
    );
}

VisualShaderNodeTexture* VisualShaderNodeTexture::create() {
    return (VisualShaderNodeTexture*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeTexture")()
         );
}

void VisualShaderNodeTexture::init_method_bindings() {
    method_bindings.mb_get_source =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeTexture",
            "get_source"
        );
    method_bindings.mb_get_texture =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeTexture",
            "get_texture"
        );
    method_bindings.mb_get_texture_type =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeTexture",
            "get_texture_type"
        );
    method_bindings.mb_set_source =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeTexture",
            "set_source"
        );
    method_bindings.mb_set_texture =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeTexture",
            "set_texture"
        );
    method_bindings.mb_set_texture_type =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeTexture",
            "set_texture_type"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeTexture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeTexture::MethodBindings VisualShaderNodeTexture::method_bindings = {};
void* VisualShaderNodeTexture::class_tag = nullptr;
} // namespace Rebel
