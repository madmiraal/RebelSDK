// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/world.h"

#include "classes/environment.h"
#include "classes/icalls.h"
#include "classes/physicsdirectspacestate.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
PhysicsDirectSpaceState* World::get_direct_space_state() {
    return (PhysicsDirectSpaceState*)rebel_icall_object(
        method_bindings.mb_get_direct_space_state,
        (const Object*)this
    );
}

Ref<Environment> World::get_environment() const {
    return Ref<Environment>::create_ref(rebel_icall_object(
        method_bindings.mb_get_environment,
        (const Object*)this
    ));
}

Ref<Environment> World::get_fallback_environment() const {
    return Ref<Environment>::create_ref(rebel_icall_object(
        method_bindings.mb_get_fallback_environment,
        (const Object*)this
    ));
}

RID World::get_scenario() const {
    return rebel_icall_rid(
        method_bindings.mb_get_scenario,
        (const Object*)this
    );
}

RID World::get_space() const {
    return rebel_icall_rid(
        method_bindings.mb_get_space,
        (const Object*)this
    );
}

void World::set_environment(const Ref<Environment> env) {
    rebel_icall_void_object(
        method_bindings.mb_set_environment,
        (const Object*)this,
        env.ptr()
    );
}

void World::set_fallback_environment(const Ref<Environment> env) {
    rebel_icall_void_object(
        method_bindings.mb_set_fallback_environment,
        (const Object*)this,
        env.ptr()
    );
}

World* World::create() {
    return (World*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"World")()
         );
}

void World::init_method_bindings() {
    method_bindings.mb_get_direct_space_state =
        api->rebel_method_bind_get_method(
            "World",
            "get_direct_space_state"
        );
    method_bindings.mb_get_environment =
        api->rebel_method_bind_get_method(
            "World",
            "get_environment"
        );
    method_bindings.mb_get_fallback_environment =
        api->rebel_method_bind_get_method(
            "World",
            "get_fallback_environment"
        );
    method_bindings.mb_get_scenario =
        api->rebel_method_bind_get_method(
            "World",
            "get_scenario"
        );
    method_bindings.mb_get_space =
        api->rebel_method_bind_get_method(
            "World",
            "get_space"
        );
    method_bindings.mb_set_environment =
        api->rebel_method_bind_get_method(
            "World",
            "set_environment"
        );
    method_bindings.mb_set_fallback_environment =
        api->rebel_method_bind_get_method(
            "World",
            "set_fallback_environment"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "World");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

World::MethodBindings World::method_bindings = {};
void* World::class_tag = nullptr;
} // namespace Rebel
