// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PHYSICSMATERIAL_H
#define REBEL_PHYSICSMATERIAL_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class PhysicsMaterial : public Resource {
public:
    real_t get_bounce() const;
    real_t get_friction() const;
    bool is_absorbent() const;
    bool is_rough() const;
    void set_absorbent(const bool absorbent);
    void set_bounce(const real_t bounce);
    void set_friction(const real_t friction);
    void set_rough(const bool rough);

    static PhysicsMaterial* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PhysicsMaterial";
    }

    inline static const char* get_rebel_class_name() {
        return "PhysicsMaterial";
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
        rebel_method_bind* mb_get_bounce;
        rebel_method_bind* mb_get_friction;
        rebel_method_bind* mb_is_absorbent;
        rebel_method_bind* mb_is_rough;
        rebel_method_bind* mb_set_absorbent;
        rebel_method_bind* mb_set_bounce;
        rebel_method_bind* mb_set_friction;
        rebel_method_bind* mb_set_rough;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PHYSICSMATERIAL_H
