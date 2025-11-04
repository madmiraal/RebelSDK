// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodetextureuniform.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
VisualShaderNodeTextureUniform::ColorDefault VisualShaderNodeTextureUniform::get_color_default() const {
    return (VisualShaderNodeTextureUniform::ColorDefault)rebel_icall_int(
        method_bindings.mb_get_color_default,
        (const Object*)this
    );
}

VisualShaderNodeTextureUniform::TextureType VisualShaderNodeTextureUniform::get_texture_type() const {
    return (VisualShaderNodeTextureUniform::TextureType)rebel_icall_int(
        method_bindings.mb_get_texture_type,
        (const Object*)this
    );
}

void VisualShaderNodeTextureUniform::set_color_default(const int64_t type) {
    rebel_icall_void_int(
        method_bindings.mb_set_color_default,
        (const Object*)this,
        type
    );
}

void VisualShaderNodeTextureUniform::set_texture_type(const int64_t type) {
    rebel_icall_void_int(
        method_bindings.mb_set_texture_type,
        (const Object*)this,
        type
    );
}

VisualShaderNodeTextureUniform* VisualShaderNodeTextureUniform::create() {
    return (VisualShaderNodeTextureUniform*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeTextureUniform")()
         );
}

void VisualShaderNodeTextureUniform::init_method_bindings() {
    method_bindings.mb_get_color_default =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeTextureUniform",
            "get_color_default"
        );
    method_bindings.mb_get_texture_type =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeTextureUniform",
            "get_texture_type"
        );
    method_bindings.mb_set_color_default =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeTextureUniform",
            "set_color_default"
        );
    method_bindings.mb_set_texture_type =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeTextureUniform",
            "set_texture_type"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeTextureUniform");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeTextureUniform::MethodBindings VisualShaderNodeTextureUniform::method_bindings = {};
void* VisualShaderNodeTextureUniform::class_tag = nullptr;
} // namespace Rebel
