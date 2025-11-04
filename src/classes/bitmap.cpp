// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/bitmap.h"

#include "classes/icalls.h"
#include "classes/image.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Dictionary BitMap::_get_data() const {
    return rebel_icall_dictionary(
        method_bindings.mb__get_data,
        (const Object*)this
    );
}

void BitMap::_set_data(const Dictionary arg0) {
    rebel_icall_void_dictionary(
        method_bindings.mb__set_data,
        (const Object*)this,
        arg0
    );
}

void BitMap::create(const Vector2 size) {
    rebel_icall_void_vector2(
        method_bindings.mb_create,
        (const Object*)this,
        size
    );
}

void BitMap::create_from_image_alpha(const Ref<Image> image, const real_t threshold) {
    rebel_icall_void_object_float(
        method_bindings.mb_create_from_image_alpha,
        (const Object*)this,
        image.ptr(),
        threshold
    );
}

bool BitMap::get_bit(const Vector2 position) const {
    return rebel_icall_bool_vector2(
        method_bindings.mb_get_bit,
        (const Object*)this,
        position
    );
}

Vector2 BitMap::get_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_size,
        (const Object*)this
    );
}

int64_t BitMap::get_true_bit_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_true_bit_count,
        (const Object*)this
    );
}

void BitMap::grow_mask(const int64_t pixels, const Rect2 rect) {
    rebel_icall_void_int_rect2(
        method_bindings.mb_grow_mask,
        (const Object*)this,
        pixels,
        rect
    );
}

Array BitMap::opaque_to_polygons(const Rect2 rect, const real_t epsilon) const {
    return rebel_icall_array_rect2_float(
        method_bindings.mb_opaque_to_polygons,
        (const Object*)this,
        rect,
        epsilon
    );
}

void BitMap::set_bit(const Vector2 position, const bool bit) {
    rebel_icall_void_vector2_bool(
        method_bindings.mb_set_bit,
        (const Object*)this,
        position,
        bit
    );
}

void BitMap::set_bit_rect(const Rect2 rect, const bool bit) {
    rebel_icall_void_rect2_bool(
        method_bindings.mb_set_bit_rect,
        (const Object*)this,
        rect,
        bit
    );
}

BitMap* BitMap::create() {
    return (BitMap*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"BitMap")()
         );
}

void BitMap::init_method_bindings() {
    method_bindings.mb__get_data =
        api->rebel_method_bind_get_method(
            "BitMap",
            "_get_data"
        );
    method_bindings.mb__set_data =
        api->rebel_method_bind_get_method(
            "BitMap",
            "_set_data"
        );
    method_bindings.mb_create =
        api->rebel_method_bind_get_method(
            "BitMap",
            "create"
        );
    method_bindings.mb_create_from_image_alpha =
        api->rebel_method_bind_get_method(
            "BitMap",
            "create_from_image_alpha"
        );
    method_bindings.mb_get_bit =
        api->rebel_method_bind_get_method(
            "BitMap",
            "get_bit"
        );
    method_bindings.mb_get_size =
        api->rebel_method_bind_get_method(
            "BitMap",
            "get_size"
        );
    method_bindings.mb_get_true_bit_count =
        api->rebel_method_bind_get_method(
            "BitMap",
            "get_true_bit_count"
        );
    method_bindings.mb_grow_mask =
        api->rebel_method_bind_get_method(
            "BitMap",
            "grow_mask"
        );
    method_bindings.mb_opaque_to_polygons =
        api->rebel_method_bind_get_method(
            "BitMap",
            "opaque_to_polygons"
        );
    method_bindings.mb_set_bit =
        api->rebel_method_bind_get_method(
            "BitMap",
            "set_bit"
        );
    method_bindings.mb_set_bit_rect =
        api->rebel_method_bind_get_method(
            "BitMap",
            "set_bit_rect"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "BitMap");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

BitMap::MethodBindings BitMap::method_bindings = {};
void* BitMap::class_tag = nullptr;
} // namespace Rebel
