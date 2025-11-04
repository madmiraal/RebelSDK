// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/particles2d.h"

#include "classes/icalls.h"
#include "classes/material.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Rect2 Particles2D::capture_rect() const {
    return rebel_icall_rect2(
        method_bindings.mb_capture_rect,
        (const Object*)this
    );
}

int64_t Particles2D::get_amount() const {
    return rebel_icall_int(
        method_bindings.mb_get_amount,
        (const Object*)this
    );
}

Particles2D::DrawOrder Particles2D::get_draw_order() const {
    return (Particles2D::DrawOrder)rebel_icall_int(
        method_bindings.mb_get_draw_order,
        (const Object*)this
    );
}

real_t Particles2D::get_explosiveness_ratio() const {
    return rebel_icall_float(
        method_bindings.mb_get_explosiveness_ratio,
        (const Object*)this
    );
}

int64_t Particles2D::get_fixed_fps() const {
    return rebel_icall_int(
        method_bindings.mb_get_fixed_fps,
        (const Object*)this
    );
}

bool Particles2D::get_fractional_delta() const {
    return rebel_icall_bool(
        method_bindings.mb_get_fractional_delta,
        (const Object*)this
    );
}

real_t Particles2D::get_lifetime() const {
    return rebel_icall_float(
        method_bindings.mb_get_lifetime,
        (const Object*)this
    );
}

Ref<Texture> Particles2D::get_normal_map() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_normal_map,
        (const Object*)this
    ));
}

bool Particles2D::get_one_shot() const {
    return rebel_icall_bool(
        method_bindings.mb_get_one_shot,
        (const Object*)this
    );
}

real_t Particles2D::get_pre_process_time() const {
    return rebel_icall_float(
        method_bindings.mb_get_pre_process_time,
        (const Object*)this
    );
}

Ref<Material> Particles2D::get_process_material() const {
    return Ref<Material>::create_ref(rebel_icall_object(
        method_bindings.mb_get_process_material,
        (const Object*)this
    ));
}

real_t Particles2D::get_randomness_ratio() const {
    return rebel_icall_float(
        method_bindings.mb_get_randomness_ratio,
        (const Object*)this
    );
}

real_t Particles2D::get_speed_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_speed_scale,
        (const Object*)this
    );
}

Ref<Texture> Particles2D::get_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_texture,
        (const Object*)this
    ));
}

bool Particles2D::get_use_local_coordinates() const {
    return rebel_icall_bool(
        method_bindings.mb_get_use_local_coordinates,
        (const Object*)this
    );
}

Rect2 Particles2D::get_visibility_rect() const {
    return rebel_icall_rect2(
        method_bindings.mb_get_visibility_rect,
        (const Object*)this
    );
}

bool Particles2D::is_emitting() const {
    return rebel_icall_bool(
        method_bindings.mb_is_emitting,
        (const Object*)this
    );
}

void Particles2D::restart() {
    rebel_icall_void(
        method_bindings.mb_restart,
        (const Object*)this
    );
}

void Particles2D::set_amount(const int64_t amount) {
    rebel_icall_void_int(
        method_bindings.mb_set_amount,
        (const Object*)this,
        amount
    );
}

void Particles2D::set_draw_order(const int64_t order) {
    rebel_icall_void_int(
        method_bindings.mb_set_draw_order,
        (const Object*)this,
        order
    );
}

void Particles2D::set_emitting(const bool emitting) {
    rebel_icall_void_bool(
        method_bindings.mb_set_emitting,
        (const Object*)this,
        emitting
    );
}

void Particles2D::set_explosiveness_ratio(const real_t ratio) {
    rebel_icall_void_float(
        method_bindings.mb_set_explosiveness_ratio,
        (const Object*)this,
        ratio
    );
}

void Particles2D::set_fixed_fps(const int64_t fps) {
    rebel_icall_void_int(
        method_bindings.mb_set_fixed_fps,
        (const Object*)this,
        fps
    );
}

void Particles2D::set_fractional_delta(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_fractional_delta,
        (const Object*)this,
        enable
    );
}

void Particles2D::set_lifetime(const real_t secs) {
    rebel_icall_void_float(
        method_bindings.mb_set_lifetime,
        (const Object*)this,
        secs
    );
}

void Particles2D::set_normal_map(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_normal_map,
        (const Object*)this,
        texture.ptr()
    );
}

void Particles2D::set_one_shot(const bool secs) {
    rebel_icall_void_bool(
        method_bindings.mb_set_one_shot,
        (const Object*)this,
        secs
    );
}

void Particles2D::set_pre_process_time(const real_t secs) {
    rebel_icall_void_float(
        method_bindings.mb_set_pre_process_time,
        (const Object*)this,
        secs
    );
}

void Particles2D::set_process_material(const Ref<Material> material) {
    rebel_icall_void_object(
        method_bindings.mb_set_process_material,
        (const Object*)this,
        material.ptr()
    );
}

void Particles2D::set_randomness_ratio(const real_t ratio) {
    rebel_icall_void_float(
        method_bindings.mb_set_randomness_ratio,
        (const Object*)this,
        ratio
    );
}

void Particles2D::set_speed_scale(const real_t scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_speed_scale,
        (const Object*)this,
        scale
    );
}

void Particles2D::set_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void Particles2D::set_use_local_coordinates(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_local_coordinates,
        (const Object*)this,
        enable
    );
}

void Particles2D::set_visibility_rect(const Rect2 visibility_rect) {
    rebel_icall_void_rect2(
        method_bindings.mb_set_visibility_rect,
        (const Object*)this,
        visibility_rect
    );
}

Particles2D* Particles2D::create() {
    return (Particles2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Particles2D")()
         );
}

void Particles2D::init_method_bindings() {
    method_bindings.mb_capture_rect =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "capture_rect"
        );
    method_bindings.mb_get_amount =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "get_amount"
        );
    method_bindings.mb_get_draw_order =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "get_draw_order"
        );
    method_bindings.mb_get_explosiveness_ratio =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "get_explosiveness_ratio"
        );
    method_bindings.mb_get_fixed_fps =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "get_fixed_fps"
        );
    method_bindings.mb_get_fractional_delta =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "get_fractional_delta"
        );
    method_bindings.mb_get_lifetime =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "get_lifetime"
        );
    method_bindings.mb_get_normal_map =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "get_normal_map"
        );
    method_bindings.mb_get_one_shot =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "get_one_shot"
        );
    method_bindings.mb_get_pre_process_time =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "get_pre_process_time"
        );
    method_bindings.mb_get_process_material =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "get_process_material"
        );
    method_bindings.mb_get_randomness_ratio =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "get_randomness_ratio"
        );
    method_bindings.mb_get_speed_scale =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "get_speed_scale"
        );
    method_bindings.mb_get_texture =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "get_texture"
        );
    method_bindings.mb_get_use_local_coordinates =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "get_use_local_coordinates"
        );
    method_bindings.mb_get_visibility_rect =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "get_visibility_rect"
        );
    method_bindings.mb_is_emitting =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "is_emitting"
        );
    method_bindings.mb_restart =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "restart"
        );
    method_bindings.mb_set_amount =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "set_amount"
        );
    method_bindings.mb_set_draw_order =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "set_draw_order"
        );
    method_bindings.mb_set_emitting =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "set_emitting"
        );
    method_bindings.mb_set_explosiveness_ratio =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "set_explosiveness_ratio"
        );
    method_bindings.mb_set_fixed_fps =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "set_fixed_fps"
        );
    method_bindings.mb_set_fractional_delta =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "set_fractional_delta"
        );
    method_bindings.mb_set_lifetime =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "set_lifetime"
        );
    method_bindings.mb_set_normal_map =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "set_normal_map"
        );
    method_bindings.mb_set_one_shot =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "set_one_shot"
        );
    method_bindings.mb_set_pre_process_time =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "set_pre_process_time"
        );
    method_bindings.mb_set_process_material =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "set_process_material"
        );
    method_bindings.mb_set_randomness_ratio =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "set_randomness_ratio"
        );
    method_bindings.mb_set_speed_scale =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "set_speed_scale"
        );
    method_bindings.mb_set_texture =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "set_texture"
        );
    method_bindings.mb_set_use_local_coordinates =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "set_use_local_coordinates"
        );
    method_bindings.mb_set_visibility_rect =
        api->rebel_method_bind_get_method(
            "Particles2D",
            "set_visibility_rect"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Particles2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Particles2D::MethodBindings Particles2D::method_bindings = {};
void* Particles2D::class_tag = nullptr;
} // namespace Rebel
