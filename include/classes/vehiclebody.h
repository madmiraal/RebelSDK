// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VEHICLEBODY_H
#define REBEL_VEHICLEBODY_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/rigidbody.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VehicleBody : public RigidBody {
public:
    real_t get_brake() const;
    real_t get_engine_force() const;
    real_t get_steering() const;
    void set_brake(const real_t brake);
    void set_engine_force(const real_t engine_force);
    void set_steering(const real_t steering);

    static VehicleBody* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VehicleBody";
    }

    inline static const char* get_rebel_class_name() {
        return "VehicleBody";
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
        rebel_method_bind* mb_get_engine_force;
        rebel_method_bind* mb_get_steering;
        rebel_method_bind* mb_set_brake;
        rebel_method_bind* mb_set_engine_force;
        rebel_method_bind* mb_set_steering;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VEHICLEBODY_H
