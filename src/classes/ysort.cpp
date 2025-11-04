// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/ysort.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool YSort::is_sort_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_sort_enabled,
        (const Object*)this
    );
}

void YSort::set_sort_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_sort_enabled,
        (const Object*)this,
        enabled
    );
}

YSort* YSort::create() {
    return (YSort*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"YSort")()
         );
}

void YSort::init_method_bindings() {
    method_bindings.mb_is_sort_enabled =
        api->rebel_method_bind_get_method(
            "YSort",
            "is_sort_enabled"
        );
    method_bindings.mb_set_sort_enabled =
        api->rebel_method_bind_get_method(
            "YSort",
            "set_sort_enabled"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "YSort");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

YSort::MethodBindings YSort::method_bindings = {};
void* YSort::class_tag = nullptr;
} // namespace Rebel
