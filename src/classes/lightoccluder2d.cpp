// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/lightoccluder2d.h"

#include "classes/icalls.h"
#include "classes/occluderpolygon2d.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void LightOccluder2D::_poly_changed() {
    rebel_icall_void(
        method_bindings.mb__poly_changed,
        (const Object*)this
    );
}

int64_t LightOccluder2D::get_occluder_light_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_occluder_light_mask,
        (const Object*)this
    );
}

Ref<OccluderPolygon2D> LightOccluder2D::get_occluder_polygon() const {
    return Ref<OccluderPolygon2D>::create_ref(rebel_icall_object(
        method_bindings.mb_get_occluder_polygon,
        (const Object*)this
    ));
}

void LightOccluder2D::set_occluder_light_mask(const int64_t mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_occluder_light_mask,
        (const Object*)this,
        mask
    );
}

void LightOccluder2D::set_occluder_polygon(const Ref<OccluderPolygon2D> polygon) {
    rebel_icall_void_object(
        method_bindings.mb_set_occluder_polygon,
        (const Object*)this,
        polygon.ptr()
    );
}

LightOccluder2D* LightOccluder2D::create() {
    return (LightOccluder2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"LightOccluder2D")()
         );
}

void LightOccluder2D::init_method_bindings() {
    method_bindings.mb__poly_changed =
        api->rebel_method_bind_get_method(
            "LightOccluder2D",
            "_poly_changed"
        );
    method_bindings.mb_get_occluder_light_mask =
        api->rebel_method_bind_get_method(
            "LightOccluder2D",
            "get_occluder_light_mask"
        );
    method_bindings.mb_get_occluder_polygon =
        api->rebel_method_bind_get_method(
            "LightOccluder2D",
            "get_occluder_polygon"
        );
    method_bindings.mb_set_occluder_light_mask =
        api->rebel_method_bind_get_method(
            "LightOccluder2D",
            "set_occluder_light_mask"
        );
    method_bindings.mb_set_occluder_polygon =
        api->rebel_method_bind_get_method(
            "LightOccluder2D",
            "set_occluder_polygon"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "LightOccluder2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

LightOccluder2D::MethodBindings LightOccluder2D::method_bindings = {};
void* LightOccluder2D::class_tag = nullptr;
} // namespace Rebel
