// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/camera.h"

#include "classes/environment.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Camera::clear_current(const bool enable_next) {
    rebel_icall_void_bool(
        method_bindings.mb_clear_current,
        (const Object*)this,
        enable_next
    );
}

RID Camera::get_camera_rid() const {
    return rebel_icall_rid(
        method_bindings.mb_get_camera_rid,
        (const Object*)this
    );
}

Transform Camera::get_camera_transform() const {
    return rebel_icall_transform(
        method_bindings.mb_get_camera_transform,
        (const Object*)this
    );
}

int64_t Camera::get_cull_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_cull_mask,
        (const Object*)this
    );
}

bool Camera::get_cull_mask_bit(const int64_t layer) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_cull_mask_bit,
        (const Object*)this,
        layer
    );
}

Camera::DopplerTracking Camera::get_doppler_tracking() const {
    return (Camera::DopplerTracking)rebel_icall_int(
        method_bindings.mb_get_doppler_tracking,
        (const Object*)this
    );
}

Ref<Environment> Camera::get_environment() const {
    return Ref<Environment>::create_ref(rebel_icall_object(
        method_bindings.mb_get_environment,
        (const Object*)this
    ));
}

real_t Camera::get_fov() const {
    return rebel_icall_float(
        method_bindings.mb_get_fov,
        (const Object*)this
    );
}

Array Camera::get_frustum() const {
    return rebel_icall_array(
        method_bindings.mb_get_frustum,
        (const Object*)this
    );
}

Vector2 Camera::get_frustum_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_frustum_offset,
        (const Object*)this
    );
}

real_t Camera::get_h_offset() const {
    return rebel_icall_float(
        method_bindings.mb_get_h_offset,
        (const Object*)this
    );
}

Camera::KeepAspect Camera::get_keep_aspect_mode() const {
    return (Camera::KeepAspect)rebel_icall_int(
        method_bindings.mb_get_keep_aspect_mode,
        (const Object*)this
    );
}

Camera::Projection Camera::get_projection() const {
    return (Camera::Projection)rebel_icall_int(
        method_bindings.mb_get_projection,
        (const Object*)this
    );
}

real_t Camera::get_size() const {
    return rebel_icall_float(
        method_bindings.mb_get_size,
        (const Object*)this
    );
}

real_t Camera::get_v_offset() const {
    return rebel_icall_float(
        method_bindings.mb_get_v_offset,
        (const Object*)this
    );
}

real_t Camera::get_zfar() const {
    return rebel_icall_float(
        method_bindings.mb_get_zfar,
        (const Object*)this
    );
}

real_t Camera::get_znear() const {
    return rebel_icall_float(
        method_bindings.mb_get_znear,
        (const Object*)this
    );
}

bool Camera::is_current() const {
    return rebel_icall_bool(
        method_bindings.mb_is_current,
        (const Object*)this
    );
}

bool Camera::is_position_behind(const Vector3 world_point) const {
    return rebel_icall_bool_vector3(
        method_bindings.mb_is_position_behind,
        (const Object*)this,
        world_point
    );
}

void Camera::make_current() {
    rebel_icall_void(
        method_bindings.mb_make_current,
        (const Object*)this
    );
}

Vector3 Camera::project_local_ray_normal(const Vector2 screen_point) const {
    return rebel_icall_vector3_vector2(
        method_bindings.mb_project_local_ray_normal,
        (const Object*)this,
        screen_point
    );
}

Vector3 Camera::project_position(const Vector2 screen_point, const real_t z_depth) const {
    return rebel_icall_vector3_vector2_float(
        method_bindings.mb_project_position,
        (const Object*)this,
        screen_point,
        z_depth
    );
}

Vector3 Camera::project_ray_normal(const Vector2 screen_point) const {
    return rebel_icall_vector3_vector2(
        method_bindings.mb_project_ray_normal,
        (const Object*)this,
        screen_point
    );
}

Vector3 Camera::project_ray_origin(const Vector2 screen_point) const {
    return rebel_icall_vector3_vector2(
        method_bindings.mb_project_ray_origin,
        (const Object*)this,
        screen_point
    );
}

void Camera::set_cull_mask(const int64_t mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_cull_mask,
        (const Object*)this,
        mask
    );
}

void Camera::set_cull_mask_bit(const int64_t layer, const bool enable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_cull_mask_bit,
        (const Object*)this,
        layer,
        enable
    );
}

void Camera::set_current(const bool arg0) {
    rebel_icall_void_bool(
        method_bindings.mb_set_current,
        (const Object*)this,
        arg0
    );
}

void Camera::set_doppler_tracking(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_doppler_tracking,
        (const Object*)this,
        mode
    );
}

void Camera::set_environment(const Ref<Environment> env) {
    rebel_icall_void_object(
        method_bindings.mb_set_environment,
        (const Object*)this,
        env.ptr()
    );
}

void Camera::set_fov(const real_t arg0) {
    rebel_icall_void_float(
        method_bindings.mb_set_fov,
        (const Object*)this,
        arg0
    );
}

void Camera::set_frustum(const real_t size, const Vector2 offset, const real_t z_near, const real_t z_far) {
    rebel_icall_void_float_vector2_float_float(
        method_bindings.mb_set_frustum,
        (const Object*)this,
        size,
        offset,
        z_near,
        z_far
    );
}

void Camera::set_frustum_offset(const Vector2 arg0) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_frustum_offset,
        (const Object*)this,
        arg0
    );
}

void Camera::set_h_offset(const real_t ofs) {
    rebel_icall_void_float(
        method_bindings.mb_set_h_offset,
        (const Object*)this,
        ofs
    );
}

void Camera::set_keep_aspect_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_keep_aspect_mode,
        (const Object*)this,
        mode
    );
}

void Camera::set_orthogonal(const real_t size, const real_t z_near, const real_t z_far) {
    rebel_icall_void_float_float_float(
        method_bindings.mb_set_orthogonal,
        (const Object*)this,
        size,
        z_near,
        z_far
    );
}

void Camera::set_perspective(const real_t fov, const real_t z_near, const real_t z_far) {
    rebel_icall_void_float_float_float(
        method_bindings.mb_set_perspective,
        (const Object*)this,
        fov,
        z_near,
        z_far
    );
}

void Camera::set_projection(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb_set_projection,
        (const Object*)this,
        arg0
    );
}

void Camera::set_size(const real_t arg0) {
    rebel_icall_void_float(
        method_bindings.mb_set_size,
        (const Object*)this,
        arg0
    );
}

void Camera::set_v_offset(const real_t ofs) {
    rebel_icall_void_float(
        method_bindings.mb_set_v_offset,
        (const Object*)this,
        ofs
    );
}

void Camera::set_zfar(const real_t arg0) {
    rebel_icall_void_float(
        method_bindings.mb_set_zfar,
        (const Object*)this,
        arg0
    );
}

void Camera::set_znear(const real_t arg0) {
    rebel_icall_void_float(
        method_bindings.mb_set_znear,
        (const Object*)this,
        arg0
    );
}

Vector2 Camera::unproject_position(const Vector3 world_point) const {
    return rebel_icall_vector2_vector3(
        method_bindings.mb_unproject_position,
        (const Object*)this,
        world_point
    );
}

Camera* Camera::create() {
    return (Camera*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Camera")()
         );
}

void Camera::init_method_bindings() {
    method_bindings.mb_clear_current =
        api->rebel_method_bind_get_method(
            "Camera",
            "clear_current"
        );
    method_bindings.mb_get_camera_rid =
        api->rebel_method_bind_get_method(
            "Camera",
            "get_camera_rid"
        );
    method_bindings.mb_get_camera_transform =
        api->rebel_method_bind_get_method(
            "Camera",
            "get_camera_transform"
        );
    method_bindings.mb_get_cull_mask =
        api->rebel_method_bind_get_method(
            "Camera",
            "get_cull_mask"
        );
    method_bindings.mb_get_cull_mask_bit =
        api->rebel_method_bind_get_method(
            "Camera",
            "get_cull_mask_bit"
        );
    method_bindings.mb_get_doppler_tracking =
        api->rebel_method_bind_get_method(
            "Camera",
            "get_doppler_tracking"
        );
    method_bindings.mb_get_environment =
        api->rebel_method_bind_get_method(
            "Camera",
            "get_environment"
        );
    method_bindings.mb_get_fov =
        api->rebel_method_bind_get_method(
            "Camera",
            "get_fov"
        );
    method_bindings.mb_get_frustum =
        api->rebel_method_bind_get_method(
            "Camera",
            "get_frustum"
        );
    method_bindings.mb_get_frustum_offset =
        api->rebel_method_bind_get_method(
            "Camera",
            "get_frustum_offset"
        );
    method_bindings.mb_get_h_offset =
        api->rebel_method_bind_get_method(
            "Camera",
            "get_h_offset"
        );
    method_bindings.mb_get_keep_aspect_mode =
        api->rebel_method_bind_get_method(
            "Camera",
            "get_keep_aspect_mode"
        );
    method_bindings.mb_get_projection =
        api->rebel_method_bind_get_method(
            "Camera",
            "get_projection"
        );
    method_bindings.mb_get_size =
        api->rebel_method_bind_get_method(
            "Camera",
            "get_size"
        );
    method_bindings.mb_get_v_offset =
        api->rebel_method_bind_get_method(
            "Camera",
            "get_v_offset"
        );
    method_bindings.mb_get_zfar =
        api->rebel_method_bind_get_method(
            "Camera",
            "get_zfar"
        );
    method_bindings.mb_get_znear =
        api->rebel_method_bind_get_method(
            "Camera",
            "get_znear"
        );
    method_bindings.mb_is_current =
        api->rebel_method_bind_get_method(
            "Camera",
            "is_current"
        );
    method_bindings.mb_is_position_behind =
        api->rebel_method_bind_get_method(
            "Camera",
            "is_position_behind"
        );
    method_bindings.mb_make_current =
        api->rebel_method_bind_get_method(
            "Camera",
            "make_current"
        );
    method_bindings.mb_project_local_ray_normal =
        api->rebel_method_bind_get_method(
            "Camera",
            "project_local_ray_normal"
        );
    method_bindings.mb_project_position =
        api->rebel_method_bind_get_method(
            "Camera",
            "project_position"
        );
    method_bindings.mb_project_ray_normal =
        api->rebel_method_bind_get_method(
            "Camera",
            "project_ray_normal"
        );
    method_bindings.mb_project_ray_origin =
        api->rebel_method_bind_get_method(
            "Camera",
            "project_ray_origin"
        );
    method_bindings.mb_set_cull_mask =
        api->rebel_method_bind_get_method(
            "Camera",
            "set_cull_mask"
        );
    method_bindings.mb_set_cull_mask_bit =
        api->rebel_method_bind_get_method(
            "Camera",
            "set_cull_mask_bit"
        );
    method_bindings.mb_set_current =
        api->rebel_method_bind_get_method(
            "Camera",
            "set_current"
        );
    method_bindings.mb_set_doppler_tracking =
        api->rebel_method_bind_get_method(
            "Camera",
            "set_doppler_tracking"
        );
    method_bindings.mb_set_environment =
        api->rebel_method_bind_get_method(
            "Camera",
            "set_environment"
        );
    method_bindings.mb_set_fov =
        api->rebel_method_bind_get_method(
            "Camera",
            "set_fov"
        );
    method_bindings.mb_set_frustum =
        api->rebel_method_bind_get_method(
            "Camera",
            "set_frustum"
        );
    method_bindings.mb_set_frustum_offset =
        api->rebel_method_bind_get_method(
            "Camera",
            "set_frustum_offset"
        );
    method_bindings.mb_set_h_offset =
        api->rebel_method_bind_get_method(
            "Camera",
            "set_h_offset"
        );
    method_bindings.mb_set_keep_aspect_mode =
        api->rebel_method_bind_get_method(
            "Camera",
            "set_keep_aspect_mode"
        );
    method_bindings.mb_set_orthogonal =
        api->rebel_method_bind_get_method(
            "Camera",
            "set_orthogonal"
        );
    method_bindings.mb_set_perspective =
        api->rebel_method_bind_get_method(
            "Camera",
            "set_perspective"
        );
    method_bindings.mb_set_projection =
        api->rebel_method_bind_get_method(
            "Camera",
            "set_projection"
        );
    method_bindings.mb_set_size =
        api->rebel_method_bind_get_method(
            "Camera",
            "set_size"
        );
    method_bindings.mb_set_v_offset =
        api->rebel_method_bind_get_method(
            "Camera",
            "set_v_offset"
        );
    method_bindings.mb_set_zfar =
        api->rebel_method_bind_get_method(
            "Camera",
            "set_zfar"
        );
    method_bindings.mb_set_znear =
        api->rebel_method_bind_get_method(
            "Camera",
            "set_znear"
        );
    method_bindings.mb_unproject_position =
        api->rebel_method_bind_get_method(
            "Camera",
            "unproject_position"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Camera");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Camera::MethodBindings Camera::method_bindings = {};
void* Camera::class_tag = nullptr;
} // namespace Rebel
