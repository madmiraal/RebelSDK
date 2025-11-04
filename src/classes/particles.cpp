// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/particles.h"

#include "classes/icalls.h"
#include "classes/material.h"
#include "classes/mesh.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
AABB Particles::capture_aabb() const {
    return rebel_icall_aabb(
        method_bindings.mb_capture_aabb,
        (const Object*)this
    );
}

int64_t Particles::get_amount() const {
    return rebel_icall_int(
        method_bindings.mb_get_amount,
        (const Object*)this
    );
}

Particles::DrawOrder Particles::get_draw_order() const {
    return (Particles::DrawOrder)rebel_icall_int(
        method_bindings.mb_get_draw_order,
        (const Object*)this
    );
}

Ref<Mesh> Particles::get_draw_pass_mesh(const int64_t pass) const {
    return Ref<Mesh>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_draw_pass_mesh,
        (const Object*)this,
        pass
    ));
}

int64_t Particles::get_draw_passes() const {
    return rebel_icall_int(
        method_bindings.mb_get_draw_passes,
        (const Object*)this
    );
}

real_t Particles::get_explosiveness_ratio() const {
    return rebel_icall_float(
        method_bindings.mb_get_explosiveness_ratio,
        (const Object*)this
    );
}

int64_t Particles::get_fixed_fps() const {
    return rebel_icall_int(
        method_bindings.mb_get_fixed_fps,
        (const Object*)this
    );
}

bool Particles::get_fractional_delta() const {
    return rebel_icall_bool(
        method_bindings.mb_get_fractional_delta,
        (const Object*)this
    );
}

real_t Particles::get_lifetime() const {
    return rebel_icall_float(
        method_bindings.mb_get_lifetime,
        (const Object*)this
    );
}

bool Particles::get_one_shot() const {
    return rebel_icall_bool(
        method_bindings.mb_get_one_shot,
        (const Object*)this
    );
}

real_t Particles::get_pre_process_time() const {
    return rebel_icall_float(
        method_bindings.mb_get_pre_process_time,
        (const Object*)this
    );
}

Ref<Material> Particles::get_process_material() const {
    return Ref<Material>::create_ref(rebel_icall_object(
        method_bindings.mb_get_process_material,
        (const Object*)this
    ));
}

real_t Particles::get_randomness_ratio() const {
    return rebel_icall_float(
        method_bindings.mb_get_randomness_ratio,
        (const Object*)this
    );
}

real_t Particles::get_speed_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_speed_scale,
        (const Object*)this
    );
}

bool Particles::get_use_local_coordinates() const {
    return rebel_icall_bool(
        method_bindings.mb_get_use_local_coordinates,
        (const Object*)this
    );
}

AABB Particles::get_visibility_aabb() const {
    return rebel_icall_aabb(
        method_bindings.mb_get_visibility_aabb,
        (const Object*)this
    );
}

bool Particles::is_emitting() const {
    return rebel_icall_bool(
        method_bindings.mb_is_emitting,
        (const Object*)this
    );
}

void Particles::restart() {
    rebel_icall_void(
        method_bindings.mb_restart,
        (const Object*)this
    );
}

void Particles::set_amount(const int64_t amount) {
    rebel_icall_void_int(
        method_bindings.mb_set_amount,
        (const Object*)this,
        amount
    );
}

void Particles::set_draw_order(const int64_t order) {
    rebel_icall_void_int(
        method_bindings.mb_set_draw_order,
        (const Object*)this,
        order
    );
}

void Particles::set_draw_pass_mesh(const int64_t pass, const Ref<Mesh> mesh) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_draw_pass_mesh,
        (const Object*)this,
        pass,
        mesh.ptr()
    );
}

void Particles::set_draw_passes(const int64_t passes) {
    rebel_icall_void_int(
        method_bindings.mb_set_draw_passes,
        (const Object*)this,
        passes
    );
}

void Particles::set_emitting(const bool emitting) {
    rebel_icall_void_bool(
        method_bindings.mb_set_emitting,
        (const Object*)this,
        emitting
    );
}

void Particles::set_explosiveness_ratio(const real_t ratio) {
    rebel_icall_void_float(
        method_bindings.mb_set_explosiveness_ratio,
        (const Object*)this,
        ratio
    );
}

void Particles::set_fixed_fps(const int64_t fps) {
    rebel_icall_void_int(
        method_bindings.mb_set_fixed_fps,
        (const Object*)this,
        fps
    );
}

void Particles::set_fractional_delta(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_fractional_delta,
        (const Object*)this,
        enable
    );
}

void Particles::set_lifetime(const real_t secs) {
    rebel_icall_void_float(
        method_bindings.mb_set_lifetime,
        (const Object*)this,
        secs
    );
}

void Particles::set_one_shot(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_one_shot,
        (const Object*)this,
        enable
    );
}

void Particles::set_pre_process_time(const real_t secs) {
    rebel_icall_void_float(
        method_bindings.mb_set_pre_process_time,
        (const Object*)this,
        secs
    );
}

void Particles::set_process_material(const Ref<Material> material) {
    rebel_icall_void_object(
        method_bindings.mb_set_process_material,
        (const Object*)this,
        material.ptr()
    );
}

void Particles::set_randomness_ratio(const real_t ratio) {
    rebel_icall_void_float(
        method_bindings.mb_set_randomness_ratio,
        (const Object*)this,
        ratio
    );
}

void Particles::set_speed_scale(const real_t scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_speed_scale,
        (const Object*)this,
        scale
    );
}

void Particles::set_use_local_coordinates(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_local_coordinates,
        (const Object*)this,
        enable
    );
}

void Particles::set_visibility_aabb(const AABB aabb) {
    rebel_icall_void_aabb(
        method_bindings.mb_set_visibility_aabb,
        (const Object*)this,
        aabb
    );
}

Particles* Particles::create() {
    return (Particles*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Particles")()
         );
}

void Particles::init_method_bindings() {
    method_bindings.mb_capture_aabb =
        api->rebel_method_bind_get_method(
            "Particles",
            "capture_aabb"
        );
    method_bindings.mb_get_amount =
        api->rebel_method_bind_get_method(
            "Particles",
            "get_amount"
        );
    method_bindings.mb_get_draw_order =
        api->rebel_method_bind_get_method(
            "Particles",
            "get_draw_order"
        );
    method_bindings.mb_get_draw_pass_mesh =
        api->rebel_method_bind_get_method(
            "Particles",
            "get_draw_pass_mesh"
        );
    method_bindings.mb_get_draw_passes =
        api->rebel_method_bind_get_method(
            "Particles",
            "get_draw_passes"
        );
    method_bindings.mb_get_explosiveness_ratio =
        api->rebel_method_bind_get_method(
            "Particles",
            "get_explosiveness_ratio"
        );
    method_bindings.mb_get_fixed_fps =
        api->rebel_method_bind_get_method(
            "Particles",
            "get_fixed_fps"
        );
    method_bindings.mb_get_fractional_delta =
        api->rebel_method_bind_get_method(
            "Particles",
            "get_fractional_delta"
        );
    method_bindings.mb_get_lifetime =
        api->rebel_method_bind_get_method(
            "Particles",
            "get_lifetime"
        );
    method_bindings.mb_get_one_shot =
        api->rebel_method_bind_get_method(
            "Particles",
            "get_one_shot"
        );
    method_bindings.mb_get_pre_process_time =
        api->rebel_method_bind_get_method(
            "Particles",
            "get_pre_process_time"
        );
    method_bindings.mb_get_process_material =
        api->rebel_method_bind_get_method(
            "Particles",
            "get_process_material"
        );
    method_bindings.mb_get_randomness_ratio =
        api->rebel_method_bind_get_method(
            "Particles",
            "get_randomness_ratio"
        );
    method_bindings.mb_get_speed_scale =
        api->rebel_method_bind_get_method(
            "Particles",
            "get_speed_scale"
        );
    method_bindings.mb_get_use_local_coordinates =
        api->rebel_method_bind_get_method(
            "Particles",
            "get_use_local_coordinates"
        );
    method_bindings.mb_get_visibility_aabb =
        api->rebel_method_bind_get_method(
            "Particles",
            "get_visibility_aabb"
        );
    method_bindings.mb_is_emitting =
        api->rebel_method_bind_get_method(
            "Particles",
            "is_emitting"
        );
    method_bindings.mb_restart =
        api->rebel_method_bind_get_method(
            "Particles",
            "restart"
        );
    method_bindings.mb_set_amount =
        api->rebel_method_bind_get_method(
            "Particles",
            "set_amount"
        );
    method_bindings.mb_set_draw_order =
        api->rebel_method_bind_get_method(
            "Particles",
            "set_draw_order"
        );
    method_bindings.mb_set_draw_pass_mesh =
        api->rebel_method_bind_get_method(
            "Particles",
            "set_draw_pass_mesh"
        );
    method_bindings.mb_set_draw_passes =
        api->rebel_method_bind_get_method(
            "Particles",
            "set_draw_passes"
        );
    method_bindings.mb_set_emitting =
        api->rebel_method_bind_get_method(
            "Particles",
            "set_emitting"
        );
    method_bindings.mb_set_explosiveness_ratio =
        api->rebel_method_bind_get_method(
            "Particles",
            "set_explosiveness_ratio"
        );
    method_bindings.mb_set_fixed_fps =
        api->rebel_method_bind_get_method(
            "Particles",
            "set_fixed_fps"
        );
    method_bindings.mb_set_fractional_delta =
        api->rebel_method_bind_get_method(
            "Particles",
            "set_fractional_delta"
        );
    method_bindings.mb_set_lifetime =
        api->rebel_method_bind_get_method(
            "Particles",
            "set_lifetime"
        );
    method_bindings.mb_set_one_shot =
        api->rebel_method_bind_get_method(
            "Particles",
            "set_one_shot"
        );
    method_bindings.mb_set_pre_process_time =
        api->rebel_method_bind_get_method(
            "Particles",
            "set_pre_process_time"
        );
    method_bindings.mb_set_process_material =
        api->rebel_method_bind_get_method(
            "Particles",
            "set_process_material"
        );
    method_bindings.mb_set_randomness_ratio =
        api->rebel_method_bind_get_method(
            "Particles",
            "set_randomness_ratio"
        );
    method_bindings.mb_set_speed_scale =
        api->rebel_method_bind_get_method(
            "Particles",
            "set_speed_scale"
        );
    method_bindings.mb_set_use_local_coordinates =
        api->rebel_method_bind_get_method(
            "Particles",
            "set_use_local_coordinates"
        );
    method_bindings.mb_set_visibility_aabb =
        api->rebel_method_bind_get_method(
            "Particles",
            "set_visibility_aabb"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Particles");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Particles::MethodBindings Particles::method_bindings = {};
void* Particles::class_tag = nullptr;
} // namespace Rebel
