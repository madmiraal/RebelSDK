// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_WORLD_H
#define REBEL_WORLD_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Environment;
class PhysicsDirectSpaceState;

class World : public Resource {
public:
    PhysicsDirectSpaceState* get_direct_space_state();
    Ref<Environment> get_environment() const;
    Ref<Environment> get_fallback_environment() const;
    RID get_scenario() const;
    RID get_space() const;
    void set_environment(const Ref<Environment> env);
    void set_fallback_environment(const Ref<Environment> env);

    static World* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "World";
    }

    inline static const char* get_rebel_class_name() {
        return "World";
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
        rebel_method_bind* mb_get_direct_space_state;
        rebel_method_bind* mb_get_environment;
        rebel_method_bind* mb_get_fallback_environment;
        rebel_method_bind* mb_get_scenario;
        rebel_method_bind* mb_get_space;
        rebel_method_bind* mb_set_environment;
        rebel_method_bind* mb_set_fallback_environment;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_WORLD_H
