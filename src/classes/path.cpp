// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/path.h"

#include "classes/curve3d.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Path::_curve_changed() {
    rebel_icall_void(
        method_bindings.mb__curve_changed,
        (const Object*)this
    );
}

Ref<Curve3D> Path::get_curve() const {
    return Ref<Curve3D>::create_ref(rebel_icall_object(
        method_bindings.mb_get_curve,
        (const Object*)this
    ));
}

void Path::set_curve(const Ref<Curve3D> curve) {
    rebel_icall_void_object(
        method_bindings.mb_set_curve,
        (const Object*)this,
        curve.ptr()
    );
}

Path* Path::create() {
    return (Path*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Path")()
         );
}

void Path::init_method_bindings() {
    method_bindings.mb__curve_changed =
        api->rebel_method_bind_get_method(
            "Path",
            "_curve_changed"
        );
    method_bindings.mb_get_curve =
        api->rebel_method_bind_get_method(
            "Path",
            "get_curve"
        );
    method_bindings.mb_set_curve =
        api->rebel_method_bind_get_method(
            "Path",
            "set_curve"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Path");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Path::MethodBindings Path::method_bindings = {};
void* Path::class_tag = nullptr;
} // namespace Rebel
