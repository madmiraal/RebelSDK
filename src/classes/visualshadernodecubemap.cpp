// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodecubemap.h"

#include "classes/cubemap.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<CubeMap> VisualShaderNodeCubeMap::get_cube_map() const {
    return Ref<CubeMap>::create_ref(rebel_icall_object(
        method_bindings.mb_get_cube_map,
        (const Object*)this
    ));
}

VisualShaderNodeCubeMap::Source VisualShaderNodeCubeMap::get_source() const {
    return (VisualShaderNodeCubeMap::Source)rebel_icall_int(
        method_bindings.mb_get_source,
        (const Object*)this
    );
}

VisualShaderNodeCubeMap::TextureType VisualShaderNodeCubeMap::get_texture_type() const {
    return (VisualShaderNodeCubeMap::TextureType)rebel_icall_int(
        method_bindings.mb_get_texture_type,
        (const Object*)this
    );
}

void VisualShaderNodeCubeMap::set_cube_map(const Ref<CubeMap> value) {
    rebel_icall_void_object(
        method_bindings.mb_set_cube_map,
        (const Object*)this,
        value.ptr()
    );
}

void VisualShaderNodeCubeMap::set_source(const int64_t value) {
    rebel_icall_void_int(
        method_bindings.mb_set_source,
        (const Object*)this,
        value
    );
}

void VisualShaderNodeCubeMap::set_texture_type(const int64_t value) {
    rebel_icall_void_int(
        method_bindings.mb_set_texture_type,
        (const Object*)this,
        value
    );
}

VisualShaderNodeCubeMap* VisualShaderNodeCubeMap::create() {
    return (VisualShaderNodeCubeMap*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeCubeMap")()
         );
}

void VisualShaderNodeCubeMap::init_method_bindings() {
    method_bindings.mb_get_cube_map =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCubeMap",
            "get_cube_map"
        );
    method_bindings.mb_get_source =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCubeMap",
            "get_source"
        );
    method_bindings.mb_get_texture_type =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCubeMap",
            "get_texture_type"
        );
    method_bindings.mb_set_cube_map =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCubeMap",
            "set_cube_map"
        );
    method_bindings.mb_set_source =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCubeMap",
            "set_source"
        );
    method_bindings.mb_set_texture_type =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCubeMap",
            "set_texture_type"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeCubeMap");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeCubeMap::MethodBindings VisualShaderNodeCubeMap::method_bindings = {};
void* VisualShaderNodeCubeMap::class_tag = nullptr;
} // namespace Rebel
