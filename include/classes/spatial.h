// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SPATIAL_H
#define REBEL_SPATIAL_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class SpatialGizmo;
class World;

class Spatial : public Node {
public:
    static const int NOTIFICATION_ENTER_GAMEPLAY = 45;
    static const int NOTIFICATION_ENTER_WORLD = 41;
    static const int NOTIFICATION_EXIT_GAMEPLAY = 46;
    static const int NOTIFICATION_EXIT_WORLD = 42;
    static const int NOTIFICATION_TRANSFORM_CHANGED = 2000;
    static const int NOTIFICATION_VISIBILITY_CHANGED = 43;

    void _update_gizmo();
    void force_update_transform();
    Ref<SpatialGizmo> get_gizmo() const;
    Transform get_global_transform() const;
    Spatial* get_parent_spatial() const;
    Vector3 get_rotation() const;
    Vector3 get_rotation_degrees() const;
    Vector3 get_scale() const;
    Transform get_transform() const;
    Vector3 get_translation() const;
    Ref<World> get_world() const;
    void global_rotate(const Vector3 axis, const real_t angle);
    void global_scale(const Vector3 scale);
    void global_translate(const Vector3 offset);
    void hide();
    bool is_local_transform_notification_enabled() const;
    bool is_scale_disabled() const;
    bool is_set_as_toplevel() const;
    bool is_transform_notification_enabled() const;
    bool is_visible() const;
    bool is_visible_in_tree() const;
    void look_at(const Vector3 target, const Vector3 up);
    void look_at_from_position(const Vector3 position, const Vector3 target, const Vector3 up);
    void orthonormalize();
    void rotate(const Vector3 axis, const real_t angle);
    void rotate_object_local(const Vector3 axis, const real_t angle);
    void rotate_x(const real_t angle);
    void rotate_y(const real_t angle);
    void rotate_z(const real_t angle);
    void scale_object_local(const Vector3 scale);
    void set_as_toplevel(const bool enable);
    void set_disable_scale(const bool disable);
    void set_gizmo(const Ref<SpatialGizmo> gizmo);
    void set_global_transform(const Transform global);
    void set_identity();
    void set_ignore_transform_notification(const bool enabled);
    void set_notify_local_transform(const bool enable);
    void set_notify_transform(const bool enable);
    void set_rotation(const Vector3 euler);
    void set_rotation_degrees(const Vector3 euler_degrees);
    void set_scale(const Vector3 scale);
    void set_transform(const Transform local);
    void set_translation(const Vector3 translation);
    void set_visible(const bool visible);
    void show();
    Vector3 to_global(const Vector3 local_point) const;
    Vector3 to_local(const Vector3 global_point) const;
    void translate(const Vector3 offset);
    void translate_object_local(const Vector3 offset);
    void update_gizmo();

    static Spatial* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Spatial";
    }

    inline static const char* get_rebel_class_name() {
        return "Spatial";
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
        rebel_method_bind* mb__update_gizmo;
        rebel_method_bind* mb_force_update_transform;
        rebel_method_bind* mb_get_gizmo;
        rebel_method_bind* mb_get_global_transform;
        rebel_method_bind* mb_get_parent_spatial;
        rebel_method_bind* mb_get_rotation;
        rebel_method_bind* mb_get_rotation_degrees;
        rebel_method_bind* mb_get_scale;
        rebel_method_bind* mb_get_transform;
        rebel_method_bind* mb_get_translation;
        rebel_method_bind* mb_get_world;
        rebel_method_bind* mb_global_rotate;
        rebel_method_bind* mb_global_scale;
        rebel_method_bind* mb_global_translate;
        rebel_method_bind* mb_hide;
        rebel_method_bind* mb_is_local_transform_notification_enabled;
        rebel_method_bind* mb_is_scale_disabled;
        rebel_method_bind* mb_is_set_as_toplevel;
        rebel_method_bind* mb_is_transform_notification_enabled;
        rebel_method_bind* mb_is_visible;
        rebel_method_bind* mb_is_visible_in_tree;
        rebel_method_bind* mb_look_at;
        rebel_method_bind* mb_look_at_from_position;
        rebel_method_bind* mb_orthonormalize;
        rebel_method_bind* mb_rotate;
        rebel_method_bind* mb_rotate_object_local;
        rebel_method_bind* mb_rotate_x;
        rebel_method_bind* mb_rotate_y;
        rebel_method_bind* mb_rotate_z;
        rebel_method_bind* mb_scale_object_local;
        rebel_method_bind* mb_set_as_toplevel;
        rebel_method_bind* mb_set_disable_scale;
        rebel_method_bind* mb_set_gizmo;
        rebel_method_bind* mb_set_global_transform;
        rebel_method_bind* mb_set_identity;
        rebel_method_bind* mb_set_ignore_transform_notification;
        rebel_method_bind* mb_set_notify_local_transform;
        rebel_method_bind* mb_set_notify_transform;
        rebel_method_bind* mb_set_rotation;
        rebel_method_bind* mb_set_rotation_degrees;
        rebel_method_bind* mb_set_scale;
        rebel_method_bind* mb_set_transform;
        rebel_method_bind* mb_set_translation;
        rebel_method_bind* mb_set_visible;
        rebel_method_bind* mb_show;
        rebel_method_bind* mb_to_global;
        rebel_method_bind* mb_to_local;
        rebel_method_bind* mb_translate;
        rebel_method_bind* mb_translate_object_local;
        rebel_method_bind* mb_update_gizmo;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SPATIAL_H
