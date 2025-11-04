// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_IMAGETEXTURE_H
#define REBEL_IMAGETEXTURE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/image.h"
#include "classes/texture.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Image;

class ImageTexture : public Texture {
public:
    enum Storage {
        STORAGE_RAW = 0,
        STORAGE_COMPRESS_LOSSY = 1,
        STORAGE_COMPRESS_LOSSLESS = 2,
    };

    void _reload_hook(const RID rid);
    void create(const int64_t width, const int64_t height, const int64_t format, const int64_t flags = 7);
    void create_from_image(const Ref<Image> image, const int64_t flags = 7);
    Image::Format get_format() const;
    real_t get_lossy_storage_quality() const;
    ImageTexture::Storage get_storage() const;
    Error load(const String path);
    void set_data(const Ref<Image> image);
    void set_lossy_storage_quality(const real_t quality);
    void set_size_override(const Vector2 size);
    void set_storage(const int64_t mode);

    static ImageTexture* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ImageTexture";
    }

    inline static const char* get_rebel_class_name() {
        return "ImageTexture";
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
        rebel_method_bind* mb__reload_hook;
        rebel_method_bind* mb_create;
        rebel_method_bind* mb_create_from_image;
        rebel_method_bind* mb_get_format;
        rebel_method_bind* mb_get_lossy_storage_quality;
        rebel_method_bind* mb_get_storage;
        rebel_method_bind* mb_load;
        rebel_method_bind* mb_set_data;
        rebel_method_bind* mb_set_lossy_storage_quality;
        rebel_method_bind* mb_set_size_override;
        rebel_method_bind* mb_set_storage;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_IMAGETEXTURE_H
