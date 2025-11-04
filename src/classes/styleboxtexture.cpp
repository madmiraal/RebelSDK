// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/styleboxtexture.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t StyleBoxTexture::get_expand_margin_size(const int64_t margin) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_expand_margin_size,
        (const Object*)this,
        margin
    );
}

StyleBoxTexture::AxisStretchMode StyleBoxTexture::get_h_axis_stretch_mode() const {
    return (StyleBoxTexture::AxisStretchMode)rebel_icall_int(
        method_bindings.mb_get_h_axis_stretch_mode,
        (const Object*)this
    );
}

real_t StyleBoxTexture::get_margin_size(const int64_t margin) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_margin_size,
        (const Object*)this,
        margin
    );
}

Color StyleBoxTexture::get_modulate() const {
    return rebel_icall_color(
        method_bindings.mb_get_modulate,
        (const Object*)this
    );
}

Ref<Texture> StyleBoxTexture::get_normal_map() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_normal_map,
        (const Object*)this
    ));
}

Rect2 StyleBoxTexture::get_region_rect() const {
    return rebel_icall_rect2(
        method_bindings.mb_get_region_rect,
        (const Object*)this
    );
}

Ref<Texture> StyleBoxTexture::get_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_texture,
        (const Object*)this
    ));
}

StyleBoxTexture::AxisStretchMode StyleBoxTexture::get_v_axis_stretch_mode() const {
    return (StyleBoxTexture::AxisStretchMode)rebel_icall_int(
        method_bindings.mb_get_v_axis_stretch_mode,
        (const Object*)this
    );
}

bool StyleBoxTexture::is_draw_center_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_draw_center_enabled,
        (const Object*)this
    );
}

void StyleBoxTexture::set_draw_center(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_draw_center,
        (const Object*)this,
        enable
    );
}

void StyleBoxTexture::set_expand_margin_all(const real_t size) {
    rebel_icall_void_float(
        method_bindings.mb_set_expand_margin_all,
        (const Object*)this,
        size
    );
}

void StyleBoxTexture::set_expand_margin_individual(const real_t size_left, const real_t size_top, const real_t size_right, const real_t size_bottom) {
    rebel_icall_void_float_float_float_float(
        method_bindings.mb_set_expand_margin_individual,
        (const Object*)this,
        size_left,
        size_top,
        size_right,
        size_bottom
    );
}

void StyleBoxTexture::set_expand_margin_size(const int64_t margin, const real_t size) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_expand_margin_size,
        (const Object*)this,
        margin,
        size
    );
}

void StyleBoxTexture::set_h_axis_stretch_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_h_axis_stretch_mode,
        (const Object*)this,
        mode
    );
}

void StyleBoxTexture::set_margin_size(const int64_t margin, const real_t size) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_margin_size,
        (const Object*)this,
        margin,
        size
    );
}

void StyleBoxTexture::set_modulate(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_modulate,
        (const Object*)this,
        color
    );
}

void StyleBoxTexture::set_normal_map(const Ref<Texture> normal_map) {
    rebel_icall_void_object(
        method_bindings.mb_set_normal_map,
        (const Object*)this,
        normal_map.ptr()
    );
}

void StyleBoxTexture::set_region_rect(const Rect2 region) {
    rebel_icall_void_rect2(
        method_bindings.mb_set_region_rect,
        (const Object*)this,
        region
    );
}

void StyleBoxTexture::set_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void StyleBoxTexture::set_v_axis_stretch_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_v_axis_stretch_mode,
        (const Object*)this,
        mode
    );
}

StyleBoxTexture* StyleBoxTexture::create() {
    return (StyleBoxTexture*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"StyleBoxTexture")()
         );
}

void StyleBoxTexture::init_method_bindings() {
    method_bindings.mb_get_expand_margin_size =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "get_expand_margin_size"
        );
    method_bindings.mb_get_h_axis_stretch_mode =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "get_h_axis_stretch_mode"
        );
    method_bindings.mb_get_margin_size =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "get_margin_size"
        );
    method_bindings.mb_get_modulate =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "get_modulate"
        );
    method_bindings.mb_get_normal_map =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "get_normal_map"
        );
    method_bindings.mb_get_region_rect =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "get_region_rect"
        );
    method_bindings.mb_get_texture =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "get_texture"
        );
    method_bindings.mb_get_v_axis_stretch_mode =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "get_v_axis_stretch_mode"
        );
    method_bindings.mb_is_draw_center_enabled =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "is_draw_center_enabled"
        );
    method_bindings.mb_set_draw_center =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "set_draw_center"
        );
    method_bindings.mb_set_expand_margin_all =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "set_expand_margin_all"
        );
    method_bindings.mb_set_expand_margin_individual =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "set_expand_margin_individual"
        );
    method_bindings.mb_set_expand_margin_size =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "set_expand_margin_size"
        );
    method_bindings.mb_set_h_axis_stretch_mode =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "set_h_axis_stretch_mode"
        );
    method_bindings.mb_set_margin_size =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "set_margin_size"
        );
    method_bindings.mb_set_modulate =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "set_modulate"
        );
    method_bindings.mb_set_normal_map =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "set_normal_map"
        );
    method_bindings.mb_set_region_rect =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "set_region_rect"
        );
    method_bindings.mb_set_texture =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "set_texture"
        );
    method_bindings.mb_set_v_axis_stretch_mode =
        api->rebel_method_bind_get_method(
            "StyleBoxTexture",
            "set_v_axis_stretch_mode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "StyleBoxTexture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

StyleBoxTexture::MethodBindings StyleBoxTexture::method_bindings = {};
void* StyleBoxTexture::class_tag = nullptr;
} // namespace Rebel
