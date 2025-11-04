// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/concavepolygonshape.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
PoolVector3Array ConcavePolygonShape::get_faces() const {
    return rebel_icall_poolvector3array(
        method_bindings.mb_get_faces,
        (const Object*)this
    );
}

void ConcavePolygonShape::set_faces(const PoolVector3Array faces) {
    rebel_icall_void_poolvector3array(
        method_bindings.mb_set_faces,
        (const Object*)this,
        faces
    );
}

ConcavePolygonShape* ConcavePolygonShape::create() {
    return (ConcavePolygonShape*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ConcavePolygonShape")()
         );
}

void ConcavePolygonShape::init_method_bindings() {
    method_bindings.mb_get_faces =
        api->rebel_method_bind_get_method(
            "ConcavePolygonShape",
            "get_faces"
        );
    method_bindings.mb_set_faces =
        api->rebel_method_bind_get_method(
            "ConcavePolygonShape",
            "set_faces"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ConcavePolygonShape");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ConcavePolygonShape::MethodBindings ConcavePolygonShape::method_bindings = {};
void* ConcavePolygonShape::class_tag = nullptr;
} // namespace Rebel
