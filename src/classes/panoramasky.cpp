// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/panoramasky.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<Texture> PanoramaSky::get_panorama() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_panorama,
        (const Object*)this
    ));
}

void PanoramaSky::set_panorama(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_panorama,
        (const Object*)this,
        texture.ptr()
    );
}

PanoramaSky* PanoramaSky::create() {
    return (PanoramaSky*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PanoramaSky")()
         );
}

void PanoramaSky::init_method_bindings() {
    method_bindings.mb_get_panorama =
        api->rebel_method_bind_get_method(
            "PanoramaSky",
            "get_panorama"
        );
    method_bindings.mb_set_panorama =
        api->rebel_method_bind_get_method(
            "PanoramaSky",
            "set_panorama"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PanoramaSky");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PanoramaSky::MethodBindings PanoramaSky::method_bindings = {};
void* PanoramaSky::class_tag = nullptr;
} // namespace Rebel
