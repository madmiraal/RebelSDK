// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/cameratexture.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool CameraTexture::get_camera_active() const {
    return rebel_icall_bool(
        method_bindings.mb_get_camera_active,
        (const Object*)this
    );
}

int64_t CameraTexture::get_camera_feed_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_camera_feed_id,
        (const Object*)this
    );
}

CameraServer::FeedImage CameraTexture::get_which_feed() const {
    return (CameraServer::FeedImage)rebel_icall_int(
        method_bindings.mb_get_which_feed,
        (const Object*)this
    );
}

void CameraTexture::set_camera_active(const bool active) {
    rebel_icall_void_bool(
        method_bindings.mb_set_camera_active,
        (const Object*)this,
        active
    );
}

void CameraTexture::set_camera_feed_id(const int64_t feed_id) {
    rebel_icall_void_int(
        method_bindings.mb_set_camera_feed_id,
        (const Object*)this,
        feed_id
    );
}

void CameraTexture::set_which_feed(const int64_t which_feed) {
    rebel_icall_void_int(
        method_bindings.mb_set_which_feed,
        (const Object*)this,
        which_feed
    );
}

CameraTexture* CameraTexture::create() {
    return (CameraTexture*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CameraTexture")()
         );
}

void CameraTexture::init_method_bindings() {
    method_bindings.mb_get_camera_active =
        api->rebel_method_bind_get_method(
            "CameraTexture",
            "get_camera_active"
        );
    method_bindings.mb_get_camera_feed_id =
        api->rebel_method_bind_get_method(
            "CameraTexture",
            "get_camera_feed_id"
        );
    method_bindings.mb_get_which_feed =
        api->rebel_method_bind_get_method(
            "CameraTexture",
            "get_which_feed"
        );
    method_bindings.mb_set_camera_active =
        api->rebel_method_bind_get_method(
            "CameraTexture",
            "set_camera_active"
        );
    method_bindings.mb_set_camera_feed_id =
        api->rebel_method_bind_get_method(
            "CameraTexture",
            "set_camera_feed_id"
        );
    method_bindings.mb_set_which_feed =
        api->rebel_method_bind_get_method(
            "CameraTexture",
            "set_which_feed"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CameraTexture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CameraTexture::MethodBindings CameraTexture::method_bindings = {};
void* CameraTexture::class_tag = nullptr;
} // namespace Rebel
