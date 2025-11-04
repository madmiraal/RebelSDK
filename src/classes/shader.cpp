// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/shader.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String Shader::get_code() const {
    return rebel_icall_string(
        method_bindings.mb_get_code,
        (const Object*)this
    );
}

String Shader::get_custom_defines() const {
    return rebel_icall_string(
        method_bindings.mb_get_custom_defines,
        (const Object*)this
    );
}

Ref<Texture> Shader::get_default_texture_param(const String param) const {
    return Ref<Texture>::create_ref(rebel_icall_object_string(
        method_bindings.mb_get_default_texture_param,
        (const Object*)this,
        param
    ));
}

Shader::Mode Shader::get_mode() const {
    return (Shader::Mode)rebel_icall_int(
        method_bindings.mb_get_mode,
        (const Object*)this
    );
}

bool Shader::has_param(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_param,
        (const Object*)this,
        name
    );
}

void Shader::set_code(const String code) {
    rebel_icall_void_string(
        method_bindings.mb_set_code,
        (const Object*)this,
        code
    );
}

void Shader::set_custom_defines(const String custom_defines) {
    rebel_icall_void_string(
        method_bindings.mb_set_custom_defines,
        (const Object*)this,
        custom_defines
    );
}

void Shader::set_default_texture_param(const String param, const Ref<Texture> texture) {
    rebel_icall_void_string_object(
        method_bindings.mb_set_default_texture_param,
        (const Object*)this,
        param,
        texture.ptr()
    );
}

Shader* Shader::create() {
    return (Shader*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Shader")()
         );
}

void Shader::init_method_bindings() {
    method_bindings.mb_get_code =
        api->rebel_method_bind_get_method(
            "Shader",
            "get_code"
        );
    method_bindings.mb_get_custom_defines =
        api->rebel_method_bind_get_method(
            "Shader",
            "get_custom_defines"
        );
    method_bindings.mb_get_default_texture_param =
        api->rebel_method_bind_get_method(
            "Shader",
            "get_default_texture_param"
        );
    method_bindings.mb_get_mode =
        api->rebel_method_bind_get_method(
            "Shader",
            "get_mode"
        );
    method_bindings.mb_has_param =
        api->rebel_method_bind_get_method(
            "Shader",
            "has_param"
        );
    method_bindings.mb_set_code =
        api->rebel_method_bind_get_method(
            "Shader",
            "set_code"
        );
    method_bindings.mb_set_custom_defines =
        api->rebel_method_bind_get_method(
            "Shader",
            "set_custom_defines"
        );
    method_bindings.mb_set_default_texture_param =
        api->rebel_method_bind_get_method(
            "Shader",
            "set_default_texture_param"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Shader");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Shader::MethodBindings Shader::method_bindings = {};
void* Shader::class_tag = nullptr;
} // namespace Rebel
