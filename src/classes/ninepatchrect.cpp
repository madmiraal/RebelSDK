// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/ninepatchrect.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
NinePatchRect::AxisStretchMode NinePatchRect::get_h_axis_stretch_mode() const {
    return (NinePatchRect::AxisStretchMode)rebel_icall_int(
        method_bindings.mb_get_h_axis_stretch_mode,
        (const Object*)this
    );
}

int64_t NinePatchRect::get_patch_margin(const int64_t margin) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_patch_margin,
        (const Object*)this,
        margin
    );
}

Rect2 NinePatchRect::get_region_rect() const {
    return rebel_icall_rect2(
        method_bindings.mb_get_region_rect,
        (const Object*)this
    );
}

Ref<Texture> NinePatchRect::get_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_texture,
        (const Object*)this
    ));
}

NinePatchRect::AxisStretchMode NinePatchRect::get_v_axis_stretch_mode() const {
    return (NinePatchRect::AxisStretchMode)rebel_icall_int(
        method_bindings.mb_get_v_axis_stretch_mode,
        (const Object*)this
    );
}

bool NinePatchRect::is_draw_center_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_draw_center_enabled,
        (const Object*)this
    );
}

void NinePatchRect::set_draw_center(const bool draw_center) {
    rebel_icall_void_bool(
        method_bindings.mb_set_draw_center,
        (const Object*)this,
        draw_center
    );
}

void NinePatchRect::set_h_axis_stretch_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_h_axis_stretch_mode,
        (const Object*)this,
        mode
    );
}

void NinePatchRect::set_patch_margin(const int64_t margin, const int64_t value) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_patch_margin,
        (const Object*)this,
        margin,
        value
    );
}

void NinePatchRect::set_region_rect(const Rect2 rect) {
    rebel_icall_void_rect2(
        method_bindings.mb_set_region_rect,
        (const Object*)this,
        rect
    );
}

void NinePatchRect::set_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void NinePatchRect::set_v_axis_stretch_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_v_axis_stretch_mode,
        (const Object*)this,
        mode
    );
}

NinePatchRect* NinePatchRect::create() {
    return (NinePatchRect*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"NinePatchRect")()
         );
}

void NinePatchRect::init_method_bindings() {
    method_bindings.mb_get_h_axis_stretch_mode =
        api->rebel_method_bind_get_method(
            "NinePatchRect",
            "get_h_axis_stretch_mode"
        );
    method_bindings.mb_get_patch_margin =
        api->rebel_method_bind_get_method(
            "NinePatchRect",
            "get_patch_margin"
        );
    method_bindings.mb_get_region_rect =
        api->rebel_method_bind_get_method(
            "NinePatchRect",
            "get_region_rect"
        );
    method_bindings.mb_get_texture =
        api->rebel_method_bind_get_method(
            "NinePatchRect",
            "get_texture"
        );
    method_bindings.mb_get_v_axis_stretch_mode =
        api->rebel_method_bind_get_method(
            "NinePatchRect",
            "get_v_axis_stretch_mode"
        );
    method_bindings.mb_is_draw_center_enabled =
        api->rebel_method_bind_get_method(
            "NinePatchRect",
            "is_draw_center_enabled"
        );
    method_bindings.mb_set_draw_center =
        api->rebel_method_bind_get_method(
            "NinePatchRect",
            "set_draw_center"
        );
    method_bindings.mb_set_h_axis_stretch_mode =
        api->rebel_method_bind_get_method(
            "NinePatchRect",
            "set_h_axis_stretch_mode"
        );
    method_bindings.mb_set_patch_margin =
        api->rebel_method_bind_get_method(
            "NinePatchRect",
            "set_patch_margin"
        );
    method_bindings.mb_set_region_rect =
        api->rebel_method_bind_get_method(
            "NinePatchRect",
            "set_region_rect"
        );
    method_bindings.mb_set_texture =
        api->rebel_method_bind_get_method(
            "NinePatchRect",
            "set_texture"
        );
    method_bindings.mb_set_v_axis_stretch_mode =
        api->rebel_method_bind_get_method(
            "NinePatchRect",
            "set_v_axis_stretch_mode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "NinePatchRect");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

NinePatchRect::MethodBindings NinePatchRect::method_bindings = {};
void* NinePatchRect::class_tag = nullptr;
} // namespace Rebel
