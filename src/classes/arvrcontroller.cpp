// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/arvrcontroller.h"

#include "classes/icalls.h"
#include "classes/mesh.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t ARVRController::get_controller_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_controller_id,
        (const Object*)this
    );
}

String ARVRController::get_controller_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_controller_name,
        (const Object*)this
    );
}

ARVRPositionalTracker::TrackerHand ARVRController::get_hand() const {
    return (ARVRPositionalTracker::TrackerHand)rebel_icall_int(
        method_bindings.mb_get_hand,
        (const Object*)this
    );
}

bool ARVRController::get_is_active() const {
    return rebel_icall_bool(
        method_bindings.mb_get_is_active,
        (const Object*)this
    );
}

real_t ARVRController::get_joystick_axis(const int64_t axis) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_joystick_axis,
        (const Object*)this,
        axis
    );
}

int64_t ARVRController::get_joystick_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_joystick_id,
        (const Object*)this
    );
}

Ref<Mesh> ARVRController::get_mesh() const {
    return Ref<Mesh>::create_ref(rebel_icall_object(
        method_bindings.mb_get_mesh,
        (const Object*)this
    ));
}

real_t ARVRController::get_rumble() const {
    return rebel_icall_float(
        method_bindings.mb_get_rumble,
        (const Object*)this
    );
}

int64_t ARVRController::is_button_pressed(const int64_t button) const {
    return rebel_icall_int_int(
        method_bindings.mb_is_button_pressed,
        (const Object*)this,
        button
    );
}

void ARVRController::set_controller_id(const int64_t controller_id) {
    rebel_icall_void_int(
        method_bindings.mb_set_controller_id,
        (const Object*)this,
        controller_id
    );
}

void ARVRController::set_rumble(const real_t rumble) {
    rebel_icall_void_float(
        method_bindings.mb_set_rumble,
        (const Object*)this,
        rumble
    );
}

ARVRController* ARVRController::create() {
    return (ARVRController*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ARVRController")()
         );
}

void ARVRController::init_method_bindings() {
    method_bindings.mb_get_controller_id =
        api->rebel_method_bind_get_method(
            "ARVRController",
            "get_controller_id"
        );
    method_bindings.mb_get_controller_name =
        api->rebel_method_bind_get_method(
            "ARVRController",
            "get_controller_name"
        );
    method_bindings.mb_get_hand =
        api->rebel_method_bind_get_method(
            "ARVRController",
            "get_hand"
        );
    method_bindings.mb_get_is_active =
        api->rebel_method_bind_get_method(
            "ARVRController",
            "get_is_active"
        );
    method_bindings.mb_get_joystick_axis =
        api->rebel_method_bind_get_method(
            "ARVRController",
            "get_joystick_axis"
        );
    method_bindings.mb_get_joystick_id =
        api->rebel_method_bind_get_method(
            "ARVRController",
            "get_joystick_id"
        );
    method_bindings.mb_get_mesh =
        api->rebel_method_bind_get_method(
            "ARVRController",
            "get_mesh"
        );
    method_bindings.mb_get_rumble =
        api->rebel_method_bind_get_method(
            "ARVRController",
            "get_rumble"
        );
    method_bindings.mb_is_button_pressed =
        api->rebel_method_bind_get_method(
            "ARVRController",
            "is_button_pressed"
        );
    method_bindings.mb_set_controller_id =
        api->rebel_method_bind_get_method(
            "ARVRController",
            "set_controller_id"
        );
    method_bindings.mb_set_rumble =
        api->rebel_method_bind_get_method(
            "ARVRController",
            "set_rumble"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ARVRController");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ARVRController::MethodBindings ARVRController::method_bindings = {};
void* ARVRController::class_tag = nullptr;
} // namespace Rebel
