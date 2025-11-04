// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/convexpolygonshape2d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
PoolVector2Array ConvexPolygonShape2D::get_points() const {
    return rebel_icall_poolvector2array(
        method_bindings.mb_get_points,
        (const Object*)this
    );
}

void ConvexPolygonShape2D::set_point_cloud(const PoolVector2Array point_cloud) {
    rebel_icall_void_poolvector2array(
        method_bindings.mb_set_point_cloud,
        (const Object*)this,
        point_cloud
    );
}

void ConvexPolygonShape2D::set_points(const PoolVector2Array points) {
    rebel_icall_void_poolvector2array(
        method_bindings.mb_set_points,
        (const Object*)this,
        points
    );
}

ConvexPolygonShape2D* ConvexPolygonShape2D::create() {
    return (ConvexPolygonShape2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ConvexPolygonShape2D")()
         );
}

void ConvexPolygonShape2D::init_method_bindings() {
    method_bindings.mb_get_points =
        api->rebel_method_bind_get_method(
            "ConvexPolygonShape2D",
            "get_points"
        );
    method_bindings.mb_set_point_cloud =
        api->rebel_method_bind_get_method(
            "ConvexPolygonShape2D",
            "set_point_cloud"
        );
    method_bindings.mb_set_points =
        api->rebel_method_bind_get_method(
            "ConvexPolygonShape2D",
            "set_points"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ConvexPolygonShape2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ConvexPolygonShape2D::MethodBindings ConvexPolygonShape2D::method_bindings = {};
void* ConvexPolygonShape2D::class_tag = nullptr;
} // namespace Rebel
