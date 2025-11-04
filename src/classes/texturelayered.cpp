// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/texturelayered.h"

#include "classes/icalls.h"
#include "classes/image.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Dictionary TextureLayered::_get_data() const {
    return rebel_icall_dictionary(
        method_bindings.mb__get_data,
        (const Object*)this
    );
}

void TextureLayered::_set_data(const Dictionary data) {
    rebel_icall_void_dictionary(
        method_bindings.mb__set_data,
        (const Object*)this,
        data
    );
}

int64_t TextureLayered::get_depth() const {
    return rebel_icall_int(
        method_bindings.mb_get_depth,
        (const Object*)this
    );
}

int64_t TextureLayered::get_flags() const {
    return rebel_icall_int(
        method_bindings.mb_get_flags,
        (const Object*)this
    );
}

Image::Format TextureLayered::get_format() const {
    return (Image::Format)rebel_icall_int(
        method_bindings.mb_get_format,
        (const Object*)this
    );
}

int64_t TextureLayered::get_height() const {
    return rebel_icall_int(
        method_bindings.mb_get_height,
        (const Object*)this
    );
}

Ref<Image> TextureLayered::get_layer_data(const int64_t layer) const {
    return Ref<Image>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_layer_data,
        (const Object*)this,
        layer
    ));
}

int64_t TextureLayered::get_width() const {
    return rebel_icall_int(
        method_bindings.mb_get_width,
        (const Object*)this
    );
}

void TextureLayered::set_data_partial(const Ref<Image> image, const int64_t x_offset, const int64_t y_offset, const int64_t layer, const int64_t mipmap) {
    rebel_icall_void_object_int_int_int_int(
        method_bindings.mb_set_data_partial,
        (const Object*)this,
        image.ptr(),
        x_offset,
        y_offset,
        layer,
        mipmap
    );
}

void TextureLayered::set_flags(const int64_t flags) {
    rebel_icall_void_int(
        method_bindings.mb_set_flags,
        (const Object*)this,
        flags
    );
}

void TextureLayered::set_layer_data(const Ref<Image> image, const int64_t layer) {
    rebel_icall_void_object_int(
        method_bindings.mb_set_layer_data,
        (const Object*)this,
        image.ptr(),
        layer
    );
}

void TextureLayered::init_method_bindings() {
    method_bindings.mb__get_data =
        api->rebel_method_bind_get_method(
            "TextureLayered",
            "_get_data"
        );
    method_bindings.mb__set_data =
        api->rebel_method_bind_get_method(
            "TextureLayered",
            "_set_data"
        );
    method_bindings.mb_get_depth =
        api->rebel_method_bind_get_method(
            "TextureLayered",
            "get_depth"
        );
    method_bindings.mb_get_flags =
        api->rebel_method_bind_get_method(
            "TextureLayered",
            "get_flags"
        );
    method_bindings.mb_get_format =
        api->rebel_method_bind_get_method(
            "TextureLayered",
            "get_format"
        );
    method_bindings.mb_get_height =
        api->rebel_method_bind_get_method(
            "TextureLayered",
            "get_height"
        );
    method_bindings.mb_get_layer_data =
        api->rebel_method_bind_get_method(
            "TextureLayered",
            "get_layer_data"
        );
    method_bindings.mb_get_width =
        api->rebel_method_bind_get_method(
            "TextureLayered",
            "get_width"
        );
    method_bindings.mb_set_data_partial =
        api->rebel_method_bind_get_method(
            "TextureLayered",
            "set_data_partial"
        );
    method_bindings.mb_set_flags =
        api->rebel_method_bind_get_method(
            "TextureLayered",
            "set_flags"
        );
    method_bindings.mb_set_layer_data =
        api->rebel_method_bind_get_method(
            "TextureLayered",
            "set_layer_data"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "TextureLayered");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

TextureLayered::MethodBindings TextureLayered::method_bindings = {};
void* TextureLayered::class_tag = nullptr;
} // namespace Rebel
