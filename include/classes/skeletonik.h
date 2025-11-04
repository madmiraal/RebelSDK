// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SKELETONIK_H
#define REBEL_SKELETONIK_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Skeleton;

class SkeletonIK : public Node {
public:
    real_t get_interpolation() const;
    Vector3 get_magnet_position() const;
    int64_t get_max_iterations() const;
    real_t get_min_distance() const;
    Skeleton* get_parent_skeleton() const;
    String get_root_bone() const;
    NodePath get_target_node();
    Transform get_target_transform() const;
    String get_tip_bone() const;
    bool is_override_tip_basis() const;
    bool is_running();
    bool is_using_magnet() const;
    void set_interpolation(const real_t interpolation);
    void set_magnet_position(const Vector3 local_position);
    void set_max_iterations(const int64_t iterations);
    void set_min_distance(const real_t min_distance);
    void set_override_tip_basis(const bool override);
    void set_root_bone(const String root_bone);
    void set_target_node(const NodePath node);
    void set_target_transform(const Transform target);
    void set_tip_bone(const String tip_bone);
    void set_use_magnet(const bool use);
    void start(const bool one_time = false);
    void stop();

    static SkeletonIK* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "SkeletonIK";
    }

    inline static const char* get_rebel_class_name() {
        return "SkeletonIK";
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
        rebel_method_bind* mb_get_interpolation;
        rebel_method_bind* mb_get_magnet_position;
        rebel_method_bind* mb_get_max_iterations;
        rebel_method_bind* mb_get_min_distance;
        rebel_method_bind* mb_get_parent_skeleton;
        rebel_method_bind* mb_get_root_bone;
        rebel_method_bind* mb_get_target_node;
        rebel_method_bind* mb_get_target_transform;
        rebel_method_bind* mb_get_tip_bone;
        rebel_method_bind* mb_is_override_tip_basis;
        rebel_method_bind* mb_is_running;
        rebel_method_bind* mb_is_using_magnet;
        rebel_method_bind* mb_set_interpolation;
        rebel_method_bind* mb_set_magnet_position;
        rebel_method_bind* mb_set_max_iterations;
        rebel_method_bind* mb_set_min_distance;
        rebel_method_bind* mb_set_override_tip_basis;
        rebel_method_bind* mb_set_root_bone;
        rebel_method_bind* mb_set_target_node;
        rebel_method_bind* mb_set_target_transform;
        rebel_method_bind* mb_set_tip_bone;
        rebel_method_bind* mb_set_use_magnet;
        rebel_method_bind* mb_start;
        rebel_method_bind* mb_stop;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SKELETONIK_H
