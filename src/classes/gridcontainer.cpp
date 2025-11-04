// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/gridcontainer.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t GridContainer::get_columns() const {
    return rebel_icall_int(
        method_bindings.mb_get_columns,
        (const Object*)this
    );
}

void GridContainer::set_columns(const int64_t columns) {
    rebel_icall_void_int(
        method_bindings.mb_set_columns,
        (const Object*)this,
        columns
    );
}

GridContainer* GridContainer::create() {
    return (GridContainer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GridContainer")()
         );
}

void GridContainer::init_method_bindings() {
    method_bindings.mb_get_columns =
        api->rebel_method_bind_get_method(
            "GridContainer",
            "get_columns"
        );
    method_bindings.mb_set_columns =
        api->rebel_method_bind_get_method(
            "GridContainer",
            "set_columns"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GridContainer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GridContainer::MethodBindings GridContainer::method_bindings = {};
void* GridContainer::class_tag = nullptr;
} // namespace Rebel
