// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_STATICBODY2D_H
#define REBEL_STATICBODY2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/physicsbody2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class PhysicsMaterial;

class StaticBody2D : public PhysicsBody2D {
public:
    void _reload_physics_characteristics();
    real_t get_bounce() const;
    real_t get_constant_angular_velocity() const;
    Vector2 get_constant_linear_velocity() const;
    real_t get_friction() const;
    Ref<PhysicsMaterial> get_physics_material_override() const;
    void set_bounce(const real_t bounce);
    void set_constant_angular_velocity(const real_t vel);
    void set_constant_linear_velocity(const Vector2 vel);
    void set_friction(const real_t friction);
    void set_physics_material_override(const Ref<PhysicsMaterial> physics_material_override);

    static StaticBody2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "StaticBody2D";
    }

    inline static const char* get_rebel_class_name() {
        return "StaticBody2D";
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
        rebel_method_bind* mb__reload_physics_characteristics;
        rebel_method_bind* mb_get_bounce;
        rebel_method_bind* mb_get_constant_angular_velocity;
        rebel_method_bind* mb_get_constant_linear_velocity;
        rebel_method_bind* mb_get_friction;
        rebel_method_bind* mb_get_physics_material_override;
        rebel_method_bind* mb_set_bounce;
        rebel_method_bind* mb_set_constant_angular_velocity;
        rebel_method_bind* mb_set_constant_linear_velocity;
        rebel_method_bind* mb_set_friction;
        rebel_method_bind* mb_set_physics_material_override;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_STATICBODY2D_H
