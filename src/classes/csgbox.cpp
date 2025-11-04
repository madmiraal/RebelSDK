// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/csgbox.h"

#include "classes/icalls.h"
#include "classes/material.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t CSGBox::get_depth() const {
    return rebel_icall_float(
        method_bindings.mb_get_depth,
        (const Object*)this
    );
}

real_t CSGBox::get_height() const {
    return rebel_icall_float(
        method_bindings.mb_get_height,
        (const Object*)this
    );
}

Ref<Material> CSGBox::get_material() const {
    return Ref<Material>::create_ref(rebel_icall_object(
        method_bindings.mb_get_material,
        (const Object*)this
    ));
}

real_t CSGBox::get_width() const {
    return rebel_icall_float(
        method_bindings.mb_get_width,
        (const Object*)this
    );
}

void CSGBox::set_depth(const real_t depth) {
    rebel_icall_void_float(
        method_bindings.mb_set_depth,
        (const Object*)this,
        depth
    );
}

void CSGBox::set_height(const real_t height) {
    rebel_icall_void_float(
        method_bindings.mb_set_height,
        (const Object*)this,
        height
    );
}

void CSGBox::set_material(const Ref<Material> material) {
    rebel_icall_void_object(
        method_bindings.mb_set_material,
        (const Object*)this,
        material.ptr()
    );
}

void CSGBox::set_width(const real_t width) {
    rebel_icall_void_float(
        method_bindings.mb_set_width,
        (const Object*)this,
        width
    );
}

CSGBox* CSGBox::create() {
    return (CSGBox*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CSGBox")()
         );
}

void CSGBox::init_method_bindings() {
    method_bindings.mb_get_depth =
        api->rebel_method_bind_get_method(
            "CSGBox",
            "get_depth"
        );
    method_bindings.mb_get_height =
        api->rebel_method_bind_get_method(
            "CSGBox",
            "get_height"
        );
    method_bindings.mb_get_material =
        api->rebel_method_bind_get_method(
            "CSGBox",
            "get_material"
        );
    method_bindings.mb_get_width =
        api->rebel_method_bind_get_method(
            "CSGBox",
            "get_width"
        );
    method_bindings.mb_set_depth =
        api->rebel_method_bind_get_method(
            "CSGBox",
            "set_depth"
        );
    method_bindings.mb_set_height =
        api->rebel_method_bind_get_method(
            "CSGBox",
            "set_height"
        );
    method_bindings.mb_set_material =
        api->rebel_method_bind_get_method(
            "CSGBox",
            "set_material"
        );
    method_bindings.mb_set_width =
        api->rebel_method_bind_get_method(
            "CSGBox",
            "set_width"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CSGBox");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CSGBox::MethodBindings CSGBox::method_bindings = {};
void* CSGBox::class_tag = nullptr;
} // namespace Rebel
