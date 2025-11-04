// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/shape.h"

#include "classes/arraymesh.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<ArrayMesh> Shape::get_debug_mesh() {
    return Ref<ArrayMesh>::create_ref(rebel_icall_object(
        method_bindings.mb_get_debug_mesh,
        (const Object*)this
    ));
}

real_t Shape::get_margin() const {
    return rebel_icall_float(
        method_bindings.mb_get_margin,
        (const Object*)this
    );
}

void Shape::set_margin(const real_t margin) {
    rebel_icall_void_float(
        method_bindings.mb_set_margin,
        (const Object*)this,
        margin
    );
}

void Shape::init_method_bindings() {
    method_bindings.mb_get_debug_mesh =
        api->rebel_method_bind_get_method(
            "Shape",
            "get_debug_mesh"
        );
    method_bindings.mb_get_margin =
        api->rebel_method_bind_get_method(
            "Shape",
            "get_margin"
        );
    method_bindings.mb_set_margin =
        api->rebel_method_bind_get_method(
            "Shape",
            "set_margin"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Shape");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Shape::MethodBindings Shape::method_bindings = {};
void* Shape::class_tag = nullptr;
} // namespace Rebel
