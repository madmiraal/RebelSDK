// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/arvrinterface.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool ARVRInterface::get_anchor_detection_is_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_get_anchor_detection_is_enabled,
        (const Object*)this
    );
}

int64_t ARVRInterface::get_camera_feed_id() {
    return rebel_icall_int(
        method_bindings.mb_get_camera_feed_id,
        (const Object*)this
    );
}

int64_t ARVRInterface::get_capabilities() const {
    return rebel_icall_int(
        method_bindings.mb_get_capabilities,
        (const Object*)this
    );
}

String ARVRInterface::get_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_name,
        (const Object*)this
    );
}

Vector2 ARVRInterface::get_render_targetsize() {
    return rebel_icall_vector2(
        method_bindings.mb_get_render_targetsize,
        (const Object*)this
    );
}

ARVRInterface::Tracking_status ARVRInterface::get_tracking_status() const {
    return (ARVRInterface::Tracking_status)rebel_icall_int(
        method_bindings.mb_get_tracking_status,
        (const Object*)this
    );
}

bool ARVRInterface::initialize() {
    return rebel_icall_bool(
        method_bindings.mb_initialize,
        (const Object*)this
    );
}

bool ARVRInterface::is_initialized() const {
    return rebel_icall_bool(
        method_bindings.mb_is_initialized,
        (const Object*)this
    );
}

bool ARVRInterface::is_primary() {
    return rebel_icall_bool(
        method_bindings.mb_is_primary,
        (const Object*)this
    );
}

bool ARVRInterface::is_stereo() {
    return rebel_icall_bool(
        method_bindings.mb_is_stereo,
        (const Object*)this
    );
}

void ARVRInterface::set_anchor_detection_is_enabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_anchor_detection_is_enabled,
        (const Object*)this,
        enable
    );
}

void ARVRInterface::set_is_initialized(const bool initialized) {
    rebel_icall_void_bool(
        method_bindings.mb_set_is_initialized,
        (const Object*)this,
        initialized
    );
}

void ARVRInterface::set_is_primary(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_is_primary,
        (const Object*)this,
        enable
    );
}

void ARVRInterface::uninitialize() {
    rebel_icall_void(
        method_bindings.mb_uninitialize,
        (const Object*)this
    );
}

void ARVRInterface::init_method_bindings() {
    method_bindings.mb_get_anchor_detection_is_enabled =
        api->rebel_method_bind_get_method(
            "ARVRInterface",
            "get_anchor_detection_is_enabled"
        );
    method_bindings.mb_get_camera_feed_id =
        api->rebel_method_bind_get_method(
            "ARVRInterface",
            "get_camera_feed_id"
        );
    method_bindings.mb_get_capabilities =
        api->rebel_method_bind_get_method(
            "ARVRInterface",
            "get_capabilities"
        );
    method_bindings.mb_get_name =
        api->rebel_method_bind_get_method(
            "ARVRInterface",
            "get_name"
        );
    method_bindings.mb_get_render_targetsize =
        api->rebel_method_bind_get_method(
            "ARVRInterface",
            "get_render_targetsize"
        );
    method_bindings.mb_get_tracking_status =
        api->rebel_method_bind_get_method(
            "ARVRInterface",
            "get_tracking_status"
        );
    method_bindings.mb_initialize =
        api->rebel_method_bind_get_method(
            "ARVRInterface",
            "initialize"
        );
    method_bindings.mb_is_initialized =
        api->rebel_method_bind_get_method(
            "ARVRInterface",
            "is_initialized"
        );
    method_bindings.mb_is_primary =
        api->rebel_method_bind_get_method(
            "ARVRInterface",
            "is_primary"
        );
    method_bindings.mb_is_stereo =
        api->rebel_method_bind_get_method(
            "ARVRInterface",
            "is_stereo"
        );
    method_bindings.mb_set_anchor_detection_is_enabled =
        api->rebel_method_bind_get_method(
            "ARVRInterface",
            "set_anchor_detection_is_enabled"
        );
    method_bindings.mb_set_is_initialized =
        api->rebel_method_bind_get_method(
            "ARVRInterface",
            "set_is_initialized"
        );
    method_bindings.mb_set_is_primary =
        api->rebel_method_bind_get_method(
            "ARVRInterface",
            "set_is_primary"
        );
    method_bindings.mb_uninitialize =
        api->rebel_method_bind_get_method(
            "ARVRInterface",
            "uninitialize"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ARVRInterface");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ARVRInterface::MethodBindings ARVRInterface::method_bindings = {};
void* ARVRInterface::class_tag = nullptr;
} // namespace Rebel
