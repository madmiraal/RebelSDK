// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/shadermaterial.h"

#include "classes/icalls.h"
#include "classes/shader.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ShaderMaterial::_shader_changed() {
    rebel_icall_void(
        method_bindings.mb__shader_changed,
        (const Object*)this
    );
}

Ref<Shader> ShaderMaterial::get_shader() const {
    return Ref<Shader>::create_ref(rebel_icall_object(
        method_bindings.mb_get_shader,
        (const Object*)this
    ));
}

Variant ShaderMaterial::get_shader_param(const String param) const {
    return rebel_icall_variant_string(
        method_bindings.mb_get_shader_param,
        (const Object*)this,
        param
    );
}

bool ShaderMaterial::property_can_revert(const String name) {
    return rebel_icall_bool_string(
        method_bindings.mb_property_can_revert,
        (const Object*)this,
        name
    );
}

Variant ShaderMaterial::property_get_revert(const String name) {
    return rebel_icall_variant_string(
        method_bindings.mb_property_get_revert,
        (const Object*)this,
        name
    );
}

void ShaderMaterial::set_shader(const Ref<Shader> shader) {
    rebel_icall_void_object(
        method_bindings.mb_set_shader,
        (const Object*)this,
        shader.ptr()
    );
}

void ShaderMaterial::set_shader_param(const String param, const Variant value) {
    rebel_icall_void_string_variant(
        method_bindings.mb_set_shader_param,
        (const Object*)this,
        param,
        value
    );
}

ShaderMaterial* ShaderMaterial::create() {
    return (ShaderMaterial*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ShaderMaterial")()
         );
}

void ShaderMaterial::init_method_bindings() {
    method_bindings.mb__shader_changed =
        api->rebel_method_bind_get_method(
            "ShaderMaterial",
            "_shader_changed"
        );
    method_bindings.mb_get_shader =
        api->rebel_method_bind_get_method(
            "ShaderMaterial",
            "get_shader"
        );
    method_bindings.mb_get_shader_param =
        api->rebel_method_bind_get_method(
            "ShaderMaterial",
            "get_shader_param"
        );
    method_bindings.mb_property_can_revert =
        api->rebel_method_bind_get_method(
            "ShaderMaterial",
            "property_can_revert"
        );
    method_bindings.mb_property_get_revert =
        api->rebel_method_bind_get_method(
            "ShaderMaterial",
            "property_get_revert"
        );
    method_bindings.mb_set_shader =
        api->rebel_method_bind_get_method(
            "ShaderMaterial",
            "set_shader"
        );
    method_bindings.mb_set_shader_param =
        api->rebel_method_bind_get_method(
            "ShaderMaterial",
            "set_shader_param"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ShaderMaterial");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ShaderMaterial::MethodBindings ShaderMaterial::method_bindings = {};
void* ShaderMaterial::class_tag = nullptr;
} // namespace Rebel
