// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/material.h"

#include "classes/icalls.h"
#include "classes/material.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<Material> Material::get_next_pass() const {
    return Ref<Material>::create_ref(rebel_icall_object(
        method_bindings.mb_get_next_pass,
        (const Object*)this
    ));
}

int64_t Material::get_render_priority() const {
    return rebel_icall_int(
        method_bindings.mb_get_render_priority,
        (const Object*)this
    );
}

void Material::set_next_pass(const Ref<Material> next_pass) {
    rebel_icall_void_object(
        method_bindings.mb_set_next_pass,
        (const Object*)this,
        next_pass.ptr()
    );
}

void Material::set_render_priority(const int64_t priority) {
    rebel_icall_void_int(
        method_bindings.mb_set_render_priority,
        (const Object*)this,
        priority
    );
}

void Material::init_method_bindings() {
    method_bindings.mb_get_next_pass =
        api->rebel_method_bind_get_method(
            "Material",
            "get_next_pass"
        );
    method_bindings.mb_get_render_priority =
        api->rebel_method_bind_get_method(
            "Material",
            "get_render_priority"
        );
    method_bindings.mb_set_next_pass =
        api->rebel_method_bind_get_method(
            "Material",
            "set_next_pass"
        );
    method_bindings.mb_set_render_priority =
        api->rebel_method_bind_get_method(
            "Material",
            "set_render_priority"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Material");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Material::MethodBindings Material::method_bindings = {};
void* Material::class_tag = nullptr;
} // namespace Rebel
