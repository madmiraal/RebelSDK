// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/polygonpathfinder.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Dictionary PolygonPathFinder::_get_data() const {
    return rebel_icall_dictionary(
        method_bindings.mb__get_data,
        (const Object*)this
    );
}

void PolygonPathFinder::_set_data(const Dictionary arg0) {
    rebel_icall_void_dictionary(
        method_bindings.mb__set_data,
        (const Object*)this,
        arg0
    );
}

PoolVector2Array PolygonPathFinder::find_path(const Vector2 from, const Vector2 to) {
    return rebel_icall_poolvector2array_vector2_vector2(
        method_bindings.mb_find_path,
        (const Object*)this,
        from,
        to
    );
}

Rect2 PolygonPathFinder::get_bounds() const {
    return rebel_icall_rect2(
        method_bindings.mb_get_bounds,
        (const Object*)this
    );
}

Vector2 PolygonPathFinder::get_closest_point(const Vector2 point) const {
    return rebel_icall_vector2_vector2(
        method_bindings.mb_get_closest_point,
        (const Object*)this,
        point
    );
}

PoolVector2Array PolygonPathFinder::get_intersections(const Vector2 from, const Vector2 to) const {
    return rebel_icall_poolvector2array_vector2_vector2(
        method_bindings.mb_get_intersections,
        (const Object*)this,
        from,
        to
    );
}

real_t PolygonPathFinder::get_point_penalty(const int64_t idx) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_point_penalty,
        (const Object*)this,
        idx
    );
}

bool PolygonPathFinder::is_point_inside(const Vector2 point) const {
    return rebel_icall_bool_vector2(
        method_bindings.mb_is_point_inside,
        (const Object*)this,
        point
    );
}

void PolygonPathFinder::set_point_penalty(const int64_t idx, const real_t penalty) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_point_penalty,
        (const Object*)this,
        idx,
        penalty
    );
}

void PolygonPathFinder::setup(const PoolVector2Array points, const PoolIntArray connections) {
    rebel_icall_void_poolvector2array_poolintarray(
        method_bindings.mb_setup,
        (const Object*)this,
        points,
        connections
    );
}

PolygonPathFinder* PolygonPathFinder::create() {
    return (PolygonPathFinder*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PolygonPathFinder")()
         );
}

void PolygonPathFinder::init_method_bindings() {
    method_bindings.mb__get_data =
        api->rebel_method_bind_get_method(
            "PolygonPathFinder",
            "_get_data"
        );
    method_bindings.mb__set_data =
        api->rebel_method_bind_get_method(
            "PolygonPathFinder",
            "_set_data"
        );
    method_bindings.mb_find_path =
        api->rebel_method_bind_get_method(
            "PolygonPathFinder",
            "find_path"
        );
    method_bindings.mb_get_bounds =
        api->rebel_method_bind_get_method(
            "PolygonPathFinder",
            "get_bounds"
        );
    method_bindings.mb_get_closest_point =
        api->rebel_method_bind_get_method(
            "PolygonPathFinder",
            "get_closest_point"
        );
    method_bindings.mb_get_intersections =
        api->rebel_method_bind_get_method(
            "PolygonPathFinder",
            "get_intersections"
        );
    method_bindings.mb_get_point_penalty =
        api->rebel_method_bind_get_method(
            "PolygonPathFinder",
            "get_point_penalty"
        );
    method_bindings.mb_is_point_inside =
        api->rebel_method_bind_get_method(
            "PolygonPathFinder",
            "is_point_inside"
        );
    method_bindings.mb_set_point_penalty =
        api->rebel_method_bind_get_method(
            "PolygonPathFinder",
            "set_point_penalty"
        );
    method_bindings.mb_setup =
        api->rebel_method_bind_get_method(
            "PolygonPathFinder",
            "setup"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PolygonPathFinder");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PolygonPathFinder::MethodBindings PolygonPathFinder::method_bindings = {};
void* PolygonPathFinder::class_tag = nullptr;
} // namespace Rebel
