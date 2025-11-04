// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_TEXTURELAYERED_H
#define REBEL_TEXTURELAYERED_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/image.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Image;

class TextureLayered : public Resource {
public:
    enum Flags {
        FLAG_MIPMAPS = 1,
        FLAG_REPEAT = 2,
        FLAGS_DEFAULT_TEXTURE_3D = 4,
        FLAG_FILTER = 4,
        FLAGS_DEFAULT_TEXTURE_ARRAY = 7,
        FLAG_ANISOTROPIC_FILTER = 8,
    };

    Dictionary _get_data() const;
    void _set_data(const Dictionary data);
    int64_t get_depth() const;
    int64_t get_flags() const;
    Image::Format get_format() const;
    int64_t get_height() const;
    Ref<Image> get_layer_data(const int64_t layer) const;
    int64_t get_width() const;
    void set_data_partial(const Ref<Image> image, const int64_t x_offset, const int64_t y_offset, const int64_t layer, const int64_t mipmap = 0);
    void set_flags(const int64_t flags);
    void set_layer_data(const Ref<Image> image, const int64_t layer);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "TextureLayered";
    }

    inline static const char* get_rebel_class_name() {
        return "TextureLayered";
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
        rebel_method_bind* mb__get_data;
        rebel_method_bind* mb__set_data;
        rebel_method_bind* mb_get_depth;
        rebel_method_bind* mb_get_flags;
        rebel_method_bind* mb_get_format;
        rebel_method_bind* mb_get_height;
        rebel_method_bind* mb_get_layer_data;
        rebel_method_bind* mb_get_width;
        rebel_method_bind* mb_set_data_partial;
        rebel_method_bind* mb_set_flags;
        rebel_method_bind* mb_set_layer_data;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_TEXTURELAYERED_H
