// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/canvasitem.h"

#include "classes/font.h"
#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/material.h"
#include "classes/mesh.h"
#include "classes/multimesh.h"
#include "classes/stylebox.h"
#include "classes/texture.h"
#include "classes/world2d.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void CanvasItem::_draw() {
    rebel_icall_void(
        method_bindings.mb__draw,
        (const Object*)this
    );
}

Vector2 CanvasItem::_edit_get_pivot() const {
    return rebel_icall_vector2(
        method_bindings.mb__edit_get_pivot,
        (const Object*)this
    );
}

Vector2 CanvasItem::_edit_get_position() const {
    return rebel_icall_vector2(
        method_bindings.mb__edit_get_position,
        (const Object*)this
    );
}

Rect2 CanvasItem::_edit_get_rect() const {
    return rebel_icall_rect2(
        method_bindings.mb__edit_get_rect,
        (const Object*)this
    );
}

real_t CanvasItem::_edit_get_rotation() const {
    return rebel_icall_float(
        method_bindings.mb__edit_get_rotation,
        (const Object*)this
    );
}

Vector2 CanvasItem::_edit_get_scale() const {
    return rebel_icall_vector2(
        method_bindings.mb__edit_get_scale,
        (const Object*)this
    );
}

Dictionary CanvasItem::_edit_get_state() const {
    return rebel_icall_dictionary(
        method_bindings.mb__edit_get_state,
        (const Object*)this
    );
}

Transform2D CanvasItem::_edit_get_transform() const {
    return rebel_icall_transform2d(
        method_bindings.mb__edit_get_transform,
        (const Object*)this
    );
}

void CanvasItem::_edit_set_pivot(const Vector2 pivot) {
    rebel_icall_void_vector2(
        method_bindings.mb__edit_set_pivot,
        (const Object*)this,
        pivot
    );
}

void CanvasItem::_edit_set_position(const Vector2 position) {
    rebel_icall_void_vector2(
        method_bindings.mb__edit_set_position,
        (const Object*)this,
        position
    );
}

void CanvasItem::_edit_set_rect(const Rect2 rect) {
    rebel_icall_void_rect2(
        method_bindings.mb__edit_set_rect,
        (const Object*)this,
        rect
    );
}

void CanvasItem::_edit_set_rotation(const real_t degrees) {
    rebel_icall_void_float(
        method_bindings.mb__edit_set_rotation,
        (const Object*)this,
        degrees
    );
}

void CanvasItem::_edit_set_scale(const Vector2 scale) {
    rebel_icall_void_vector2(
        method_bindings.mb__edit_set_scale,
        (const Object*)this,
        scale
    );
}

void CanvasItem::_edit_set_state(const Dictionary state) {
    rebel_icall_void_dictionary(
        method_bindings.mb__edit_set_state,
        (const Object*)this,
        state
    );
}

bool CanvasItem::_edit_use_pivot() const {
    return rebel_icall_bool(
        method_bindings.mb__edit_use_pivot,
        (const Object*)this
    );
}

bool CanvasItem::_edit_use_rect() const {
    return rebel_icall_bool(
        method_bindings.mb__edit_use_rect,
        (const Object*)this
    );
}

bool CanvasItem::_edit_use_rotation() const {
    return rebel_icall_bool(
        method_bindings.mb__edit_use_rotation,
        (const Object*)this
    );
}

bool CanvasItem::_is_on_top() const {
    return rebel_icall_bool(
        method_bindings.mb__is_on_top,
        (const Object*)this
    );
}

void CanvasItem::_set_on_top(const bool on_top) {
    rebel_icall_void_bool(
        method_bindings.mb__set_on_top,
        (const Object*)this,
        on_top
    );
}

void CanvasItem::_toplevel_raise_self() {
    rebel_icall_void(
        method_bindings.mb__toplevel_raise_self,
        (const Object*)this
    );
}

void CanvasItem::_update_callback() {
    rebel_icall_void(
        method_bindings.mb__update_callback,
        (const Object*)this
    );
}

void CanvasItem::draw_arc(const Vector2 center, const real_t radius, const real_t start_angle, const real_t end_angle, const int64_t point_count, const Color color, const real_t width, const bool antialiased) {
    rebel_icall_void_vector2_float_float_float_int_color_float_bool(
        method_bindings.mb_draw_arc,
        (const Object*)this,
        center,
        radius,
        start_angle,
        end_angle,
        point_count,
        color,
        width,
        antialiased
    );
}

real_t CanvasItem::draw_char(const Ref<Font> font, const Vector2 position, const String _char, const String next, const Color modulate) {
    return rebel_icall_float_object_vector2_string_string_color(
        method_bindings.mb_draw_char,
        (const Object*)this,
        font.ptr(),
        position,
        _char,
        next,
        modulate
    );
}

void CanvasItem::draw_circle(const Vector2 position, const real_t radius, const Color color) {
    rebel_icall_void_vector2_float_color(
        method_bindings.mb_draw_circle,
        (const Object*)this,
        position,
        radius,
        color
    );
}

void CanvasItem::draw_colored_polygon(const PoolVector2Array points, const Color color, const PoolVector2Array uvs, const Ref<Texture> texture, const Ref<Texture> normal_map, const bool antialiased) {
    rebel_icall_void_poolvector2array_color_poolvector2array_object_object_bool(
        method_bindings.mb_draw_colored_polygon,
        (const Object*)this,
        points,
        color,
        uvs,
        texture.ptr(),
        normal_map.ptr(),
        antialiased
    );
}

void CanvasItem::draw_line(const Vector2 from, const Vector2 to, const Color color, const real_t width, const bool antialiased) {
    rebel_icall_void_vector2_vector2_color_float_bool(
        method_bindings.mb_draw_line,
        (const Object*)this,
        from,
        to,
        color,
        width,
        antialiased
    );
}

void CanvasItem::draw_mesh(const Ref<Mesh> mesh, const Ref<Texture> texture, const Ref<Texture> normal_map, const Transform2D transform, const Color modulate) {
    rebel_icall_void_object_object_object_transform2d_color(
        method_bindings.mb_draw_mesh,
        (const Object*)this,
        mesh.ptr(),
        texture.ptr(),
        normal_map.ptr(),
        transform,
        modulate
    );
}

void CanvasItem::draw_multiline(const PoolVector2Array points, const Color color, const real_t width, const bool antialiased) {
    rebel_icall_void_poolvector2array_color_float_bool(
        method_bindings.mb_draw_multiline,
        (const Object*)this,
        points,
        color,
        width,
        antialiased
    );
}

void CanvasItem::draw_multiline_colors(const PoolVector2Array points, const PoolColorArray colors, const real_t width, const bool antialiased) {
    rebel_icall_void_poolvector2array_poolcolorarray_float_bool(
        method_bindings.mb_draw_multiline_colors,
        (const Object*)this,
        points,
        colors,
        width,
        antialiased
    );
}

void CanvasItem::draw_multimesh(const Ref<MultiMesh> multimesh, const Ref<Texture> texture, const Ref<Texture> normal_map) {
    rebel_icall_void_object_object_object(
        method_bindings.mb_draw_multimesh,
        (const Object*)this,
        multimesh.ptr(),
        texture.ptr(),
        normal_map.ptr()
    );
}

void CanvasItem::draw_polygon(const PoolVector2Array points, const PoolColorArray colors, const PoolVector2Array uvs, const Ref<Texture> texture, const Ref<Texture> normal_map, const bool antialiased) {
    rebel_icall_void_poolvector2array_poolcolorarray_poolvector2array_object_object_bool(
        method_bindings.mb_draw_polygon,
        (const Object*)this,
        points,
        colors,
        uvs,
        texture.ptr(),
        normal_map.ptr(),
        antialiased
    );
}

void CanvasItem::draw_polyline(const PoolVector2Array points, const Color color, const real_t width, const bool antialiased) {
    rebel_icall_void_poolvector2array_color_float_bool(
        method_bindings.mb_draw_polyline,
        (const Object*)this,
        points,
        color,
        width,
        antialiased
    );
}

void CanvasItem::draw_polyline_colors(const PoolVector2Array points, const PoolColorArray colors, const real_t width, const bool antialiased) {
    rebel_icall_void_poolvector2array_poolcolorarray_float_bool(
        method_bindings.mb_draw_polyline_colors,
        (const Object*)this,
        points,
        colors,
        width,
        antialiased
    );
}

void CanvasItem::draw_primitive(const PoolVector2Array points, const PoolColorArray colors, const PoolVector2Array uvs, const Ref<Texture> texture, const real_t width, const Ref<Texture> normal_map) {
    rebel_icall_void_poolvector2array_poolcolorarray_poolvector2array_object_float_object(
        method_bindings.mb_draw_primitive,
        (const Object*)this,
        points,
        colors,
        uvs,
        texture.ptr(),
        width,
        normal_map.ptr()
    );
}

void CanvasItem::draw_rect(const Rect2 rect, const Color color, const bool filled, const real_t width, const bool antialiased) {
    rebel_icall_void_rect2_color_bool_float_bool(
        method_bindings.mb_draw_rect,
        (const Object*)this,
        rect,
        color,
        filled,
        width,
        antialiased
    );
}

void CanvasItem::draw_set_transform(const Vector2 position, const real_t rotation, const Vector2 scale) {
    rebel_icall_void_vector2_float_vector2(
        method_bindings.mb_draw_set_transform,
        (const Object*)this,
        position,
        rotation,
        scale
    );
}

void CanvasItem::draw_set_transform_matrix(const Transform2D xform) {
    rebel_icall_void_transform2d(
        method_bindings.mb_draw_set_transform_matrix,
        (const Object*)this,
        xform
    );
}

void CanvasItem::draw_string(const Ref<Font> font, const Vector2 position, const String text, const Color modulate, const int64_t clip_w) {
    rebel_icall_void_object_vector2_string_color_int(
        method_bindings.mb_draw_string,
        (const Object*)this,
        font.ptr(),
        position,
        text,
        modulate,
        clip_w
    );
}

void CanvasItem::draw_style_box(const Ref<StyleBox> style_box, const Rect2 rect) {
    rebel_icall_void_object_rect2(
        method_bindings.mb_draw_style_box,
        (const Object*)this,
        style_box.ptr(),
        rect
    );
}

void CanvasItem::draw_texture(const Ref<Texture> texture, const Vector2 position, const Color modulate, const Ref<Texture> normal_map) {
    rebel_icall_void_object_vector2_color_object(
        method_bindings.mb_draw_texture,
        (const Object*)this,
        texture.ptr(),
        position,
        modulate,
        normal_map.ptr()
    );
}

void CanvasItem::draw_texture_rect(const Ref<Texture> texture, const Rect2 rect, const bool tile, const Color modulate, const bool transpose, const Ref<Texture> normal_map) {
    rebel_icall_void_object_rect2_bool_color_bool_object(
        method_bindings.mb_draw_texture_rect,
        (const Object*)this,
        texture.ptr(),
        rect,
        tile,
        modulate,
        transpose,
        normal_map.ptr()
    );
}

void CanvasItem::draw_texture_rect_region(const Ref<Texture> texture, const Rect2 rect, const Rect2 src_rect, const Color modulate, const bool transpose, const Ref<Texture> normal_map, const bool clip_uv) {
    rebel_icall_void_object_rect2_rect2_color_bool_object_bool(
        method_bindings.mb_draw_texture_rect_region,
        (const Object*)this,
        texture.ptr(),
        rect,
        src_rect,
        modulate,
        transpose,
        normal_map.ptr(),
        clip_uv
    );
}

void CanvasItem::force_update_transform() {
    rebel_icall_void(
        method_bindings.mb_force_update_transform,
        (const Object*)this
    );
}

RID CanvasItem::get_canvas() const {
    return rebel_icall_rid(
        method_bindings.mb_get_canvas,
        (const Object*)this
    );
}

RID CanvasItem::get_canvas_item() const {
    return rebel_icall_rid(
        method_bindings.mb_get_canvas_item,
        (const Object*)this
    );
}

Transform2D CanvasItem::get_canvas_transform() const {
    return rebel_icall_transform2d(
        method_bindings.mb_get_canvas_transform,
        (const Object*)this
    );
}

Vector2 CanvasItem::get_global_mouse_position() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_global_mouse_position,
        (const Object*)this
    );
}

Transform2D CanvasItem::get_global_transform() const {
    return rebel_icall_transform2d(
        method_bindings.mb_get_global_transform,
        (const Object*)this
    );
}

Transform2D CanvasItem::get_global_transform_with_canvas() const {
    return rebel_icall_transform2d(
        method_bindings.mb_get_global_transform_with_canvas,
        (const Object*)this
    );
}

int64_t CanvasItem::get_light_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_light_mask,
        (const Object*)this
    );
}

Vector2 CanvasItem::get_local_mouse_position() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_local_mouse_position,
        (const Object*)this
    );
}

Ref<Material> CanvasItem::get_material() const {
    return Ref<Material>::create_ref(rebel_icall_object(
        method_bindings.mb_get_material,
        (const Object*)this
    ));
}

Color CanvasItem::get_modulate() const {
    return rebel_icall_color(
        method_bindings.mb_get_modulate,
        (const Object*)this
    );
}

Color CanvasItem::get_self_modulate() const {
    return rebel_icall_color(
        method_bindings.mb_get_self_modulate,
        (const Object*)this
    );
}

Transform2D CanvasItem::get_transform() const {
    return rebel_icall_transform2d(
        method_bindings.mb_get_transform,
        (const Object*)this
    );
}

bool CanvasItem::get_use_parent_material() const {
    return rebel_icall_bool(
        method_bindings.mb_get_use_parent_material,
        (const Object*)this
    );
}

Rect2 CanvasItem::get_viewport_rect() const {
    return rebel_icall_rect2(
        method_bindings.mb_get_viewport_rect,
        (const Object*)this
    );
}

Transform2D CanvasItem::get_viewport_transform() const {
    return rebel_icall_transform2d(
        method_bindings.mb_get_viewport_transform,
        (const Object*)this
    );
}

Ref<World2D> CanvasItem::get_world_2d() const {
    return Ref<World2D>::create_ref(rebel_icall_object(
        method_bindings.mb_get_world_2d,
        (const Object*)this
    ));
}

void CanvasItem::hide() {
    rebel_icall_void(
        method_bindings.mb_hide,
        (const Object*)this
    );
}

bool CanvasItem::is_draw_behind_parent_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_draw_behind_parent_enabled,
        (const Object*)this
    );
}

bool CanvasItem::is_local_transform_notification_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_local_transform_notification_enabled,
        (const Object*)this
    );
}

bool CanvasItem::is_set_as_toplevel() const {
    return rebel_icall_bool(
        method_bindings.mb_is_set_as_toplevel,
        (const Object*)this
    );
}

bool CanvasItem::is_transform_notification_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_transform_notification_enabled,
        (const Object*)this
    );
}

bool CanvasItem::is_visible() const {
    return rebel_icall_bool(
        method_bindings.mb_is_visible,
        (const Object*)this
    );
}

bool CanvasItem::is_visible_in_tree() const {
    return rebel_icall_bool(
        method_bindings.mb_is_visible_in_tree,
        (const Object*)this
    );
}

Vector2 CanvasItem::make_canvas_position_local(const Vector2 screen_point) const {
    return rebel_icall_vector2_vector2(
        method_bindings.mb_make_canvas_position_local,
        (const Object*)this,
        screen_point
    );
}

Ref<InputEvent> CanvasItem::make_input_local(const Ref<InputEvent> event) const {
    return Ref<InputEvent>::create_ref(rebel_icall_object_object(
        method_bindings.mb_make_input_local,
        (const Object*)this,
        event.ptr()
    ));
}

void CanvasItem::set_as_toplevel(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_as_toplevel,
        (const Object*)this,
        enable
    );
}

void CanvasItem::set_draw_behind_parent(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_draw_behind_parent,
        (const Object*)this,
        enable
    );
}

void CanvasItem::set_light_mask(const int64_t light_mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_light_mask,
        (const Object*)this,
        light_mask
    );
}

void CanvasItem::set_material(const Ref<Material> material) {
    rebel_icall_void_object(
        method_bindings.mb_set_material,
        (const Object*)this,
        material.ptr()
    );
}

void CanvasItem::set_modulate(const Color modulate) {
    rebel_icall_void_color(
        method_bindings.mb_set_modulate,
        (const Object*)this,
        modulate
    );
}

void CanvasItem::set_notify_local_transform(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_notify_local_transform,
        (const Object*)this,
        enable
    );
}

void CanvasItem::set_notify_transform(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_notify_transform,
        (const Object*)this,
        enable
    );
}

void CanvasItem::set_self_modulate(const Color self_modulate) {
    rebel_icall_void_color(
        method_bindings.mb_set_self_modulate,
        (const Object*)this,
        self_modulate
    );
}

void CanvasItem::set_use_parent_material(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_parent_material,
        (const Object*)this,
        enable
    );
}

void CanvasItem::set_visible(const bool visible) {
    rebel_icall_void_bool(
        method_bindings.mb_set_visible,
        (const Object*)this,
        visible
    );
}

void CanvasItem::show() {
    rebel_icall_void(
        method_bindings.mb_show,
        (const Object*)this
    );
}

void CanvasItem::update() {
    rebel_icall_void(
        method_bindings.mb_update,
        (const Object*)this
    );
}

void CanvasItem::init_method_bindings() {
    method_bindings.mb__draw =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_draw"
        );
    method_bindings.mb__edit_get_pivot =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_edit_get_pivot"
        );
    method_bindings.mb__edit_get_position =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_edit_get_position"
        );
    method_bindings.mb__edit_get_rect =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_edit_get_rect"
        );
    method_bindings.mb__edit_get_rotation =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_edit_get_rotation"
        );
    method_bindings.mb__edit_get_scale =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_edit_get_scale"
        );
    method_bindings.mb__edit_get_state =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_edit_get_state"
        );
    method_bindings.mb__edit_get_transform =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_edit_get_transform"
        );
    method_bindings.mb__edit_set_pivot =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_edit_set_pivot"
        );
    method_bindings.mb__edit_set_position =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_edit_set_position"
        );
    method_bindings.mb__edit_set_rect =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_edit_set_rect"
        );
    method_bindings.mb__edit_set_rotation =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_edit_set_rotation"
        );
    method_bindings.mb__edit_set_scale =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_edit_set_scale"
        );
    method_bindings.mb__edit_set_state =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_edit_set_state"
        );
    method_bindings.mb__edit_use_pivot =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_edit_use_pivot"
        );
    method_bindings.mb__edit_use_rect =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_edit_use_rect"
        );
    method_bindings.mb__edit_use_rotation =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_edit_use_rotation"
        );
    method_bindings.mb__is_on_top =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_is_on_top"
        );
    method_bindings.mb__set_on_top =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_set_on_top"
        );
    method_bindings.mb__toplevel_raise_self =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_toplevel_raise_self"
        );
    method_bindings.mb__update_callback =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "_update_callback"
        );
    method_bindings.mb_draw_arc =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_arc"
        );
    method_bindings.mb_draw_char =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_char"
        );
    method_bindings.mb_draw_circle =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_circle"
        );
    method_bindings.mb_draw_colored_polygon =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_colored_polygon"
        );
    method_bindings.mb_draw_line =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_line"
        );
    method_bindings.mb_draw_mesh =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_mesh"
        );
    method_bindings.mb_draw_multiline =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_multiline"
        );
    method_bindings.mb_draw_multiline_colors =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_multiline_colors"
        );
    method_bindings.mb_draw_multimesh =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_multimesh"
        );
    method_bindings.mb_draw_polygon =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_polygon"
        );
    method_bindings.mb_draw_polyline =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_polyline"
        );
    method_bindings.mb_draw_polyline_colors =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_polyline_colors"
        );
    method_bindings.mb_draw_primitive =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_primitive"
        );
    method_bindings.mb_draw_rect =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_rect"
        );
    method_bindings.mb_draw_set_transform =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_set_transform"
        );
    method_bindings.mb_draw_set_transform_matrix =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_set_transform_matrix"
        );
    method_bindings.mb_draw_string =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_string"
        );
    method_bindings.mb_draw_style_box =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_style_box"
        );
    method_bindings.mb_draw_texture =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_texture"
        );
    method_bindings.mb_draw_texture_rect =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_texture_rect"
        );
    method_bindings.mb_draw_texture_rect_region =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "draw_texture_rect_region"
        );
    method_bindings.mb_force_update_transform =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "force_update_transform"
        );
    method_bindings.mb_get_canvas =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "get_canvas"
        );
    method_bindings.mb_get_canvas_item =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "get_canvas_item"
        );
    method_bindings.mb_get_canvas_transform =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "get_canvas_transform"
        );
    method_bindings.mb_get_global_mouse_position =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "get_global_mouse_position"
        );
    method_bindings.mb_get_global_transform =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "get_global_transform"
        );
    method_bindings.mb_get_global_transform_with_canvas =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "get_global_transform_with_canvas"
        );
    method_bindings.mb_get_light_mask =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "get_light_mask"
        );
    method_bindings.mb_get_local_mouse_position =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "get_local_mouse_position"
        );
    method_bindings.mb_get_material =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "get_material"
        );
    method_bindings.mb_get_modulate =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "get_modulate"
        );
    method_bindings.mb_get_self_modulate =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "get_self_modulate"
        );
    method_bindings.mb_get_transform =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "get_transform"
        );
    method_bindings.mb_get_use_parent_material =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "get_use_parent_material"
        );
    method_bindings.mb_get_viewport_rect =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "get_viewport_rect"
        );
    method_bindings.mb_get_viewport_transform =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "get_viewport_transform"
        );
    method_bindings.mb_get_world_2d =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "get_world_2d"
        );
    method_bindings.mb_hide =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "hide"
        );
    method_bindings.mb_is_draw_behind_parent_enabled =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "is_draw_behind_parent_enabled"
        );
    method_bindings.mb_is_local_transform_notification_enabled =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "is_local_transform_notification_enabled"
        );
    method_bindings.mb_is_set_as_toplevel =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "is_set_as_toplevel"
        );
    method_bindings.mb_is_transform_notification_enabled =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "is_transform_notification_enabled"
        );
    method_bindings.mb_is_visible =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "is_visible"
        );
    method_bindings.mb_is_visible_in_tree =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "is_visible_in_tree"
        );
    method_bindings.mb_make_canvas_position_local =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "make_canvas_position_local"
        );
    method_bindings.mb_make_input_local =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "make_input_local"
        );
    method_bindings.mb_set_as_toplevel =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "set_as_toplevel"
        );
    method_bindings.mb_set_draw_behind_parent =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "set_draw_behind_parent"
        );
    method_bindings.mb_set_light_mask =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "set_light_mask"
        );
    method_bindings.mb_set_material =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "set_material"
        );
    method_bindings.mb_set_modulate =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "set_modulate"
        );
    method_bindings.mb_set_notify_local_transform =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "set_notify_local_transform"
        );
    method_bindings.mb_set_notify_transform =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "set_notify_transform"
        );
    method_bindings.mb_set_self_modulate =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "set_self_modulate"
        );
    method_bindings.mb_set_use_parent_material =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "set_use_parent_material"
        );
    method_bindings.mb_set_visible =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "set_visible"
        );
    method_bindings.mb_show =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "show"
        );
    method_bindings.mb_update =
        api->rebel_method_bind_get_method(
            "CanvasItem",
            "update"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CanvasItem");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CanvasItem::MethodBindings CanvasItem::method_bindings = {};
void* CanvasItem::class_tag = nullptr;
} // namespace Rebel
