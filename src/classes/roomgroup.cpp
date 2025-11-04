// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/roomgroup.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t RoomGroup::get_roomgroup_priority() const {
    return rebel_icall_int(
        method_bindings.mb_get_roomgroup_priority,
        (const Object*)this
    );
}

void RoomGroup::set_roomgroup_priority(const int64_t p_priority) {
    rebel_icall_void_int(
        method_bindings.mb_set_roomgroup_priority,
        (const Object*)this,
        p_priority
    );
}

RoomGroup* RoomGroup::create() {
    return (RoomGroup*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"RoomGroup")()
         );
}

void RoomGroup::init_method_bindings() {
    method_bindings.mb_get_roomgroup_priority =
        api->rebel_method_bind_get_method(
            "RoomGroup",
            "get_roomgroup_priority"
        );
    method_bindings.mb_set_roomgroup_priority =
        api->rebel_method_bind_get_method(
            "RoomGroup",
            "set_roomgroup_priority"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "RoomGroup");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

RoomGroup::MethodBindings RoomGroup::method_bindings = {};
void* RoomGroup::class_tag = nullptr;
} // namespace Rebel
