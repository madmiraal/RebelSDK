// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/proximitygroup.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ProximityGroup::_proximity_group_broadcast(const String method, const Variant parameters) {
    rebel_icall_void_string_variant(
        method_bindings.mb__proximity_group_broadcast,
        (const Object*)this,
        method,
        parameters
    );
}

void ProximityGroup::broadcast(const String method, const Variant parameters) {
    rebel_icall_void_string_variant(
        method_bindings.mb_broadcast,
        (const Object*)this,
        method,
        parameters
    );
}

ProximityGroup::DispatchMode ProximityGroup::get_dispatch_mode() const {
    return (ProximityGroup::DispatchMode)rebel_icall_int(
        method_bindings.mb_get_dispatch_mode,
        (const Object*)this
    );
}

Vector3 ProximityGroup::get_grid_radius() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_grid_radius,
        (const Object*)this
    );
}

String ProximityGroup::get_group_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_group_name,
        (const Object*)this
    );
}

void ProximityGroup::set_dispatch_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_dispatch_mode,
        (const Object*)this,
        mode
    );
}

void ProximityGroup::set_grid_radius(const Vector3 radius) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_grid_radius,
        (const Object*)this,
        radius
    );
}

void ProximityGroup::set_group_name(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_group_name,
        (const Object*)this,
        name
    );
}

ProximityGroup* ProximityGroup::create() {
    return (ProximityGroup*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ProximityGroup")()
         );
}

void ProximityGroup::init_method_bindings() {
    method_bindings.mb__proximity_group_broadcast =
        api->rebel_method_bind_get_method(
            "ProximityGroup",
            "_proximity_group_broadcast"
        );
    method_bindings.mb_broadcast =
        api->rebel_method_bind_get_method(
            "ProximityGroup",
            "broadcast"
        );
    method_bindings.mb_get_dispatch_mode =
        api->rebel_method_bind_get_method(
            "ProximityGroup",
            "get_dispatch_mode"
        );
    method_bindings.mb_get_grid_radius =
        api->rebel_method_bind_get_method(
            "ProximityGroup",
            "get_grid_radius"
        );
    method_bindings.mb_get_group_name =
        api->rebel_method_bind_get_method(
            "ProximityGroup",
            "get_group_name"
        );
    method_bindings.mb_set_dispatch_mode =
        api->rebel_method_bind_get_method(
            "ProximityGroup",
            "set_dispatch_mode"
        );
    method_bindings.mb_set_grid_radius =
        api->rebel_method_bind_get_method(
            "ProximityGroup",
            "set_grid_radius"
        );
    method_bindings.mb_set_group_name =
        api->rebel_method_bind_get_method(
            "ProximityGroup",
            "set_group_name"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ProximityGroup");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ProximityGroup::MethodBindings ProximityGroup::method_bindings = {};
void* ProximityGroup::class_tag = nullptr;
} // namespace Rebel
