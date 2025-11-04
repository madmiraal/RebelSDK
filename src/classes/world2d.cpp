// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/world2d.h"

#include "classes/icalls.h"
#include "classes/physics2ddirectspacestate.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
RID World2D::get_canvas() {
    return rebel_icall_rid(
        method_bindings.mb_get_canvas,
        (const Object*)this
    );
}

Physics2DDirectSpaceState* World2D::get_direct_space_state() {
    return (Physics2DDirectSpaceState*)rebel_icall_object(
        method_bindings.mb_get_direct_space_state,
        (const Object*)this
    );
}

RID World2D::get_space() {
    return rebel_icall_rid(
        method_bindings.mb_get_space,
        (const Object*)this
    );
}

World2D* World2D::create() {
    return (World2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"World2D")()
         );
}

void World2D::init_method_bindings() {
    method_bindings.mb_get_canvas =
        api->rebel_method_bind_get_method(
            "World2D",
            "get_canvas"
        );
    method_bindings.mb_get_direct_space_state =
        api->rebel_method_bind_get_method(
            "World2D",
            "get_direct_space_state"
        );
    method_bindings.mb_get_space =
        api->rebel_method_bind_get_method(
            "World2D",
            "get_space"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "World2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

World2D::MethodBindings World2D::method_bindings = {};
void* World2D::class_tag = nullptr;
} // namespace Rebel
