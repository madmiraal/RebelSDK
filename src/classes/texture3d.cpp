// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/texture3d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Texture3D::create(const int64_t width, const int64_t height, const int64_t depth, const int64_t format, const int64_t flags) {
    rebel_icall_void_int_int_int_int_int(
        method_bindings.mb_create,
        (const Object*)this,
        width,
        height,
        depth,
        format,
        flags
    );
}

Texture3D* Texture3D::create() {
    return (Texture3D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Texture3D")()
         );
}

void Texture3D::init_method_bindings() {
    method_bindings.mb_create =
        api->rebel_method_bind_get_method(
            "Texture3D",
            "create"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Texture3D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Texture3D::MethodBindings Texture3D::method_bindings = {};
void* Texture3D::class_tag = nullptr;
} // namespace Rebel
