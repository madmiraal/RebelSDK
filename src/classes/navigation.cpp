// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/navigation.h"

#include "classes/icalls.h"
#include "classes/navigationmesh.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Vector3 Navigation::get_closest_point(const Vector3 to_point) {
    return rebel_icall_vector3_vector3(
        method_bindings.mb_get_closest_point,
        (const Object*)this,
        to_point
    );
}

Vector3 Navigation::get_closest_point_normal(const Vector3 to_point) {
    return rebel_icall_vector3_vector3(
        method_bindings.mb_get_closest_point_normal,
        (const Object*)this,
        to_point
    );
}

Object* Navigation::get_closest_point_owner(const Vector3 to_point) {
    return (Object*)rebel_icall_object_vector3(
        method_bindings.mb_get_closest_point_owner,
        (const Object*)this,
        to_point
    );
}

Vector3 Navigation::get_closest_point_to_segment(const Vector3 start, const Vector3 end, const bool use_collision) {
    return rebel_icall_vector3_vector3_vector3_bool(
        method_bindings.mb_get_closest_point_to_segment,
        (const Object*)this,
        start,
        end,
        use_collision
    );
}

PoolVector3Array Navigation::get_simple_path(const Vector3 start, const Vector3 end, const bool optimize) {
    return rebel_icall_poolvector3array_vector3_vector3_bool(
        method_bindings.mb_get_simple_path,
        (const Object*)this,
        start,
        end,
        optimize
    );
}

Vector3 Navigation::get_up_vector() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_up_vector,
        (const Object*)this
    );
}

int64_t Navigation::navmesh_add(const Ref<NavigationMesh> mesh, const Transform xform, const Object* owner) {
    return rebel_icall_int_object_transform_object(
        method_bindings.mb_navmesh_add,
        (const Object*)this,
        mesh.ptr(),
        xform,
        owner
    );
}

void Navigation::navmesh_remove(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb_navmesh_remove,
        (const Object*)this,
        id
    );
}

void Navigation::navmesh_set_transform(const int64_t id, const Transform xform) {
    rebel_icall_void_int_transform(
        method_bindings.mb_navmesh_set_transform,
        (const Object*)this,
        id,
        xform
    );
}

void Navigation::set_up_vector(const Vector3 up) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_up_vector,
        (const Object*)this,
        up
    );
}

Navigation* Navigation::create() {
    return (Navigation*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Navigation")()
         );
}

void Navigation::init_method_bindings() {
    method_bindings.mb_get_closest_point =
        api->rebel_method_bind_get_method(
            "Navigation",
            "get_closest_point"
        );
    method_bindings.mb_get_closest_point_normal =
        api->rebel_method_bind_get_method(
            "Navigation",
            "get_closest_point_normal"
        );
    method_bindings.mb_get_closest_point_owner =
        api->rebel_method_bind_get_method(
            "Navigation",
            "get_closest_point_owner"
        );
    method_bindings.mb_get_closest_point_to_segment =
        api->rebel_method_bind_get_method(
            "Navigation",
            "get_closest_point_to_segment"
        );
    method_bindings.mb_get_simple_path =
        api->rebel_method_bind_get_method(
            "Navigation",
            "get_simple_path"
        );
    method_bindings.mb_get_up_vector =
        api->rebel_method_bind_get_method(
            "Navigation",
            "get_up_vector"
        );
    method_bindings.mb_navmesh_add =
        api->rebel_method_bind_get_method(
            "Navigation",
            "navmesh_add"
        );
    method_bindings.mb_navmesh_remove =
        api->rebel_method_bind_get_method(
            "Navigation",
            "navmesh_remove"
        );
    method_bindings.mb_navmesh_set_transform =
        api->rebel_method_bind_get_method(
            "Navigation",
            "navmesh_set_transform"
        );
    method_bindings.mb_set_up_vector =
        api->rebel_method_bind_get_method(
            "Navigation",
            "set_up_vector"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Navigation");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Navigation::MethodBindings Navigation::method_bindings = {};
void* Navigation::class_tag = nullptr;
} // namespace Rebel
