// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/navigationpolygon.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array NavigationPolygon::_get_outlines() const {
    return rebel_icall_array(
        method_bindings.mb__get_outlines,
        (const Object*)this
    );
}

Array NavigationPolygon::_get_polygons() const {
    return rebel_icall_array(
        method_bindings.mb__get_polygons,
        (const Object*)this
    );
}

void NavigationPolygon::_set_outlines(const Array outlines) {
    rebel_icall_void_array(
        method_bindings.mb__set_outlines,
        (const Object*)this,
        outlines
    );
}

void NavigationPolygon::_set_polygons(const Array polygons) {
    rebel_icall_void_array(
        method_bindings.mb__set_polygons,
        (const Object*)this,
        polygons
    );
}

void NavigationPolygon::add_outline(const PoolVector2Array outline) {
    rebel_icall_void_poolvector2array(
        method_bindings.mb_add_outline,
        (const Object*)this,
        outline
    );
}

void NavigationPolygon::add_outline_at_index(const PoolVector2Array outline, const int64_t index) {
    rebel_icall_void_poolvector2array_int(
        method_bindings.mb_add_outline_at_index,
        (const Object*)this,
        outline,
        index
    );
}

void NavigationPolygon::add_polygon(const PoolIntArray polygon) {
    rebel_icall_void_poolintarray(
        method_bindings.mb_add_polygon,
        (const Object*)this,
        polygon
    );
}

void NavigationPolygon::clear_outlines() {
    rebel_icall_void(
        method_bindings.mb_clear_outlines,
        (const Object*)this
    );
}

void NavigationPolygon::clear_polygons() {
    rebel_icall_void(
        method_bindings.mb_clear_polygons,
        (const Object*)this
    );
}

PoolVector2Array NavigationPolygon::get_outline(const int64_t idx) const {
    return rebel_icall_poolvector2array_int(
        method_bindings.mb_get_outline,
        (const Object*)this,
        idx
    );
}

int64_t NavigationPolygon::get_outline_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_outline_count,
        (const Object*)this
    );
}

PoolIntArray NavigationPolygon::get_polygon(const int64_t idx) {
    return rebel_icall_poolintarray_int(
        method_bindings.mb_get_polygon,
        (const Object*)this,
        idx
    );
}

int64_t NavigationPolygon::get_polygon_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_polygon_count,
        (const Object*)this
    );
}

PoolVector2Array NavigationPolygon::get_vertices() const {
    return rebel_icall_poolvector2array(
        method_bindings.mb_get_vertices,
        (const Object*)this
    );
}

void NavigationPolygon::make_polygons_from_outlines() {
    rebel_icall_void(
        method_bindings.mb_make_polygons_from_outlines,
        (const Object*)this
    );
}

void NavigationPolygon::remove_outline(const int64_t idx) {
    rebel_icall_void_int(
        method_bindings.mb_remove_outline,
        (const Object*)this,
        idx
    );
}

void NavigationPolygon::set_outline(const int64_t idx, const PoolVector2Array outline) {
    rebel_icall_void_int_poolvector2array(
        method_bindings.mb_set_outline,
        (const Object*)this,
        idx,
        outline
    );
}

void NavigationPolygon::set_vertices(const PoolVector2Array vertices) {
    rebel_icall_void_poolvector2array(
        method_bindings.mb_set_vertices,
        (const Object*)this,
        vertices
    );
}

NavigationPolygon* NavigationPolygon::create() {
    return (NavigationPolygon*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"NavigationPolygon")()
         );
}

void NavigationPolygon::init_method_bindings() {
    method_bindings.mb__get_outlines =
        api->rebel_method_bind_get_method(
            "NavigationPolygon",
            "_get_outlines"
        );
    method_bindings.mb__get_polygons =
        api->rebel_method_bind_get_method(
            "NavigationPolygon",
            "_get_polygons"
        );
    method_bindings.mb__set_outlines =
        api->rebel_method_bind_get_method(
            "NavigationPolygon",
            "_set_outlines"
        );
    method_bindings.mb__set_polygons =
        api->rebel_method_bind_get_method(
            "NavigationPolygon",
            "_set_polygons"
        );
    method_bindings.mb_add_outline =
        api->rebel_method_bind_get_method(
            "NavigationPolygon",
            "add_outline"
        );
    method_bindings.mb_add_outline_at_index =
        api->rebel_method_bind_get_method(
            "NavigationPolygon",
            "add_outline_at_index"
        );
    method_bindings.mb_add_polygon =
        api->rebel_method_bind_get_method(
            "NavigationPolygon",
            "add_polygon"
        );
    method_bindings.mb_clear_outlines =
        api->rebel_method_bind_get_method(
            "NavigationPolygon",
            "clear_outlines"
        );
    method_bindings.mb_clear_polygons =
        api->rebel_method_bind_get_method(
            "NavigationPolygon",
            "clear_polygons"
        );
    method_bindings.mb_get_outline =
        api->rebel_method_bind_get_method(
            "NavigationPolygon",
            "get_outline"
        );
    method_bindings.mb_get_outline_count =
        api->rebel_method_bind_get_method(
            "NavigationPolygon",
            "get_outline_count"
        );
    method_bindings.mb_get_polygon =
        api->rebel_method_bind_get_method(
            "NavigationPolygon",
            "get_polygon"
        );
    method_bindings.mb_get_polygon_count =
        api->rebel_method_bind_get_method(
            "NavigationPolygon",
            "get_polygon_count"
        );
    method_bindings.mb_get_vertices =
        api->rebel_method_bind_get_method(
            "NavigationPolygon",
            "get_vertices"
        );
    method_bindings.mb_make_polygons_from_outlines =
        api->rebel_method_bind_get_method(
            "NavigationPolygon",
            "make_polygons_from_outlines"
        );
    method_bindings.mb_remove_outline =
        api->rebel_method_bind_get_method(
            "NavigationPolygon",
            "remove_outline"
        );
    method_bindings.mb_set_outline =
        api->rebel_method_bind_get_method(
            "NavigationPolygon",
            "set_outline"
        );
    method_bindings.mb_set_vertices =
        api->rebel_method_bind_get_method(
            "NavigationPolygon",
            "set_vertices"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "NavigationPolygon");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

NavigationPolygon::MethodBindings NavigationPolygon::method_bindings = {};
void* NavigationPolygon::class_tag = nullptr;
} // namespace Rebel
