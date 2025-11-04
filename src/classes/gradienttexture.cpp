// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/gradienttexture.h"

#include "classes/gradient.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void GradientTexture::_update() {
    rebel_icall_void(
        method_bindings.mb__update,
        (const Object*)this
    );
}

Ref<Gradient> GradientTexture::get_gradient() const {
    return Ref<Gradient>::create_ref(rebel_icall_object(
        method_bindings.mb_get_gradient,
        (const Object*)this
    ));
}

void GradientTexture::set_gradient(const Ref<Gradient> gradient) {
    rebel_icall_void_object(
        method_bindings.mb_set_gradient,
        (const Object*)this,
        gradient.ptr()
    );
}

void GradientTexture::set_width(const int64_t width) {
    rebel_icall_void_int(
        method_bindings.mb_set_width,
        (const Object*)this,
        width
    );
}

GradientTexture* GradientTexture::create() {
    return (GradientTexture*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GradientTexture")()
         );
}

void GradientTexture::init_method_bindings() {
    method_bindings.mb__update =
        api->rebel_method_bind_get_method(
            "GradientTexture",
            "_update"
        );
    method_bindings.mb_get_gradient =
        api->rebel_method_bind_get_method(
            "GradientTexture",
            "get_gradient"
        );
    method_bindings.mb_set_gradient =
        api->rebel_method_bind_get_method(
            "GradientTexture",
            "set_gradient"
        );
    method_bindings.mb_set_width =
        api->rebel_method_bind_get_method(
            "GradientTexture",
            "set_width"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GradientTexture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GradientTexture::MethodBindings GradientTexture::method_bindings = {};
void* GradientTexture::class_tag = nullptr;
} // namespace Rebel
