// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ASTAR_H
#define REBEL_ASTAR_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AStar : public Reference {
public:
    real_t _compute_cost(const int64_t from_id, const int64_t to_id);
    real_t _estimate_cost(const int64_t from_id, const int64_t to_id);
    void add_point(const int64_t id, const Vector3 position, const real_t weight_scale = 1);
    bool are_points_connected(const int64_t id, const int64_t to_id, const bool bidirectional = true) const;
    void clear();
    void connect_points(const int64_t id, const int64_t to_id, const bool bidirectional = true);
    void disconnect_points(const int64_t id, const int64_t to_id, const bool bidirectional = true);
    int64_t get_available_point_id() const;
    int64_t get_closest_point(const Vector3 to_position, const bool include_disabled = false) const;
    Vector3 get_closest_position_in_segment(const Vector3 to_position) const;
    PoolIntArray get_id_path(const int64_t from_id, const int64_t to_id);
    int64_t get_point_capacity() const;
    PoolIntArray get_point_connections(const int64_t id);
    int64_t get_point_count() const;
    PoolVector3Array get_point_path(const int64_t from_id, const int64_t to_id);
    Vector3 get_point_position(const int64_t id) const;
    real_t get_point_weight_scale(const int64_t id) const;
    Array get_points();
    bool has_point(const int64_t id) const;
    bool is_point_disabled(const int64_t id) const;
    void remove_point(const int64_t id);
    void reserve_space(const int64_t num_nodes);
    void set_point_disabled(const int64_t id, const bool disabled = true);
    void set_point_position(const int64_t id, const Vector3 position);
    void set_point_weight_scale(const int64_t id, const real_t weight_scale);

    static AStar* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AStar";
    }

    inline static const char* get_rebel_class_name() {
        return "AStar";
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
        rebel_method_bind* mb__compute_cost;
        rebel_method_bind* mb__estimate_cost;
        rebel_method_bind* mb_add_point;
        rebel_method_bind* mb_are_points_connected;
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_connect_points;
        rebel_method_bind* mb_disconnect_points;
        rebel_method_bind* mb_get_available_point_id;
        rebel_method_bind* mb_get_closest_point;
        rebel_method_bind* mb_get_closest_position_in_segment;
        rebel_method_bind* mb_get_id_path;
        rebel_method_bind* mb_get_point_capacity;
        rebel_method_bind* mb_get_point_connections;
        rebel_method_bind* mb_get_point_count;
        rebel_method_bind* mb_get_point_path;
        rebel_method_bind* mb_get_point_position;
        rebel_method_bind* mb_get_point_weight_scale;
        rebel_method_bind* mb_get_points;
        rebel_method_bind* mb_has_point;
        rebel_method_bind* mb_is_point_disabled;
        rebel_method_bind* mb_remove_point;
        rebel_method_bind* mb_reserve_space;
        rebel_method_bind* mb_set_point_disabled;
        rebel_method_bind* mb_set_point_position;
        rebel_method_bind* mb_set_point_weight_scale;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ASTAR_H
