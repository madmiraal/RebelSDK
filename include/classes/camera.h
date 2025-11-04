// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CAMERA_H
#define REBEL_CAMERA_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Environment;

class Camera : public Spatial {
public:
    enum KeepAspect {
        KEEP_WIDTH = 0,
        KEEP_HEIGHT = 1,
    };

    enum Projection {
        PROJECTION_PERSPECTIVE = 0,
        PROJECTION_ORTHOGONAL = 1,
        PROJECTION_FRUSTUM = 2,
    };

    enum DopplerTracking {
        DOPPLER_TRACKING_DISABLED = 0,
        DOPPLER_TRACKING_IDLE_STEP = 1,
        DOPPLER_TRACKING_PHYSICS_STEP = 2,
    };

    void clear_current(const bool enable_next = true);
    RID get_camera_rid() const;
    Transform get_camera_transform() const;
    int64_t get_cull_mask() const;
    bool get_cull_mask_bit(const int64_t layer) const;
    Camera::DopplerTracking get_doppler_tracking() const;
    Ref<Environment> get_environment() const;
    real_t get_fov() const;
    Array get_frustum() const;
    Vector2 get_frustum_offset() const;
    real_t get_h_offset() const;
    Camera::KeepAspect get_keep_aspect_mode() const;
    Camera::Projection get_projection() const;
    real_t get_size() const;
    real_t get_v_offset() const;
    real_t get_zfar() const;
    real_t get_znear() const;
    bool is_current() const;
    bool is_position_behind(const Vector3 world_point) const;
    void make_current();
    Vector3 project_local_ray_normal(const Vector2 screen_point) const;
    Vector3 project_position(const Vector2 screen_point, const real_t z_depth) const;
    Vector3 project_ray_normal(const Vector2 screen_point) const;
    Vector3 project_ray_origin(const Vector2 screen_point) const;
    void set_cull_mask(const int64_t mask);
    void set_cull_mask_bit(const int64_t layer, const bool enable);
    void set_current(const bool arg0);
    void set_doppler_tracking(const int64_t mode);
    void set_environment(const Ref<Environment> env);
    void set_fov(const real_t arg0);
    void set_frustum(const real_t size, const Vector2 offset, const real_t z_near, const real_t z_far);
    void set_frustum_offset(const Vector2 arg0);
    void set_h_offset(const real_t ofs);
    void set_keep_aspect_mode(const int64_t mode);
    void set_orthogonal(const real_t size, const real_t z_near, const real_t z_far);
    void set_perspective(const real_t fov, const real_t z_near, const real_t z_far);
    void set_projection(const int64_t arg0);
    void set_size(const real_t arg0);
    void set_v_offset(const real_t ofs);
    void set_zfar(const real_t arg0);
    void set_znear(const real_t arg0);
    Vector2 unproject_position(const Vector3 world_point) const;

    static Camera* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Camera";
    }

    inline static const char* get_rebel_class_name() {
        return "Camera";
    }

    inline static Object* from_variant(Variant variant) {
        rebel_object* object = (rebel_object*)variant;
        if (!object) {
            return nullptr;
        }
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                object
            );
    }

private:
    struct MethodBindings {
        rebel_method_bind* mb_clear_current;
        rebel_method_bind* mb_get_camera_rid;
        rebel_method_bind* mb_get_camera_transform;
        rebel_method_bind* mb_get_cull_mask;
        rebel_method_bind* mb_get_cull_mask_bit;
        rebel_method_bind* mb_get_doppler_tracking;
        rebel_method_bind* mb_get_environment;
        rebel_method_bind* mb_get_fov;
        rebel_method_bind* mb_get_frustum;
        rebel_method_bind* mb_get_frustum_offset;
        rebel_method_bind* mb_get_h_offset;
        rebel_method_bind* mb_get_keep_aspect_mode;
        rebel_method_bind* mb_get_projection;
        rebel_method_bind* mb_get_size;
        rebel_method_bind* mb_get_v_offset;
        rebel_method_bind* mb_get_zfar;
        rebel_method_bind* mb_get_znear;
        rebel_method_bind* mb_is_current;
        rebel_method_bind* mb_is_position_behind;
        rebel_method_bind* mb_make_current;
        rebel_method_bind* mb_project_local_ray_normal;
        rebel_method_bind* mb_project_position;
        rebel_method_bind* mb_project_ray_normal;
        rebel_method_bind* mb_project_ray_origin;
        rebel_method_bind* mb_set_cull_mask;
        rebel_method_bind* mb_set_cull_mask_bit;
        rebel_method_bind* mb_set_current;
        rebel_method_bind* mb_set_doppler_tracking;
        rebel_method_bind* mb_set_environment;
        rebel_method_bind* mb_set_fov;
        rebel_method_bind* mb_set_frustum;
        rebel_method_bind* mb_set_frustum_offset;
        rebel_method_bind* mb_set_h_offset;
        rebel_method_bind* mb_set_keep_aspect_mode;
        rebel_method_bind* mb_set_orthogonal;
        rebel_method_bind* mb_set_perspective;
        rebel_method_bind* mb_set_projection;
        rebel_method_bind* mb_set_size;
        rebel_method_bind* mb_set_v_offset;
        rebel_method_bind* mb_set_zfar;
        rebel_method_bind* mb_set_znear;
        rebel_method_bind* mb_unproject_position;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CAMERA_H
