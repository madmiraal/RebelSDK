// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/occluderpolygon2d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
OccluderPolygon2D::CullMode OccluderPolygon2D::get_cull_mode() const {
    return (OccluderPolygon2D::CullMode)rebel_icall_int(
        method_bindings.mb_get_cull_mode,
        (const Object*)this
    );
}

PoolVector2Array OccluderPolygon2D::get_polygon() const {
    return rebel_icall_poolvector2array(
        method_bindings.mb_get_polygon,
        (const Object*)this
    );
}

bool OccluderPolygon2D::is_closed() const {
    return rebel_icall_bool(
        method_bindings.mb_is_closed,
        (const Object*)this
    );
}

void OccluderPolygon2D::set_closed(const bool closed) {
    rebel_icall_void_bool(
        method_bindings.mb_set_closed,
        (const Object*)this,
        closed
    );
}

void OccluderPolygon2D::set_cull_mode(const int64_t cull_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_cull_mode,
        (const Object*)this,
        cull_mode
    );
}

void OccluderPolygon2D::set_polygon(const PoolVector2Array polygon) {
    rebel_icall_void_poolvector2array(
        method_bindings.mb_set_polygon,
        (const Object*)this,
        polygon
    );
}

OccluderPolygon2D* OccluderPolygon2D::create() {
    return (OccluderPolygon2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"OccluderPolygon2D")()
         );
}

void OccluderPolygon2D::init_method_bindings() {
    method_bindings.mb_get_cull_mode =
        api->rebel_method_bind_get_method(
            "OccluderPolygon2D",
            "get_cull_mode"
        );
    method_bindings.mb_get_polygon =
        api->rebel_method_bind_get_method(
            "OccluderPolygon2D",
            "get_polygon"
        );
    method_bindings.mb_is_closed =
        api->rebel_method_bind_get_method(
            "OccluderPolygon2D",
            "is_closed"
        );
    method_bindings.mb_set_closed =
        api->rebel_method_bind_get_method(
            "OccluderPolygon2D",
            "set_closed"
        );
    method_bindings.mb_set_cull_mode =
        api->rebel_method_bind_get_method(
            "OccluderPolygon2D",
            "set_cull_mode"
        );
    method_bindings.mb_set_polygon =
        api->rebel_method_bind_get_method(
            "OccluderPolygon2D",
            "set_polygon"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "OccluderPolygon2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

OccluderPolygon2D::MethodBindings OccluderPolygon2D::method_bindings = {};
void* OccluderPolygon2D::class_tag = nullptr;
} // namespace Rebel
