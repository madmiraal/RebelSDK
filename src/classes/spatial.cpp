// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/spatial.h"

#include "classes/icalls.h"
#include "classes/spatial.h"
#include "classes/spatialgizmo.h"
#include "classes/world.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Spatial::_update_gizmo() {
    rebel_icall_void(
        method_bindings.mb__update_gizmo,
        (const Object*)this
    );
}

void Spatial::force_update_transform() {
    rebel_icall_void(
        method_bindings.mb_force_update_transform,
        (const Object*)this
    );
}

Ref<SpatialGizmo> Spatial::get_gizmo() const {
    return Ref<SpatialGizmo>::create_ref(rebel_icall_object(
        method_bindings.mb_get_gizmo,
        (const Object*)this
    ));
}

Transform Spatial::get_global_transform() const {
    return rebel_icall_transform(
        method_bindings.mb_get_global_transform,
        (const Object*)this
    );
}

Spatial* Spatial::get_parent_spatial() const {
    return (Spatial*)rebel_icall_object(
        method_bindings.mb_get_parent_spatial,
        (const Object*)this
    );
}

Vector3 Spatial::get_rotation() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_rotation,
        (const Object*)this
    );
}

Vector3 Spatial::get_rotation_degrees() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_rotation_degrees,
        (const Object*)this
    );
}

Vector3 Spatial::get_scale() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_scale,
        (const Object*)this
    );
}

Transform Spatial::get_transform() const {
    return rebel_icall_transform(
        method_bindings.mb_get_transform,
        (const Object*)this
    );
}

Vector3 Spatial::get_translation() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_translation,
        (const Object*)this
    );
}

Ref<World> Spatial::get_world() const {
    return Ref<World>::create_ref(rebel_icall_object(
        method_bindings.mb_get_world,
        (const Object*)this
    ));
}

void Spatial::global_rotate(const Vector3 axis, const real_t angle) {
    rebel_icall_void_vector3_float(
        method_bindings.mb_global_rotate,
        (const Object*)this,
        axis,
        angle
    );
}

void Spatial::global_scale(const Vector3 scale) {
    rebel_icall_void_vector3(
        method_bindings.mb_global_scale,
        (const Object*)this,
        scale
    );
}

void Spatial::global_translate(const Vector3 offset) {
    rebel_icall_void_vector3(
        method_bindings.mb_global_translate,
        (const Object*)this,
        offset
    );
}

void Spatial::hide() {
    rebel_icall_void(
        method_bindings.mb_hide,
        (const Object*)this
    );
}

bool Spatial::is_local_transform_notification_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_local_transform_notification_enabled,
        (const Object*)this
    );
}

bool Spatial::is_scale_disabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_scale_disabled,
        (const Object*)this
    );
}

bool Spatial::is_set_as_toplevel() const {
    return rebel_icall_bool(
        method_bindings.mb_is_set_as_toplevel,
        (const Object*)this
    );
}

bool Spatial::is_transform_notification_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_transform_notification_enabled,
        (const Object*)this
    );
}

bool Spatial::is_visible() const {
    return rebel_icall_bool(
        method_bindings.mb_is_visible,
        (const Object*)this
    );
}

bool Spatial::is_visible_in_tree() const {
    return rebel_icall_bool(
        method_bindings.mb_is_visible_in_tree,
        (const Object*)this
    );
}

void Spatial::look_at(const Vector3 target, const Vector3 up) {
    rebel_icall_void_vector3_vector3(
        method_bindings.mb_look_at,
        (const Object*)this,
        target,
        up
    );
}

void Spatial::look_at_from_position(const Vector3 position, const Vector3 target, const Vector3 up) {
    rebel_icall_void_vector3_vector3_vector3(
        method_bindings.mb_look_at_from_position,
        (const Object*)this,
        position,
        target,
        up
    );
}

void Spatial::orthonormalize() {
    rebel_icall_void(
        method_bindings.mb_orthonormalize,
        (const Object*)this
    );
}

void Spatial::rotate(const Vector3 axis, const real_t angle) {
    rebel_icall_void_vector3_float(
        method_bindings.mb_rotate,
        (const Object*)this,
        axis,
        angle
    );
}

void Spatial::rotate_object_local(const Vector3 axis, const real_t angle) {
    rebel_icall_void_vector3_float(
        method_bindings.mb_rotate_object_local,
        (const Object*)this,
        axis,
        angle
    );
}

void Spatial::rotate_x(const real_t angle) {
    rebel_icall_void_float(
        method_bindings.mb_rotate_x,
        (const Object*)this,
        angle
    );
}

void Spatial::rotate_y(const real_t angle) {
    rebel_icall_void_float(
        method_bindings.mb_rotate_y,
        (const Object*)this,
        angle
    );
}

void Spatial::rotate_z(const real_t angle) {
    rebel_icall_void_float(
        method_bindings.mb_rotate_z,
        (const Object*)this,
        angle
    );
}

void Spatial::scale_object_local(const Vector3 scale) {
    rebel_icall_void_vector3(
        method_bindings.mb_scale_object_local,
        (const Object*)this,
        scale
    );
}

void Spatial::set_as_toplevel(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_as_toplevel,
        (const Object*)this,
        enable
    );
}

void Spatial::set_disable_scale(const bool disable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_disable_scale,
        (const Object*)this,
        disable
    );
}

void Spatial::set_gizmo(const Ref<SpatialGizmo> gizmo) {
    rebel_icall_void_object(
        method_bindings.mb_set_gizmo,
        (const Object*)this,
        gizmo.ptr()
    );
}

void Spatial::set_global_transform(const Transform global) {
    rebel_icall_void_transform(
        method_bindings.mb_set_global_transform,
        (const Object*)this,
        global
    );
}

void Spatial::set_identity() {
    rebel_icall_void(
        method_bindings.mb_set_identity,
        (const Object*)this
    );
}

void Spatial::set_ignore_transform_notification(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_ignore_transform_notification,
        (const Object*)this,
        enabled
    );
}

void Spatial::set_notify_local_transform(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_notify_local_transform,
        (const Object*)this,
        enable
    );
}

void Spatial::set_notify_transform(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_notify_transform,
        (const Object*)this,
        enable
    );
}

void Spatial::set_rotation(const Vector3 euler) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_rotation,
        (const Object*)this,
        euler
    );
}

void Spatial::set_rotation_degrees(const Vector3 euler_degrees) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_rotation_degrees,
        (const Object*)this,
        euler_degrees
    );
}

void Spatial::set_scale(const Vector3 scale) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_scale,
        (const Object*)this,
        scale
    );
}

void Spatial::set_transform(const Transform local) {
    rebel_icall_void_transform(
        method_bindings.mb_set_transform,
        (const Object*)this,
        local
    );
}

void Spatial::set_translation(const Vector3 translation) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_translation,
        (const Object*)this,
        translation
    );
}

void Spatial::set_visible(const bool visible) {
    rebel_icall_void_bool(
        method_bindings.mb_set_visible,
        (const Object*)this,
        visible
    );
}

void Spatial::show() {
    rebel_icall_void(
        method_bindings.mb_show,
        (const Object*)this
    );
}

Vector3 Spatial::to_global(const Vector3 local_point) const {
    return rebel_icall_vector3_vector3(
        method_bindings.mb_to_global,
        (const Object*)this,
        local_point
    );
}

Vector3 Spatial::to_local(const Vector3 global_point) const {
    return rebel_icall_vector3_vector3(
        method_bindings.mb_to_local,
        (const Object*)this,
        global_point
    );
}

void Spatial::translate(const Vector3 offset) {
    rebel_icall_void_vector3(
        method_bindings.mb_translate,
        (const Object*)this,
        offset
    );
}

void Spatial::translate_object_local(const Vector3 offset) {
    rebel_icall_void_vector3(
        method_bindings.mb_translate_object_local,
        (const Object*)this,
        offset
    );
}

void Spatial::update_gizmo() {
    rebel_icall_void(
        method_bindings.mb_update_gizmo,
        (const Object*)this
    );
}

Spatial* Spatial::create() {
    return (Spatial*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Spatial")()
         );
}

void Spatial::init_method_bindings() {
    method_bindings.mb__update_gizmo =
        api->rebel_method_bind_get_method(
            "Spatial",
            "_update_gizmo"
        );
    method_bindings.mb_force_update_transform =
        api->rebel_method_bind_get_method(
            "Spatial",
            "force_update_transform"
        );
    method_bindings.mb_get_gizmo =
        api->rebel_method_bind_get_method(
            "Spatial",
            "get_gizmo"
        );
    method_bindings.mb_get_global_transform =
        api->rebel_method_bind_get_method(
            "Spatial",
            "get_global_transform"
        );
    method_bindings.mb_get_parent_spatial =
        api->rebel_method_bind_get_method(
            "Spatial",
            "get_parent_spatial"
        );
    method_bindings.mb_get_rotation =
        api->rebel_method_bind_get_method(
            "Spatial",
            "get_rotation"
        );
    method_bindings.mb_get_rotation_degrees =
        api->rebel_method_bind_get_method(
            "Spatial",
            "get_rotation_degrees"
        );
    method_bindings.mb_get_scale =
        api->rebel_method_bind_get_method(
            "Spatial",
            "get_scale"
        );
    method_bindings.mb_get_transform =
        api->rebel_method_bind_get_method(
            "Spatial",
            "get_transform"
        );
    method_bindings.mb_get_translation =
        api->rebel_method_bind_get_method(
            "Spatial",
            "get_translation"
        );
    method_bindings.mb_get_world =
        api->rebel_method_bind_get_method(
            "Spatial",
            "get_world"
        );
    method_bindings.mb_global_rotate =
        api->rebel_method_bind_get_method(
            "Spatial",
            "global_rotate"
        );
    method_bindings.mb_global_scale =
        api->rebel_method_bind_get_method(
            "Spatial",
            "global_scale"
        );
    method_bindings.mb_global_translate =
        api->rebel_method_bind_get_method(
            "Spatial",
            "global_translate"
        );
    method_bindings.mb_hide =
        api->rebel_method_bind_get_method(
            "Spatial",
            "hide"
        );
    method_bindings.mb_is_local_transform_notification_enabled =
        api->rebel_method_bind_get_method(
            "Spatial",
            "is_local_transform_notification_enabled"
        );
    method_bindings.mb_is_scale_disabled =
        api->rebel_method_bind_get_method(
            "Spatial",
            "is_scale_disabled"
        );
    method_bindings.mb_is_set_as_toplevel =
        api->rebel_method_bind_get_method(
            "Spatial",
            "is_set_as_toplevel"
        );
    method_bindings.mb_is_transform_notification_enabled =
        api->rebel_method_bind_get_method(
            "Spatial",
            "is_transform_notification_enabled"
        );
    method_bindings.mb_is_visible =
        api->rebel_method_bind_get_method(
            "Spatial",
            "is_visible"
        );
    method_bindings.mb_is_visible_in_tree =
        api->rebel_method_bind_get_method(
            "Spatial",
            "is_visible_in_tree"
        );
    method_bindings.mb_look_at =
        api->rebel_method_bind_get_method(
            "Spatial",
            "look_at"
        );
    method_bindings.mb_look_at_from_position =
        api->rebel_method_bind_get_method(
            "Spatial",
            "look_at_from_position"
        );
    method_bindings.mb_orthonormalize =
        api->rebel_method_bind_get_method(
            "Spatial",
            "orthonormalize"
        );
    method_bindings.mb_rotate =
        api->rebel_method_bind_get_method(
            "Spatial",
            "rotate"
        );
    method_bindings.mb_rotate_object_local =
        api->rebel_method_bind_get_method(
            "Spatial",
            "rotate_object_local"
        );
    method_bindings.mb_rotate_x =
        api->rebel_method_bind_get_method(
            "Spatial",
            "rotate_x"
        );
    method_bindings.mb_rotate_y =
        api->rebel_method_bind_get_method(
            "Spatial",
            "rotate_y"
        );
    method_bindings.mb_rotate_z =
        api->rebel_method_bind_get_method(
            "Spatial",
            "rotate_z"
        );
    method_bindings.mb_scale_object_local =
        api->rebel_method_bind_get_method(
            "Spatial",
            "scale_object_local"
        );
    method_bindings.mb_set_as_toplevel =
        api->rebel_method_bind_get_method(
            "Spatial",
            "set_as_toplevel"
        );
    method_bindings.mb_set_disable_scale =
        api->rebel_method_bind_get_method(
            "Spatial",
            "set_disable_scale"
        );
    method_bindings.mb_set_gizmo =
        api->rebel_method_bind_get_method(
            "Spatial",
            "set_gizmo"
        );
    method_bindings.mb_set_global_transform =
        api->rebel_method_bind_get_method(
            "Spatial",
            "set_global_transform"
        );
    method_bindings.mb_set_identity =
        api->rebel_method_bind_get_method(
            "Spatial",
            "set_identity"
        );
    method_bindings.mb_set_ignore_transform_notification =
        api->rebel_method_bind_get_method(
            "Spatial",
            "set_ignore_transform_notification"
        );
    method_bindings.mb_set_notify_local_transform =
        api->rebel_method_bind_get_method(
            "Spatial",
            "set_notify_local_transform"
        );
    method_bindings.mb_set_notify_transform =
        api->rebel_method_bind_get_method(
            "Spatial",
            "set_notify_transform"
        );
    method_bindings.mb_set_rotation =
        api->rebel_method_bind_get_method(
            "Spatial",
            "set_rotation"
        );
    method_bindings.mb_set_rotation_degrees =
        api->rebel_method_bind_get_method(
            "Spatial",
            "set_rotation_degrees"
        );
    method_bindings.mb_set_scale =
        api->rebel_method_bind_get_method(
            "Spatial",
            "set_scale"
        );
    method_bindings.mb_set_transform =
        api->rebel_method_bind_get_method(
            "Spatial",
            "set_transform"
        );
    method_bindings.mb_set_translation =
        api->rebel_method_bind_get_method(
            "Spatial",
            "set_translation"
        );
    method_bindings.mb_set_visible =
        api->rebel_method_bind_get_method(
            "Spatial",
            "set_visible"
        );
    method_bindings.mb_show =
        api->rebel_method_bind_get_method(
            "Spatial",
            "show"
        );
    method_bindings.mb_to_global =
        api->rebel_method_bind_get_method(
            "Spatial",
            "to_global"
        );
    method_bindings.mb_to_local =
        api->rebel_method_bind_get_method(
            "Spatial",
            "to_local"
        );
    method_bindings.mb_translate =
        api->rebel_method_bind_get_method(
            "Spatial",
            "translate"
        );
    method_bindings.mb_translate_object_local =
        api->rebel_method_bind_get_method(
            "Spatial",
            "translate_object_local"
        );
    method_bindings.mb_update_gizmo =
        api->rebel_method_bind_get_method(
            "Spatial",
            "update_gizmo"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Spatial");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Spatial::MethodBindings Spatial::method_bindings = {};
void* Spatial::class_tag = nullptr;
} // namespace Rebel
