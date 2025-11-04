// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/arvrpositionaltracker.h"

#include "classes/icalls.h"
#include "classes/mesh.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ARVRPositionalTracker::_set_joy_id(const int64_t joy_id) {
    rebel_icall_void_int(
        method_bindings.mb__set_joy_id,
        (const Object*)this,
        joy_id
    );
}

void ARVRPositionalTracker::_set_mesh(const Ref<Mesh> mesh) {
    rebel_icall_void_object(
        method_bindings.mb__set_mesh,
        (const Object*)this,
        mesh.ptr()
    );
}

void ARVRPositionalTracker::_set_name(const String name) {
    rebel_icall_void_string(
        method_bindings.mb__set_name,
        (const Object*)this,
        name
    );
}

void ARVRPositionalTracker::_set_orientation(const Basis orientation) {
    rebel_icall_void_basis(
        method_bindings.mb__set_orientation,
        (const Object*)this,
        orientation
    );
}

void ARVRPositionalTracker::_set_rw_position(const Vector3 rw_position) {
    rebel_icall_void_vector3(
        method_bindings.mb__set_rw_position,
        (const Object*)this,
        rw_position
    );
}

void ARVRPositionalTracker::_set_type(const int64_t type) {
    rebel_icall_void_int(
        method_bindings.mb__set_type,
        (const Object*)this,
        type
    );
}

ARVRPositionalTracker::TrackerHand ARVRPositionalTracker::get_hand() const {
    return (ARVRPositionalTracker::TrackerHand)rebel_icall_int(
        method_bindings.mb_get_hand,
        (const Object*)this
    );
}

int64_t ARVRPositionalTracker::get_joy_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_joy_id,
        (const Object*)this
    );
}

Ref<Mesh> ARVRPositionalTracker::get_mesh() const {
    return Ref<Mesh>::create_ref(rebel_icall_object(
        method_bindings.mb_get_mesh,
        (const Object*)this
    ));
}

String ARVRPositionalTracker::get_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_name,
        (const Object*)this
    );
}

Basis ARVRPositionalTracker::get_orientation() const {
    return rebel_icall_basis(
        method_bindings.mb_get_orientation,
        (const Object*)this
    );
}

Vector3 ARVRPositionalTracker::get_position() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_position,
        (const Object*)this
    );
}

real_t ARVRPositionalTracker::get_rumble() const {
    return rebel_icall_float(
        method_bindings.mb_get_rumble,
        (const Object*)this
    );
}

int64_t ARVRPositionalTracker::get_tracker_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_tracker_id,
        (const Object*)this
    );
}

bool ARVRPositionalTracker::get_tracks_orientation() const {
    return rebel_icall_bool(
        method_bindings.mb_get_tracks_orientation,
        (const Object*)this
    );
}

bool ARVRPositionalTracker::get_tracks_position() const {
    return rebel_icall_bool(
        method_bindings.mb_get_tracks_position,
        (const Object*)this
    );
}

Transform ARVRPositionalTracker::get_transform(const bool adjust_by_reference_frame) const {
    return rebel_icall_transform_bool(
        method_bindings.mb_get_transform,
        (const Object*)this,
        adjust_by_reference_frame
    );
}

ARVRServer::TrackerType ARVRPositionalTracker::get_type() const {
    return (ARVRServer::TrackerType)rebel_icall_int(
        method_bindings.mb_get_type,
        (const Object*)this
    );
}

void ARVRPositionalTracker::set_rumble(const real_t rumble) {
    rebel_icall_void_float(
        method_bindings.mb_set_rumble,
        (const Object*)this,
        rumble
    );
}

ARVRPositionalTracker* ARVRPositionalTracker::create() {
    return (ARVRPositionalTracker*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ARVRPositionalTracker")()
         );
}

void ARVRPositionalTracker::init_method_bindings() {
    method_bindings.mb__set_joy_id =
        api->rebel_method_bind_get_method(
            "ARVRPositionalTracker",
            "_set_joy_id"
        );
    method_bindings.mb__set_mesh =
        api->rebel_method_bind_get_method(
            "ARVRPositionalTracker",
            "_set_mesh"
        );
    method_bindings.mb__set_name =
        api->rebel_method_bind_get_method(
            "ARVRPositionalTracker",
            "_set_name"
        );
    method_bindings.mb__set_orientation =
        api->rebel_method_bind_get_method(
            "ARVRPositionalTracker",
            "_set_orientation"
        );
    method_bindings.mb__set_rw_position =
        api->rebel_method_bind_get_method(
            "ARVRPositionalTracker",
            "_set_rw_position"
        );
    method_bindings.mb__set_type =
        api->rebel_method_bind_get_method(
            "ARVRPositionalTracker",
            "_set_type"
        );
    method_bindings.mb_get_hand =
        api->rebel_method_bind_get_method(
            "ARVRPositionalTracker",
            "get_hand"
        );
    method_bindings.mb_get_joy_id =
        api->rebel_method_bind_get_method(
            "ARVRPositionalTracker",
            "get_joy_id"
        );
    method_bindings.mb_get_mesh =
        api->rebel_method_bind_get_method(
            "ARVRPositionalTracker",
            "get_mesh"
        );
    method_bindings.mb_get_name =
        api->rebel_method_bind_get_method(
            "ARVRPositionalTracker",
            "get_name"
        );
    method_bindings.mb_get_orientation =
        api->rebel_method_bind_get_method(
            "ARVRPositionalTracker",
            "get_orientation"
        );
    method_bindings.mb_get_position =
        api->rebel_method_bind_get_method(
            "ARVRPositionalTracker",
            "get_position"
        );
    method_bindings.mb_get_rumble =
        api->rebel_method_bind_get_method(
            "ARVRPositionalTracker",
            "get_rumble"
        );
    method_bindings.mb_get_tracker_id =
        api->rebel_method_bind_get_method(
            "ARVRPositionalTracker",
            "get_tracker_id"
        );
    method_bindings.mb_get_tracks_orientation =
        api->rebel_method_bind_get_method(
            "ARVRPositionalTracker",
            "get_tracks_orientation"
        );
    method_bindings.mb_get_tracks_position =
        api->rebel_method_bind_get_method(
            "ARVRPositionalTracker",
            "get_tracks_position"
        );
    method_bindings.mb_get_transform =
        api->rebel_method_bind_get_method(
            "ARVRPositionalTracker",
            "get_transform"
        );
    method_bindings.mb_get_type =
        api->rebel_method_bind_get_method(
            "ARVRPositionalTracker",
            "get_type"
        );
    method_bindings.mb_set_rumble =
        api->rebel_method_bind_get_method(
            "ARVRPositionalTracker",
            "set_rumble"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ARVRPositionalTracker");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ARVRPositionalTracker::MethodBindings ARVRPositionalTracker::method_bindings = {};
void* ARVRPositionalTracker::class_tag = nullptr;
} // namespace Rebel
