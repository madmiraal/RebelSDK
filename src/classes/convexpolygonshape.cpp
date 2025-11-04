// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/convexpolygonshape.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
PoolVector3Array ConvexPolygonShape::get_points() const {
    return rebel_icall_poolvector3array(
        method_bindings.mb_get_points,
        (const Object*)this
    );
}

void ConvexPolygonShape::set_points(const PoolVector3Array points) {
    rebel_icall_void_poolvector3array(
        method_bindings.mb_set_points,
        (const Object*)this,
        points
    );
}

ConvexPolygonShape* ConvexPolygonShape::create() {
    return (ConvexPolygonShape*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ConvexPolygonShape")()
         );
}

void ConvexPolygonShape::init_method_bindings() {
    method_bindings.mb_get_points =
        api->rebel_method_bind_get_method(
            "ConvexPolygonShape",
            "get_points"
        );
    method_bindings.mb_set_points =
        api->rebel_method_bind_get_method(
            "ConvexPolygonShape",
            "set_points"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ConvexPolygonShape");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ConvexPolygonShape::MethodBindings ConvexPolygonShape::method_bindings = {};
void* ConvexPolygonShape::class_tag = nullptr;
} // namespace Rebel
