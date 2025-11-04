// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/clippedcamera.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ClippedCamera::add_exception(const Object* node) {
    rebel_icall_void_object(
        method_bindings.mb_add_exception,
        (const Object*)this,
        node
    );
}

void ClippedCamera::add_exception_rid(const RID rid) {
    rebel_icall_void_rid(
        method_bindings.mb_add_exception_rid,
        (const Object*)this,
        rid
    );
}

void ClippedCamera::clear_exceptions() {
    rebel_icall_void(
        method_bindings.mb_clear_exceptions,
        (const Object*)this
    );
}

real_t ClippedCamera::get_clip_offset() const {
    return rebel_icall_float(
        method_bindings.mb_get_clip_offset,
        (const Object*)this
    );
}

int64_t ClippedCamera::get_collision_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_collision_mask,
        (const Object*)this
    );
}

bool ClippedCamera::get_collision_mask_bit(const int64_t bit) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_collision_mask_bit,
        (const Object*)this,
        bit
    );
}

real_t ClippedCamera::get_margin() const {
    return rebel_icall_float(
        method_bindings.mb_get_margin,
        (const Object*)this
    );
}

ClippedCamera::ProcessMode ClippedCamera::get_process_mode() const {
    return (ClippedCamera::ProcessMode)rebel_icall_int(
        method_bindings.mb_get_process_mode,
        (const Object*)this
    );
}

bool ClippedCamera::is_clip_to_areas_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_clip_to_areas_enabled,
        (const Object*)this
    );
}

bool ClippedCamera::is_clip_to_bodies_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_clip_to_bodies_enabled,
        (const Object*)this
    );
}

void ClippedCamera::remove_exception(const Object* node) {
    rebel_icall_void_object(
        method_bindings.mb_remove_exception,
        (const Object*)this,
        node
    );
}

void ClippedCamera::remove_exception_rid(const RID rid) {
    rebel_icall_void_rid(
        method_bindings.mb_remove_exception_rid,
        (const Object*)this,
        rid
    );
}

void ClippedCamera::set_clip_to_areas(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_clip_to_areas,
        (const Object*)this,
        enable
    );
}

void ClippedCamera::set_clip_to_bodies(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_clip_to_bodies,
        (const Object*)this,
        enable
    );
}

void ClippedCamera::set_collision_mask(const int64_t mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_mask,
        (const Object*)this,
        mask
    );
}

void ClippedCamera::set_collision_mask_bit(const int64_t bit, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_collision_mask_bit,
        (const Object*)this,
        bit,
        value
    );
}

void ClippedCamera::set_margin(const real_t margin) {
    rebel_icall_void_float(
        method_bindings.mb_set_margin,
        (const Object*)this,
        margin
    );
}

void ClippedCamera::set_process_mode(const int64_t process_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_process_mode,
        (const Object*)this,
        process_mode
    );
}

ClippedCamera* ClippedCamera::create() {
    return (ClippedCamera*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ClippedCamera")()
         );
}

void ClippedCamera::init_method_bindings() {
    method_bindings.mb_add_exception =
        api->rebel_method_bind_get_method(
            "ClippedCamera",
            "add_exception"
        );
    method_bindings.mb_add_exception_rid =
        api->rebel_method_bind_get_method(
            "ClippedCamera",
            "add_exception_rid"
        );
    method_bindings.mb_clear_exceptions =
        api->rebel_method_bind_get_method(
            "ClippedCamera",
            "clear_exceptions"
        );
    method_bindings.mb_get_clip_offset =
        api->rebel_method_bind_get_method(
            "ClippedCamera",
            "get_clip_offset"
        );
    method_bindings.mb_get_collision_mask =
        api->rebel_method_bind_get_method(
            "ClippedCamera",
            "get_collision_mask"
        );
    method_bindings.mb_get_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "ClippedCamera",
            "get_collision_mask_bit"
        );
    method_bindings.mb_get_margin =
        api->rebel_method_bind_get_method(
            "ClippedCamera",
            "get_margin"
        );
    method_bindings.mb_get_process_mode =
        api->rebel_method_bind_get_method(
            "ClippedCamera",
            "get_process_mode"
        );
    method_bindings.mb_is_clip_to_areas_enabled =
        api->rebel_method_bind_get_method(
            "ClippedCamera",
            "is_clip_to_areas_enabled"
        );
    method_bindings.mb_is_clip_to_bodies_enabled =
        api->rebel_method_bind_get_method(
            "ClippedCamera",
            "is_clip_to_bodies_enabled"
        );
    method_bindings.mb_remove_exception =
        api->rebel_method_bind_get_method(
            "ClippedCamera",
            "remove_exception"
        );
    method_bindings.mb_remove_exception_rid =
        api->rebel_method_bind_get_method(
            "ClippedCamera",
            "remove_exception_rid"
        );
    method_bindings.mb_set_clip_to_areas =
        api->rebel_method_bind_get_method(
            "ClippedCamera",
            "set_clip_to_areas"
        );
    method_bindings.mb_set_clip_to_bodies =
        api->rebel_method_bind_get_method(
            "ClippedCamera",
            "set_clip_to_bodies"
        );
    method_bindings.mb_set_collision_mask =
        api->rebel_method_bind_get_method(
            "ClippedCamera",
            "set_collision_mask"
        );
    method_bindings.mb_set_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "ClippedCamera",
            "set_collision_mask_bit"
        );
    method_bindings.mb_set_margin =
        api->rebel_method_bind_get_method(
            "ClippedCamera",
            "set_margin"
        );
    method_bindings.mb_set_process_mode =
        api->rebel_method_bind_get_method(
            "ClippedCamera",
            "set_process_mode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ClippedCamera");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ClippedCamera::MethodBindings ClippedCamera::method_bindings = {};
void* ClippedCamera::class_tag = nullptr;
} // namespace Rebel
