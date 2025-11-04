// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/performance.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t Performance::get_monitor(const int64_t monitor) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_monitor,
        (const Object*)this,
        monitor
    );
}

Performance* Performance::singleton = nullptr;

Performance::Performance() {
    owner = api->rebel_global_get_singleton((char*) "Performance");
}

void Performance::init_method_bindings() {
    method_bindings.mb_get_monitor =
        api->rebel_method_bind_get_method(
            "Performance",
            "get_monitor"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Performance");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Performance::MethodBindings Performance::method_bindings = {};
void* Performance::class_tag = nullptr;
} // namespace Rebel
