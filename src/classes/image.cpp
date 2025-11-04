// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/image.h"

#include "classes/icalls.h"
#include "classes/image.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Dictionary Image::_get_data() const {
    return rebel_icall_dictionary(
        method_bindings.mb__get_data,
        (const Object*)this
    );
}

void Image::_set_data(const Dictionary data) {
    rebel_icall_void_dictionary(
        method_bindings.mb__set_data,
        (const Object*)this,
        data
    );
}

void Image::blend_rect(const Ref<Image> src, const Rect2 src_rect, const Vector2 dst) {
    rebel_icall_void_object_rect2_vector2(
        method_bindings.mb_blend_rect,
        (const Object*)this,
        src.ptr(),
        src_rect,
        dst
    );
}

void Image::blend_rect_mask(const Ref<Image> src, const Ref<Image> mask, const Rect2 src_rect, const Vector2 dst) {
    rebel_icall_void_object_object_rect2_vector2(
        method_bindings.mb_blend_rect_mask,
        (const Object*)this,
        src.ptr(),
        mask.ptr(),
        src_rect,
        dst
    );
}

void Image::blit_rect(const Ref<Image> src, const Rect2 src_rect, const Vector2 dst) {
    rebel_icall_void_object_rect2_vector2(
        method_bindings.mb_blit_rect,
        (const Object*)this,
        src.ptr(),
        src_rect,
        dst
    );
}

void Image::blit_rect_mask(const Ref<Image> src, const Ref<Image> mask, const Rect2 src_rect, const Vector2 dst) {
    rebel_icall_void_object_object_rect2_vector2(
        method_bindings.mb_blit_rect_mask,
        (const Object*)this,
        src.ptr(),
        mask.ptr(),
        src_rect,
        dst
    );
}

void Image::bumpmap_to_normalmap(const real_t bump_scale) {
    rebel_icall_void_float(
        method_bindings.mb_bumpmap_to_normalmap,
        (const Object*)this,
        bump_scale
    );
}

void Image::clear_mipmaps() {
    rebel_icall_void(
        method_bindings.mb_clear_mipmaps,
        (const Object*)this
    );
}

Error Image::compress(const int64_t mode, const int64_t source, const real_t lossy_quality) {
    return (Error)rebel_icall_int_int_int_float(
        method_bindings.mb_compress,
        (const Object*)this,
        mode,
        source,
        lossy_quality
    );
}

void Image::convert(const int64_t format) {
    rebel_icall_void_int(
        method_bindings.mb_convert,
        (const Object*)this,
        format
    );
}

void Image::copy_from(const Ref<Image> src) {
    rebel_icall_void_object(
        method_bindings.mb_copy_from,
        (const Object*)this,
        src.ptr()
    );
}

void Image::create(const int64_t width, const int64_t height, const bool use_mipmaps, const int64_t format) {
    rebel_icall_void_int_int_bool_int(
        method_bindings.mb_create,
        (const Object*)this,
        width,
        height,
        use_mipmaps,
        format
    );
}

void Image::create_from_data(const int64_t width, const int64_t height, const bool use_mipmaps, const int64_t format, const PoolByteArray data) {
    rebel_icall_void_int_int_bool_int_poolbytearray(
        method_bindings.mb_create_from_data,
        (const Object*)this,
        width,
        height,
        use_mipmaps,
        format,
        data
    );
}

void Image::crop(const int64_t width, const int64_t height) {
    rebel_icall_void_int_int(
        method_bindings.mb_crop,
        (const Object*)this,
        width,
        height
    );
}

Error Image::decompress() {
    return (Error)rebel_icall_int(
        method_bindings.mb_decompress,
        (const Object*)this
    );
}

Image::AlphaMode Image::detect_alpha() const {
    return (Image::AlphaMode)rebel_icall_int(
        method_bindings.mb_detect_alpha,
        (const Object*)this
    );
}

void Image::expand_x2_hq2x() {
    rebel_icall_void(
        method_bindings.mb_expand_x2_hq2x,
        (const Object*)this
    );
}

void Image::fill(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_fill,
        (const Object*)this,
        color
    );
}

void Image::fix_alpha_edges() {
    rebel_icall_void(
        method_bindings.mb_fix_alpha_edges,
        (const Object*)this
    );
}

void Image::flip_x() {
    rebel_icall_void(
        method_bindings.mb_flip_x,
        (const Object*)this
    );
}

void Image::flip_y() {
    rebel_icall_void(
        method_bindings.mb_flip_y,
        (const Object*)this
    );
}

Error Image::generate_mipmaps(const bool renormalize) {
    return (Error)rebel_icall_int_bool(
        method_bindings.mb_generate_mipmaps,
        (const Object*)this,
        renormalize
    );
}

PoolByteArray Image::get_data() const {
    return rebel_icall_poolbytearray(
        method_bindings.mb_get_data,
        (const Object*)this
    );
}

Image::Format Image::get_format() const {
    return (Image::Format)rebel_icall_int(
        method_bindings.mb_get_format,
        (const Object*)this
    );
}

int64_t Image::get_height() const {
    return rebel_icall_int(
        method_bindings.mb_get_height,
        (const Object*)this
    );
}

int64_t Image::get_mipmap_offset(const int64_t mipmap) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_mipmap_offset,
        (const Object*)this,
        mipmap
    );
}

Color Image::get_pixel(const int64_t x, const int64_t y) const {
    return rebel_icall_color_int_int(
        method_bindings.mb_get_pixel,
        (const Object*)this,
        x,
        y
    );
}

Color Image::get_pixelv(const Vector2 src) const {
    return rebel_icall_color_vector2(
        method_bindings.mb_get_pixelv,
        (const Object*)this,
        src
    );
}

Ref<Image> Image::get_rect(const Rect2 rect) const {
    return Ref<Image>::create_ref(rebel_icall_object_rect2(
        method_bindings.mb_get_rect,
        (const Object*)this,
        rect
    ));
}

Vector2 Image::get_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_size,
        (const Object*)this
    );
}

Rect2 Image::get_used_rect() const {
    return rebel_icall_rect2(
        method_bindings.mb_get_used_rect,
        (const Object*)this
    );
}

int64_t Image::get_width() const {
    return rebel_icall_int(
        method_bindings.mb_get_width,
        (const Object*)this
    );
}

bool Image::has_mipmaps() const {
    return rebel_icall_bool(
        method_bindings.mb_has_mipmaps,
        (const Object*)this
    );
}

bool Image::is_compressed() const {
    return rebel_icall_bool(
        method_bindings.mb_is_compressed,
        (const Object*)this
    );
}

bool Image::is_empty() const {
    return rebel_icall_bool(
        method_bindings.mb_is_empty,
        (const Object*)this
    );
}

bool Image::is_invisible() const {
    return rebel_icall_bool(
        method_bindings.mb_is_invisible,
        (const Object*)this
    );
}

Error Image::load(const String path) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_load,
        (const Object*)this,
        path
    );
}

Error Image::load_bmp_from_buffer(const PoolByteArray buffer) {
    return (Error)rebel_icall_int_poolbytearray(
        method_bindings.mb_load_bmp_from_buffer,
        (const Object*)this,
        buffer
    );
}

Error Image::load_jpg_from_buffer(const PoolByteArray buffer) {
    return (Error)rebel_icall_int_poolbytearray(
        method_bindings.mb_load_jpg_from_buffer,
        (const Object*)this,
        buffer
    );
}

Error Image::load_png_from_buffer(const PoolByteArray buffer) {
    return (Error)rebel_icall_int_poolbytearray(
        method_bindings.mb_load_png_from_buffer,
        (const Object*)this,
        buffer
    );
}

Error Image::load_tga_from_buffer(const PoolByteArray buffer) {
    return (Error)rebel_icall_int_poolbytearray(
        method_bindings.mb_load_tga_from_buffer,
        (const Object*)this,
        buffer
    );
}

Error Image::load_webp_from_buffer(const PoolByteArray buffer) {
    return (Error)rebel_icall_int_poolbytearray(
        method_bindings.mb_load_webp_from_buffer,
        (const Object*)this,
        buffer
    );
}

void Image::lock() {
    rebel_icall_void(
        method_bindings.mb_lock,
        (const Object*)this
    );
}

void Image::normalmap_to_xy() {
    rebel_icall_void(
        method_bindings.mb_normalmap_to_xy,
        (const Object*)this
    );
}

void Image::premultiply_alpha() {
    rebel_icall_void(
        method_bindings.mb_premultiply_alpha,
        (const Object*)this
    );
}

void Image::resize(const int64_t width, const int64_t height, const int64_t interpolation) {
    rebel_icall_void_int_int_int(
        method_bindings.mb_resize,
        (const Object*)this,
        width,
        height,
        interpolation
    );
}

void Image::resize_to_po2(const bool square, const int64_t interpolation) {
    rebel_icall_void_bool_int(
        method_bindings.mb_resize_to_po2,
        (const Object*)this,
        square,
        interpolation
    );
}

Ref<Image> Image::rgbe_to_srgb() {
    return Ref<Image>::create_ref(rebel_icall_object(
        method_bindings.mb_rgbe_to_srgb,
        (const Object*)this
    ));
}

Error Image::save_exr(const String path, const bool grayscale) const {
    return (Error)rebel_icall_int_string_bool(
        method_bindings.mb_save_exr,
        (const Object*)this,
        path,
        grayscale
    );
}

Error Image::save_png(const String path) const {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_save_png,
        (const Object*)this,
        path
    );
}

PoolByteArray Image::save_png_to_buffer() const {
    return rebel_icall_poolbytearray(
        method_bindings.mb_save_png_to_buffer,
        (const Object*)this
    );
}

void Image::set_pixel(const int64_t x, const int64_t y, const Color color) {
    rebel_icall_void_int_int_color(
        method_bindings.mb_set_pixel,
        (const Object*)this,
        x,
        y,
        color
    );
}

void Image::set_pixelv(const Vector2 dst, const Color color) {
    rebel_icall_void_vector2_color(
        method_bindings.mb_set_pixelv,
        (const Object*)this,
        dst,
        color
    );
}

void Image::shrink_x2() {
    rebel_icall_void(
        method_bindings.mb_shrink_x2,
        (const Object*)this
    );
}

void Image::srgb_to_linear() {
    rebel_icall_void(
        method_bindings.mb_srgb_to_linear,
        (const Object*)this
    );
}

void Image::unlock() {
    rebel_icall_void(
        method_bindings.mb_unlock,
        (const Object*)this
    );
}

Image* Image::create() {
    return (Image*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Image")()
         );
}

void Image::init_method_bindings() {
    method_bindings.mb__get_data =
        api->rebel_method_bind_get_method(
            "Image",
            "_get_data"
        );
    method_bindings.mb__set_data =
        api->rebel_method_bind_get_method(
            "Image",
            "_set_data"
        );
    method_bindings.mb_blend_rect =
        api->rebel_method_bind_get_method(
            "Image",
            "blend_rect"
        );
    method_bindings.mb_blend_rect_mask =
        api->rebel_method_bind_get_method(
            "Image",
            "blend_rect_mask"
        );
    method_bindings.mb_blit_rect =
        api->rebel_method_bind_get_method(
            "Image",
            "blit_rect"
        );
    method_bindings.mb_blit_rect_mask =
        api->rebel_method_bind_get_method(
            "Image",
            "blit_rect_mask"
        );
    method_bindings.mb_bumpmap_to_normalmap =
        api->rebel_method_bind_get_method(
            "Image",
            "bumpmap_to_normalmap"
        );
    method_bindings.mb_clear_mipmaps =
        api->rebel_method_bind_get_method(
            "Image",
            "clear_mipmaps"
        );
    method_bindings.mb_compress =
        api->rebel_method_bind_get_method(
            "Image",
            "compress"
        );
    method_bindings.mb_convert =
        api->rebel_method_bind_get_method(
            "Image",
            "convert"
        );
    method_bindings.mb_copy_from =
        api->rebel_method_bind_get_method(
            "Image",
            "copy_from"
        );
    method_bindings.mb_create =
        api->rebel_method_bind_get_method(
            "Image",
            "create"
        );
    method_bindings.mb_create_from_data =
        api->rebel_method_bind_get_method(
            "Image",
            "create_from_data"
        );
    method_bindings.mb_crop =
        api->rebel_method_bind_get_method(
            "Image",
            "crop"
        );
    method_bindings.mb_decompress =
        api->rebel_method_bind_get_method(
            "Image",
            "decompress"
        );
    method_bindings.mb_detect_alpha =
        api->rebel_method_bind_get_method(
            "Image",
            "detect_alpha"
        );
    method_bindings.mb_expand_x2_hq2x =
        api->rebel_method_bind_get_method(
            "Image",
            "expand_x2_hq2x"
        );
    method_bindings.mb_fill =
        api->rebel_method_bind_get_method(
            "Image",
            "fill"
        );
    method_bindings.mb_fix_alpha_edges =
        api->rebel_method_bind_get_method(
            "Image",
            "fix_alpha_edges"
        );
    method_bindings.mb_flip_x =
        api->rebel_method_bind_get_method(
            "Image",
            "flip_x"
        );
    method_bindings.mb_flip_y =
        api->rebel_method_bind_get_method(
            "Image",
            "flip_y"
        );
    method_bindings.mb_generate_mipmaps =
        api->rebel_method_bind_get_method(
            "Image",
            "generate_mipmaps"
        );
    method_bindings.mb_get_data =
        api->rebel_method_bind_get_method(
            "Image",
            "get_data"
        );
    method_bindings.mb_get_format =
        api->rebel_method_bind_get_method(
            "Image",
            "get_format"
        );
    method_bindings.mb_get_height =
        api->rebel_method_bind_get_method(
            "Image",
            "get_height"
        );
    method_bindings.mb_get_mipmap_offset =
        api->rebel_method_bind_get_method(
            "Image",
            "get_mipmap_offset"
        );
    method_bindings.mb_get_pixel =
        api->rebel_method_bind_get_method(
            "Image",
            "get_pixel"
        );
    method_bindings.mb_get_pixelv =
        api->rebel_method_bind_get_method(
            "Image",
            "get_pixelv"
        );
    method_bindings.mb_get_rect =
        api->rebel_method_bind_get_method(
            "Image",
            "get_rect"
        );
    method_bindings.mb_get_size =
        api->rebel_method_bind_get_method(
            "Image",
            "get_size"
        );
    method_bindings.mb_get_used_rect =
        api->rebel_method_bind_get_method(
            "Image",
            "get_used_rect"
        );
    method_bindings.mb_get_width =
        api->rebel_method_bind_get_method(
            "Image",
            "get_width"
        );
    method_bindings.mb_has_mipmaps =
        api->rebel_method_bind_get_method(
            "Image",
            "has_mipmaps"
        );
    method_bindings.mb_is_compressed =
        api->rebel_method_bind_get_method(
            "Image",
            "is_compressed"
        );
    method_bindings.mb_is_empty =
        api->rebel_method_bind_get_method(
            "Image",
            "is_empty"
        );
    method_bindings.mb_is_invisible =
        api->rebel_method_bind_get_method(
            "Image",
            "is_invisible"
        );
    method_bindings.mb_load =
        api->rebel_method_bind_get_method(
            "Image",
            "load"
        );
    method_bindings.mb_load_bmp_from_buffer =
        api->rebel_method_bind_get_method(
            "Image",
            "load_bmp_from_buffer"
        );
    method_bindings.mb_load_jpg_from_buffer =
        api->rebel_method_bind_get_method(
            "Image",
            "load_jpg_from_buffer"
        );
    method_bindings.mb_load_png_from_buffer =
        api->rebel_method_bind_get_method(
            "Image",
            "load_png_from_buffer"
        );
    method_bindings.mb_load_tga_from_buffer =
        api->rebel_method_bind_get_method(
            "Image",
            "load_tga_from_buffer"
        );
    method_bindings.mb_load_webp_from_buffer =
        api->rebel_method_bind_get_method(
            "Image",
            "load_webp_from_buffer"
        );
    method_bindings.mb_lock =
        api->rebel_method_bind_get_method(
            "Image",
            "lock"
        );
    method_bindings.mb_normalmap_to_xy =
        api->rebel_method_bind_get_method(
            "Image",
            "normalmap_to_xy"
        );
    method_bindings.mb_premultiply_alpha =
        api->rebel_method_bind_get_method(
            "Image",
            "premultiply_alpha"
        );
    method_bindings.mb_resize =
        api->rebel_method_bind_get_method(
            "Image",
            "resize"
        );
    method_bindings.mb_resize_to_po2 =
        api->rebel_method_bind_get_method(
            "Image",
            "resize_to_po2"
        );
    method_bindings.mb_rgbe_to_srgb =
        api->rebel_method_bind_get_method(
            "Image",
            "rgbe_to_srgb"
        );
    method_bindings.mb_save_exr =
        api->rebel_method_bind_get_method(
            "Image",
            "save_exr"
        );
    method_bindings.mb_save_png =
        api->rebel_method_bind_get_method(
            "Image",
            "save_png"
        );
    method_bindings.mb_save_png_to_buffer =
        api->rebel_method_bind_get_method(
            "Image",
            "save_png_to_buffer"
        );
    method_bindings.mb_set_pixel =
        api->rebel_method_bind_get_method(
            "Image",
            "set_pixel"
        );
    method_bindings.mb_set_pixelv =
        api->rebel_method_bind_get_method(
            "Image",
            "set_pixelv"
        );
    method_bindings.mb_shrink_x2 =
        api->rebel_method_bind_get_method(
            "Image",
            "shrink_x2"
        );
    method_bindings.mb_srgb_to_linear =
        api->rebel_method_bind_get_method(
            "Image",
            "srgb_to_linear"
        );
    method_bindings.mb_unlock =
        api->rebel_method_bind_get_method(
            "Image",
            "unlock"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Image");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Image::MethodBindings Image::method_bindings = {};
void* Image::class_tag = nullptr;
} // namespace Rebel
