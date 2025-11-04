// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/cameraserver.h"

#include "classes/camerafeed.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void CameraServer::add_feed(const Ref<CameraFeed> feed) {
    rebel_icall_void_object(
        method_bindings.mb_add_feed,
        (const Object*)this,
        feed.ptr()
    );
}

Array CameraServer::feeds() {
    return rebel_icall_array(
        method_bindings.mb_feeds,
        (const Object*)this
    );
}

Ref<CameraFeed> CameraServer::get_feed(const int64_t index) {
    return Ref<CameraFeed>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_feed,
        (const Object*)this,
        index
    ));
}

int64_t CameraServer::get_feed_count() {
    return rebel_icall_int(
        method_bindings.mb_get_feed_count,
        (const Object*)this
    );
}

void CameraServer::remove_feed(const Ref<CameraFeed> feed) {
    rebel_icall_void_object(
        method_bindings.mb_remove_feed,
        (const Object*)this,
        feed.ptr()
    );
}

CameraServer* CameraServer::singleton = nullptr;

CameraServer::CameraServer() {
    owner = api->rebel_global_get_singleton((char*) "CameraServer");
}

void CameraServer::init_method_bindings() {
    method_bindings.mb_add_feed =
        api->rebel_method_bind_get_method(
            "CameraServer",
            "add_feed"
        );
    method_bindings.mb_feeds =
        api->rebel_method_bind_get_method(
            "CameraServer",
            "feeds"
        );
    method_bindings.mb_get_feed =
        api->rebel_method_bind_get_method(
            "CameraServer",
            "get_feed"
        );
    method_bindings.mb_get_feed_count =
        api->rebel_method_bind_get_method(
            "CameraServer",
            "get_feed_count"
        );
    method_bindings.mb_remove_feed =
        api->rebel_method_bind_get_method(
            "CameraServer",
            "remove_feed"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CameraServer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CameraServer::MethodBindings CameraServer::method_bindings = {};
void* CameraServer::class_tag = nullptr;
} // namespace Rebel
