// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CAMERAFEED_H
#define REBEL_CAMERAFEED_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Image;

class CameraFeed : public Reference {
public:
    enum FeedDataType {
        FEED_NOIMAGE = 0,
        FEED_RGB = 1,
        FEED_YCBCR = 2,
        FEED_YCBCR_SEP = 3,
    };

    enum FeedPosition {
        FEED_UNSPECIFIED = 0,
        FEED_FRONT = 1,
        FEED_BACK = 2,
    };

    void _allocate_texture(const int64_t width, const int64_t height, const int64_t format, const int64_t texture_type, const int64_t data_type);
    void _set_RGB_img(const Ref<Image> rgb_img);
    void _set_YCbCr_img(const Ref<Image> ycbcr_img);
    void _set_YCbCr_imgs(const Ref<Image> y_img, const Ref<Image> cbcr_img);
    void _set_name(const String name);
    void _set_position(const int64_t position);
    int64_t get_id() const;
    String get_name() const;
    CameraFeed::FeedPosition get_position() const;
    Transform2D get_transform() const;
    bool is_active() const;
    void set_active(const bool active);
    void set_transform(const Transform2D transform);

    static CameraFeed* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CameraFeed";
    }

    inline static const char* get_rebel_class_name() {
        return "CameraFeed";
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
        rebel_method_bind* mb__allocate_texture;
        rebel_method_bind* mb__set_RGB_img;
        rebel_method_bind* mb__set_YCbCr_img;
        rebel_method_bind* mb__set_YCbCr_imgs;
        rebel_method_bind* mb__set_name;
        rebel_method_bind* mb__set_position;
        rebel_method_bind* mb_get_id;
        rebel_method_bind* mb_get_name;
        rebel_method_bind* mb_get_position;
        rebel_method_bind* mb_get_transform;
        rebel_method_bind* mb_is_active;
        rebel_method_bind* mb_set_active;
        rebel_method_bind* mb_set_transform;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CAMERAFEED_H
