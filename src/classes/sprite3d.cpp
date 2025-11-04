// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/sprite3d.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t Sprite3D::get_frame() const {
    return rebel_icall_int(
        method_bindings.mb_get_frame,
        (const Object*)this
    );
}

Vector2 Sprite3D::get_frame_coords() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_frame_coords,
        (const Object*)this
    );
}

int64_t Sprite3D::get_hframes() const {
    return rebel_icall_int(
        method_bindings.mb_get_hframes,
        (const Object*)this
    );
}

Rect2 Sprite3D::get_region_rect() const {
    return rebel_icall_rect2(
        method_bindings.mb_get_region_rect,
        (const Object*)this
    );
}

Ref<Texture> Sprite3D::get_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_texture,
        (const Object*)this
    ));
}

int64_t Sprite3D::get_vframes() const {
    return rebel_icall_int(
        method_bindings.mb_get_vframes,
        (const Object*)this
    );
}

bool Sprite3D::is_region() const {
    return rebel_icall_bool(
        method_bindings.mb_is_region,
        (const Object*)this
    );
}

void Sprite3D::set_frame(const int64_t frame) {
    rebel_icall_void_int(
        method_bindings.mb_set_frame,
        (const Object*)this,
        frame
    );
}

void Sprite3D::set_frame_coords(const Vector2 coords) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_frame_coords,
        (const Object*)this,
        coords
    );
}

void Sprite3D::set_hframes(const int64_t hframes) {
    rebel_icall_void_int(
        method_bindings.mb_set_hframes,
        (const Object*)this,
        hframes
    );
}

void Sprite3D::set_region(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_region,
        (const Object*)this,
        enabled
    );
}

void Sprite3D::set_region_rect(const Rect2 rect) {
    rebel_icall_void_rect2(
        method_bindings.mb_set_region_rect,
        (const Object*)this,
        rect
    );
}

void Sprite3D::set_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void Sprite3D::set_vframes(const int64_t vframes) {
    rebel_icall_void_int(
        method_bindings.mb_set_vframes,
        (const Object*)this,
        vframes
    );
}

Sprite3D* Sprite3D::create() {
    return (Sprite3D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Sprite3D")()
         );
}

void Sprite3D::init_method_bindings() {
    method_bindings.mb_get_frame =
        api->rebel_method_bind_get_method(
            "Sprite3D",
            "get_frame"
        );
    method_bindings.mb_get_frame_coords =
        api->rebel_method_bind_get_method(
            "Sprite3D",
            "get_frame_coords"
        );
    method_bindings.mb_get_hframes =
        api->rebel_method_bind_get_method(
            "Sprite3D",
            "get_hframes"
        );
    method_bindings.mb_get_region_rect =
        api->rebel_method_bind_get_method(
            "Sprite3D",
            "get_region_rect"
        );
    method_bindings.mb_get_texture =
        api->rebel_method_bind_get_method(
            "Sprite3D",
            "get_texture"
        );
    method_bindings.mb_get_vframes =
        api->rebel_method_bind_get_method(
            "Sprite3D",
            "get_vframes"
        );
    method_bindings.mb_is_region =
        api->rebel_method_bind_get_method(
            "Sprite3D",
            "is_region"
        );
    method_bindings.mb_set_frame =
        api->rebel_method_bind_get_method(
            "Sprite3D",
            "set_frame"
        );
    method_bindings.mb_set_frame_coords =
        api->rebel_method_bind_get_method(
            "Sprite3D",
            "set_frame_coords"
        );
    method_bindings.mb_set_hframes =
        api->rebel_method_bind_get_method(
            "Sprite3D",
            "set_hframes"
        );
    method_bindings.mb_set_region =
        api->rebel_method_bind_get_method(
            "Sprite3D",
            "set_region"
        );
    method_bindings.mb_set_region_rect =
        api->rebel_method_bind_get_method(
            "Sprite3D",
            "set_region_rect"
        );
    method_bindings.mb_set_texture =
        api->rebel_method_bind_get_method(
            "Sprite3D",
            "set_texture"
        );
    method_bindings.mb_set_vframes =
        api->rebel_method_bind_get_method(
            "Sprite3D",
            "set_vframes"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Sprite3D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Sprite3D::MethodBindings Sprite3D::method_bindings = {};
void* Sprite3D::class_tag = nullptr;
} // namespace Rebel
