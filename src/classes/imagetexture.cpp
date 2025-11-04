// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/imagetexture.h"

#include "classes/icalls.h"
#include "classes/image.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ImageTexture::_reload_hook(const RID rid) {
    rebel_icall_void_rid(
        method_bindings.mb__reload_hook,
        (const Object*)this,
        rid
    );
}

void ImageTexture::create(const int64_t width, const int64_t height, const int64_t format, const int64_t flags) {
    rebel_icall_void_int_int_int_int(
        method_bindings.mb_create,
        (const Object*)this,
        width,
        height,
        format,
        flags
    );
}

void ImageTexture::create_from_image(const Ref<Image> image, const int64_t flags) {
    rebel_icall_void_object_int(
        method_bindings.mb_create_from_image,
        (const Object*)this,
        image.ptr(),
        flags
    );
}

Image::Format ImageTexture::get_format() const {
    return (Image::Format)rebel_icall_int(
        method_bindings.mb_get_format,
        (const Object*)this
    );
}

real_t ImageTexture::get_lossy_storage_quality() const {
    return rebel_icall_float(
        method_bindings.mb_get_lossy_storage_quality,
        (const Object*)this
    );
}

ImageTexture::Storage ImageTexture::get_storage() const {
    return (ImageTexture::Storage)rebel_icall_int(
        method_bindings.mb_get_storage,
        (const Object*)this
    );
}

Error ImageTexture::load(const String path) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_load,
        (const Object*)this,
        path
    );
}

void ImageTexture::set_data(const Ref<Image> image) {
    rebel_icall_void_object(
        method_bindings.mb_set_data,
        (const Object*)this,
        image.ptr()
    );
}

void ImageTexture::set_lossy_storage_quality(const real_t quality) {
    rebel_icall_void_float(
        method_bindings.mb_set_lossy_storage_quality,
        (const Object*)this,
        quality
    );
}

void ImageTexture::set_size_override(const Vector2 size) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_size_override,
        (const Object*)this,
        size
    );
}

void ImageTexture::set_storage(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_storage,
        (const Object*)this,
        mode
    );
}

ImageTexture* ImageTexture::create() {
    return (ImageTexture*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ImageTexture")()
         );
}

void ImageTexture::init_method_bindings() {
    method_bindings.mb__reload_hook =
        api->rebel_method_bind_get_method(
            "ImageTexture",
            "_reload_hook"
        );
    method_bindings.mb_create =
        api->rebel_method_bind_get_method(
            "ImageTexture",
            "create"
        );
    method_bindings.mb_create_from_image =
        api->rebel_method_bind_get_method(
            "ImageTexture",
            "create_from_image"
        );
    method_bindings.mb_get_format =
        api->rebel_method_bind_get_method(
            "ImageTexture",
            "get_format"
        );
    method_bindings.mb_get_lossy_storage_quality =
        api->rebel_method_bind_get_method(
            "ImageTexture",
            "get_lossy_storage_quality"
        );
    method_bindings.mb_get_storage =
        api->rebel_method_bind_get_method(
            "ImageTexture",
            "get_storage"
        );
    method_bindings.mb_load =
        api->rebel_method_bind_get_method(
            "ImageTexture",
            "load"
        );
    method_bindings.mb_set_data =
        api->rebel_method_bind_get_method(
            "ImageTexture",
            "set_data"
        );
    method_bindings.mb_set_lossy_storage_quality =
        api->rebel_method_bind_get_method(
            "ImageTexture",
            "set_lossy_storage_quality"
        );
    method_bindings.mb_set_size_override =
        api->rebel_method_bind_get_method(
            "ImageTexture",
            "set_size_override"
        );
    method_bindings.mb_set_storage =
        api->rebel_method_bind_get_method(
            "ImageTexture",
            "set_storage"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ImageTexture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ImageTexture::MethodBindings ImageTexture::method_bindings = {};
void* ImageTexture::class_tag = nullptr;
} // namespace Rebel
