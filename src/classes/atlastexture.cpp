// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/atlastexture.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<Texture> AtlasTexture::get_atlas() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_atlas,
        (const Object*)this
    ));
}

Rect2 AtlasTexture::get_margin() const {
    return rebel_icall_rect2(
        method_bindings.mb_get_margin,
        (const Object*)this
    );
}

Rect2 AtlasTexture::get_region() const {
    return rebel_icall_rect2(
        method_bindings.mb_get_region,
        (const Object*)this
    );
}

bool AtlasTexture::has_filter_clip() const {
    return rebel_icall_bool(
        method_bindings.mb_has_filter_clip,
        (const Object*)this
    );
}

void AtlasTexture::set_atlas(const Ref<Texture> atlas) {
    rebel_icall_void_object(
        method_bindings.mb_set_atlas,
        (const Object*)this,
        atlas.ptr()
    );
}

void AtlasTexture::set_filter_clip(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_filter_clip,
        (const Object*)this,
        enable
    );
}

void AtlasTexture::set_margin(const Rect2 margin) {
    rebel_icall_void_rect2(
        method_bindings.mb_set_margin,
        (const Object*)this,
        margin
    );
}

void AtlasTexture::set_region(const Rect2 region) {
    rebel_icall_void_rect2(
        method_bindings.mb_set_region,
        (const Object*)this,
        region
    );
}

AtlasTexture* AtlasTexture::create() {
    return (AtlasTexture*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AtlasTexture")()
         );
}

void AtlasTexture::init_method_bindings() {
    method_bindings.mb_get_atlas =
        api->rebel_method_bind_get_method(
            "AtlasTexture",
            "get_atlas"
        );
    method_bindings.mb_get_margin =
        api->rebel_method_bind_get_method(
            "AtlasTexture",
            "get_margin"
        );
    method_bindings.mb_get_region =
        api->rebel_method_bind_get_method(
            "AtlasTexture",
            "get_region"
        );
    method_bindings.mb_has_filter_clip =
        api->rebel_method_bind_get_method(
            "AtlasTexture",
            "has_filter_clip"
        );
    method_bindings.mb_set_atlas =
        api->rebel_method_bind_get_method(
            "AtlasTexture",
            "set_atlas"
        );
    method_bindings.mb_set_filter_clip =
        api->rebel_method_bind_get_method(
            "AtlasTexture",
            "set_filter_clip"
        );
    method_bindings.mb_set_margin =
        api->rebel_method_bind_get_method(
            "AtlasTexture",
            "set_margin"
        );
    method_bindings.mb_set_region =
        api->rebel_method_bind_get_method(
            "AtlasTexture",
            "set_region"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AtlasTexture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AtlasTexture::MethodBindings AtlasTexture::method_bindings = {};
void* AtlasTexture::class_tag = nullptr;
} // namespace Rebel
