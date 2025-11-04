// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/heightmapshape.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
PoolRealArray HeightMapShape::get_map_data() const {
    return rebel_icall_poolrealarray(
        method_bindings.mb_get_map_data,
        (const Object*)this
    );
}

int64_t HeightMapShape::get_map_depth() const {
    return rebel_icall_int(
        method_bindings.mb_get_map_depth,
        (const Object*)this
    );
}

int64_t HeightMapShape::get_map_width() const {
    return rebel_icall_int(
        method_bindings.mb_get_map_width,
        (const Object*)this
    );
}

void HeightMapShape::set_map_data(const PoolRealArray data) {
    rebel_icall_void_poolrealarray(
        method_bindings.mb_set_map_data,
        (const Object*)this,
        data
    );
}

void HeightMapShape::set_map_depth(const int64_t height) {
    rebel_icall_void_int(
        method_bindings.mb_set_map_depth,
        (const Object*)this,
        height
    );
}

void HeightMapShape::set_map_width(const int64_t width) {
    rebel_icall_void_int(
        method_bindings.mb_set_map_width,
        (const Object*)this,
        width
    );
}

HeightMapShape* HeightMapShape::create() {
    return (HeightMapShape*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"HeightMapShape")()
         );
}

void HeightMapShape::init_method_bindings() {
    method_bindings.mb_get_map_data =
        api->rebel_method_bind_get_method(
            "HeightMapShape",
            "get_map_data"
        );
    method_bindings.mb_get_map_depth =
        api->rebel_method_bind_get_method(
            "HeightMapShape",
            "get_map_depth"
        );
    method_bindings.mb_get_map_width =
        api->rebel_method_bind_get_method(
            "HeightMapShape",
            "get_map_width"
        );
    method_bindings.mb_set_map_data =
        api->rebel_method_bind_get_method(
            "HeightMapShape",
            "set_map_data"
        );
    method_bindings.mb_set_map_depth =
        api->rebel_method_bind_get_method(
            "HeightMapShape",
            "set_map_depth"
        );
    method_bindings.mb_set_map_width =
        api->rebel_method_bind_get_method(
            "HeightMapShape",
            "set_map_width"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "HeightMapShape");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

HeightMapShape::MethodBindings HeightMapShape::method_bindings = {};
void* HeightMapShape::class_tag = nullptr;
} // namespace Rebel
