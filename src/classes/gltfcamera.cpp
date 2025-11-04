// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/gltfcamera.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t GLTFCamera::get_fov_size() const {
    return rebel_icall_float(
        method_bindings.mb_get_fov_size,
        (const Object*)this
    );
}

bool GLTFCamera::get_perspective() const {
    return rebel_icall_bool(
        method_bindings.mb_get_perspective,
        (const Object*)this
    );
}

real_t GLTFCamera::get_zfar() const {
    return rebel_icall_float(
        method_bindings.mb_get_zfar,
        (const Object*)this
    );
}

real_t GLTFCamera::get_znear() const {
    return rebel_icall_float(
        method_bindings.mb_get_znear,
        (const Object*)this
    );
}

void GLTFCamera::set_fov_size(const real_t fov_size) {
    rebel_icall_void_float(
        method_bindings.mb_set_fov_size,
        (const Object*)this,
        fov_size
    );
}

void GLTFCamera::set_perspective(const bool perspective) {
    rebel_icall_void_bool(
        method_bindings.mb_set_perspective,
        (const Object*)this,
        perspective
    );
}

void GLTFCamera::set_zfar(const real_t zfar) {
    rebel_icall_void_float(
        method_bindings.mb_set_zfar,
        (const Object*)this,
        zfar
    );
}

void GLTFCamera::set_znear(const real_t znear) {
    rebel_icall_void_float(
        method_bindings.mb_set_znear,
        (const Object*)this,
        znear
    );
}

GLTFCamera* GLTFCamera::create() {
    return (GLTFCamera*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GLTFCamera")()
         );
}

void GLTFCamera::init_method_bindings() {
    method_bindings.mb_get_fov_size =
        api->rebel_method_bind_get_method(
            "GLTFCamera",
            "get_fov_size"
        );
    method_bindings.mb_get_perspective =
        api->rebel_method_bind_get_method(
            "GLTFCamera",
            "get_perspective"
        );
    method_bindings.mb_get_zfar =
        api->rebel_method_bind_get_method(
            "GLTFCamera",
            "get_zfar"
        );
    method_bindings.mb_get_znear =
        api->rebel_method_bind_get_method(
            "GLTFCamera",
            "get_znear"
        );
    method_bindings.mb_set_fov_size =
        api->rebel_method_bind_get_method(
            "GLTFCamera",
            "set_fov_size"
        );
    method_bindings.mb_set_perspective =
        api->rebel_method_bind_get_method(
            "GLTFCamera",
            "set_perspective"
        );
    method_bindings.mb_set_zfar =
        api->rebel_method_bind_get_method(
            "GLTFCamera",
            "set_zfar"
        );
    method_bindings.mb_set_znear =
        api->rebel_method_bind_get_method(
            "GLTFCamera",
            "set_znear"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GLTFCamera");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GLTFCamera::MethodBindings GLTFCamera::method_bindings = {};
void* GLTFCamera::class_tag = nullptr;
} // namespace Rebel
