// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/concavepolygonshape2d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
PoolVector2Array ConcavePolygonShape2D::get_segments() const {
    return rebel_icall_poolvector2array(
        method_bindings.mb_get_segments,
        (const Object*)this
    );
}

void ConcavePolygonShape2D::set_segments(const PoolVector2Array segments) {
    rebel_icall_void_poolvector2array(
        method_bindings.mb_set_segments,
        (const Object*)this,
        segments
    );
}

ConcavePolygonShape2D* ConcavePolygonShape2D::create() {
    return (ConcavePolygonShape2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ConcavePolygonShape2D")()
         );
}

void ConcavePolygonShape2D::init_method_bindings() {
    method_bindings.mb_get_segments =
        api->rebel_method_bind_get_method(
            "ConcavePolygonShape2D",
            "get_segments"
        );
    method_bindings.mb_set_segments =
        api->rebel_method_bind_get_method(
            "ConcavePolygonShape2D",
            "set_segments"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ConcavePolygonShape2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ConcavePolygonShape2D::MethodBindings ConcavePolygonShape2D::method_bindings = {};
void* ConcavePolygonShape2D::class_tag = nullptr;
} // namespace Rebel
