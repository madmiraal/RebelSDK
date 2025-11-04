// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/csgprimitive.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool CSGPrimitive::is_inverting_faces() {
    return rebel_icall_bool(
        method_bindings.mb_is_inverting_faces,
        (const Object*)this
    );
}

void CSGPrimitive::set_invert_faces(const bool invert_faces) {
    rebel_icall_void_bool(
        method_bindings.mb_set_invert_faces,
        (const Object*)this,
        invert_faces
    );
}

void CSGPrimitive::init_method_bindings() {
    method_bindings.mb_is_inverting_faces =
        api->rebel_method_bind_get_method(
            "CSGPrimitive",
            "is_inverting_faces"
        );
    method_bindings.mb_set_invert_faces =
        api->rebel_method_bind_get_method(
            "CSGPrimitive",
            "set_invert_faces"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CSGPrimitive");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CSGPrimitive::MethodBindings CSGPrimitive::method_bindings = {};
void* CSGPrimitive::class_tag = nullptr;
} // namespace Rebel
