// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/omnilight.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
OmniLight::ShadowDetail OmniLight::get_shadow_detail() const {
    return (OmniLight::ShadowDetail)rebel_icall_int(
        method_bindings.mb_get_shadow_detail,
        (const Object*)this
    );
}

OmniLight::ShadowMode OmniLight::get_shadow_mode() const {
    return (OmniLight::ShadowMode)rebel_icall_int(
        method_bindings.mb_get_shadow_mode,
        (const Object*)this
    );
}

void OmniLight::set_shadow_detail(const int64_t detail) {
    rebel_icall_void_int(
        method_bindings.mb_set_shadow_detail,
        (const Object*)this,
        detail
    );
}

void OmniLight::set_shadow_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_shadow_mode,
        (const Object*)this,
        mode
    );
}

OmniLight* OmniLight::create() {
    return (OmniLight*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"OmniLight")()
         );
}

void OmniLight::init_method_bindings() {
    method_bindings.mb_get_shadow_detail =
        api->rebel_method_bind_get_method(
            "OmniLight",
            "get_shadow_detail"
        );
    method_bindings.mb_get_shadow_mode =
        api->rebel_method_bind_get_method(
            "OmniLight",
            "get_shadow_mode"
        );
    method_bindings.mb_set_shadow_detail =
        api->rebel_method_bind_get_method(
            "OmniLight",
            "set_shadow_detail"
        );
    method_bindings.mb_set_shadow_mode =
        api->rebel_method_bind_get_method(
            "OmniLight",
            "set_shadow_mode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "OmniLight");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

OmniLight::MethodBindings OmniLight::method_bindings = {};
void* OmniLight::class_tag = nullptr;
} // namespace Rebel
