// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/worldenvironment.h"

#include "classes/environment.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<Environment> WorldEnvironment::get_environment() const {
    return Ref<Environment>::create_ref(rebel_icall_object(
        method_bindings.mb_get_environment,
        (const Object*)this
    ));
}

void WorldEnvironment::set_environment(const Ref<Environment> env) {
    rebel_icall_void_object(
        method_bindings.mb_set_environment,
        (const Object*)this,
        env.ptr()
    );
}

WorldEnvironment* WorldEnvironment::create() {
    return (WorldEnvironment*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"WorldEnvironment")()
         );
}

void WorldEnvironment::init_method_bindings() {
    method_bindings.mb_get_environment =
        api->rebel_method_bind_get_method(
            "WorldEnvironment",
            "get_environment"
        );
    method_bindings.mb_set_environment =
        api->rebel_method_bind_get_method(
            "WorldEnvironment",
            "set_environment"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "WorldEnvironment");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

WorldEnvironment::MethodBindings WorldEnvironment::method_bindings = {};
void* WorldEnvironment::class_tag = nullptr;
} // namespace Rebel
