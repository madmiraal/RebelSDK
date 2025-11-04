// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/arvrserver.h"

#include "classes/arvrinterface.h"
#include "classes/arvrpositionaltracker.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ARVRServer::add_interface(const Ref<ARVRInterface> interface) {
    rebel_icall_void_object(
        method_bindings.mb_add_interface,
        (const Object*)this,
        interface.ptr()
    );
}

void ARVRServer::add_tracker(const Ref<ARVRPositionalTracker> tracker) {
    rebel_icall_void_object(
        method_bindings.mb_add_tracker,
        (const Object*)this,
        tracker.ptr()
    );
}

void ARVRServer::center_on_hmd(const int64_t rotation_mode, const bool keep_height) {
    rebel_icall_void_int_bool(
        method_bindings.mb_center_on_hmd,
        (const Object*)this,
        rotation_mode,
        keep_height
    );
}

void ARVRServer::clear_primary_interface_if(const Ref<ARVRInterface> interface) {
    rebel_icall_void_object(
        method_bindings.mb_clear_primary_interface_if,
        (const Object*)this,
        interface.ptr()
    );
}

Ref<ARVRInterface> ARVRServer::find_interface(const String name) const {
    return Ref<ARVRInterface>::create_ref(rebel_icall_object_string(
        method_bindings.mb_find_interface,
        (const Object*)this,
        name
    ));
}

Transform ARVRServer::get_hmd_transform() {
    return rebel_icall_transform(
        method_bindings.mb_get_hmd_transform,
        (const Object*)this
    );
}

Ref<ARVRInterface> ARVRServer::get_interface(const int64_t idx) const {
    return Ref<ARVRInterface>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_interface,
        (const Object*)this,
        idx
    ));
}

int64_t ARVRServer::get_interface_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_interface_count,
        (const Object*)this
    );
}

Array ARVRServer::get_interfaces() const {
    return rebel_icall_array(
        method_bindings.mb_get_interfaces,
        (const Object*)this
    );
}

int64_t ARVRServer::get_last_commit_usec() {
    return rebel_icall_int(
        method_bindings.mb_get_last_commit_usec,
        (const Object*)this
    );
}

int64_t ARVRServer::get_last_frame_usec() {
    return rebel_icall_int(
        method_bindings.mb_get_last_frame_usec,
        (const Object*)this
    );
}

int64_t ARVRServer::get_last_process_usec() {
    return rebel_icall_int(
        method_bindings.mb_get_last_process_usec,
        (const Object*)this
    );
}

Ref<ARVRInterface> ARVRServer::get_primary_interface() const {
    return Ref<ARVRInterface>::create_ref(rebel_icall_object(
        method_bindings.mb_get_primary_interface,
        (const Object*)this
    ));
}

Transform ARVRServer::get_reference_frame() const {
    return rebel_icall_transform(
        method_bindings.mb_get_reference_frame,
        (const Object*)this
    );
}

Ref<ARVRPositionalTracker> ARVRServer::get_tracker(const int64_t idx) const {
    return Ref<ARVRPositionalTracker>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_tracker,
        (const Object*)this,
        idx
    ));
}

int64_t ARVRServer::get_tracker_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_tracker_count,
        (const Object*)this
    );
}

real_t ARVRServer::get_world_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_world_scale,
        (const Object*)this
    );
}

void ARVRServer::remove_interface(const Ref<ARVRInterface> interface) {
    rebel_icall_void_object(
        method_bindings.mb_remove_interface,
        (const Object*)this,
        interface.ptr()
    );
}

void ARVRServer::remove_tracker(const Ref<ARVRPositionalTracker> tracker) {
    rebel_icall_void_object(
        method_bindings.mb_remove_tracker,
        (const Object*)this,
        tracker.ptr()
    );
}

void ARVRServer::set_primary_interface(const Ref<ARVRInterface> interface) {
    rebel_icall_void_object(
        method_bindings.mb_set_primary_interface,
        (const Object*)this,
        interface.ptr()
    );
}

void ARVRServer::set_world_scale(const real_t arg0) {
    rebel_icall_void_float(
        method_bindings.mb_set_world_scale,
        (const Object*)this,
        arg0
    );
}

ARVRServer* ARVRServer::singleton = nullptr;

ARVRServer::ARVRServer() {
    owner = api->rebel_global_get_singleton((char*) "ARVRServer");
}

void ARVRServer::init_method_bindings() {
    method_bindings.mb_add_interface =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "add_interface"
        );
    method_bindings.mb_add_tracker =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "add_tracker"
        );
    method_bindings.mb_center_on_hmd =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "center_on_hmd"
        );
    method_bindings.mb_clear_primary_interface_if =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "clear_primary_interface_if"
        );
    method_bindings.mb_find_interface =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "find_interface"
        );
    method_bindings.mb_get_hmd_transform =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "get_hmd_transform"
        );
    method_bindings.mb_get_interface =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "get_interface"
        );
    method_bindings.mb_get_interface_count =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "get_interface_count"
        );
    method_bindings.mb_get_interfaces =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "get_interfaces"
        );
    method_bindings.mb_get_last_commit_usec =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "get_last_commit_usec"
        );
    method_bindings.mb_get_last_frame_usec =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "get_last_frame_usec"
        );
    method_bindings.mb_get_last_process_usec =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "get_last_process_usec"
        );
    method_bindings.mb_get_primary_interface =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "get_primary_interface"
        );
    method_bindings.mb_get_reference_frame =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "get_reference_frame"
        );
    method_bindings.mb_get_tracker =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "get_tracker"
        );
    method_bindings.mb_get_tracker_count =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "get_tracker_count"
        );
    method_bindings.mb_get_world_scale =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "get_world_scale"
        );
    method_bindings.mb_remove_interface =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "remove_interface"
        );
    method_bindings.mb_remove_tracker =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "remove_tracker"
        );
    method_bindings.mb_set_primary_interface =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "set_primary_interface"
        );
    method_bindings.mb_set_world_scale =
        api->rebel_method_bind_get_method(
            "ARVRServer",
            "set_world_scale"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ARVRServer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ARVRServer::MethodBindings ARVRServer::method_bindings = {};
void* ARVRServer::class_tag = nullptr;
} // namespace Rebel
