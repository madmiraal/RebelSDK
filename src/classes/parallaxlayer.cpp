// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/parallaxlayer.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Vector2 ParallaxLayer::get_mirroring() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_mirroring,
        (const Object*)this
    );
}

Vector2 ParallaxLayer::get_motion_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_motion_offset,
        (const Object*)this
    );
}

Vector2 ParallaxLayer::get_motion_scale() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_motion_scale,
        (const Object*)this
    );
}

void ParallaxLayer::set_mirroring(const Vector2 mirror) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_mirroring,
        (const Object*)this,
        mirror
    );
}

void ParallaxLayer::set_motion_offset(const Vector2 offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_motion_offset,
        (const Object*)this,
        offset
    );
}

void ParallaxLayer::set_motion_scale(const Vector2 scale) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_motion_scale,
        (const Object*)this,
        scale
    );
}

ParallaxLayer* ParallaxLayer::create() {
    return (ParallaxLayer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ParallaxLayer")()
         );
}

void ParallaxLayer::init_method_bindings() {
    method_bindings.mb_get_mirroring =
        api->rebel_method_bind_get_method(
            "ParallaxLayer",
            "get_mirroring"
        );
    method_bindings.mb_get_motion_offset =
        api->rebel_method_bind_get_method(
            "ParallaxLayer",
            "get_motion_offset"
        );
    method_bindings.mb_get_motion_scale =
        api->rebel_method_bind_get_method(
            "ParallaxLayer",
            "get_motion_scale"
        );
    method_bindings.mb_set_mirroring =
        api->rebel_method_bind_get_method(
            "ParallaxLayer",
            "set_mirroring"
        );
    method_bindings.mb_set_motion_offset =
        api->rebel_method_bind_get_method(
            "ParallaxLayer",
            "set_motion_offset"
        );
    method_bindings.mb_set_motion_scale =
        api->rebel_method_bind_get_method(
            "ParallaxLayer",
            "set_motion_scale"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ParallaxLayer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ParallaxLayer::MethodBindings ParallaxLayer::method_bindings = {};
void* ParallaxLayer::class_tag = nullptr;
} // namespace Rebel
