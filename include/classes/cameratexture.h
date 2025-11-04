// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CAMERATEXTURE_H
#define REBEL_CAMERATEXTURE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/cameraserver.h"
#include "classes/texture.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CameraTexture : public Texture {
public:
    bool get_camera_active() const;
    int64_t get_camera_feed_id() const;
    CameraServer::FeedImage get_which_feed() const;
    void set_camera_active(const bool active);
    void set_camera_feed_id(const int64_t feed_id);
    void set_which_feed(const int64_t which_feed);

    static CameraTexture* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CameraTexture";
    }

    inline static const char* get_rebel_class_name() {
        return "CameraTexture";
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
    struct MethodBindings {
        rebel_method_bind* mb_get_camera_active;
        rebel_method_bind* mb_get_camera_feed_id;
        rebel_method_bind* mb_get_which_feed;
        rebel_method_bind* mb_set_camera_active;
        rebel_method_bind* mb_set_camera_feed_id;
        rebel_method_bind* mb_set_which_feed;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CAMERATEXTURE_H
