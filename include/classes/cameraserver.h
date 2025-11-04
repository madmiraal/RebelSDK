// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CAMERASERVER_H
#define REBEL_CAMERASERVER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CameraFeed;

class CameraServer : public Object {
public:
    enum FeedImage {
        FEED_RGBA_IMAGE = 0,
        FEED_YCBCR_IMAGE = 0,
        FEED_Y_IMAGE = 0,
        FEED_CBCR_IMAGE = 1,
    };

    void add_feed(const Ref<CameraFeed> feed);
    Array feeds();
    Ref<CameraFeed> get_feed(const int64_t index);
    int64_t get_feed_count();
    void remove_feed(const Ref<CameraFeed> feed);

    static inline CameraServer* get_singleton() {
        if (!CameraServer::singleton) {
            CameraServer::singleton = new CameraServer;
        }
        return CameraServer::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CameraServer";
    }

    inline static const char* get_rebel_class_name() {
        return "CameraServer";
    }

    inline static Object* from_variant(Variant variant) {
        rebel_object* object = (rebel_object*)variant;
        if (!object) {
            return nullptr;
        }
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                object
            );
    }

private:
    CameraServer();
    static CameraServer* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_add_feed;
        rebel_method_bind* mb_feeds;
        rebel_method_bind* mb_get_feed;
        rebel_method_bind* mb_get_feed_count;
        rebel_method_bind* mb_remove_feed;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CAMERASERVER_H
