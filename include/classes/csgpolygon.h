// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CSGPOLYGON_H
#define REBEL_CSGPOLYGON_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/csgprimitive.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Material;

class CSGPolygon : public CSGPrimitive {
public:
    enum PathIntervalType {
        PATH_INTERVAL_DISTANCE = 0,
        PATH_INTERVAL_SUBDIVIDE = 1,
    };

    enum PathRotation {
        PATH_ROTATION_POLYGON = 0,
        PATH_ROTATION_PATH = 1,
        PATH_ROTATION_PATH_FOLLOW = 2,
    };

    enum Mode {
        MODE_DEPTH = 0,
        MODE_SPIN = 1,
        MODE_PATH = 2,
    };

    bool _has_editable_3d_polygon_no_depth() const;
    bool _is_editable_3d_polygon() const;
    void _path_changed();
    void _path_exited();
    real_t get_depth() const;
    Ref<Material> get_material() const;
    CSGPolygon::Mode get_mode() const;
    real_t get_path_interval() const;
    CSGPolygon::PathIntervalType get_path_interval_type() const;
    NodePath get_path_node() const;
    CSGPolygon::PathRotation get_path_rotation() const;
    real_t get_path_simplify_angle() const;
    real_t get_path_u_distance() const;
    PoolVector2Array get_polygon() const;
    bool get_smooth_faces() const;
    real_t get_spin_degrees() const;
    int64_t get_spin_sides() const;
    bool is_path_continuous_u() const;
    bool is_path_joined() const;
    bool is_path_local() const;
    void set_depth(const real_t depth);
    void set_material(const Ref<Material> material);
    void set_mode(const int64_t mode);
    void set_path_continuous_u(const bool enable);
    void set_path_interval(const real_t path_interval);
    void set_path_interval_type(const int64_t interval_type);
    void set_path_joined(const bool enable);
    void set_path_local(const bool enable);
    void set_path_node(const NodePath path);
    void set_path_rotation(const int64_t path_rotation);
    void set_path_simplify_angle(const real_t degrees);
    void set_path_u_distance(const real_t distance);
    void set_polygon(const PoolVector2Array polygon);
    void set_smooth_faces(const bool smooth_faces);
    void set_spin_degrees(const real_t degrees);
    void set_spin_sides(const int64_t spin_sides);

    static CSGPolygon* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CSGPolygon";
    }

    inline static const char* get_rebel_class_name() {
        return "CSGPolygon";
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
        rebel_method_bind* mb__has_editable_3d_polygon_no_depth;
        rebel_method_bind* mb__is_editable_3d_polygon;
        rebel_method_bind* mb__path_changed;
        rebel_method_bind* mb__path_exited;
        rebel_method_bind* mb_get_depth;
        rebel_method_bind* mb_get_material;
        rebel_method_bind* mb_get_mode;
        rebel_method_bind* mb_get_path_interval;
        rebel_method_bind* mb_get_path_interval_type;
        rebel_method_bind* mb_get_path_node;
        rebel_method_bind* mb_get_path_rotation;
        rebel_method_bind* mb_get_path_simplify_angle;
        rebel_method_bind* mb_get_path_u_distance;
        rebel_method_bind* mb_get_polygon;
        rebel_method_bind* mb_get_smooth_faces;
        rebel_method_bind* mb_get_spin_degrees;
        rebel_method_bind* mb_get_spin_sides;
        rebel_method_bind* mb_is_path_continuous_u;
        rebel_method_bind* mb_is_path_joined;
        rebel_method_bind* mb_is_path_local;
        rebel_method_bind* mb_set_depth;
        rebel_method_bind* mb_set_material;
        rebel_method_bind* mb_set_mode;
        rebel_method_bind* mb_set_path_continuous_u;
        rebel_method_bind* mb_set_path_interval;
        rebel_method_bind* mb_set_path_interval_type;
        rebel_method_bind* mb_set_path_joined;
        rebel_method_bind* mb_set_path_local;
        rebel_method_bind* mb_set_path_node;
        rebel_method_bind* mb_set_path_rotation;
        rebel_method_bind* mb_set_path_simplify_angle;
        rebel_method_bind* mb_set_path_u_distance;
        rebel_method_bind* mb_set_polygon;
        rebel_method_bind* mb_set_smooth_faces;
        rebel_method_bind* mb_set_spin_degrees;
        rebel_method_bind* mb_set_spin_sides;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CSGPOLYGON_H
