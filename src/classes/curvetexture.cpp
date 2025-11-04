// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/curvetexture.h"

#include "classes/curve.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void CurveTexture::_update() {
    rebel_icall_void(
        method_bindings.mb__update,
        (const Object*)this
    );
}

Ref<Curve> CurveTexture::get_curve() const {
    return Ref<Curve>::create_ref(rebel_icall_object(
        method_bindings.mb_get_curve,
        (const Object*)this
    ));
}

void CurveTexture::set_curve(const Ref<Curve> curve) {
    rebel_icall_void_object(
        method_bindings.mb_set_curve,
        (const Object*)this,
        curve.ptr()
    );
}

void CurveTexture::set_width(const int64_t width) {
    rebel_icall_void_int(
        method_bindings.mb_set_width,
        (const Object*)this,
        width
    );
}

CurveTexture* CurveTexture::create() {
    return (CurveTexture*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CurveTexture")()
         );
}

void CurveTexture::init_method_bindings() {
    method_bindings.mb__update =
        api->rebel_method_bind_get_method(
            "CurveTexture",
            "_update"
        );
    method_bindings.mb_get_curve =
        api->rebel_method_bind_get_method(
            "CurveTexture",
            "get_curve"
        );
    method_bindings.mb_set_curve =
        api->rebel_method_bind_get_method(
            "CurveTexture",
            "set_curve"
        );
    method_bindings.mb_set_width =
        api->rebel_method_bind_get_method(
            "CurveTexture",
            "set_width"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CurveTexture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CurveTexture::MethodBindings CurveTexture::method_bindings = {};
void* CurveTexture::class_tag = nullptr;
} // namespace Rebel
