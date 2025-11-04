// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SPATIALVELOCITYTRACKER_H
#define REBEL_SPATIALVELOCITYTRACKER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class SpatialVelocityTracker : public Reference {
public:
    Vector3 get_tracked_linear_velocity() const;
    bool is_tracking_physics_step() const;
    void reset(const Vector3 position);
    void set_track_physics_step(const bool enable);
    void update_position(const Vector3 position);

    static SpatialVelocityTracker* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "SpatialVelocityTracker";
    }

    inline static const char* get_rebel_class_name() {
        return "SpatialVelocityTracker";
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
        rebel_method_bind* mb_get_tracked_linear_velocity;
        rebel_method_bind* mb_is_tracking_physics_step;
        rebel_method_bind* mb_reset;
        rebel_method_bind* mb_set_track_physics_step;
        rebel_method_bind* mb_update_position;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SPATIALVELOCITYTRACKER_H
