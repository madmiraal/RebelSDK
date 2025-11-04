// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/texture.h"

#include "classes/icalls.h"
#include "classes/image.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Texture::draw(const RID canvas_item, const Vector2 position, const Color modulate, const bool transpose, const Ref<Texture> normal_map) const {
    rebel_icall_void_rid_vector2_color_bool_object(
        method_bindings.mb_draw,
        (const Object*)this,
        canvas_item,
        position,
        modulate,
        transpose,
        normal_map.ptr()
    );
}

void Texture::draw_rect(const RID canvas_item, const Rect2 rect, const bool tile, const Color modulate, const bool transpose, const Ref<Texture> normal_map) const {
    rebel_icall_void_rid_rect2_bool_color_bool_object(
        method_bindings.mb_draw_rect,
        (const Object*)this,
        canvas_item,
        rect,
        tile,
        modulate,
        transpose,
        normal_map.ptr()
    );
}

void Texture::draw_rect_region(const RID canvas_item, const Rect2 rect, const Rect2 src_rect, const Color modulate, const bool transpose, const Ref<Texture> normal_map, const bool clip_uv) const {
    rebel_icall_void_rid_rect2_rect2_color_bool_object_bool(
        method_bindings.mb_draw_rect_region,
        (const Object*)this,
        canvas_item,
        rect,
        src_rect,
        modulate,
        transpose,
        normal_map.ptr(),
        clip_uv
    );
}

Ref<Image> Texture::get_data() const {
    return Ref<Image>::create_ref(rebel_icall_object(
        method_bindings.mb_get_data,
        (const Object*)this
    ));
}

int64_t Texture::get_flags() const {
    return rebel_icall_int(
        method_bindings.mb_get_flags,
        (const Object*)this
    );
}

int64_t Texture::get_height() const {
    return rebel_icall_int(
        method_bindings.mb_get_height,
        (const Object*)this
    );
}

Vector2 Texture::get_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_size,
        (const Object*)this
    );
}

int64_t Texture::get_width() const {
    return rebel_icall_int(
        method_bindings.mb_get_width,
        (const Object*)this
    );
}

bool Texture::has_alpha() const {
    return rebel_icall_bool(
        method_bindings.mb_has_alpha,
        (const Object*)this
    );
}

void Texture::set_flags(const int64_t flags) {
    rebel_icall_void_int(
        method_bindings.mb_set_flags,
        (const Object*)this,
        flags
    );
}

void Texture::init_method_bindings() {
    method_bindings.mb_draw =
        api->rebel_method_bind_get_method(
            "Texture",
            "draw"
        );
    method_bindings.mb_draw_rect =
        api->rebel_method_bind_get_method(
            "Texture",
            "draw_rect"
        );
    method_bindings.mb_draw_rect_region =
        api->rebel_method_bind_get_method(
            "Texture",
            "draw_rect_region"
        );
    method_bindings.mb_get_data =
        api->rebel_method_bind_get_method(
            "Texture",
            "get_data"
        );
    method_bindings.mb_get_flags =
        api->rebel_method_bind_get_method(
            "Texture",
            "get_flags"
        );
    method_bindings.mb_get_height =
        api->rebel_method_bind_get_method(
            "Texture",
            "get_height"
        );
    method_bindings.mb_get_size =
        api->rebel_method_bind_get_method(
            "Texture",
            "get_size"
        );
    method_bindings.mb_get_width =
        api->rebel_method_bind_get_method(
            "Texture",
            "get_width"
        );
    method_bindings.mb_has_alpha =
        api->rebel_method_bind_get_method(
            "Texture",
            "has_alpha"
        );
    method_bindings.mb_set_flags =
        api->rebel_method_bind_get_method(
            "Texture",
            "set_flags"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Texture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Texture::MethodBindings Texture::method_bindings = {};
void* Texture::class_tag = nullptr;
} // namespace Rebel
