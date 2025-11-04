// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CUBEMAP_H
#define REBEL_CUBEMAP_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Image;

class CubeMap : public Resource {
public:
    enum Flags {
        FLAG_MIPMAPS = 1,
        FLAG_REPEAT = 2,
        FLAG_FILTER = 4,
        FLAGS_DEFAULT = 7,
    };

    enum Side {
        SIDE_LEFT = 0,
        SIDE_RIGHT = 1,
        SIDE_BOTTOM = 2,
        SIDE_TOP = 3,
        SIDE_FRONT = 4,
        SIDE_BACK = 5,
    };

    enum Storage {
        STORAGE_RAW = 0,
        STORAGE_COMPRESS_LOSSY = 1,
        STORAGE_COMPRESS_LOSSLESS = 2,
    };

    int64_t get_flags() const;
    int64_t get_height() const;
    real_t get_lossy_storage_quality() const;
    Ref<Image> get_side(const int64_t side) const;
    CubeMap::Storage get_storage() const;
    int64_t get_width() const;
    void set_flags(const int64_t flags);
    void set_lossy_storage_quality(const real_t quality);
    void set_side(const int64_t side, const Ref<Image> image);
    void set_storage(const int64_t mode);

    static CubeMap* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CubeMap";
    }

    inline static const char* get_rebel_class_name() {
        return "CubeMap";
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
        rebel_method_bind* mb_get_flags;
        rebel_method_bind* mb_get_height;
        rebel_method_bind* mb_get_lossy_storage_quality;
        rebel_method_bind* mb_get_side;
        rebel_method_bind* mb_get_storage;
        rebel_method_bind* mb_get_width;
        rebel_method_bind* mb_set_flags;
        rebel_method_bind* mb_set_lossy_storage_quality;
        rebel_method_bind* mb_set_side;
        rebel_method_bind* mb_set_storage;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CUBEMAP_H
