// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/navigation2d.h"

#include "classes/icalls.h"
#include "classes/navigationpolygon.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Vector2 Navigation2D::get_closest_point(const Vector2 to_point) {
    return rebel_icall_vector2_vector2(
        method_bindings.mb_get_closest_point,
        (const Object*)this,
        to_point
    );
}

Object* Navigation2D::get_closest_point_owner(const Vector2 to_point) {
    return (Object*)rebel_icall_object_vector2(
        method_bindings.mb_get_closest_point_owner,
        (const Object*)this,
        to_point
    );
}

PoolVector2Array Navigation2D::get_simple_path(const Vector2 start, const Vector2 end, const bool optimize) {
    return rebel_icall_poolvector2array_vector2_vector2_bool(
        method_bindings.mb_get_simple_path,
        (const Object*)this,
        start,
        end,
        optimize
    );
}

int64_t Navigation2D::navpoly_add(const Ref<NavigationPolygon> mesh, const Transform2D xform, const Object* owner) {
    return rebel_icall_int_object_transform2d_object(
        method_bindings.mb_navpoly_add,
        (const Object*)this,
        mesh.ptr(),
        xform,
        owner
    );
}

void Navigation2D::navpoly_remove(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb_navpoly_remove,
        (const Object*)this,
        id
    );
}

void Navigation2D::navpoly_set_transform(const int64_t id, const Transform2D xform) {
    rebel_icall_void_int_transform2d(
        method_bindings.mb_navpoly_set_transform,
        (const Object*)this,
        id,
        xform
    );
}

Navigation2D* Navigation2D::create() {
    return (Navigation2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Navigation2D")()
         );
}

void Navigation2D::init_method_bindings() {
    method_bindings.mb_get_closest_point =
        api->rebel_method_bind_get_method(
            "Navigation2D",
            "get_closest_point"
        );
    method_bindings.mb_get_closest_point_owner =
        api->rebel_method_bind_get_method(
            "Navigation2D",
            "get_closest_point_owner"
        );
    method_bindings.mb_get_simple_path =
        api->rebel_method_bind_get_method(
            "Navigation2D",
            "get_simple_path"
        );
    method_bindings.mb_navpoly_add =
        api->rebel_method_bind_get_method(
            "Navigation2D",
            "navpoly_add"
        );
    method_bindings.mb_navpoly_remove =
        api->rebel_method_bind_get_method(
            "Navigation2D",
            "navpoly_remove"
        );
    method_bindings.mb_navpoly_set_transform =
        api->rebel_method_bind_get_method(
            "Navigation2D",
            "navpoly_set_transform"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Navigation2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Navigation2D::MethodBindings Navigation2D::method_bindings = {};
void* Navigation2D::class_tag = nullptr;
} // namespace Rebel
