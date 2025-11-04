// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/scenetreetimer.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t SceneTreeTimer::get_time_left() const {
    return rebel_icall_float(
        method_bindings.mb_get_time_left,
        (const Object*)this
    );
}

void SceneTreeTimer::set_time_left(const real_t time) {
    rebel_icall_void_float(
        method_bindings.mb_set_time_left,
        (const Object*)this,
        time
    );
}

void SceneTreeTimer::init_method_bindings() {
    method_bindings.mb_get_time_left =
        api->rebel_method_bind_get_method(
            "SceneTreeTimer",
            "get_time_left"
        );
    method_bindings.mb_set_time_left =
        api->rebel_method_bind_get_method(
            "SceneTreeTimer",
            "set_time_left"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "SceneTreeTimer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

SceneTreeTimer::MethodBindings SceneTreeTimer::method_bindings = {};
void* SceneTreeTimer::class_tag = nullptr;
} // namespace Rebel
