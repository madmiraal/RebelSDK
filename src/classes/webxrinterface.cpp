// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/webxrinterface.h"

#include "classes/arvrpositionaltracker.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
PoolVector3Array WebXRInterface::get_bounds_geometry() const {
    return rebel_icall_poolvector3array(
        method_bindings.mb_get_bounds_geometry,
        (const Object*)this
    );
}

Ref<ARVRPositionalTracker> WebXRInterface::get_controller(const int64_t controller_id) const {
    return Ref<ARVRPositionalTracker>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_controller,
        (const Object*)this,
        controller_id
    ));
}

String WebXRInterface::get_optional_features() const {
    return rebel_icall_string(
        method_bindings.mb_get_optional_features,
        (const Object*)this
    );
}

String WebXRInterface::get_reference_space_type() const {
    return rebel_icall_string(
        method_bindings.mb_get_reference_space_type,
        (const Object*)this
    );
}

String WebXRInterface::get_requested_reference_space_types() const {
    return rebel_icall_string(
        method_bindings.mb_get_requested_reference_space_types,
        (const Object*)this
    );
}

String WebXRInterface::get_required_features() const {
    return rebel_icall_string(
        method_bindings.mb_get_required_features,
        (const Object*)this
    );
}

String WebXRInterface::get_session_mode() const {
    return rebel_icall_string(
        method_bindings.mb_get_session_mode,
        (const Object*)this
    );
}

String WebXRInterface::get_visibility_state() const {
    return rebel_icall_string(
        method_bindings.mb_get_visibility_state,
        (const Object*)this
    );
}

void WebXRInterface::is_session_supported(const String session_mode) {
    rebel_icall_void_string(
        method_bindings.mb_is_session_supported,
        (const Object*)this,
        session_mode
    );
}

void WebXRInterface::set_optional_features(const String optional_features) {
    rebel_icall_void_string(
        method_bindings.mb_set_optional_features,
        (const Object*)this,
        optional_features
    );
}

void WebXRInterface::set_requested_reference_space_types(const String requested_reference_space_types) {
    rebel_icall_void_string(
        method_bindings.mb_set_requested_reference_space_types,
        (const Object*)this,
        requested_reference_space_types
    );
}

void WebXRInterface::set_required_features(const String required_features) {
    rebel_icall_void_string(
        method_bindings.mb_set_required_features,
        (const Object*)this,
        required_features
    );
}

void WebXRInterface::set_session_mode(const String session_mode) {
    rebel_icall_void_string(
        method_bindings.mb_set_session_mode,
        (const Object*)this,
        session_mode
    );
}

void WebXRInterface::init_method_bindings() {
    method_bindings.mb_get_bounds_geometry =
        api->rebel_method_bind_get_method(
            "WebXRInterface",
            "get_bounds_geometry"
        );
    method_bindings.mb_get_controller =
        api->rebel_method_bind_get_method(
            "WebXRInterface",
            "get_controller"
        );
    method_bindings.mb_get_optional_features =
        api->rebel_method_bind_get_method(
            "WebXRInterface",
            "get_optional_features"
        );
    method_bindings.mb_get_reference_space_type =
        api->rebel_method_bind_get_method(
            "WebXRInterface",
            "get_reference_space_type"
        );
    method_bindings.mb_get_requested_reference_space_types =
        api->rebel_method_bind_get_method(
            "WebXRInterface",
            "get_requested_reference_space_types"
        );
    method_bindings.mb_get_required_features =
        api->rebel_method_bind_get_method(
            "WebXRInterface",
            "get_required_features"
        );
    method_bindings.mb_get_session_mode =
        api->rebel_method_bind_get_method(
            "WebXRInterface",
            "get_session_mode"
        );
    method_bindings.mb_get_visibility_state =
        api->rebel_method_bind_get_method(
            "WebXRInterface",
            "get_visibility_state"
        );
    method_bindings.mb_is_session_supported =
        api->rebel_method_bind_get_method(
            "WebXRInterface",
            "is_session_supported"
        );
    method_bindings.mb_set_optional_features =
        api->rebel_method_bind_get_method(
            "WebXRInterface",
            "set_optional_features"
        );
    method_bindings.mb_set_requested_reference_space_types =
        api->rebel_method_bind_get_method(
            "WebXRInterface",
            "set_requested_reference_space_types"
        );
    method_bindings.mb_set_required_features =
        api->rebel_method_bind_get_method(
            "WebXRInterface",
            "set_required_features"
        );
    method_bindings.mb_set_session_mode =
        api->rebel_method_bind_get_method(
            "WebXRInterface",
            "set_session_mode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "WebXRInterface");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

WebXRInterface::MethodBindings WebXRInterface::method_bindings = {};
void* WebXRInterface::class_tag = nullptr;
} // namespace Rebel
