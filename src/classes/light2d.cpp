// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/light2d.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Color Light2D::get_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_color,
        (const Object*)this
    );
}

real_t Light2D::get_energy() const {
    return rebel_icall_float(
        method_bindings.mb_get_energy,
        (const Object*)this
    );
}

real_t Light2D::get_height() const {
    return rebel_icall_float(
        method_bindings.mb_get_height,
        (const Object*)this
    );
}

int64_t Light2D::get_item_cull_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_item_cull_mask,
        (const Object*)this
    );
}

int64_t Light2D::get_item_shadow_cull_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_item_shadow_cull_mask,
        (const Object*)this
    );
}

int64_t Light2D::get_layer_range_max() const {
    return rebel_icall_int(
        method_bindings.mb_get_layer_range_max,
        (const Object*)this
    );
}

int64_t Light2D::get_layer_range_min() const {
    return rebel_icall_int(
        method_bindings.mb_get_layer_range_min,
        (const Object*)this
    );
}

Light2D::Mode Light2D::get_mode() const {
    return (Light2D::Mode)rebel_icall_int(
        method_bindings.mb_get_mode,
        (const Object*)this
    );
}

int64_t Light2D::get_shadow_buffer_size() const {
    return rebel_icall_int(
        method_bindings.mb_get_shadow_buffer_size,
        (const Object*)this
    );
}

Color Light2D::get_shadow_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_shadow_color,
        (const Object*)this
    );
}

Light2D::ShadowFilter Light2D::get_shadow_filter() const {
    return (Light2D::ShadowFilter)rebel_icall_int(
        method_bindings.mb_get_shadow_filter,
        (const Object*)this
    );
}

real_t Light2D::get_shadow_gradient_length() const {
    return rebel_icall_float(
        method_bindings.mb_get_shadow_gradient_length,
        (const Object*)this
    );
}

real_t Light2D::get_shadow_smooth() const {
    return rebel_icall_float(
        method_bindings.mb_get_shadow_smooth,
        (const Object*)this
    );
}

Ref<Texture> Light2D::get_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_texture,
        (const Object*)this
    ));
}

Vector2 Light2D::get_texture_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_texture_offset,
        (const Object*)this
    );
}

real_t Light2D::get_texture_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_texture_scale,
        (const Object*)this
    );
}

int64_t Light2D::get_z_range_max() const {
    return rebel_icall_int(
        method_bindings.mb_get_z_range_max,
        (const Object*)this
    );
}

int64_t Light2D::get_z_range_min() const {
    return rebel_icall_int(
        method_bindings.mb_get_z_range_min,
        (const Object*)this
    );
}

bool Light2D::is_editor_only() const {
    return rebel_icall_bool(
        method_bindings.mb_is_editor_only,
        (const Object*)this
    );
}

bool Light2D::is_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_enabled,
        (const Object*)this
    );
}

bool Light2D::is_shadow_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_shadow_enabled,
        (const Object*)this
    );
}

void Light2D::set_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_color,
        (const Object*)this,
        color
    );
}

void Light2D::set_editor_only(const bool editor_only) {
    rebel_icall_void_bool(
        method_bindings.mb_set_editor_only,
        (const Object*)this,
        editor_only
    );
}

void Light2D::set_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_enabled,
        (const Object*)this,
        enabled
    );
}

void Light2D::set_energy(const real_t energy) {
    rebel_icall_void_float(
        method_bindings.mb_set_energy,
        (const Object*)this,
        energy
    );
}

void Light2D::set_height(const real_t height) {
    rebel_icall_void_float(
        method_bindings.mb_set_height,
        (const Object*)this,
        height
    );
}

void Light2D::set_item_cull_mask(const int64_t item_cull_mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_item_cull_mask,
        (const Object*)this,
        item_cull_mask
    );
}

void Light2D::set_item_shadow_cull_mask(const int64_t item_shadow_cull_mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_item_shadow_cull_mask,
        (const Object*)this,
        item_shadow_cull_mask
    );
}

void Light2D::set_layer_range_max(const int64_t layer) {
    rebel_icall_void_int(
        method_bindings.mb_set_layer_range_max,
        (const Object*)this,
        layer
    );
}

void Light2D::set_layer_range_min(const int64_t layer) {
    rebel_icall_void_int(
        method_bindings.mb_set_layer_range_min,
        (const Object*)this,
        layer
    );
}

void Light2D::set_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_mode,
        (const Object*)this,
        mode
    );
}

void Light2D::set_shadow_buffer_size(const int64_t size) {
    rebel_icall_void_int(
        method_bindings.mb_set_shadow_buffer_size,
        (const Object*)this,
        size
    );
}

void Light2D::set_shadow_color(const Color shadow_color) {
    rebel_icall_void_color(
        method_bindings.mb_set_shadow_color,
        (const Object*)this,
        shadow_color
    );
}

void Light2D::set_shadow_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_shadow_enabled,
        (const Object*)this,
        enabled
    );
}

void Light2D::set_shadow_filter(const int64_t filter) {
    rebel_icall_void_int(
        method_bindings.mb_set_shadow_filter,
        (const Object*)this,
        filter
    );
}

void Light2D::set_shadow_gradient_length(const real_t multiplier) {
    rebel_icall_void_float(
        method_bindings.mb_set_shadow_gradient_length,
        (const Object*)this,
        multiplier
    );
}

void Light2D::set_shadow_smooth(const real_t smooth) {
    rebel_icall_void_float(
        method_bindings.mb_set_shadow_smooth,
        (const Object*)this,
        smooth
    );
}

void Light2D::set_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void Light2D::set_texture_offset(const Vector2 texture_offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_texture_offset,
        (const Object*)this,
        texture_offset
    );
}

void Light2D::set_texture_scale(const real_t texture_scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_texture_scale,
        (const Object*)this,
        texture_scale
    );
}

void Light2D::set_z_range_max(const int64_t z) {
    rebel_icall_void_int(
        method_bindings.mb_set_z_range_max,
        (const Object*)this,
        z
    );
}

void Light2D::set_z_range_min(const int64_t z) {
    rebel_icall_void_int(
        method_bindings.mb_set_z_range_min,
        (const Object*)this,
        z
    );
}

Light2D* Light2D::create() {
    return (Light2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Light2D")()
         );
}

void Light2D::init_method_bindings() {
    method_bindings.mb_get_color =
        api->rebel_method_bind_get_method(
            "Light2D",
            "get_color"
        );
    method_bindings.mb_get_energy =
        api->rebel_method_bind_get_method(
            "Light2D",
            "get_energy"
        );
    method_bindings.mb_get_height =
        api->rebel_method_bind_get_method(
            "Light2D",
            "get_height"
        );
    method_bindings.mb_get_item_cull_mask =
        api->rebel_method_bind_get_method(
            "Light2D",
            "get_item_cull_mask"
        );
    method_bindings.mb_get_item_shadow_cull_mask =
        api->rebel_method_bind_get_method(
            "Light2D",
            "get_item_shadow_cull_mask"
        );
    method_bindings.mb_get_layer_range_max =
        api->rebel_method_bind_get_method(
            "Light2D",
            "get_layer_range_max"
        );
    method_bindings.mb_get_layer_range_min =
        api->rebel_method_bind_get_method(
            "Light2D",
            "get_layer_range_min"
        );
    method_bindings.mb_get_mode =
        api->rebel_method_bind_get_method(
            "Light2D",
            "get_mode"
        );
    method_bindings.mb_get_shadow_buffer_size =
        api->rebel_method_bind_get_method(
            "Light2D",
            "get_shadow_buffer_size"
        );
    method_bindings.mb_get_shadow_color =
        api->rebel_method_bind_get_method(
            "Light2D",
            "get_shadow_color"
        );
    method_bindings.mb_get_shadow_filter =
        api->rebel_method_bind_get_method(
            "Light2D",
            "get_shadow_filter"
        );
    method_bindings.mb_get_shadow_gradient_length =
        api->rebel_method_bind_get_method(
            "Light2D",
            "get_shadow_gradient_length"
        );
    method_bindings.mb_get_shadow_smooth =
        api->rebel_method_bind_get_method(
            "Light2D",
            "get_shadow_smooth"
        );
    method_bindings.mb_get_texture =
        api->rebel_method_bind_get_method(
            "Light2D",
            "get_texture"
        );
    method_bindings.mb_get_texture_offset =
        api->rebel_method_bind_get_method(
            "Light2D",
            "get_texture_offset"
        );
    method_bindings.mb_get_texture_scale =
        api->rebel_method_bind_get_method(
            "Light2D",
            "get_texture_scale"
        );
    method_bindings.mb_get_z_range_max =
        api->rebel_method_bind_get_method(
            "Light2D",
            "get_z_range_max"
        );
    method_bindings.mb_get_z_range_min =
        api->rebel_method_bind_get_method(
            "Light2D",
            "get_z_range_min"
        );
    method_bindings.mb_is_editor_only =
        api->rebel_method_bind_get_method(
            "Light2D",
            "is_editor_only"
        );
    method_bindings.mb_is_enabled =
        api->rebel_method_bind_get_method(
            "Light2D",
            "is_enabled"
        );
    method_bindings.mb_is_shadow_enabled =
        api->rebel_method_bind_get_method(
            "Light2D",
            "is_shadow_enabled"
        );
    method_bindings.mb_set_color =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_color"
        );
    method_bindings.mb_set_editor_only =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_editor_only"
        );
    method_bindings.mb_set_enabled =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_enabled"
        );
    method_bindings.mb_set_energy =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_energy"
        );
    method_bindings.mb_set_height =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_height"
        );
    method_bindings.mb_set_item_cull_mask =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_item_cull_mask"
        );
    method_bindings.mb_set_item_shadow_cull_mask =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_item_shadow_cull_mask"
        );
    method_bindings.mb_set_layer_range_max =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_layer_range_max"
        );
    method_bindings.mb_set_layer_range_min =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_layer_range_min"
        );
    method_bindings.mb_set_mode =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_mode"
        );
    method_bindings.mb_set_shadow_buffer_size =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_shadow_buffer_size"
        );
    method_bindings.mb_set_shadow_color =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_shadow_color"
        );
    method_bindings.mb_set_shadow_enabled =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_shadow_enabled"
        );
    method_bindings.mb_set_shadow_filter =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_shadow_filter"
        );
    method_bindings.mb_set_shadow_gradient_length =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_shadow_gradient_length"
        );
    method_bindings.mb_set_shadow_smooth =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_shadow_smooth"
        );
    method_bindings.mb_set_texture =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_texture"
        );
    method_bindings.mb_set_texture_offset =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_texture_offset"
        );
    method_bindings.mb_set_texture_scale =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_texture_scale"
        );
    method_bindings.mb_set_z_range_max =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_z_range_max"
        );
    method_bindings.mb_set_z_range_min =
        api->rebel_method_bind_get_method(
            "Light2D",
            "set_z_range_min"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Light2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Light2D::MethodBindings Light2D::method_bindings = {};
void* Light2D::class_tag = nullptr;
} // namespace Rebel
