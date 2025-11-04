// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_BITMAP_H
#define REBEL_BITMAP_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Image;

class BitMap : public Resource {
public:
    Dictionary _get_data() const;
    void _set_data(const Dictionary arg0);
    void create(const Vector2 size);
    void create_from_image_alpha(const Ref<Image> image, const real_t threshold = 0.1);
    bool get_bit(const Vector2 position) const;
    Vector2 get_size() const;
    int64_t get_true_bit_count() const;
    void grow_mask(const int64_t pixels, const Rect2 rect);
    Array opaque_to_polygons(const Rect2 rect, const real_t epsilon = 2) const;
    void set_bit(const Vector2 position, const bool bit);
    void set_bit_rect(const Rect2 rect, const bool bit);

    static BitMap* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "BitMap";
    }

    inline static const char* get_rebel_class_name() {
        return "BitMap";
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
        rebel_method_bind* mb_create;
        rebel_method_bind* mb_create_from_image_alpha;
        rebel_method_bind* mb_get_bit;
        rebel_method_bind* mb_get_size;
        rebel_method_bind* mb_get_true_bit_count;
        rebel_method_bind* mb_grow_mask;
        rebel_method_bind* mb_opaque_to_polygons;
        rebel_method_bind* mb_set_bit;
        rebel_method_bind* mb_set_bit_rect;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_BITMAP_H
