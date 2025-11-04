// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/immediategeometry.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ImmediateGeometry::add_sphere(const int64_t lats, const int64_t lons, const real_t radius, const bool add_uv) {
    rebel_icall_void_int_int_float_bool(
        method_bindings.mb_add_sphere,
        (const Object*)this,
        lats,
        lons,
        radius,
        add_uv
    );
}

void ImmediateGeometry::add_vertex(const Vector3 position) {
    rebel_icall_void_vector3(
        method_bindings.mb_add_vertex,
        (const Object*)this,
        position
    );
}

void ImmediateGeometry::begin(const int64_t primitive, const Ref<Texture> texture) {
    rebel_icall_void_int_object(
        method_bindings.mb_begin,
        (const Object*)this,
        primitive,
        texture.ptr()
    );
}

void ImmediateGeometry::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

void ImmediateGeometry::end() {
    rebel_icall_void(
        method_bindings.mb_end,
        (const Object*)this
    );
}

void ImmediateGeometry::set_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_color,
        (const Object*)this,
        color
    );
}

void ImmediateGeometry::set_normal(const Vector3 normal) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_normal,
        (const Object*)this,
        normal
    );
}

void ImmediateGeometry::set_tangent(const Plane tangent) {
    rebel_icall_void_plane(
        method_bindings.mb_set_tangent,
        (const Object*)this,
        tangent
    );
}

void ImmediateGeometry::set_uv(const Vector2 uv) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_uv,
        (const Object*)this,
        uv
    );
}

void ImmediateGeometry::set_uv2(const Vector2 uv) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_uv2,
        (const Object*)this,
        uv
    );
}

ImmediateGeometry* ImmediateGeometry::create() {
    return (ImmediateGeometry*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ImmediateGeometry")()
         );
}

void ImmediateGeometry::init_method_bindings() {
    method_bindings.mb_add_sphere =
        api->rebel_method_bind_get_method(
            "ImmediateGeometry",
            "add_sphere"
        );
    method_bindings.mb_add_vertex =
        api->rebel_method_bind_get_method(
            "ImmediateGeometry",
            "add_vertex"
        );
    method_bindings.mb_begin =
        api->rebel_method_bind_get_method(
            "ImmediateGeometry",
            "begin"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "ImmediateGeometry",
            "clear"
        );
    method_bindings.mb_end =
        api->rebel_method_bind_get_method(
            "ImmediateGeometry",
            "end"
        );
    method_bindings.mb_set_color =
        api->rebel_method_bind_get_method(
            "ImmediateGeometry",
            "set_color"
        );
    method_bindings.mb_set_normal =
        api->rebel_method_bind_get_method(
            "ImmediateGeometry",
            "set_normal"
        );
    method_bindings.mb_set_tangent =
        api->rebel_method_bind_get_method(
            "ImmediateGeometry",
            "set_tangent"
        );
    method_bindings.mb_set_uv =
        api->rebel_method_bind_get_method(
            "ImmediateGeometry",
            "set_uv"
        );
    method_bindings.mb_set_uv2 =
        api->rebel_method_bind_get_method(
            "ImmediateGeometry",
            "set_uv2"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ImmediateGeometry");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ImmediateGeometry::MethodBindings ImmediateGeometry::method_bindings = {};
void* ImmediateGeometry::class_tag = nullptr;
} // namespace Rebel
