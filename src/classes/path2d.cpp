// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/path2d.h"

#include "classes/curve2d.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Path2D::_curve_changed() {
    rebel_icall_void(
        method_bindings.mb__curve_changed,
        (const Object*)this
    );
}

Ref<Curve2D> Path2D::get_curve() const {
    return Ref<Curve2D>::create_ref(rebel_icall_object(
        method_bindings.mb_get_curve,
        (const Object*)this
    ));
}

void Path2D::set_curve(const Ref<Curve2D> curve) {
    rebel_icall_void_object(
        method_bindings.mb_set_curve,
        (const Object*)this,
        curve.ptr()
    );
}

Path2D* Path2D::create() {
    return (Path2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Path2D")()
         );
}

void Path2D::init_method_bindings() {
    method_bindings.mb__curve_changed =
        api->rebel_method_bind_get_method(
            "Path2D",
            "_curve_changed"
        );
    method_bindings.mb_get_curve =
        api->rebel_method_bind_get_method(
            "Path2D",
            "get_curve"
        );
    method_bindings.mb_set_curve =
        api->rebel_method_bind_get_method(
            "Path2D",
            "set_curve"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Path2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Path2D::MethodBindings Path2D::method_bindings = {};
void* Path2D::class_tag = nullptr;
} // namespace Rebel
