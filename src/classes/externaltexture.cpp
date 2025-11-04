// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/externaltexture.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t ExternalTexture::get_external_texture_id() {
    return rebel_icall_int(
        method_bindings.mb_get_external_texture_id,
        (const Object*)this
    );
}

void ExternalTexture::set_size(const Vector2 size) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_size,
        (const Object*)this,
        size
    );
}

ExternalTexture* ExternalTexture::create() {
    return (ExternalTexture*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ExternalTexture")()
         );
}

void ExternalTexture::init_method_bindings() {
    method_bindings.mb_get_external_texture_id =
        api->rebel_method_bind_get_method(
            "ExternalTexture",
            "get_external_texture_id"
        );
    method_bindings.mb_set_size =
        api->rebel_method_bind_get_method(
            "ExternalTexture",
            "set_size"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ExternalTexture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ExternalTexture::MethodBindings ExternalTexture::method_bindings = {};
void* ExternalTexture::class_tag = nullptr;
} // namespace Rebel
