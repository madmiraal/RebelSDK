// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VEHICLEWHEEL_H
#define REBEL_VEHICLEWHEEL_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VehicleWheel : public Spatial {
public:
    real_t get_brake() const;
    real_t get_damping_compression() const;
    real_t get_damping_relaxation() const;
    real_t get_engine_force() const;
    real_t get_friction_slip() const;
    real_t get_radius() const;
    real_t get_roll_influence() const;
    real_t get_rpm() const;
    real_t get_skidinfo() const;
    real_t get_steering() const;
    real_t get_suspension_max_force() const;
    real_t get_suspension_rest_length() const;
    real_t get_suspension_stiffness() const;
    real_t get_suspension_travel() const;
    bool is_in_contact() const;
    bool is_used_as_steering() const;
    bool is_used_as_traction() const;
    void set_brake(const real_t brake);
    void set_damping_compression(const real_t length);
    void set_damping_relaxation(const real_t length);
    void set_engine_force(const real_t engine_force);
    void set_friction_slip(const real_t length);
    void set_radius(const real_t length);
    void set_roll_influence(const real_t roll_influence);
    void set_steering(const real_t steering);
    void set_suspension_max_force(const real_t length);
    void set_suspension_rest_length(const real_t length);
    void set_suspension_stiffness(const real_t length);
    void set_suspension_travel(const real_t length);
    void set_use_as_steering(const bool enable);
    void set_use_as_traction(const bool enable);

    static VehicleWheel* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VehicleWheel";
    }

    inline static const char* get_rebel_class_name() {
        return "VehicleWheel";
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
        rebel_method_bind* mb_get_brake;
        rebel_method_bind* mb_get_damping_compression;
        rebel_method_bind* mb_get_damping_relaxation;
        rebel_method_bind* mb_get_engine_force;
        rebel_method_bind* mb_get_friction_slip;
        rebel_method_bind* mb_get_radius;
        rebel_method_bind* mb_get_roll_influence;
        rebel_method_bind* mb_get_rpm;
        rebel_method_bind* mb_get_skidinfo;
        rebel_method_bind* mb_get_steering;
        rebel_method_bind* mb_get_suspension_max_force;
        rebel_method_bind* mb_get_suspension_rest_length;
        rebel_method_bind* mb_get_suspension_stiffness;
        rebel_method_bind* mb_get_suspension_travel;
        rebel_method_bind* mb_is_in_contact;
        rebel_method_bind* mb_is_used_as_steering;
        rebel_method_bind* mb_is_used_as_traction;
        rebel_method_bind* mb_set_brake;
        rebel_method_bind* mb_set_damping_compression;
        rebel_method_bind* mb_set_damping_relaxation;
        rebel_method_bind* mb_set_engine_force;
        rebel_method_bind* mb_set_friction_slip;
        rebel_method_bind* mb_set_radius;
        rebel_method_bind* mb_set_roll_influence;
        rebel_method_bind* mb_set_steering;
        rebel_method_bind* mb_set_suspension_max_force;
        rebel_method_bind* mb_set_suspension_rest_length;
        rebel_method_bind* mb_set_suspension_stiffness;
        rebel_method_bind* mb_set_suspension_travel;
        rebel_method_bind* mb_set_use_as_steering;
        rebel_method_bind* mb_set_use_as_traction;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VEHICLEWHEEL_H
