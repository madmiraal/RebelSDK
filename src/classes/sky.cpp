// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/sky.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Sky::RadianceSize Sky::get_radiance_size() const {
    return (Sky::RadianceSize)rebel_icall_int(
        method_bindings.mb_get_radiance_size,
        (const Object*)this
    );
}

void Sky::set_radiance_size(const int64_t size) {
    rebel_icall_void_int(
        method_bindings.mb_set_radiance_size,
        (const Object*)this,
        size
    );
}

void Sky::init_method_bindings() {
    method_bindings.mb_get_radiance_size =
        api->rebel_method_bind_get_method(
            "Sky",
            "get_radiance_size"
        );
    method_bindings.mb_set_radiance_size =
        api->rebel_method_bind_get_method(
            "Sky",
            "set_radiance_size"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Sky");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Sky::MethodBindings Sky::method_bindings = {};
void* Sky::class_tag = nullptr;
} // namespace Rebel
