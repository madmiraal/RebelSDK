// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/canvaslayer.h"

#include "classes/icalls.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
RID CanvasLayer::get_canvas() const {
    return rebel_icall_rid(
        method_bindings.mb_get_canvas,
        (const Object*)this
    );
}

Node* CanvasLayer::get_custom_viewport() const {
    return (Node*)rebel_icall_object(
        method_bindings.mb_get_custom_viewport,
        (const Object*)this
    );
}

real_t CanvasLayer::get_follow_viewport_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_follow_viewport_scale,
        (const Object*)this
    );
}

int64_t CanvasLayer::get_layer() const {
    return rebel_icall_int(
        method_bindings.mb_get_layer,
        (const Object*)this
    );
}

Vector2 CanvasLayer::get_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_offset,
        (const Object*)this
    );
}

real_t CanvasLayer::get_rotation() const {
    return rebel_icall_float(
        method_bindings.mb_get_rotation,
        (const Object*)this
    );
}

real_t CanvasLayer::get_rotation_degrees() const {
    return rebel_icall_float(
        method_bindings.mb_get_rotation_degrees,
        (const Object*)this
    );
}

Vector2 CanvasLayer::get_scale() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_scale,
        (const Object*)this
    );
}

Transform2D CanvasLayer::get_transform() const {
    return rebel_icall_transform2d(
        method_bindings.mb_get_transform,
        (const Object*)this
    );
}

bool CanvasLayer::is_following_viewport() const {
    return rebel_icall_bool(
        method_bindings.mb_is_following_viewport,
        (const Object*)this
    );
}

void CanvasLayer::set_custom_viewport(const Node* viewport) {
    rebel_icall_void_object(
        method_bindings.mb_set_custom_viewport,
        (const Object*)this,
        viewport
    );
}

void CanvasLayer::set_follow_viewport(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_follow_viewport,
        (const Object*)this,
        enable
    );
}

void CanvasLayer::set_follow_viewport_scale(const real_t scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_follow_viewport_scale,
        (const Object*)this,
        scale
    );
}

void CanvasLayer::set_layer(const int64_t layer) {
    rebel_icall_void_int(
        method_bindings.mb_set_layer,
        (const Object*)this,
        layer
    );
}

void CanvasLayer::set_offset(const Vector2 offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_offset,
        (const Object*)this,
        offset
    );
}

void CanvasLayer::set_rotation(const real_t radians) {
    rebel_icall_void_float(
        method_bindings.mb_set_rotation,
        (const Object*)this,
        radians
    );
}

void CanvasLayer::set_rotation_degrees(const real_t degrees) {
    rebel_icall_void_float(
        method_bindings.mb_set_rotation_degrees,
        (const Object*)this,
        degrees
    );
}

void CanvasLayer::set_scale(const Vector2 scale) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_scale,
        (const Object*)this,
        scale
    );
}

void CanvasLayer::set_transform(const Transform2D transform) {
    rebel_icall_void_transform2d(
        method_bindings.mb_set_transform,
        (const Object*)this,
        transform
    );
}

CanvasLayer* CanvasLayer::create() {
    return (CanvasLayer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CanvasLayer")()
         );
}

void CanvasLayer::init_method_bindings() {
    method_bindings.mb_get_canvas =
        api->rebel_method_bind_get_method(
            "CanvasLayer",
            "get_canvas"
        );
    method_bindings.mb_get_custom_viewport =
        api->rebel_method_bind_get_method(
            "CanvasLayer",
            "get_custom_viewport"
        );
    method_bindings.mb_get_follow_viewport_scale =
        api->rebel_method_bind_get_method(
            "CanvasLayer",
            "get_follow_viewport_scale"
        );
    method_bindings.mb_get_layer =
        api->rebel_method_bind_get_method(
            "CanvasLayer",
            "get_layer"
        );
    method_bindings.mb_get_offset =
        api->rebel_method_bind_get_method(
            "CanvasLayer",
            "get_offset"
        );
    method_bindings.mb_get_rotation =
        api->rebel_method_bind_get_method(
            "CanvasLayer",
            "get_rotation"
        );
    method_bindings.mb_get_rotation_degrees =
        api->rebel_method_bind_get_method(
            "CanvasLayer",
            "get_rotation_degrees"
        );
    method_bindings.mb_get_scale =
        api->rebel_method_bind_get_method(
            "CanvasLayer",
            "get_scale"
        );
    method_bindings.mb_get_transform =
        api->rebel_method_bind_get_method(
            "CanvasLayer",
            "get_transform"
        );
    method_bindings.mb_is_following_viewport =
        api->rebel_method_bind_get_method(
            "CanvasLayer",
            "is_following_viewport"
        );
    method_bindings.mb_set_custom_viewport =
        api->rebel_method_bind_get_method(
            "CanvasLayer",
            "set_custom_viewport"
        );
    method_bindings.mb_set_follow_viewport =
        api->rebel_method_bind_get_method(
            "CanvasLayer",
            "set_follow_viewport"
        );
    method_bindings.mb_set_follow_viewport_scale =
        api->rebel_method_bind_get_method(
            "CanvasLayer",
            "set_follow_viewport_scale"
        );
    method_bindings.mb_set_layer =
        api->rebel_method_bind_get_method(
            "CanvasLayer",
            "set_layer"
        );
    method_bindings.mb_set_offset =
        api->rebel_method_bind_get_method(
            "CanvasLayer",
            "set_offset"
        );
    method_bindings.mb_set_rotation =
        api->rebel_method_bind_get_method(
            "CanvasLayer",
            "set_rotation"
        );
    method_bindings.mb_set_rotation_degrees =
        api->rebel_method_bind_get_method(
            "CanvasLayer",
            "set_rotation_degrees"
        );
    method_bindings.mb_set_scale =
        api->rebel_method_bind_get_method(
            "CanvasLayer",
            "set_scale"
        );
    method_bindings.mb_set_transform =
        api->rebel_method_bind_get_method(
            "CanvasLayer",
            "set_transform"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CanvasLayer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CanvasLayer::MethodBindings CanvasLayer::method_bindings = {};
void* CanvasLayer::class_tag = nullptr;
} // namespace Rebel
