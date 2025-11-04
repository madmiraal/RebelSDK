// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/gltfspecgloss.h"

#include "classes/icalls.h"
#include "classes/image.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Color GLTFSpecGloss::get_diffuse_factor() {
    return rebel_icall_color(
        method_bindings.mb_get_diffuse_factor,
        (const Object*)this
    );
}

Ref<Image> GLTFSpecGloss::get_diffuse_img() {
    return Ref<Image>::create_ref(rebel_icall_object(
        method_bindings.mb_get_diffuse_img,
        (const Object*)this
    ));
}

real_t GLTFSpecGloss::get_gloss_factor() {
    return rebel_icall_float(
        method_bindings.mb_get_gloss_factor,
        (const Object*)this
    );
}

Ref<Image> GLTFSpecGloss::get_spec_gloss_img() {
    return Ref<Image>::create_ref(rebel_icall_object(
        method_bindings.mb_get_spec_gloss_img,
        (const Object*)this
    ));
}

Color GLTFSpecGloss::get_specular_factor() {
    return rebel_icall_color(
        method_bindings.mb_get_specular_factor,
        (const Object*)this
    );
}

void GLTFSpecGloss::set_diffuse_factor(const Color diffuse_factor) {
    rebel_icall_void_color(
        method_bindings.mb_set_diffuse_factor,
        (const Object*)this,
        diffuse_factor
    );
}

void GLTFSpecGloss::set_diffuse_img(const Ref<Image> diffuse_img) {
    rebel_icall_void_object(
        method_bindings.mb_set_diffuse_img,
        (const Object*)this,
        diffuse_img.ptr()
    );
}

void GLTFSpecGloss::set_gloss_factor(const real_t gloss_factor) {
    rebel_icall_void_float(
        method_bindings.mb_set_gloss_factor,
        (const Object*)this,
        gloss_factor
    );
}

void GLTFSpecGloss::set_spec_gloss_img(const Ref<Image> spec_gloss_img) {
    rebel_icall_void_object(
        method_bindings.mb_set_spec_gloss_img,
        (const Object*)this,
        spec_gloss_img.ptr()
    );
}

void GLTFSpecGloss::set_specular_factor(const Color specular_factor) {
    rebel_icall_void_color(
        method_bindings.mb_set_specular_factor,
        (const Object*)this,
        specular_factor
    );
}

GLTFSpecGloss* GLTFSpecGloss::create() {
    return (GLTFSpecGloss*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GLTFSpecGloss")()
         );
}

void GLTFSpecGloss::init_method_bindings() {
    method_bindings.mb_get_diffuse_factor =
        api->rebel_method_bind_get_method(
            "GLTFSpecGloss",
            "get_diffuse_factor"
        );
    method_bindings.mb_get_diffuse_img =
        api->rebel_method_bind_get_method(
            "GLTFSpecGloss",
            "get_diffuse_img"
        );
    method_bindings.mb_get_gloss_factor =
        api->rebel_method_bind_get_method(
            "GLTFSpecGloss",
            "get_gloss_factor"
        );
    method_bindings.mb_get_spec_gloss_img =
        api->rebel_method_bind_get_method(
            "GLTFSpecGloss",
            "get_spec_gloss_img"
        );
    method_bindings.mb_get_specular_factor =
        api->rebel_method_bind_get_method(
            "GLTFSpecGloss",
            "get_specular_factor"
        );
    method_bindings.mb_set_diffuse_factor =
        api->rebel_method_bind_get_method(
            "GLTFSpecGloss",
            "set_diffuse_factor"
        );
    method_bindings.mb_set_diffuse_img =
        api->rebel_method_bind_get_method(
            "GLTFSpecGloss",
            "set_diffuse_img"
        );
    method_bindings.mb_set_gloss_factor =
        api->rebel_method_bind_get_method(
            "GLTFSpecGloss",
            "set_gloss_factor"
        );
    method_bindings.mb_set_spec_gloss_img =
        api->rebel_method_bind_get_method(
            "GLTFSpecGloss",
            "set_spec_gloss_img"
        );
    method_bindings.mb_set_specular_factor =
        api->rebel_method_bind_get_method(
            "GLTFSpecGloss",
            "set_specular_factor"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GLTFSpecGloss");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GLTFSpecGloss::MethodBindings GLTFSpecGloss::method_bindings = {};
void* GLTFSpecGloss::class_tag = nullptr;
} // namespace Rebel
