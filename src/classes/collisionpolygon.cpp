// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/collisionpolygon.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool CollisionPolygon::_is_editable_3d_polygon() const {
    return rebel_icall_bool(
        method_bindings.mb__is_editable_3d_polygon,
        (const Object*)this
    );
}

real_t CollisionPolygon::get_depth() const {
    return rebel_icall_float(
        method_bindings.mb_get_depth,
        (const Object*)this
    );
}

real_t CollisionPolygon::get_margin() const {
    return rebel_icall_float(
        method_bindings.mb_get_margin,
        (const Object*)this
    );
}

PoolVector2Array CollisionPolygon::get_polygon() const {
    return rebel_icall_poolvector2array(
        method_bindings.mb_get_polygon,
        (const Object*)this
    );
}

bool CollisionPolygon::is_disabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_disabled,
        (const Object*)this
    );
}

void CollisionPolygon::set_depth(const real_t depth) {
    rebel_icall_void_float(
        method_bindings.mb_set_depth,
        (const Object*)this,
        depth
    );
}

void CollisionPolygon::set_disabled(const bool disabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_disabled,
        (const Object*)this,
        disabled
    );
}

void CollisionPolygon::set_margin(const real_t margin) {
    rebel_icall_void_float(
        method_bindings.mb_set_margin,
        (const Object*)this,
        margin
    );
}

void CollisionPolygon::set_polygon(const PoolVector2Array polygon) {
    rebel_icall_void_poolvector2array(
        method_bindings.mb_set_polygon,
        (const Object*)this,
        polygon
    );
}

CollisionPolygon* CollisionPolygon::create() {
    return (CollisionPolygon*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CollisionPolygon")()
         );
}

void CollisionPolygon::init_method_bindings() {
    method_bindings.mb__is_editable_3d_polygon =
        api->rebel_method_bind_get_method(
            "CollisionPolygon",
            "_is_editable_3d_polygon"
        );
    method_bindings.mb_get_depth =
        api->rebel_method_bind_get_method(
            "CollisionPolygon",
            "get_depth"
        );
    method_bindings.mb_get_margin =
        api->rebel_method_bind_get_method(
            "CollisionPolygon",
            "get_margin"
        );
    method_bindings.mb_get_polygon =
        api->rebel_method_bind_get_method(
            "CollisionPolygon",
            "get_polygon"
        );
    method_bindings.mb_is_disabled =
        api->rebel_method_bind_get_method(
            "CollisionPolygon",
            "is_disabled"
        );
    method_bindings.mb_set_depth =
        api->rebel_method_bind_get_method(
            "CollisionPolygon",
            "set_depth"
        );
    method_bindings.mb_set_disabled =
        api->rebel_method_bind_get_method(
            "CollisionPolygon",
            "set_disabled"
        );
    method_bindings.mb_set_margin =
        api->rebel_method_bind_get_method(
            "CollisionPolygon",
            "set_margin"
        );
    method_bindings.mb_set_polygon =
        api->rebel_method_bind_get_method(
            "CollisionPolygon",
            "set_polygon"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CollisionPolygon");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CollisionPolygon::MethodBindings CollisionPolygon::method_bindings = {};
void* CollisionPolygon::class_tag = nullptr;
} // namespace Rebel
