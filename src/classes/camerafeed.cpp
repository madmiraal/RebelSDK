// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/camerafeed.h"

#include "classes/icalls.h"
#include "classes/image.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void CameraFeed::_allocate_texture(const int64_t width, const int64_t height, const int64_t format, const int64_t texture_type, const int64_t data_type) {
    rebel_icall_void_int_int_int_int_int(
        method_bindings.mb__allocate_texture,
        (const Object*)this,
        width,
        height,
        format,
        texture_type,
        data_type
    );
}

void CameraFeed::_set_RGB_img(const Ref<Image> rgb_img) {
    rebel_icall_void_object(
        method_bindings.mb__set_RGB_img,
        (const Object*)this,
        rgb_img.ptr()
    );
}

void CameraFeed::_set_YCbCr_img(const Ref<Image> ycbcr_img) {
    rebel_icall_void_object(
        method_bindings.mb__set_YCbCr_img,
        (const Object*)this,
        ycbcr_img.ptr()
    );
}

void CameraFeed::_set_YCbCr_imgs(const Ref<Image> y_img, const Ref<Image> cbcr_img) {
    rebel_icall_void_object_object(
        method_bindings.mb__set_YCbCr_imgs,
        (const Object*)this,
        y_img.ptr(),
        cbcr_img.ptr()
    );
}

void CameraFeed::_set_name(const String name) {
    rebel_icall_void_string(
        method_bindings.mb__set_name,
        (const Object*)this,
        name
    );
}

void CameraFeed::_set_position(const int64_t position) {
    rebel_icall_void_int(
        method_bindings.mb__set_position,
        (const Object*)this,
        position
    );
}

int64_t CameraFeed::get_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_id,
        (const Object*)this
    );
}

String CameraFeed::get_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_name,
        (const Object*)this
    );
}

CameraFeed::FeedPosition CameraFeed::get_position() const {
    return (CameraFeed::FeedPosition)rebel_icall_int(
        method_bindings.mb_get_position,
        (const Object*)this
    );
}

Transform2D CameraFeed::get_transform() const {
    return rebel_icall_transform2d(
        method_bindings.mb_get_transform,
        (const Object*)this
    );
}

bool CameraFeed::is_active() const {
    return rebel_icall_bool(
        method_bindings.mb_is_active,
        (const Object*)this
    );
}

void CameraFeed::set_active(const bool active) {
    rebel_icall_void_bool(
        method_bindings.mb_set_active,
        (const Object*)this,
        active
    );
}

void CameraFeed::set_transform(const Transform2D transform) {
    rebel_icall_void_transform2d(
        method_bindings.mb_set_transform,
        (const Object*)this,
        transform
    );
}

CameraFeed* CameraFeed::create() {
    return (CameraFeed*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CameraFeed")()
         );
}

void CameraFeed::init_method_bindings() {
    method_bindings.mb__allocate_texture =
        api->rebel_method_bind_get_method(
            "CameraFeed",
            "_allocate_texture"
        );
    method_bindings.mb__set_RGB_img =
        api->rebel_method_bind_get_method(
            "CameraFeed",
            "_set_RGB_img"
        );
    method_bindings.mb__set_YCbCr_img =
        api->rebel_method_bind_get_method(
            "CameraFeed",
            "_set_YCbCr_img"
        );
    method_bindings.mb__set_YCbCr_imgs =
        api->rebel_method_bind_get_method(
            "CameraFeed",
            "_set_YCbCr_imgs"
        );
    method_bindings.mb__set_name =
        api->rebel_method_bind_get_method(
            "CameraFeed",
            "_set_name"
        );
    method_bindings.mb__set_position =
        api->rebel_method_bind_get_method(
            "CameraFeed",
            "_set_position"
        );
    method_bindings.mb_get_id =
        api->rebel_method_bind_get_method(
            "CameraFeed",
            "get_id"
        );
    method_bindings.mb_get_name =
        api->rebel_method_bind_get_method(
            "CameraFeed",
            "get_name"
        );
    method_bindings.mb_get_position =
        api->rebel_method_bind_get_method(
            "CameraFeed",
            "get_position"
        );
    method_bindings.mb_get_transform =
        api->rebel_method_bind_get_method(
            "CameraFeed",
            "get_transform"
        );
    method_bindings.mb_is_active =
        api->rebel_method_bind_get_method(
            "CameraFeed",
            "is_active"
        );
    method_bindings.mb_set_active =
        api->rebel_method_bind_get_method(
            "CameraFeed",
            "set_active"
        );
    method_bindings.mb_set_transform =
        api->rebel_method_bind_get_method(
            "CameraFeed",
            "set_transform"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CameraFeed");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CameraFeed::MethodBindings CameraFeed::method_bindings = {};
void* CameraFeed::class_tag = nullptr;
} // namespace Rebel
