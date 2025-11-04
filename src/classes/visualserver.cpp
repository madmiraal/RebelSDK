// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualserver.h"

#include "classes/icalls.h"
#include "classes/image.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void VisualServer::black_bars_set_images(const RID left, const RID top, const RID right, const RID bottom) {
    rebel_icall_void_rid_rid_rid_rid(
        method_bindings.mb_black_bars_set_images,
        (const Object*)this,
        left,
        top,
        right,
        bottom
    );
}

void VisualServer::black_bars_set_margins(const int64_t left, const int64_t top, const int64_t right, const int64_t bottom) {
    rebel_icall_void_int_int_int_int(
        method_bindings.mb_black_bars_set_margins,
        (const Object*)this,
        left,
        top,
        right,
        bottom
    );
}

RID VisualServer::camera_create() {
    return rebel_icall_rid(
        method_bindings.mb_camera_create,
        (const Object*)this
    );
}

void VisualServer::camera_set_cull_mask(const RID camera, const int64_t layers) {
    rebel_icall_void_rid_int(
        method_bindings.mb_camera_set_cull_mask,
        (const Object*)this,
        camera,
        layers
    );
}

void VisualServer::camera_set_environment(const RID camera, const RID env) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_camera_set_environment,
        (const Object*)this,
        camera,
        env
    );
}

void VisualServer::camera_set_frustum(const RID camera, const real_t size, const Vector2 offset, const real_t z_near, const real_t z_far) {
    rebel_icall_void_rid_float_vector2_float_float(
        method_bindings.mb_camera_set_frustum,
        (const Object*)this,
        camera,
        size,
        offset,
        z_near,
        z_far
    );
}

void VisualServer::camera_set_orthogonal(const RID camera, const real_t size, const real_t z_near, const real_t z_far) {
    rebel_icall_void_rid_float_float_float(
        method_bindings.mb_camera_set_orthogonal,
        (const Object*)this,
        camera,
        size,
        z_near,
        z_far
    );
}

void VisualServer::camera_set_perspective(const RID camera, const real_t fovy_degrees, const real_t z_near, const real_t z_far) {
    rebel_icall_void_rid_float_float_float(
        method_bindings.mb_camera_set_perspective,
        (const Object*)this,
        camera,
        fovy_degrees,
        z_near,
        z_far
    );
}

void VisualServer::camera_set_transform(const RID camera, const Transform transform) {
    rebel_icall_void_rid_transform(
        method_bindings.mb_camera_set_transform,
        (const Object*)this,
        camera,
        transform
    );
}

void VisualServer::camera_set_use_vertical_aspect(const RID camera, const bool enable) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_camera_set_use_vertical_aspect,
        (const Object*)this,
        camera,
        enable
    );
}

RID VisualServer::canvas_create() {
    return rebel_icall_rid(
        method_bindings.mb_canvas_create,
        (const Object*)this
    );
}

void VisualServer::canvas_item_add_circle(const RID item, const Vector2 pos, const real_t radius, const Color color) {
    rebel_icall_void_rid_vector2_float_color(
        method_bindings.mb_canvas_item_add_circle,
        (const Object*)this,
        item,
        pos,
        radius,
        color
    );
}

void VisualServer::canvas_item_add_clip_ignore(const RID item, const bool ignore) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_canvas_item_add_clip_ignore,
        (const Object*)this,
        item,
        ignore
    );
}

void VisualServer::canvas_item_add_line(const RID item, const Vector2 from, const Vector2 to, const Color color, const real_t width, const bool antialiased) {
    rebel_icall_void_rid_vector2_vector2_color_float_bool(
        method_bindings.mb_canvas_item_add_line,
        (const Object*)this,
        item,
        from,
        to,
        color,
        width,
        antialiased
    );
}

void VisualServer::canvas_item_add_mesh(const RID item, const RID mesh, const Transform2D transform, const Color modulate, const RID texture, const RID normal_map) {
    rebel_icall_void_rid_rid_transform2d_color_rid_rid(
        method_bindings.mb_canvas_item_add_mesh,
        (const Object*)this,
        item,
        mesh,
        transform,
        modulate,
        texture,
        normal_map
    );
}

void VisualServer::canvas_item_add_multimesh(const RID item, const RID mesh, const RID texture, const RID normal_map) {
    rebel_icall_void_rid_rid_rid_rid(
        method_bindings.mb_canvas_item_add_multimesh,
        (const Object*)this,
        item,
        mesh,
        texture,
        normal_map
    );
}

void VisualServer::canvas_item_add_nine_patch(const RID item, const Rect2 rect, const Rect2 source, const RID texture, const Vector2 topleft, const Vector2 bottomright, const int64_t x_axis_mode, const int64_t y_axis_mode, const bool draw_center, const Color modulate, const RID normal_map) {
    rebel_icall_void_rid_rect2_rect2_rid_vector2_vector2_int_int_bool_color_rid(
        method_bindings.mb_canvas_item_add_nine_patch,
        (const Object*)this,
        item,
        rect,
        source,
        texture,
        topleft,
        bottomright,
        x_axis_mode,
        y_axis_mode,
        draw_center,
        modulate,
        normal_map
    );
}

void VisualServer::canvas_item_add_particles(const RID item, const RID particles, const RID texture, const RID normal_map) {
    rebel_icall_void_rid_rid_rid_rid(
        method_bindings.mb_canvas_item_add_particles,
        (const Object*)this,
        item,
        particles,
        texture,
        normal_map
    );
}

void VisualServer::canvas_item_add_polygon(const RID item, const PoolVector2Array points, const PoolColorArray colors, const PoolVector2Array uvs, const RID texture, const RID normal_map, const bool antialiased) {
    rebel_icall_void_rid_poolvector2array_poolcolorarray_poolvector2array_rid_rid_bool(
        method_bindings.mb_canvas_item_add_polygon,
        (const Object*)this,
        item,
        points,
        colors,
        uvs,
        texture,
        normal_map,
        antialiased
    );
}

void VisualServer::canvas_item_add_polyline(const RID item, const PoolVector2Array points, const PoolColorArray colors, const real_t width, const bool antialiased) {
    rebel_icall_void_rid_poolvector2array_poolcolorarray_float_bool(
        method_bindings.mb_canvas_item_add_polyline,
        (const Object*)this,
        item,
        points,
        colors,
        width,
        antialiased
    );
}

void VisualServer::canvas_item_add_primitive(const RID item, const PoolVector2Array points, const PoolColorArray colors, const PoolVector2Array uvs, const RID texture, const real_t width, const RID normal_map) {
    rebel_icall_void_rid_poolvector2array_poolcolorarray_poolvector2array_rid_float_rid(
        method_bindings.mb_canvas_item_add_primitive,
        (const Object*)this,
        item,
        points,
        colors,
        uvs,
        texture,
        width,
        normal_map
    );
}

void VisualServer::canvas_item_add_rect(const RID item, const Rect2 rect, const Color color) {
    rebel_icall_void_rid_rect2_color(
        method_bindings.mb_canvas_item_add_rect,
        (const Object*)this,
        item,
        rect,
        color
    );
}

void VisualServer::canvas_item_add_set_transform(const RID item, const Transform2D transform) {
    rebel_icall_void_rid_transform2d(
        method_bindings.mb_canvas_item_add_set_transform,
        (const Object*)this,
        item,
        transform
    );
}

void VisualServer::canvas_item_add_texture_rect(const RID item, const Rect2 rect, const RID texture, const bool tile, const Color modulate, const bool transpose, const RID normal_map) {
    rebel_icall_void_rid_rect2_rid_bool_color_bool_rid(
        method_bindings.mb_canvas_item_add_texture_rect,
        (const Object*)this,
        item,
        rect,
        texture,
        tile,
        modulate,
        transpose,
        normal_map
    );
}

void VisualServer::canvas_item_add_texture_rect_region(const RID item, const Rect2 rect, const RID texture, const Rect2 src_rect, const Color modulate, const bool transpose, const RID normal_map, const bool clip_uv) {
    rebel_icall_void_rid_rect2_rid_rect2_color_bool_rid_bool(
        method_bindings.mb_canvas_item_add_texture_rect_region,
        (const Object*)this,
        item,
        rect,
        texture,
        src_rect,
        modulate,
        transpose,
        normal_map,
        clip_uv
    );
}

void VisualServer::canvas_item_add_triangle_array(const RID item, const PoolIntArray indices, const PoolVector2Array points, const PoolColorArray colors, const PoolVector2Array uvs, const PoolIntArray bones, const PoolRealArray weights, const RID texture, const int64_t count, const RID normal_map, const bool antialiased, const bool antialiasing_use_indices) {
    rebel_icall_void_rid_poolintarray_poolvector2array_poolcolorarray_poolvector2array_poolintarray_poolrealarray_rid_int_rid_bool_bool(
        method_bindings.mb_canvas_item_add_triangle_array,
        (const Object*)this,
        item,
        indices,
        points,
        colors,
        uvs,
        bones,
        weights,
        texture,
        count,
        normal_map,
        antialiased,
        antialiasing_use_indices
    );
}

void VisualServer::canvas_item_clear(const RID item) {
    rebel_icall_void_rid(
        method_bindings.mb_canvas_item_clear,
        (const Object*)this,
        item
    );
}

RID VisualServer::canvas_item_create() {
    return rebel_icall_rid(
        method_bindings.mb_canvas_item_create,
        (const Object*)this
    );
}

void VisualServer::canvas_item_set_clip(const RID item, const bool clip) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_canvas_item_set_clip,
        (const Object*)this,
        item,
        clip
    );
}

void VisualServer::canvas_item_set_copy_to_backbuffer(const RID item, const bool enabled, const Rect2 rect) {
    rebel_icall_void_rid_bool_rect2(
        method_bindings.mb_canvas_item_set_copy_to_backbuffer,
        (const Object*)this,
        item,
        enabled,
        rect
    );
}

void VisualServer::canvas_item_set_custom_rect(const RID item, const bool use_custom_rect, const Rect2 rect) {
    rebel_icall_void_rid_bool_rect2(
        method_bindings.mb_canvas_item_set_custom_rect,
        (const Object*)this,
        item,
        use_custom_rect,
        rect
    );
}

void VisualServer::canvas_item_set_distance_field_mode(const RID item, const bool enabled) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_canvas_item_set_distance_field_mode,
        (const Object*)this,
        item,
        enabled
    );
}

void VisualServer::canvas_item_set_draw_behind_parent(const RID item, const bool enabled) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_canvas_item_set_draw_behind_parent,
        (const Object*)this,
        item,
        enabled
    );
}

void VisualServer::canvas_item_set_draw_index(const RID item, const int64_t index) {
    rebel_icall_void_rid_int(
        method_bindings.mb_canvas_item_set_draw_index,
        (const Object*)this,
        item,
        index
    );
}

void VisualServer::canvas_item_set_light_mask(const RID item, const int64_t mask) {
    rebel_icall_void_rid_int(
        method_bindings.mb_canvas_item_set_light_mask,
        (const Object*)this,
        item,
        mask
    );
}

void VisualServer::canvas_item_set_material(const RID item, const RID material) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_canvas_item_set_material,
        (const Object*)this,
        item,
        material
    );
}

void VisualServer::canvas_item_set_modulate(const RID item, const Color color) {
    rebel_icall_void_rid_color(
        method_bindings.mb_canvas_item_set_modulate,
        (const Object*)this,
        item,
        color
    );
}

void VisualServer::canvas_item_set_parent(const RID item, const RID parent) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_canvas_item_set_parent,
        (const Object*)this,
        item,
        parent
    );
}

void VisualServer::canvas_item_set_self_modulate(const RID item, const Color color) {
    rebel_icall_void_rid_color(
        method_bindings.mb_canvas_item_set_self_modulate,
        (const Object*)this,
        item,
        color
    );
}

void VisualServer::canvas_item_set_sort_children_by_y(const RID item, const bool enabled) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_canvas_item_set_sort_children_by_y,
        (const Object*)this,
        item,
        enabled
    );
}

void VisualServer::canvas_item_set_transform(const RID item, const Transform2D transform) {
    rebel_icall_void_rid_transform2d(
        method_bindings.mb_canvas_item_set_transform,
        (const Object*)this,
        item,
        transform
    );
}

void VisualServer::canvas_item_set_use_parent_material(const RID item, const bool enabled) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_canvas_item_set_use_parent_material,
        (const Object*)this,
        item,
        enabled
    );
}

void VisualServer::canvas_item_set_visible(const RID item, const bool visible) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_canvas_item_set_visible,
        (const Object*)this,
        item,
        visible
    );
}

void VisualServer::canvas_item_set_z_as_relative_to_parent(const RID item, const bool enabled) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_canvas_item_set_z_as_relative_to_parent,
        (const Object*)this,
        item,
        enabled
    );
}

void VisualServer::canvas_item_set_z_index(const RID item, const int64_t z_index) {
    rebel_icall_void_rid_int(
        method_bindings.mb_canvas_item_set_z_index,
        (const Object*)this,
        item,
        z_index
    );
}

void VisualServer::canvas_light_attach_to_canvas(const RID light, const RID canvas) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_canvas_light_attach_to_canvas,
        (const Object*)this,
        light,
        canvas
    );
}

RID VisualServer::canvas_light_create() {
    return rebel_icall_rid(
        method_bindings.mb_canvas_light_create,
        (const Object*)this
    );
}

void VisualServer::canvas_light_occluder_attach_to_canvas(const RID occluder, const RID canvas) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_canvas_light_occluder_attach_to_canvas,
        (const Object*)this,
        occluder,
        canvas
    );
}

RID VisualServer::canvas_light_occluder_create() {
    return rebel_icall_rid(
        method_bindings.mb_canvas_light_occluder_create,
        (const Object*)this
    );
}

void VisualServer::canvas_light_occluder_set_enabled(const RID occluder, const bool enabled) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_canvas_light_occluder_set_enabled,
        (const Object*)this,
        occluder,
        enabled
    );
}

void VisualServer::canvas_light_occluder_set_light_mask(const RID occluder, const int64_t mask) {
    rebel_icall_void_rid_int(
        method_bindings.mb_canvas_light_occluder_set_light_mask,
        (const Object*)this,
        occluder,
        mask
    );
}

void VisualServer::canvas_light_occluder_set_polygon(const RID occluder, const RID polygon) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_canvas_light_occluder_set_polygon,
        (const Object*)this,
        occluder,
        polygon
    );
}

void VisualServer::canvas_light_occluder_set_transform(const RID occluder, const Transform2D transform) {
    rebel_icall_void_rid_transform2d(
        method_bindings.mb_canvas_light_occluder_set_transform,
        (const Object*)this,
        occluder,
        transform
    );
}

void VisualServer::canvas_light_set_color(const RID light, const Color color) {
    rebel_icall_void_rid_color(
        method_bindings.mb_canvas_light_set_color,
        (const Object*)this,
        light,
        color
    );
}

void VisualServer::canvas_light_set_enabled(const RID light, const bool enabled) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_canvas_light_set_enabled,
        (const Object*)this,
        light,
        enabled
    );
}

void VisualServer::canvas_light_set_energy(const RID light, const real_t energy) {
    rebel_icall_void_rid_float(
        method_bindings.mb_canvas_light_set_energy,
        (const Object*)this,
        light,
        energy
    );
}

void VisualServer::canvas_light_set_height(const RID light, const real_t height) {
    rebel_icall_void_rid_float(
        method_bindings.mb_canvas_light_set_height,
        (const Object*)this,
        light,
        height
    );
}

void VisualServer::canvas_light_set_item_cull_mask(const RID light, const int64_t mask) {
    rebel_icall_void_rid_int(
        method_bindings.mb_canvas_light_set_item_cull_mask,
        (const Object*)this,
        light,
        mask
    );
}

void VisualServer::canvas_light_set_item_shadow_cull_mask(const RID light, const int64_t mask) {
    rebel_icall_void_rid_int(
        method_bindings.mb_canvas_light_set_item_shadow_cull_mask,
        (const Object*)this,
        light,
        mask
    );
}

void VisualServer::canvas_light_set_layer_range(const RID light, const int64_t min_layer, const int64_t max_layer) {
    rebel_icall_void_rid_int_int(
        method_bindings.mb_canvas_light_set_layer_range,
        (const Object*)this,
        light,
        min_layer,
        max_layer
    );
}

void VisualServer::canvas_light_set_mode(const RID light, const int64_t mode) {
    rebel_icall_void_rid_int(
        method_bindings.mb_canvas_light_set_mode,
        (const Object*)this,
        light,
        mode
    );
}

void VisualServer::canvas_light_set_scale(const RID light, const real_t scale) {
    rebel_icall_void_rid_float(
        method_bindings.mb_canvas_light_set_scale,
        (const Object*)this,
        light,
        scale
    );
}

void VisualServer::canvas_light_set_shadow_buffer_size(const RID light, const int64_t size) {
    rebel_icall_void_rid_int(
        method_bindings.mb_canvas_light_set_shadow_buffer_size,
        (const Object*)this,
        light,
        size
    );
}

void VisualServer::canvas_light_set_shadow_color(const RID light, const Color color) {
    rebel_icall_void_rid_color(
        method_bindings.mb_canvas_light_set_shadow_color,
        (const Object*)this,
        light,
        color
    );
}

void VisualServer::canvas_light_set_shadow_enabled(const RID light, const bool enabled) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_canvas_light_set_shadow_enabled,
        (const Object*)this,
        light,
        enabled
    );
}

void VisualServer::canvas_light_set_shadow_filter(const RID light, const int64_t filter) {
    rebel_icall_void_rid_int(
        method_bindings.mb_canvas_light_set_shadow_filter,
        (const Object*)this,
        light,
        filter
    );
}

void VisualServer::canvas_light_set_shadow_gradient_length(const RID light, const real_t length) {
    rebel_icall_void_rid_float(
        method_bindings.mb_canvas_light_set_shadow_gradient_length,
        (const Object*)this,
        light,
        length
    );
}

void VisualServer::canvas_light_set_shadow_smooth(const RID light, const real_t smooth) {
    rebel_icall_void_rid_float(
        method_bindings.mb_canvas_light_set_shadow_smooth,
        (const Object*)this,
        light,
        smooth
    );
}

void VisualServer::canvas_light_set_texture(const RID light, const RID texture) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_canvas_light_set_texture,
        (const Object*)this,
        light,
        texture
    );
}

void VisualServer::canvas_light_set_texture_offset(const RID light, const Vector2 offset) {
    rebel_icall_void_rid_vector2(
        method_bindings.mb_canvas_light_set_texture_offset,
        (const Object*)this,
        light,
        offset
    );
}

void VisualServer::canvas_light_set_transform(const RID light, const Transform2D transform) {
    rebel_icall_void_rid_transform2d(
        method_bindings.mb_canvas_light_set_transform,
        (const Object*)this,
        light,
        transform
    );
}

void VisualServer::canvas_light_set_z_range(const RID light, const int64_t min_z, const int64_t max_z) {
    rebel_icall_void_rid_int_int(
        method_bindings.mb_canvas_light_set_z_range,
        (const Object*)this,
        light,
        min_z,
        max_z
    );
}

RID VisualServer::canvas_occluder_polygon_create() {
    return rebel_icall_rid(
        method_bindings.mb_canvas_occluder_polygon_create,
        (const Object*)this
    );
}

void VisualServer::canvas_occluder_polygon_set_cull_mode(const RID occluder_polygon, const int64_t mode) {
    rebel_icall_void_rid_int(
        method_bindings.mb_canvas_occluder_polygon_set_cull_mode,
        (const Object*)this,
        occluder_polygon,
        mode
    );
}

void VisualServer::canvas_occluder_polygon_set_shape(const RID occluder_polygon, const PoolVector2Array shape, const bool closed) {
    rebel_icall_void_rid_poolvector2array_bool(
        method_bindings.mb_canvas_occluder_polygon_set_shape,
        (const Object*)this,
        occluder_polygon,
        shape,
        closed
    );
}

void VisualServer::canvas_occluder_polygon_set_shape_as_lines(const RID occluder_polygon, const PoolVector2Array shape) {
    rebel_icall_void_rid_poolvector2array(
        method_bindings.mb_canvas_occluder_polygon_set_shape_as_lines,
        (const Object*)this,
        occluder_polygon,
        shape
    );
}

void VisualServer::canvas_set_item_mirroring(const RID canvas, const RID item, const Vector2 mirroring) {
    rebel_icall_void_rid_rid_vector2(
        method_bindings.mb_canvas_set_item_mirroring,
        (const Object*)this,
        canvas,
        item,
        mirroring
    );
}

void VisualServer::canvas_set_modulate(const RID canvas, const Color color) {
    rebel_icall_void_rid_color(
        method_bindings.mb_canvas_set_modulate,
        (const Object*)this,
        canvas,
        color
    );
}

RID VisualServer::directional_light_create() {
    return rebel_icall_rid(
        method_bindings.mb_directional_light_create,
        (const Object*)this
    );
}

void VisualServer::draw(const bool swap_buffers, const real_t frame_step) {
    rebel_icall_void_bool_float(
        method_bindings.mb_draw,
        (const Object*)this,
        swap_buffers,
        frame_step
    );
}

RID VisualServer::environment_create() {
    return rebel_icall_rid(
        method_bindings.mb_environment_create,
        (const Object*)this
    );
}

void VisualServer::environment_set_adjustment(const RID env, const bool enable, const real_t brightness, const real_t contrast, const real_t saturation, const RID ramp) {
    rebel_icall_void_rid_bool_float_float_float_rid(
        method_bindings.mb_environment_set_adjustment,
        (const Object*)this,
        env,
        enable,
        brightness,
        contrast,
        saturation,
        ramp
    );
}

void VisualServer::environment_set_ambient_light(const RID env, const Color color, const real_t energy, const real_t sky_contibution) {
    rebel_icall_void_rid_color_float_float(
        method_bindings.mb_environment_set_ambient_light,
        (const Object*)this,
        env,
        color,
        energy,
        sky_contibution
    );
}

void VisualServer::environment_set_background(const RID env, const int64_t bg) {
    rebel_icall_void_rid_int(
        method_bindings.mb_environment_set_background,
        (const Object*)this,
        env,
        bg
    );
}

void VisualServer::environment_set_bg_color(const RID env, const Color color) {
    rebel_icall_void_rid_color(
        method_bindings.mb_environment_set_bg_color,
        (const Object*)this,
        env,
        color
    );
}

void VisualServer::environment_set_bg_energy(const RID env, const real_t energy) {
    rebel_icall_void_rid_float(
        method_bindings.mb_environment_set_bg_energy,
        (const Object*)this,
        env,
        energy
    );
}

void VisualServer::environment_set_canvas_max_layer(const RID env, const int64_t max_layer) {
    rebel_icall_void_rid_int(
        method_bindings.mb_environment_set_canvas_max_layer,
        (const Object*)this,
        env,
        max_layer
    );
}

void VisualServer::environment_set_dof_blur_far(const RID env, const bool enable, const real_t distance, const real_t transition, const real_t far_amount, const int64_t quality) {
    rebel_icall_void_rid_bool_float_float_float_int(
        method_bindings.mb_environment_set_dof_blur_far,
        (const Object*)this,
        env,
        enable,
        distance,
        transition,
        far_amount,
        quality
    );
}

void VisualServer::environment_set_dof_blur_near(const RID env, const bool enable, const real_t distance, const real_t transition, const real_t far_amount, const int64_t quality) {
    rebel_icall_void_rid_bool_float_float_float_int(
        method_bindings.mb_environment_set_dof_blur_near,
        (const Object*)this,
        env,
        enable,
        distance,
        transition,
        far_amount,
        quality
    );
}

void VisualServer::environment_set_fog(const RID env, const bool enable, const Color color, const Color sun_color, const real_t sun_amount) {
    rebel_icall_void_rid_bool_color_color_float(
        method_bindings.mb_environment_set_fog,
        (const Object*)this,
        env,
        enable,
        color,
        sun_color,
        sun_amount
    );
}

void VisualServer::environment_set_fog_depth(const RID env, const bool enable, const real_t depth_begin, const real_t depth_end, const real_t depth_curve, const bool transmit, const real_t transmit_curve) {
    rebel_icall_void_rid_bool_float_float_float_bool_float(
        method_bindings.mb_environment_set_fog_depth,
        (const Object*)this,
        env,
        enable,
        depth_begin,
        depth_end,
        depth_curve,
        transmit,
        transmit_curve
    );
}

void VisualServer::environment_set_fog_height(const RID env, const bool enable, const real_t min_height, const real_t max_height, const real_t height_curve) {
    rebel_icall_void_rid_bool_float_float_float(
        method_bindings.mb_environment_set_fog_height,
        (const Object*)this,
        env,
        enable,
        min_height,
        max_height,
        height_curve
    );
}

void VisualServer::environment_set_glow(const RID env, const bool enable, const int64_t level_flags, const real_t intensity, const real_t strength, const real_t bloom_threshold, const int64_t blend_mode, const real_t hdr_bleed_threshold, const real_t hdr_bleed_scale, const real_t hdr_luminance_cap, const bool bicubic_upscale, const bool high_quality) {
    rebel_icall_void_rid_bool_int_float_float_float_int_float_float_float_bool_bool(
        method_bindings.mb_environment_set_glow,
        (const Object*)this,
        env,
        enable,
        level_flags,
        intensity,
        strength,
        bloom_threshold,
        blend_mode,
        hdr_bleed_threshold,
        hdr_bleed_scale,
        hdr_luminance_cap,
        bicubic_upscale,
        high_quality
    );
}

void VisualServer::environment_set_sky(const RID env, const RID sky) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_environment_set_sky,
        (const Object*)this,
        env,
        sky
    );
}

void VisualServer::environment_set_sky_custom_fov(const RID env, const real_t scale) {
    rebel_icall_void_rid_float(
        method_bindings.mb_environment_set_sky_custom_fov,
        (const Object*)this,
        env,
        scale
    );
}

void VisualServer::environment_set_sky_orientation(const RID env, const Basis orientation) {
    rebel_icall_void_rid_basis(
        method_bindings.mb_environment_set_sky_orientation,
        (const Object*)this,
        env,
        orientation
    );
}

void VisualServer::environment_set_ssao(const RID env, const bool enable, const real_t radius, const real_t intensity, const real_t radius2, const real_t intensity2, const real_t bias, const real_t light_affect, const real_t ao_channel_affect, const Color color, const int64_t quality, const int64_t blur, const real_t bilateral_sharpness) {
    rebel_icall_void_rid_bool_float_float_float_float_float_float_float_color_int_int_float(
        method_bindings.mb_environment_set_ssao,
        (const Object*)this,
        env,
        enable,
        radius,
        intensity,
        radius2,
        intensity2,
        bias,
        light_affect,
        ao_channel_affect,
        color,
        quality,
        blur,
        bilateral_sharpness
    );
}

void VisualServer::environment_set_ssr(const RID env, const bool enable, const int64_t max_steps, const real_t fade_in, const real_t fade_out, const real_t depth_tolerance, const bool roughness) {
    rebel_icall_void_rid_bool_int_float_float_float_bool(
        method_bindings.mb_environment_set_ssr,
        (const Object*)this,
        env,
        enable,
        max_steps,
        fade_in,
        fade_out,
        depth_tolerance,
        roughness
    );
}

void VisualServer::environment_set_tonemap(const RID env, const int64_t tone_mapper, const real_t exposure, const real_t white, const bool auto_exposure, const real_t min_luminance, const real_t max_luminance, const real_t auto_exp_speed, const real_t auto_exp_grey) {
    rebel_icall_void_rid_int_float_float_bool_float_float_float_float(
        method_bindings.mb_environment_set_tonemap,
        (const Object*)this,
        env,
        tone_mapper,
        exposure,
        white,
        auto_exposure,
        min_luminance,
        max_luminance,
        auto_exp_speed,
        auto_exp_grey
    );
}

void VisualServer::finish() {
    rebel_icall_void(
        method_bindings.mb_finish,
        (const Object*)this
    );
}

void VisualServer::force_draw(const bool swap_buffers, const real_t frame_step) {
    rebel_icall_void_bool_float(
        method_bindings.mb_force_draw,
        (const Object*)this,
        swap_buffers,
        frame_step
    );
}

void VisualServer::force_sync() {
    rebel_icall_void(
        method_bindings.mb_force_sync,
        (const Object*)this
    );
}

void VisualServer::free_rid(const RID rid) {
    rebel_icall_void_rid(
        method_bindings.mb_free_rid,
        (const Object*)this,
        rid
    );
}

int64_t VisualServer::get_render_info(const int64_t info) {
    return rebel_icall_int_int(
        method_bindings.mb_get_render_info,
        (const Object*)this,
        info
    );
}

RID VisualServer::get_test_cube() {
    return rebel_icall_rid(
        method_bindings.mb_get_test_cube,
        (const Object*)this
    );
}

RID VisualServer::get_test_texture() {
    return rebel_icall_rid(
        method_bindings.mb_get_test_texture,
        (const Object*)this
    );
}

String VisualServer::get_video_adapter_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_video_adapter_name,
        (const Object*)this
    );
}

String VisualServer::get_video_adapter_vendor() const {
    return rebel_icall_string(
        method_bindings.mb_get_video_adapter_vendor,
        (const Object*)this
    );
}

RID VisualServer::get_white_texture() {
    return rebel_icall_rid(
        method_bindings.mb_get_white_texture,
        (const Object*)this
    );
}

RID VisualServer::gi_probe_create() {
    return rebel_icall_rid(
        method_bindings.mb_gi_probe_create,
        (const Object*)this
    );
}

real_t VisualServer::gi_probe_get_bias(const RID probe) const {
    return rebel_icall_float_rid(
        method_bindings.mb_gi_probe_get_bias,
        (const Object*)this,
        probe
    );
}

AABB VisualServer::gi_probe_get_bounds(const RID probe) const {
    return rebel_icall_aabb_rid(
        method_bindings.mb_gi_probe_get_bounds,
        (const Object*)this,
        probe
    );
}

real_t VisualServer::gi_probe_get_cell_size(const RID probe) const {
    return rebel_icall_float_rid(
        method_bindings.mb_gi_probe_get_cell_size,
        (const Object*)this,
        probe
    );
}

PoolIntArray VisualServer::gi_probe_get_dynamic_data(const RID probe) const {
    return rebel_icall_poolintarray_rid(
        method_bindings.mb_gi_probe_get_dynamic_data,
        (const Object*)this,
        probe
    );
}

int64_t VisualServer::gi_probe_get_dynamic_range(const RID probe) const {
    return rebel_icall_int_rid(
        method_bindings.mb_gi_probe_get_dynamic_range,
        (const Object*)this,
        probe
    );
}

real_t VisualServer::gi_probe_get_energy(const RID probe) const {
    return rebel_icall_float_rid(
        method_bindings.mb_gi_probe_get_energy,
        (const Object*)this,
        probe
    );
}

real_t VisualServer::gi_probe_get_normal_bias(const RID probe) const {
    return rebel_icall_float_rid(
        method_bindings.mb_gi_probe_get_normal_bias,
        (const Object*)this,
        probe
    );
}

real_t VisualServer::gi_probe_get_propagation(const RID probe) const {
    return rebel_icall_float_rid(
        method_bindings.mb_gi_probe_get_propagation,
        (const Object*)this,
        probe
    );
}

Transform VisualServer::gi_probe_get_to_cell_xform(const RID probe) const {
    return rebel_icall_transform_rid(
        method_bindings.mb_gi_probe_get_to_cell_xform,
        (const Object*)this,
        probe
    );
}

bool VisualServer::gi_probe_is_compressed(const RID probe) const {
    return rebel_icall_bool_rid(
        method_bindings.mb_gi_probe_is_compressed,
        (const Object*)this,
        probe
    );
}

bool VisualServer::gi_probe_is_interior(const RID probe) const {
    return rebel_icall_bool_rid(
        method_bindings.mb_gi_probe_is_interior,
        (const Object*)this,
        probe
    );
}

void VisualServer::gi_probe_set_bias(const RID probe, const real_t bias) {
    rebel_icall_void_rid_float(
        method_bindings.mb_gi_probe_set_bias,
        (const Object*)this,
        probe,
        bias
    );
}

void VisualServer::gi_probe_set_bounds(const RID probe, const AABB bounds) {
    rebel_icall_void_rid_aabb(
        method_bindings.mb_gi_probe_set_bounds,
        (const Object*)this,
        probe,
        bounds
    );
}

void VisualServer::gi_probe_set_cell_size(const RID probe, const real_t range) {
    rebel_icall_void_rid_float(
        method_bindings.mb_gi_probe_set_cell_size,
        (const Object*)this,
        probe,
        range
    );
}

void VisualServer::gi_probe_set_compress(const RID probe, const bool enable) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_gi_probe_set_compress,
        (const Object*)this,
        probe,
        enable
    );
}

void VisualServer::gi_probe_set_dynamic_data(const RID probe, const PoolIntArray data) {
    rebel_icall_void_rid_poolintarray(
        method_bindings.mb_gi_probe_set_dynamic_data,
        (const Object*)this,
        probe,
        data
    );
}

void VisualServer::gi_probe_set_dynamic_range(const RID probe, const int64_t range) {
    rebel_icall_void_rid_int(
        method_bindings.mb_gi_probe_set_dynamic_range,
        (const Object*)this,
        probe,
        range
    );
}

void VisualServer::gi_probe_set_energy(const RID probe, const real_t energy) {
    rebel_icall_void_rid_float(
        method_bindings.mb_gi_probe_set_energy,
        (const Object*)this,
        probe,
        energy
    );
}

void VisualServer::gi_probe_set_interior(const RID probe, const bool enable) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_gi_probe_set_interior,
        (const Object*)this,
        probe,
        enable
    );
}

void VisualServer::gi_probe_set_normal_bias(const RID probe, const real_t bias) {
    rebel_icall_void_rid_float(
        method_bindings.mb_gi_probe_set_normal_bias,
        (const Object*)this,
        probe,
        bias
    );
}

void VisualServer::gi_probe_set_propagation(const RID probe, const real_t propagation) {
    rebel_icall_void_rid_float(
        method_bindings.mb_gi_probe_set_propagation,
        (const Object*)this,
        probe,
        propagation
    );
}

void VisualServer::gi_probe_set_to_cell_xform(const RID probe, const Transform xform) {
    rebel_icall_void_rid_transform(
        method_bindings.mb_gi_probe_set_to_cell_xform,
        (const Object*)this,
        probe,
        xform
    );
}

bool VisualServer::has_changed() const {
    return rebel_icall_bool(
        method_bindings.mb_has_changed,
        (const Object*)this
    );
}

bool VisualServer::has_feature(const int64_t feature) const {
    return rebel_icall_bool_int(
        method_bindings.mb_has_feature,
        (const Object*)this,
        feature
    );
}

bool VisualServer::has_os_feature(const String feature) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_os_feature,
        (const Object*)this,
        feature
    );
}

void VisualServer::immediate_begin(const RID immediate, const int64_t primitive, const RID texture) {
    rebel_icall_void_rid_int_rid(
        method_bindings.mb_immediate_begin,
        (const Object*)this,
        immediate,
        primitive,
        texture
    );
}

void VisualServer::immediate_clear(const RID immediate) {
    rebel_icall_void_rid(
        method_bindings.mb_immediate_clear,
        (const Object*)this,
        immediate
    );
}

void VisualServer::immediate_color(const RID immediate, const Color color) {
    rebel_icall_void_rid_color(
        method_bindings.mb_immediate_color,
        (const Object*)this,
        immediate,
        color
    );
}

RID VisualServer::immediate_create() {
    return rebel_icall_rid(
        method_bindings.mb_immediate_create,
        (const Object*)this
    );
}

void VisualServer::immediate_end(const RID immediate) {
    rebel_icall_void_rid(
        method_bindings.mb_immediate_end,
        (const Object*)this,
        immediate
    );
}

RID VisualServer::immediate_get_material(const RID immediate) const {
    return rebel_icall_rid_rid(
        method_bindings.mb_immediate_get_material,
        (const Object*)this,
        immediate
    );
}

void VisualServer::immediate_normal(const RID immediate, const Vector3 normal) {
    rebel_icall_void_rid_vector3(
        method_bindings.mb_immediate_normal,
        (const Object*)this,
        immediate,
        normal
    );
}

void VisualServer::immediate_set_material(const RID immediate, const RID material) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_immediate_set_material,
        (const Object*)this,
        immediate,
        material
    );
}

void VisualServer::immediate_tangent(const RID immediate, const Plane tangent) {
    rebel_icall_void_rid_plane(
        method_bindings.mb_immediate_tangent,
        (const Object*)this,
        immediate,
        tangent
    );
}

void VisualServer::immediate_uv(const RID immediate, const Vector2 tex_uv) {
    rebel_icall_void_rid_vector2(
        method_bindings.mb_immediate_uv,
        (const Object*)this,
        immediate,
        tex_uv
    );
}

void VisualServer::immediate_uv2(const RID immediate, const Vector2 tex_uv) {
    rebel_icall_void_rid_vector2(
        method_bindings.mb_immediate_uv2,
        (const Object*)this,
        immediate,
        tex_uv
    );
}

void VisualServer::immediate_vertex(const RID immediate, const Vector3 vertex) {
    rebel_icall_void_rid_vector3(
        method_bindings.mb_immediate_vertex,
        (const Object*)this,
        immediate,
        vertex
    );
}

void VisualServer::immediate_vertex_2d(const RID immediate, const Vector2 vertex) {
    rebel_icall_void_rid_vector2(
        method_bindings.mb_immediate_vertex_2d,
        (const Object*)this,
        immediate,
        vertex
    );
}

void VisualServer::init() {
    rebel_icall_void(
        method_bindings.mb_init,
        (const Object*)this
    );
}

void VisualServer::instance_attach_object_instance_id(const RID instance, const int64_t id) {
    rebel_icall_void_rid_int(
        method_bindings.mb_instance_attach_object_instance_id,
        (const Object*)this,
        instance,
        id
    );
}

void VisualServer::instance_attach_skeleton(const RID instance, const RID skeleton) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_instance_attach_skeleton,
        (const Object*)this,
        instance,
        skeleton
    );
}

RID VisualServer::instance_create() {
    return rebel_icall_rid(
        method_bindings.mb_instance_create,
        (const Object*)this
    );
}

RID VisualServer::instance_create2(const RID base, const RID scenario) {
    return rebel_icall_rid_rid_rid(
        method_bindings.mb_instance_create2,
        (const Object*)this,
        base,
        scenario
    );
}

void VisualServer::instance_geometry_set_as_instance_lod(const RID instance, const RID as_lod_of_instance) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_instance_geometry_set_as_instance_lod,
        (const Object*)this,
        instance,
        as_lod_of_instance
    );
}

void VisualServer::instance_geometry_set_cast_shadows_setting(const RID instance, const int64_t shadow_casting_setting) {
    rebel_icall_void_rid_int(
        method_bindings.mb_instance_geometry_set_cast_shadows_setting,
        (const Object*)this,
        instance,
        shadow_casting_setting
    );
}

void VisualServer::instance_geometry_set_draw_range(const RID instance, const real_t min, const real_t max, const real_t min_margin, const real_t max_margin) {
    rebel_icall_void_rid_float_float_float_float(
        method_bindings.mb_instance_geometry_set_draw_range,
        (const Object*)this,
        instance,
        min,
        max,
        min_margin,
        max_margin
    );
}

void VisualServer::instance_geometry_set_flag(const RID instance, const int64_t flag, const bool enabled) {
    rebel_icall_void_rid_int_bool(
        method_bindings.mb_instance_geometry_set_flag,
        (const Object*)this,
        instance,
        flag,
        enabled
    );
}

void VisualServer::instance_geometry_set_material_override(const RID instance, const RID material) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_instance_geometry_set_material_override,
        (const Object*)this,
        instance,
        material
    );
}

void VisualServer::instance_set_base(const RID instance, const RID base) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_instance_set_base,
        (const Object*)this,
        instance,
        base
    );
}

void VisualServer::instance_set_blend_shape_weight(const RID instance, const int64_t shape, const real_t weight) {
    rebel_icall_void_rid_int_float(
        method_bindings.mb_instance_set_blend_shape_weight,
        (const Object*)this,
        instance,
        shape,
        weight
    );
}

void VisualServer::instance_set_custom_aabb(const RID instance, const AABB aabb) {
    rebel_icall_void_rid_aabb(
        method_bindings.mb_instance_set_custom_aabb,
        (const Object*)this,
        instance,
        aabb
    );
}

void VisualServer::instance_set_exterior(const RID instance, const bool enabled) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_instance_set_exterior,
        (const Object*)this,
        instance,
        enabled
    );
}

void VisualServer::instance_set_extra_visibility_margin(const RID instance, const real_t margin) {
    rebel_icall_void_rid_float(
        method_bindings.mb_instance_set_extra_visibility_margin,
        (const Object*)this,
        instance,
        margin
    );
}

void VisualServer::instance_set_layer_mask(const RID instance, const int64_t mask) {
    rebel_icall_void_rid_int(
        method_bindings.mb_instance_set_layer_mask,
        (const Object*)this,
        instance,
        mask
    );
}

void VisualServer::instance_set_scenario(const RID instance, const RID scenario) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_instance_set_scenario,
        (const Object*)this,
        instance,
        scenario
    );
}

void VisualServer::instance_set_surface_material(const RID instance, const int64_t surface, const RID material) {
    rebel_icall_void_rid_int_rid(
        method_bindings.mb_instance_set_surface_material,
        (const Object*)this,
        instance,
        surface,
        material
    );
}

void VisualServer::instance_set_transform(const RID instance, const Transform transform) {
    rebel_icall_void_rid_transform(
        method_bindings.mb_instance_set_transform,
        (const Object*)this,
        instance,
        transform
    );
}

void VisualServer::instance_set_use_lightmap(const RID instance, const RID lightmap_instance, const RID lightmap, const int64_t lightmap_slice, const Rect2 lightmap_uv_rect) {
    rebel_icall_void_rid_rid_rid_int_rect2(
        method_bindings.mb_instance_set_use_lightmap,
        (const Object*)this,
        instance,
        lightmap_instance,
        lightmap,
        lightmap_slice,
        lightmap_uv_rect
    );
}

void VisualServer::instance_set_visible(const RID instance, const bool visible) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_instance_set_visible,
        (const Object*)this,
        instance,
        visible
    );
}

Array VisualServer::instances_cull_aabb(const AABB aabb, const RID scenario) const {
    return rebel_icall_array_aabb_rid(
        method_bindings.mb_instances_cull_aabb,
        (const Object*)this,
        aabb,
        scenario
    );
}

Array VisualServer::instances_cull_convex(const Array convex, const RID scenario) const {
    return rebel_icall_array_array_rid(
        method_bindings.mb_instances_cull_convex,
        (const Object*)this,
        convex,
        scenario
    );
}

Array VisualServer::instances_cull_ray(const Vector3 from, const Vector3 to, const RID scenario) const {
    return rebel_icall_array_vector3_vector3_rid(
        method_bindings.mb_instances_cull_ray,
        (const Object*)this,
        from,
        to,
        scenario
    );
}

bool VisualServer::is_render_loop_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_render_loop_enabled,
        (const Object*)this
    );
}

void VisualServer::light_directional_set_blend_splits(const RID light, const bool enable) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_light_directional_set_blend_splits,
        (const Object*)this,
        light,
        enable
    );
}

void VisualServer::light_directional_set_shadow_depth_range_mode(const RID light, const int64_t range_mode) {
    rebel_icall_void_rid_int(
        method_bindings.mb_light_directional_set_shadow_depth_range_mode,
        (const Object*)this,
        light,
        range_mode
    );
}

void VisualServer::light_directional_set_shadow_mode(const RID light, const int64_t mode) {
    rebel_icall_void_rid_int(
        method_bindings.mb_light_directional_set_shadow_mode,
        (const Object*)this,
        light,
        mode
    );
}

void VisualServer::light_omni_set_shadow_detail(const RID light, const int64_t detail) {
    rebel_icall_void_rid_int(
        method_bindings.mb_light_omni_set_shadow_detail,
        (const Object*)this,
        light,
        detail
    );
}

void VisualServer::light_omni_set_shadow_mode(const RID light, const int64_t mode) {
    rebel_icall_void_rid_int(
        method_bindings.mb_light_omni_set_shadow_mode,
        (const Object*)this,
        light,
        mode
    );
}

void VisualServer::light_set_bake_mode(const RID light, const int64_t bake_mode) {
    rebel_icall_void_rid_int(
        method_bindings.mb_light_set_bake_mode,
        (const Object*)this,
        light,
        bake_mode
    );
}

void VisualServer::light_set_color(const RID light, const Color color) {
    rebel_icall_void_rid_color(
        method_bindings.mb_light_set_color,
        (const Object*)this,
        light,
        color
    );
}

void VisualServer::light_set_cull_mask(const RID light, const int64_t mask) {
    rebel_icall_void_rid_int(
        method_bindings.mb_light_set_cull_mask,
        (const Object*)this,
        light,
        mask
    );
}

void VisualServer::light_set_negative(const RID light, const bool enable) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_light_set_negative,
        (const Object*)this,
        light,
        enable
    );
}

void VisualServer::light_set_param(const RID light, const int64_t param, const real_t value) {
    rebel_icall_void_rid_int_float(
        method_bindings.mb_light_set_param,
        (const Object*)this,
        light,
        param,
        value
    );
}

void VisualServer::light_set_projector(const RID light, const RID texture) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_light_set_projector,
        (const Object*)this,
        light,
        texture
    );
}

void VisualServer::light_set_reverse_cull_face_mode(const RID light, const bool enabled) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_light_set_reverse_cull_face_mode,
        (const Object*)this,
        light,
        enabled
    );
}

void VisualServer::light_set_shadow(const RID light, const bool enabled) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_light_set_shadow,
        (const Object*)this,
        light,
        enabled
    );
}

void VisualServer::light_set_shadow_color(const RID light, const Color color) {
    rebel_icall_void_rid_color(
        method_bindings.mb_light_set_shadow_color,
        (const Object*)this,
        light,
        color
    );
}

void VisualServer::light_set_use_gi(const RID light, const bool enabled) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_light_set_use_gi,
        (const Object*)this,
        light,
        enabled
    );
}

RID VisualServer::lightmap_capture_create() {
    return rebel_icall_rid(
        method_bindings.mb_lightmap_capture_create,
        (const Object*)this
    );
}

AABB VisualServer::lightmap_capture_get_bounds(const RID capture) const {
    return rebel_icall_aabb_rid(
        method_bindings.mb_lightmap_capture_get_bounds,
        (const Object*)this,
        capture
    );
}

real_t VisualServer::lightmap_capture_get_energy(const RID capture) const {
    return rebel_icall_float_rid(
        method_bindings.mb_lightmap_capture_get_energy,
        (const Object*)this,
        capture
    );
}

PoolByteArray VisualServer::lightmap_capture_get_octree(const RID capture) const {
    return rebel_icall_poolbytearray_rid(
        method_bindings.mb_lightmap_capture_get_octree,
        (const Object*)this,
        capture
    );
}

int64_t VisualServer::lightmap_capture_get_octree_cell_subdiv(const RID capture) const {
    return rebel_icall_int_rid(
        method_bindings.mb_lightmap_capture_get_octree_cell_subdiv,
        (const Object*)this,
        capture
    );
}

Transform VisualServer::lightmap_capture_get_octree_cell_transform(const RID capture) const {
    return rebel_icall_transform_rid(
        method_bindings.mb_lightmap_capture_get_octree_cell_transform,
        (const Object*)this,
        capture
    );
}

bool VisualServer::lightmap_capture_is_interior(const RID capture) const {
    return rebel_icall_bool_rid(
        method_bindings.mb_lightmap_capture_is_interior,
        (const Object*)this,
        capture
    );
}

void VisualServer::lightmap_capture_set_bounds(const RID capture, const AABB bounds) {
    rebel_icall_void_rid_aabb(
        method_bindings.mb_lightmap_capture_set_bounds,
        (const Object*)this,
        capture,
        bounds
    );
}

void VisualServer::lightmap_capture_set_energy(const RID capture, const real_t energy) {
    rebel_icall_void_rid_float(
        method_bindings.mb_lightmap_capture_set_energy,
        (const Object*)this,
        capture,
        energy
    );
}

void VisualServer::lightmap_capture_set_interior(const RID capture, const bool interior) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_lightmap_capture_set_interior,
        (const Object*)this,
        capture,
        interior
    );
}

void VisualServer::lightmap_capture_set_octree(const RID capture, const PoolByteArray octree) {
    rebel_icall_void_rid_poolbytearray(
        method_bindings.mb_lightmap_capture_set_octree,
        (const Object*)this,
        capture,
        octree
    );
}

void VisualServer::lightmap_capture_set_octree_cell_subdiv(const RID capture, const int64_t subdiv) {
    rebel_icall_void_rid_int(
        method_bindings.mb_lightmap_capture_set_octree_cell_subdiv,
        (const Object*)this,
        capture,
        subdiv
    );
}

void VisualServer::lightmap_capture_set_octree_cell_transform(const RID capture, const Transform xform) {
    rebel_icall_void_rid_transform(
        method_bindings.mb_lightmap_capture_set_octree_cell_transform,
        (const Object*)this,
        capture,
        xform
    );
}

RID VisualServer::make_sphere_mesh(const int64_t latitudes, const int64_t longitudes, const real_t radius) {
    return rebel_icall_rid_int_int_float(
        method_bindings.mb_make_sphere_mesh,
        (const Object*)this,
        latitudes,
        longitudes,
        radius
    );
}

RID VisualServer::material_create() {
    return rebel_icall_rid(
        method_bindings.mb_material_create,
        (const Object*)this
    );
}

Variant VisualServer::material_get_param(const RID material, const String parameter) const {
    return rebel_icall_variant_rid_string(
        method_bindings.mb_material_get_param,
        (const Object*)this,
        material,
        parameter
    );
}

Variant VisualServer::material_get_param_default(const RID material, const String parameter) const {
    return rebel_icall_variant_rid_string(
        method_bindings.mb_material_get_param_default,
        (const Object*)this,
        material,
        parameter
    );
}

RID VisualServer::material_get_shader(const RID shader_material) const {
    return rebel_icall_rid_rid(
        method_bindings.mb_material_get_shader,
        (const Object*)this,
        shader_material
    );
}

void VisualServer::material_set_line_width(const RID material, const real_t width) {
    rebel_icall_void_rid_float(
        method_bindings.mb_material_set_line_width,
        (const Object*)this,
        material,
        width
    );
}

void VisualServer::material_set_next_pass(const RID material, const RID next_material) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_material_set_next_pass,
        (const Object*)this,
        material,
        next_material
    );
}

void VisualServer::material_set_param(const RID material, const String parameter, const Variant value) {
    rebel_icall_void_rid_string_variant(
        method_bindings.mb_material_set_param,
        (const Object*)this,
        material,
        parameter,
        value
    );
}

void VisualServer::material_set_render_priority(const RID material, const int64_t priority) {
    rebel_icall_void_rid_int(
        method_bindings.mb_material_set_render_priority,
        (const Object*)this,
        material,
        priority
    );
}

void VisualServer::material_set_shader(const RID shader_material, const RID shader) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_material_set_shader,
        (const Object*)this,
        shader_material,
        shader
    );
}

void VisualServer::mesh_add_surface_from_arrays(const RID mesh, const int64_t primitive, const Array arrays, const Array blend_shapes, const int64_t compress_format) {
    rebel_icall_void_rid_int_array_array_int(
        method_bindings.mb_mesh_add_surface_from_arrays,
        (const Object*)this,
        mesh,
        primitive,
        arrays,
        blend_shapes,
        compress_format
    );
}

void VisualServer::mesh_clear(const RID mesh) {
    rebel_icall_void_rid(
        method_bindings.mb_mesh_clear,
        (const Object*)this,
        mesh
    );
}

RID VisualServer::mesh_create() {
    return rebel_icall_rid(
        method_bindings.mb_mesh_create,
        (const Object*)this
    );
}

int64_t VisualServer::mesh_get_blend_shape_count(const RID mesh) const {
    return rebel_icall_int_rid(
        method_bindings.mb_mesh_get_blend_shape_count,
        (const Object*)this,
        mesh
    );
}

VisualServer::BlendShapeMode VisualServer::mesh_get_blend_shape_mode(const RID mesh) const {
    return (VisualServer::BlendShapeMode)rebel_icall_int_rid(
        method_bindings.mb_mesh_get_blend_shape_mode,
        (const Object*)this,
        mesh
    );
}

AABB VisualServer::mesh_get_custom_aabb(const RID mesh) const {
    return rebel_icall_aabb_rid(
        method_bindings.mb_mesh_get_custom_aabb,
        (const Object*)this,
        mesh
    );
}

int64_t VisualServer::mesh_get_surface_count(const RID mesh) const {
    return rebel_icall_int_rid(
        method_bindings.mb_mesh_get_surface_count,
        (const Object*)this,
        mesh
    );
}

void VisualServer::mesh_remove_surface(const RID mesh, const int64_t index) {
    rebel_icall_void_rid_int(
        method_bindings.mb_mesh_remove_surface,
        (const Object*)this,
        mesh,
        index
    );
}

void VisualServer::mesh_set_blend_shape_count(const RID mesh, const int64_t amount) {
    rebel_icall_void_rid_int(
        method_bindings.mb_mesh_set_blend_shape_count,
        (const Object*)this,
        mesh,
        amount
    );
}

void VisualServer::mesh_set_blend_shape_mode(const RID mesh, const int64_t mode) {
    rebel_icall_void_rid_int(
        method_bindings.mb_mesh_set_blend_shape_mode,
        (const Object*)this,
        mesh,
        mode
    );
}

void VisualServer::mesh_set_custom_aabb(const RID mesh, const AABB aabb) {
    rebel_icall_void_rid_aabb(
        method_bindings.mb_mesh_set_custom_aabb,
        (const Object*)this,
        mesh,
        aabb
    );
}

AABB VisualServer::mesh_surface_get_aabb(const RID mesh, const int64_t surface) const {
    return rebel_icall_aabb_rid_int(
        method_bindings.mb_mesh_surface_get_aabb,
        (const Object*)this,
        mesh,
        surface
    );
}

PoolByteArray VisualServer::mesh_surface_get_array(const RID mesh, const int64_t surface) const {
    return rebel_icall_poolbytearray_rid_int(
        method_bindings.mb_mesh_surface_get_array,
        (const Object*)this,
        mesh,
        surface
    );
}

int64_t VisualServer::mesh_surface_get_array_index_len(const RID mesh, const int64_t surface) const {
    return rebel_icall_int_rid_int(
        method_bindings.mb_mesh_surface_get_array_index_len,
        (const Object*)this,
        mesh,
        surface
    );
}

int64_t VisualServer::mesh_surface_get_array_len(const RID mesh, const int64_t surface) const {
    return rebel_icall_int_rid_int(
        method_bindings.mb_mesh_surface_get_array_len,
        (const Object*)this,
        mesh,
        surface
    );
}

Array VisualServer::mesh_surface_get_arrays(const RID mesh, const int64_t surface) const {
    return rebel_icall_array_rid_int(
        method_bindings.mb_mesh_surface_get_arrays,
        (const Object*)this,
        mesh,
        surface
    );
}

Array VisualServer::mesh_surface_get_blend_shape_arrays(const RID mesh, const int64_t surface) const {
    return rebel_icall_array_rid_int(
        method_bindings.mb_mesh_surface_get_blend_shape_arrays,
        (const Object*)this,
        mesh,
        surface
    );
}

int64_t VisualServer::mesh_surface_get_format(const RID mesh, const int64_t surface) const {
    return rebel_icall_int_rid_int(
        method_bindings.mb_mesh_surface_get_format,
        (const Object*)this,
        mesh,
        surface
    );
}

int64_t VisualServer::mesh_surface_get_format_offset(const int64_t format, const int64_t vertex_len, const int64_t index_len, const int64_t array_index) const {
    return rebel_icall_int_int_int_int_int(
        method_bindings.mb_mesh_surface_get_format_offset,
        (const Object*)this,
        format,
        vertex_len,
        index_len,
        array_index
    );
}

int64_t VisualServer::mesh_surface_get_format_stride(const int64_t format, const int64_t vertex_len, const int64_t index_len, const int64_t array_index) const {
    return rebel_icall_int_int_int_int_int(
        method_bindings.mb_mesh_surface_get_format_stride,
        (const Object*)this,
        format,
        vertex_len,
        index_len,
        array_index
    );
}

PoolByteArray VisualServer::mesh_surface_get_index_array(const RID mesh, const int64_t surface) const {
    return rebel_icall_poolbytearray_rid_int(
        method_bindings.mb_mesh_surface_get_index_array,
        (const Object*)this,
        mesh,
        surface
    );
}

RID VisualServer::mesh_surface_get_material(const RID mesh, const int64_t surface) const {
    return rebel_icall_rid_rid_int(
        method_bindings.mb_mesh_surface_get_material,
        (const Object*)this,
        mesh,
        surface
    );
}

VisualServer::PrimitiveType VisualServer::mesh_surface_get_primitive_type(const RID mesh, const int64_t surface) const {
    return (VisualServer::PrimitiveType)rebel_icall_int_rid_int(
        method_bindings.mb_mesh_surface_get_primitive_type,
        (const Object*)this,
        mesh,
        surface
    );
}

Array VisualServer::mesh_surface_get_skeleton_aabb(const RID mesh, const int64_t surface) const {
    return rebel_icall_array_rid_int(
        method_bindings.mb_mesh_surface_get_skeleton_aabb,
        (const Object*)this,
        mesh,
        surface
    );
}

void VisualServer::mesh_surface_set_material(const RID mesh, const int64_t surface, const RID material) {
    rebel_icall_void_rid_int_rid(
        method_bindings.mb_mesh_surface_set_material,
        (const Object*)this,
        mesh,
        surface,
        material
    );
}

void VisualServer::mesh_surface_update_region(const RID mesh, const int64_t surface, const int64_t offset, const PoolByteArray data) {
    rebel_icall_void_rid_int_int_poolbytearray(
        method_bindings.mb_mesh_surface_update_region,
        (const Object*)this,
        mesh,
        surface,
        offset,
        data
    );
}

void VisualServer::multimesh_allocate(const RID multimesh, const int64_t instances, const int64_t transform_format, const int64_t color_format, const int64_t custom_data_format) {
    rebel_icall_void_rid_int_int_int_int(
        method_bindings.mb_multimesh_allocate,
        (const Object*)this,
        multimesh,
        instances,
        transform_format,
        color_format,
        custom_data_format
    );
}

RID VisualServer::multimesh_create() {
    return rebel_icall_rid(
        method_bindings.mb_multimesh_create,
        (const Object*)this
    );
}

AABB VisualServer::multimesh_get_aabb(const RID multimesh) const {
    return rebel_icall_aabb_rid(
        method_bindings.mb_multimesh_get_aabb,
        (const Object*)this,
        multimesh
    );
}

int64_t VisualServer::multimesh_get_instance_count(const RID multimesh) const {
    return rebel_icall_int_rid(
        method_bindings.mb_multimesh_get_instance_count,
        (const Object*)this,
        multimesh
    );
}

RID VisualServer::multimesh_get_mesh(const RID multimesh) const {
    return rebel_icall_rid_rid(
        method_bindings.mb_multimesh_get_mesh,
        (const Object*)this,
        multimesh
    );
}

int64_t VisualServer::multimesh_get_visible_instances(const RID multimesh) const {
    return rebel_icall_int_rid(
        method_bindings.mb_multimesh_get_visible_instances,
        (const Object*)this,
        multimesh
    );
}

Color VisualServer::multimesh_instance_get_color(const RID multimesh, const int64_t index) const {
    return rebel_icall_color_rid_int(
        method_bindings.mb_multimesh_instance_get_color,
        (const Object*)this,
        multimesh,
        index
    );
}

Color VisualServer::multimesh_instance_get_custom_data(const RID multimesh, const int64_t index) const {
    return rebel_icall_color_rid_int(
        method_bindings.mb_multimesh_instance_get_custom_data,
        (const Object*)this,
        multimesh,
        index
    );
}

Transform VisualServer::multimesh_instance_get_transform(const RID multimesh, const int64_t index) const {
    return rebel_icall_transform_rid_int(
        method_bindings.mb_multimesh_instance_get_transform,
        (const Object*)this,
        multimesh,
        index
    );
}

Transform2D VisualServer::multimesh_instance_get_transform_2d(const RID multimesh, const int64_t index) const {
    return rebel_icall_transform2d_rid_int(
        method_bindings.mb_multimesh_instance_get_transform_2d,
        (const Object*)this,
        multimesh,
        index
    );
}

void VisualServer::multimesh_instance_set_color(const RID multimesh, const int64_t index, const Color color) {
    rebel_icall_void_rid_int_color(
        method_bindings.mb_multimesh_instance_set_color,
        (const Object*)this,
        multimesh,
        index,
        color
    );
}

void VisualServer::multimesh_instance_set_custom_data(const RID multimesh, const int64_t index, const Color custom_data) {
    rebel_icall_void_rid_int_color(
        method_bindings.mb_multimesh_instance_set_custom_data,
        (const Object*)this,
        multimesh,
        index,
        custom_data
    );
}

void VisualServer::multimesh_instance_set_transform(const RID multimesh, const int64_t index, const Transform transform) {
    rebel_icall_void_rid_int_transform(
        method_bindings.mb_multimesh_instance_set_transform,
        (const Object*)this,
        multimesh,
        index,
        transform
    );
}

void VisualServer::multimesh_instance_set_transform_2d(const RID multimesh, const int64_t index, const Transform2D transform) {
    rebel_icall_void_rid_int_transform2d(
        method_bindings.mb_multimesh_instance_set_transform_2d,
        (const Object*)this,
        multimesh,
        index,
        transform
    );
}

void VisualServer::multimesh_set_as_bulk_array(const RID multimesh, const PoolRealArray array) {
    rebel_icall_void_rid_poolrealarray(
        method_bindings.mb_multimesh_set_as_bulk_array,
        (const Object*)this,
        multimesh,
        array
    );
}

void VisualServer::multimesh_set_mesh(const RID multimesh, const RID mesh) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_multimesh_set_mesh,
        (const Object*)this,
        multimesh,
        mesh
    );
}

void VisualServer::multimesh_set_visible_instances(const RID multimesh, const int64_t visible) {
    rebel_icall_void_rid_int(
        method_bindings.mb_multimesh_set_visible_instances,
        (const Object*)this,
        multimesh,
        visible
    );
}

RID VisualServer::omni_light_create() {
    return rebel_icall_rid(
        method_bindings.mb_omni_light_create,
        (const Object*)this
    );
}

RID VisualServer::particles_create() {
    return rebel_icall_rid(
        method_bindings.mb_particles_create,
        (const Object*)this
    );
}

AABB VisualServer::particles_get_current_aabb(const RID particles) {
    return rebel_icall_aabb_rid(
        method_bindings.mb_particles_get_current_aabb,
        (const Object*)this,
        particles
    );
}

bool VisualServer::particles_get_emitting(const RID particles) {
    return rebel_icall_bool_rid(
        method_bindings.mb_particles_get_emitting,
        (const Object*)this,
        particles
    );
}

bool VisualServer::particles_is_inactive(const RID particles) {
    return rebel_icall_bool_rid(
        method_bindings.mb_particles_is_inactive,
        (const Object*)this,
        particles
    );
}

void VisualServer::particles_request_process(const RID particles) {
    rebel_icall_void_rid(
        method_bindings.mb_particles_request_process,
        (const Object*)this,
        particles
    );
}

void VisualServer::particles_restart(const RID particles) {
    rebel_icall_void_rid(
        method_bindings.mb_particles_restart,
        (const Object*)this,
        particles
    );
}

void VisualServer::particles_set_amount(const RID particles, const int64_t amount) {
    rebel_icall_void_rid_int(
        method_bindings.mb_particles_set_amount,
        (const Object*)this,
        particles,
        amount
    );
}

void VisualServer::particles_set_custom_aabb(const RID particles, const AABB aabb) {
    rebel_icall_void_rid_aabb(
        method_bindings.mb_particles_set_custom_aabb,
        (const Object*)this,
        particles,
        aabb
    );
}

void VisualServer::particles_set_draw_order(const RID particles, const int64_t order) {
    rebel_icall_void_rid_int(
        method_bindings.mb_particles_set_draw_order,
        (const Object*)this,
        particles,
        order
    );
}

void VisualServer::particles_set_draw_pass_mesh(const RID particles, const int64_t pass, const RID mesh) {
    rebel_icall_void_rid_int_rid(
        method_bindings.mb_particles_set_draw_pass_mesh,
        (const Object*)this,
        particles,
        pass,
        mesh
    );
}

void VisualServer::particles_set_draw_passes(const RID particles, const int64_t count) {
    rebel_icall_void_rid_int(
        method_bindings.mb_particles_set_draw_passes,
        (const Object*)this,
        particles,
        count
    );
}

void VisualServer::particles_set_emission_transform(const RID particles, const Transform transform) {
    rebel_icall_void_rid_transform(
        method_bindings.mb_particles_set_emission_transform,
        (const Object*)this,
        particles,
        transform
    );
}

void VisualServer::particles_set_emitting(const RID particles, const bool emitting) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_particles_set_emitting,
        (const Object*)this,
        particles,
        emitting
    );
}

void VisualServer::particles_set_explosiveness_ratio(const RID particles, const real_t ratio) {
    rebel_icall_void_rid_float(
        method_bindings.mb_particles_set_explosiveness_ratio,
        (const Object*)this,
        particles,
        ratio
    );
}

void VisualServer::particles_set_fixed_fps(const RID particles, const int64_t fps) {
    rebel_icall_void_rid_int(
        method_bindings.mb_particles_set_fixed_fps,
        (const Object*)this,
        particles,
        fps
    );
}

void VisualServer::particles_set_fractional_delta(const RID particles, const bool enable) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_particles_set_fractional_delta,
        (const Object*)this,
        particles,
        enable
    );
}

void VisualServer::particles_set_lifetime(const RID particles, const real_t lifetime) {
    rebel_icall_void_rid_float(
        method_bindings.mb_particles_set_lifetime,
        (const Object*)this,
        particles,
        lifetime
    );
}

void VisualServer::particles_set_one_shot(const RID particles, const bool one_shot) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_particles_set_one_shot,
        (const Object*)this,
        particles,
        one_shot
    );
}

void VisualServer::particles_set_pre_process_time(const RID particles, const real_t time) {
    rebel_icall_void_rid_float(
        method_bindings.mb_particles_set_pre_process_time,
        (const Object*)this,
        particles,
        time
    );
}

void VisualServer::particles_set_process_material(const RID particles, const RID material) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_particles_set_process_material,
        (const Object*)this,
        particles,
        material
    );
}

void VisualServer::particles_set_randomness_ratio(const RID particles, const real_t ratio) {
    rebel_icall_void_rid_float(
        method_bindings.mb_particles_set_randomness_ratio,
        (const Object*)this,
        particles,
        ratio
    );
}

void VisualServer::particles_set_speed_scale(const RID particles, const real_t scale) {
    rebel_icall_void_rid_float(
        method_bindings.mb_particles_set_speed_scale,
        (const Object*)this,
        particles,
        scale
    );
}

void VisualServer::particles_set_use_local_coordinates(const RID particles, const bool enable) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_particles_set_use_local_coordinates,
        (const Object*)this,
        particles,
        enable
    );
}

RID VisualServer::reflection_probe_create() {
    return rebel_icall_rid(
        method_bindings.mb_reflection_probe_create,
        (const Object*)this
    );
}

void VisualServer::reflection_probe_set_as_interior(const RID probe, const bool enable) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_reflection_probe_set_as_interior,
        (const Object*)this,
        probe,
        enable
    );
}

void VisualServer::reflection_probe_set_cull_mask(const RID probe, const int64_t layers) {
    rebel_icall_void_rid_int(
        method_bindings.mb_reflection_probe_set_cull_mask,
        (const Object*)this,
        probe,
        layers
    );
}

void VisualServer::reflection_probe_set_enable_box_projection(const RID probe, const bool enable) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_reflection_probe_set_enable_box_projection,
        (const Object*)this,
        probe,
        enable
    );
}

void VisualServer::reflection_probe_set_enable_shadows(const RID probe, const bool enable) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_reflection_probe_set_enable_shadows,
        (const Object*)this,
        probe,
        enable
    );
}

void VisualServer::reflection_probe_set_extents(const RID probe, const Vector3 extents) {
    rebel_icall_void_rid_vector3(
        method_bindings.mb_reflection_probe_set_extents,
        (const Object*)this,
        probe,
        extents
    );
}

void VisualServer::reflection_probe_set_intensity(const RID probe, const real_t intensity) {
    rebel_icall_void_rid_float(
        method_bindings.mb_reflection_probe_set_intensity,
        (const Object*)this,
        probe,
        intensity
    );
}

void VisualServer::reflection_probe_set_interior_ambient(const RID probe, const Color color) {
    rebel_icall_void_rid_color(
        method_bindings.mb_reflection_probe_set_interior_ambient,
        (const Object*)this,
        probe,
        color
    );
}

void VisualServer::reflection_probe_set_interior_ambient_energy(const RID probe, const real_t energy) {
    rebel_icall_void_rid_float(
        method_bindings.mb_reflection_probe_set_interior_ambient_energy,
        (const Object*)this,
        probe,
        energy
    );
}

void VisualServer::reflection_probe_set_interior_ambient_probe_contribution(const RID probe, const real_t contrib) {
    rebel_icall_void_rid_float(
        method_bindings.mb_reflection_probe_set_interior_ambient_probe_contribution,
        (const Object*)this,
        probe,
        contrib
    );
}

void VisualServer::reflection_probe_set_max_distance(const RID probe, const real_t distance) {
    rebel_icall_void_rid_float(
        method_bindings.mb_reflection_probe_set_max_distance,
        (const Object*)this,
        probe,
        distance
    );
}

void VisualServer::reflection_probe_set_origin_offset(const RID probe, const Vector3 offset) {
    rebel_icall_void_rid_vector3(
        method_bindings.mb_reflection_probe_set_origin_offset,
        (const Object*)this,
        probe,
        offset
    );
}

void VisualServer::reflection_probe_set_update_mode(const RID probe, const int64_t mode) {
    rebel_icall_void_rid_int(
        method_bindings.mb_reflection_probe_set_update_mode,
        (const Object*)this,
        probe,
        mode
    );
}

void VisualServer::request_frame_drawn_callback(const Object* where, const String method, const Variant userdata) {
    rebel_icall_void_object_string_variant(
        method_bindings.mb_request_frame_drawn_callback,
        (const Object*)this,
        where,
        method,
        userdata
    );
}

RID VisualServer::scenario_create() {
    return rebel_icall_rid(
        method_bindings.mb_scenario_create,
        (const Object*)this
    );
}

void VisualServer::scenario_set_debug(const RID scenario, const int64_t debug_mode) {
    rebel_icall_void_rid_int(
        method_bindings.mb_scenario_set_debug,
        (const Object*)this,
        scenario,
        debug_mode
    );
}

void VisualServer::scenario_set_environment(const RID scenario, const RID environment) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_scenario_set_environment,
        (const Object*)this,
        scenario,
        environment
    );
}

void VisualServer::scenario_set_fallback_environment(const RID scenario, const RID environment) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_scenario_set_fallback_environment,
        (const Object*)this,
        scenario,
        environment
    );
}

void VisualServer::scenario_set_reflection_atlas_size(const RID scenario, const int64_t size, const int64_t subdiv) {
    rebel_icall_void_rid_int_int(
        method_bindings.mb_scenario_set_reflection_atlas_size,
        (const Object*)this,
        scenario,
        size,
        subdiv
    );
}

void VisualServer::set_boot_image(const Ref<Image> image, const Color color, const bool scale, const bool use_filter) {
    rebel_icall_void_object_color_bool_bool(
        method_bindings.mb_set_boot_image,
        (const Object*)this,
        image.ptr(),
        color,
        scale,
        use_filter
    );
}

void VisualServer::set_debug_generate_wireframes(const bool generate) {
    rebel_icall_void_bool(
        method_bindings.mb_set_debug_generate_wireframes,
        (const Object*)this,
        generate
    );
}

void VisualServer::set_default_clear_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_default_clear_color,
        (const Object*)this,
        color
    );
}

void VisualServer::set_render_loop_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_render_loop_enabled,
        (const Object*)this,
        enabled
    );
}

void VisualServer::set_shader_time_scale(const real_t scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_shader_time_scale,
        (const Object*)this,
        scale
    );
}

void VisualServer::set_use_occlusion_culling(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_occlusion_culling,
        (const Object*)this,
        enable
    );
}

RID VisualServer::shader_create() {
    return rebel_icall_rid(
        method_bindings.mb_shader_create,
        (const Object*)this
    );
}

String VisualServer::shader_get_code(const RID shader) const {
    return rebel_icall_string_rid(
        method_bindings.mb_shader_get_code,
        (const Object*)this,
        shader
    );
}

RID VisualServer::shader_get_default_texture_param(const RID shader, const String name) const {
    return rebel_icall_rid_rid_string(
        method_bindings.mb_shader_get_default_texture_param,
        (const Object*)this,
        shader,
        name
    );
}

Array VisualServer::shader_get_param_list(const RID shader) const {
    return rebel_icall_array_rid(
        method_bindings.mb_shader_get_param_list,
        (const Object*)this,
        shader
    );
}

void VisualServer::shader_set_code(const RID shader, const String code) {
    rebel_icall_void_rid_string(
        method_bindings.mb_shader_set_code,
        (const Object*)this,
        shader,
        code
    );
}

void VisualServer::shader_set_default_texture_param(const RID shader, const String name, const RID texture) {
    rebel_icall_void_rid_string_rid(
        method_bindings.mb_shader_set_default_texture_param,
        (const Object*)this,
        shader,
        name,
        texture
    );
}

void VisualServer::skeleton_allocate(const RID skeleton, const int64_t bones, const bool is_2d_skeleton) {
    rebel_icall_void_rid_int_bool(
        method_bindings.mb_skeleton_allocate,
        (const Object*)this,
        skeleton,
        bones,
        is_2d_skeleton
    );
}

Transform VisualServer::skeleton_bone_get_transform(const RID skeleton, const int64_t bone) const {
    return rebel_icall_transform_rid_int(
        method_bindings.mb_skeleton_bone_get_transform,
        (const Object*)this,
        skeleton,
        bone
    );
}

Transform2D VisualServer::skeleton_bone_get_transform_2d(const RID skeleton, const int64_t bone) const {
    return rebel_icall_transform2d_rid_int(
        method_bindings.mb_skeleton_bone_get_transform_2d,
        (const Object*)this,
        skeleton,
        bone
    );
}

void VisualServer::skeleton_bone_set_transform(const RID skeleton, const int64_t bone, const Transform transform) {
    rebel_icall_void_rid_int_transform(
        method_bindings.mb_skeleton_bone_set_transform,
        (const Object*)this,
        skeleton,
        bone,
        transform
    );
}

void VisualServer::skeleton_bone_set_transform_2d(const RID skeleton, const int64_t bone, const Transform2D transform) {
    rebel_icall_void_rid_int_transform2d(
        method_bindings.mb_skeleton_bone_set_transform_2d,
        (const Object*)this,
        skeleton,
        bone,
        transform
    );
}

RID VisualServer::skeleton_create() {
    return rebel_icall_rid(
        method_bindings.mb_skeleton_create,
        (const Object*)this
    );
}

int64_t VisualServer::skeleton_get_bone_count(const RID skeleton) const {
    return rebel_icall_int_rid(
        method_bindings.mb_skeleton_get_bone_count,
        (const Object*)this,
        skeleton
    );
}

RID VisualServer::sky_create() {
    return rebel_icall_rid(
        method_bindings.mb_sky_create,
        (const Object*)this
    );
}

void VisualServer::sky_set_texture(const RID sky, const RID cube_map, const int64_t radiance_size) {
    rebel_icall_void_rid_rid_int(
        method_bindings.mb_sky_set_texture,
        (const Object*)this,
        sky,
        cube_map,
        radiance_size
    );
}

RID VisualServer::spot_light_create() {
    return rebel_icall_rid(
        method_bindings.mb_spot_light_create,
        (const Object*)this
    );
}

void VisualServer::sync() {
    rebel_icall_void(
        method_bindings.mb_sync,
        (const Object*)this
    );
}

void VisualServer::texture_allocate(const RID texture, const int64_t width, const int64_t height, const int64_t depth_3d, const int64_t format, const int64_t type, const int64_t flags) {
    rebel_icall_void_rid_int_int_int_int_int_int(
        method_bindings.mb_texture_allocate,
        (const Object*)this,
        texture,
        width,
        height,
        depth_3d,
        format,
        type,
        flags
    );
}

void VisualServer::texture_bind(const RID texture, const int64_t number) {
    rebel_icall_void_rid_int(
        method_bindings.mb_texture_bind,
        (const Object*)this,
        texture,
        number
    );
}

RID VisualServer::texture_create() {
    return rebel_icall_rid(
        method_bindings.mb_texture_create,
        (const Object*)this
    );
}

RID VisualServer::texture_create_from_image(const Ref<Image> image, const int64_t flags) {
    return rebel_icall_rid_object_int(
        method_bindings.mb_texture_create_from_image,
        (const Object*)this,
        image.ptr(),
        flags
    );
}

Array VisualServer::texture_debug_usage() {
    return rebel_icall_array(
        method_bindings.mb_texture_debug_usage,
        (const Object*)this
    );
}

Ref<Image> VisualServer::texture_get_data(const RID texture, const int64_t cube_side) const {
    return Ref<Image>::create_ref(rebel_icall_object_rid_int(
        method_bindings.mb_texture_get_data,
        (const Object*)this,
        texture,
        cube_side
    ));
}

int64_t VisualServer::texture_get_depth(const RID texture) const {
    return rebel_icall_int_rid(
        method_bindings.mb_texture_get_depth,
        (const Object*)this,
        texture
    );
}

int64_t VisualServer::texture_get_flags(const RID texture) const {
    return rebel_icall_int_rid(
        method_bindings.mb_texture_get_flags,
        (const Object*)this,
        texture
    );
}

Image::Format VisualServer::texture_get_format(const RID texture) const {
    return (Image::Format)rebel_icall_int_rid(
        method_bindings.mb_texture_get_format,
        (const Object*)this,
        texture
    );
}

int64_t VisualServer::texture_get_height(const RID texture) const {
    return rebel_icall_int_rid(
        method_bindings.mb_texture_get_height,
        (const Object*)this,
        texture
    );
}

String VisualServer::texture_get_path(const RID texture) const {
    return rebel_icall_string_rid(
        method_bindings.mb_texture_get_path,
        (const Object*)this,
        texture
    );
}

int64_t VisualServer::texture_get_texid(const RID texture) const {
    return rebel_icall_int_rid(
        method_bindings.mb_texture_get_texid,
        (const Object*)this,
        texture
    );
}

VisualServer::TextureType VisualServer::texture_get_type(const RID texture) const {
    return (VisualServer::TextureType)rebel_icall_int_rid(
        method_bindings.mb_texture_get_type,
        (const Object*)this,
        texture
    );
}

int64_t VisualServer::texture_get_width(const RID texture) const {
    return rebel_icall_int_rid(
        method_bindings.mb_texture_get_width,
        (const Object*)this,
        texture
    );
}

void VisualServer::texture_set_data(const RID texture, const Ref<Image> image, const int64_t layer) {
    rebel_icall_void_rid_object_int(
        method_bindings.mb_texture_set_data,
        (const Object*)this,
        texture,
        image.ptr(),
        layer
    );
}

void VisualServer::texture_set_data_partial(const RID texture, const Ref<Image> image, const int64_t src_x, const int64_t src_y, const int64_t src_w, const int64_t src_h, const int64_t dst_x, const int64_t dst_y, const int64_t dst_mip, const int64_t layer) {
    rebel_icall_void_rid_object_int_int_int_int_int_int_int_int(
        method_bindings.mb_texture_set_data_partial,
        (const Object*)this,
        texture,
        image.ptr(),
        src_x,
        src_y,
        src_w,
        src_h,
        dst_x,
        dst_y,
        dst_mip,
        layer
    );
}

void VisualServer::texture_set_flags(const RID texture, const int64_t flags) {
    rebel_icall_void_rid_int(
        method_bindings.mb_texture_set_flags,
        (const Object*)this,
        texture,
        flags
    );
}

void VisualServer::texture_set_path(const RID texture, const String path) {
    rebel_icall_void_rid_string(
        method_bindings.mb_texture_set_path,
        (const Object*)this,
        texture,
        path
    );
}

void VisualServer::texture_set_shrink_all_x2_on_set_data(const bool shrink) {
    rebel_icall_void_bool(
        method_bindings.mb_texture_set_shrink_all_x2_on_set_data,
        (const Object*)this,
        shrink
    );
}

void VisualServer::texture_set_size_override(const RID texture, const int64_t width, const int64_t height, const int64_t depth) {
    rebel_icall_void_rid_int_int_int(
        method_bindings.mb_texture_set_size_override,
        (const Object*)this,
        texture,
        width,
        height,
        depth
    );
}

void VisualServer::textures_keep_original(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_textures_keep_original,
        (const Object*)this,
        enable
    );
}

void VisualServer::viewport_attach_camera(const RID viewport, const RID camera) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_viewport_attach_camera,
        (const Object*)this,
        viewport,
        camera
    );
}

void VisualServer::viewport_attach_canvas(const RID viewport, const RID canvas) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_viewport_attach_canvas,
        (const Object*)this,
        viewport,
        canvas
    );
}

void VisualServer::viewport_attach_to_screen(const RID viewport, const Rect2 rect, const int64_t screen) {
    rebel_icall_void_rid_rect2_int(
        method_bindings.mb_viewport_attach_to_screen,
        (const Object*)this,
        viewport,
        rect,
        screen
    );
}

RID VisualServer::viewport_create() {
    return rebel_icall_rid(
        method_bindings.mb_viewport_create,
        (const Object*)this
    );
}

void VisualServer::viewport_detach(const RID viewport) {
    rebel_icall_void_rid(
        method_bindings.mb_viewport_detach,
        (const Object*)this,
        viewport
    );
}

int64_t VisualServer::viewport_get_render_info(const RID viewport, const int64_t info) {
    return rebel_icall_int_rid_int(
        method_bindings.mb_viewport_get_render_info,
        (const Object*)this,
        viewport,
        info
    );
}

RID VisualServer::viewport_get_texture(const RID viewport) const {
    return rebel_icall_rid_rid(
        method_bindings.mb_viewport_get_texture,
        (const Object*)this,
        viewport
    );
}

void VisualServer::viewport_remove_canvas(const RID viewport, const RID canvas) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_viewport_remove_canvas,
        (const Object*)this,
        viewport,
        canvas
    );
}

void VisualServer::viewport_set_active(const RID viewport, const bool active) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_viewport_set_active,
        (const Object*)this,
        viewport,
        active
    );
}

void VisualServer::viewport_set_canvas_stacking(const RID viewport, const RID canvas, const int64_t layer, const int64_t sublayer) {
    rebel_icall_void_rid_rid_int_int(
        method_bindings.mb_viewport_set_canvas_stacking,
        (const Object*)this,
        viewport,
        canvas,
        layer,
        sublayer
    );
}

void VisualServer::viewport_set_canvas_transform(const RID viewport, const RID canvas, const Transform2D offset) {
    rebel_icall_void_rid_rid_transform2d(
        method_bindings.mb_viewport_set_canvas_transform,
        (const Object*)this,
        viewport,
        canvas,
        offset
    );
}

void VisualServer::viewport_set_clear_mode(const RID viewport, const int64_t clear_mode) {
    rebel_icall_void_rid_int(
        method_bindings.mb_viewport_set_clear_mode,
        (const Object*)this,
        viewport,
        clear_mode
    );
}

void VisualServer::viewport_set_debug_draw(const RID viewport, const int64_t draw) {
    rebel_icall_void_rid_int(
        method_bindings.mb_viewport_set_debug_draw,
        (const Object*)this,
        viewport,
        draw
    );
}

void VisualServer::viewport_set_disable_3d(const RID viewport, const bool disabled) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_viewport_set_disable_3d,
        (const Object*)this,
        viewport,
        disabled
    );
}

void VisualServer::viewport_set_disable_environment(const RID viewport, const bool disabled) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_viewport_set_disable_environment,
        (const Object*)this,
        viewport,
        disabled
    );
}

void VisualServer::viewport_set_global_canvas_transform(const RID viewport, const Transform2D transform) {
    rebel_icall_void_rid_transform2d(
        method_bindings.mb_viewport_set_global_canvas_transform,
        (const Object*)this,
        viewport,
        transform
    );
}

void VisualServer::viewport_set_hdr(const RID viewport, const bool enabled) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_viewport_set_hdr,
        (const Object*)this,
        viewport,
        enabled
    );
}

void VisualServer::viewport_set_hide_canvas(const RID viewport, const bool hidden) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_viewport_set_hide_canvas,
        (const Object*)this,
        viewport,
        hidden
    );
}

void VisualServer::viewport_set_hide_scenario(const RID viewport, const bool hidden) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_viewport_set_hide_scenario,
        (const Object*)this,
        viewport,
        hidden
    );
}

void VisualServer::viewport_set_msaa(const RID viewport, const int64_t msaa) {
    rebel_icall_void_rid_int(
        method_bindings.mb_viewport_set_msaa,
        (const Object*)this,
        viewport,
        msaa
    );
}

void VisualServer::viewport_set_parent_viewport(const RID viewport, const RID parent_viewport) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_viewport_set_parent_viewport,
        (const Object*)this,
        viewport,
        parent_viewport
    );
}

void VisualServer::viewport_set_render_direct_to_screen(const RID viewport, const bool enabled) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_viewport_set_render_direct_to_screen,
        (const Object*)this,
        viewport,
        enabled
    );
}

void VisualServer::viewport_set_scenario(const RID viewport, const RID scenario) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_viewport_set_scenario,
        (const Object*)this,
        viewport,
        scenario
    );
}

void VisualServer::viewport_set_shadow_atlas_quadrant_subdivision(const RID viewport, const int64_t quadrant, const int64_t subdivision) {
    rebel_icall_void_rid_int_int(
        method_bindings.mb_viewport_set_shadow_atlas_quadrant_subdivision,
        (const Object*)this,
        viewport,
        quadrant,
        subdivision
    );
}

void VisualServer::viewport_set_shadow_atlas_size(const RID viewport, const int64_t size) {
    rebel_icall_void_rid_int(
        method_bindings.mb_viewport_set_shadow_atlas_size,
        (const Object*)this,
        viewport,
        size
    );
}

void VisualServer::viewport_set_sharpen_intensity(const RID viewport, const real_t intensity) {
    rebel_icall_void_rid_float(
        method_bindings.mb_viewport_set_sharpen_intensity,
        (const Object*)this,
        viewport,
        intensity
    );
}

void VisualServer::viewport_set_size(const RID viewport, const int64_t width, const int64_t height) {
    rebel_icall_void_rid_int_int(
        method_bindings.mb_viewport_set_size,
        (const Object*)this,
        viewport,
        width,
        height
    );
}

void VisualServer::viewport_set_transparent_background(const RID viewport, const bool enabled) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_viewport_set_transparent_background,
        (const Object*)this,
        viewport,
        enabled
    );
}

void VisualServer::viewport_set_update_mode(const RID viewport, const int64_t update_mode) {
    rebel_icall_void_rid_int(
        method_bindings.mb_viewport_set_update_mode,
        (const Object*)this,
        viewport,
        update_mode
    );
}

void VisualServer::viewport_set_usage(const RID viewport, const int64_t usage) {
    rebel_icall_void_rid_int(
        method_bindings.mb_viewport_set_usage,
        (const Object*)this,
        viewport,
        usage
    );
}

void VisualServer::viewport_set_use_arvr(const RID viewport, const bool use_arvr) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_viewport_set_use_arvr,
        (const Object*)this,
        viewport,
        use_arvr
    );
}

void VisualServer::viewport_set_use_debanding(const RID viewport, const bool debanding) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_viewport_set_use_debanding,
        (const Object*)this,
        viewport,
        debanding
    );
}

void VisualServer::viewport_set_use_fxaa(const RID viewport, const bool fxaa) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_viewport_set_use_fxaa,
        (const Object*)this,
        viewport,
        fxaa
    );
}

void VisualServer::viewport_set_vflip(const RID viewport, const bool enabled) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_viewport_set_vflip,
        (const Object*)this,
        viewport,
        enabled
    );
}

VisualServer* VisualServer::singleton = nullptr;

VisualServer::VisualServer() {
    owner = api->rebel_global_get_singleton((char*) "VisualServer");
}

void VisualServer::init_method_bindings() {
    method_bindings.mb_black_bars_set_images =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "black_bars_set_images"
        );
    method_bindings.mb_black_bars_set_margins =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "black_bars_set_margins"
        );
    method_bindings.mb_camera_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "camera_create"
        );
    method_bindings.mb_camera_set_cull_mask =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "camera_set_cull_mask"
        );
    method_bindings.mb_camera_set_environment =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "camera_set_environment"
        );
    method_bindings.mb_camera_set_frustum =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "camera_set_frustum"
        );
    method_bindings.mb_camera_set_orthogonal =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "camera_set_orthogonal"
        );
    method_bindings.mb_camera_set_perspective =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "camera_set_perspective"
        );
    method_bindings.mb_camera_set_transform =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "camera_set_transform"
        );
    method_bindings.mb_camera_set_use_vertical_aspect =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "camera_set_use_vertical_aspect"
        );
    method_bindings.mb_canvas_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_create"
        );
    method_bindings.mb_canvas_item_add_circle =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_add_circle"
        );
    method_bindings.mb_canvas_item_add_clip_ignore =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_add_clip_ignore"
        );
    method_bindings.mb_canvas_item_add_line =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_add_line"
        );
    method_bindings.mb_canvas_item_add_mesh =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_add_mesh"
        );
    method_bindings.mb_canvas_item_add_multimesh =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_add_multimesh"
        );
    method_bindings.mb_canvas_item_add_nine_patch =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_add_nine_patch"
        );
    method_bindings.mb_canvas_item_add_particles =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_add_particles"
        );
    method_bindings.mb_canvas_item_add_polygon =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_add_polygon"
        );
    method_bindings.mb_canvas_item_add_polyline =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_add_polyline"
        );
    method_bindings.mb_canvas_item_add_primitive =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_add_primitive"
        );
    method_bindings.mb_canvas_item_add_rect =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_add_rect"
        );
    method_bindings.mb_canvas_item_add_set_transform =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_add_set_transform"
        );
    method_bindings.mb_canvas_item_add_texture_rect =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_add_texture_rect"
        );
    method_bindings.mb_canvas_item_add_texture_rect_region =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_add_texture_rect_region"
        );
    method_bindings.mb_canvas_item_add_triangle_array =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_add_triangle_array"
        );
    method_bindings.mb_canvas_item_clear =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_clear"
        );
    method_bindings.mb_canvas_item_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_create"
        );
    method_bindings.mb_canvas_item_set_clip =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_set_clip"
        );
    method_bindings.mb_canvas_item_set_copy_to_backbuffer =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_set_copy_to_backbuffer"
        );
    method_bindings.mb_canvas_item_set_custom_rect =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_set_custom_rect"
        );
    method_bindings.mb_canvas_item_set_distance_field_mode =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_set_distance_field_mode"
        );
    method_bindings.mb_canvas_item_set_draw_behind_parent =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_set_draw_behind_parent"
        );
    method_bindings.mb_canvas_item_set_draw_index =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_set_draw_index"
        );
    method_bindings.mb_canvas_item_set_light_mask =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_set_light_mask"
        );
    method_bindings.mb_canvas_item_set_material =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_set_material"
        );
    method_bindings.mb_canvas_item_set_modulate =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_set_modulate"
        );
    method_bindings.mb_canvas_item_set_parent =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_set_parent"
        );
    method_bindings.mb_canvas_item_set_self_modulate =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_set_self_modulate"
        );
    method_bindings.mb_canvas_item_set_sort_children_by_y =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_set_sort_children_by_y"
        );
    method_bindings.mb_canvas_item_set_transform =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_set_transform"
        );
    method_bindings.mb_canvas_item_set_use_parent_material =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_set_use_parent_material"
        );
    method_bindings.mb_canvas_item_set_visible =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_set_visible"
        );
    method_bindings.mb_canvas_item_set_z_as_relative_to_parent =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_set_z_as_relative_to_parent"
        );
    method_bindings.mb_canvas_item_set_z_index =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_item_set_z_index"
        );
    method_bindings.mb_canvas_light_attach_to_canvas =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_attach_to_canvas"
        );
    method_bindings.mb_canvas_light_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_create"
        );
    method_bindings.mb_canvas_light_occluder_attach_to_canvas =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_occluder_attach_to_canvas"
        );
    method_bindings.mb_canvas_light_occluder_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_occluder_create"
        );
    method_bindings.mb_canvas_light_occluder_set_enabled =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_occluder_set_enabled"
        );
    method_bindings.mb_canvas_light_occluder_set_light_mask =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_occluder_set_light_mask"
        );
    method_bindings.mb_canvas_light_occluder_set_polygon =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_occluder_set_polygon"
        );
    method_bindings.mb_canvas_light_occluder_set_transform =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_occluder_set_transform"
        );
    method_bindings.mb_canvas_light_set_color =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_set_color"
        );
    method_bindings.mb_canvas_light_set_enabled =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_set_enabled"
        );
    method_bindings.mb_canvas_light_set_energy =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_set_energy"
        );
    method_bindings.mb_canvas_light_set_height =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_set_height"
        );
    method_bindings.mb_canvas_light_set_item_cull_mask =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_set_item_cull_mask"
        );
    method_bindings.mb_canvas_light_set_item_shadow_cull_mask =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_set_item_shadow_cull_mask"
        );
    method_bindings.mb_canvas_light_set_layer_range =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_set_layer_range"
        );
    method_bindings.mb_canvas_light_set_mode =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_set_mode"
        );
    method_bindings.mb_canvas_light_set_scale =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_set_scale"
        );
    method_bindings.mb_canvas_light_set_shadow_buffer_size =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_set_shadow_buffer_size"
        );
    method_bindings.mb_canvas_light_set_shadow_color =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_set_shadow_color"
        );
    method_bindings.mb_canvas_light_set_shadow_enabled =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_set_shadow_enabled"
        );
    method_bindings.mb_canvas_light_set_shadow_filter =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_set_shadow_filter"
        );
    method_bindings.mb_canvas_light_set_shadow_gradient_length =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_set_shadow_gradient_length"
        );
    method_bindings.mb_canvas_light_set_shadow_smooth =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_set_shadow_smooth"
        );
    method_bindings.mb_canvas_light_set_texture =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_set_texture"
        );
    method_bindings.mb_canvas_light_set_texture_offset =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_set_texture_offset"
        );
    method_bindings.mb_canvas_light_set_transform =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_set_transform"
        );
    method_bindings.mb_canvas_light_set_z_range =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_light_set_z_range"
        );
    method_bindings.mb_canvas_occluder_polygon_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_occluder_polygon_create"
        );
    method_bindings.mb_canvas_occluder_polygon_set_cull_mode =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_occluder_polygon_set_cull_mode"
        );
    method_bindings.mb_canvas_occluder_polygon_set_shape =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_occluder_polygon_set_shape"
        );
    method_bindings.mb_canvas_occluder_polygon_set_shape_as_lines =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_occluder_polygon_set_shape_as_lines"
        );
    method_bindings.mb_canvas_set_item_mirroring =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_set_item_mirroring"
        );
    method_bindings.mb_canvas_set_modulate =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "canvas_set_modulate"
        );
    method_bindings.mb_directional_light_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "directional_light_create"
        );
    method_bindings.mb_draw =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "draw"
        );
    method_bindings.mb_environment_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "environment_create"
        );
    method_bindings.mb_environment_set_adjustment =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "environment_set_adjustment"
        );
    method_bindings.mb_environment_set_ambient_light =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "environment_set_ambient_light"
        );
    method_bindings.mb_environment_set_background =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "environment_set_background"
        );
    method_bindings.mb_environment_set_bg_color =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "environment_set_bg_color"
        );
    method_bindings.mb_environment_set_bg_energy =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "environment_set_bg_energy"
        );
    method_bindings.mb_environment_set_canvas_max_layer =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "environment_set_canvas_max_layer"
        );
    method_bindings.mb_environment_set_dof_blur_far =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "environment_set_dof_blur_far"
        );
    method_bindings.mb_environment_set_dof_blur_near =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "environment_set_dof_blur_near"
        );
    method_bindings.mb_environment_set_fog =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "environment_set_fog"
        );
    method_bindings.mb_environment_set_fog_depth =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "environment_set_fog_depth"
        );
    method_bindings.mb_environment_set_fog_height =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "environment_set_fog_height"
        );
    method_bindings.mb_environment_set_glow =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "environment_set_glow"
        );
    method_bindings.mb_environment_set_sky =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "environment_set_sky"
        );
    method_bindings.mb_environment_set_sky_custom_fov =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "environment_set_sky_custom_fov"
        );
    method_bindings.mb_environment_set_sky_orientation =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "environment_set_sky_orientation"
        );
    method_bindings.mb_environment_set_ssao =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "environment_set_ssao"
        );
    method_bindings.mb_environment_set_ssr =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "environment_set_ssr"
        );
    method_bindings.mb_environment_set_tonemap =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "environment_set_tonemap"
        );
    method_bindings.mb_finish =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "finish"
        );
    method_bindings.mb_force_draw =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "force_draw"
        );
    method_bindings.mb_force_sync =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "force_sync"
        );
    method_bindings.mb_free_rid =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "free_rid"
        );
    method_bindings.mb_get_render_info =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "get_render_info"
        );
    method_bindings.mb_get_test_cube =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "get_test_cube"
        );
    method_bindings.mb_get_test_texture =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "get_test_texture"
        );
    method_bindings.mb_get_video_adapter_name =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "get_video_adapter_name"
        );
    method_bindings.mb_get_video_adapter_vendor =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "get_video_adapter_vendor"
        );
    method_bindings.mb_get_white_texture =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "get_white_texture"
        );
    method_bindings.mb_gi_probe_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_create"
        );
    method_bindings.mb_gi_probe_get_bias =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_get_bias"
        );
    method_bindings.mb_gi_probe_get_bounds =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_get_bounds"
        );
    method_bindings.mb_gi_probe_get_cell_size =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_get_cell_size"
        );
    method_bindings.mb_gi_probe_get_dynamic_data =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_get_dynamic_data"
        );
    method_bindings.mb_gi_probe_get_dynamic_range =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_get_dynamic_range"
        );
    method_bindings.mb_gi_probe_get_energy =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_get_energy"
        );
    method_bindings.mb_gi_probe_get_normal_bias =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_get_normal_bias"
        );
    method_bindings.mb_gi_probe_get_propagation =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_get_propagation"
        );
    method_bindings.mb_gi_probe_get_to_cell_xform =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_get_to_cell_xform"
        );
    method_bindings.mb_gi_probe_is_compressed =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_is_compressed"
        );
    method_bindings.mb_gi_probe_is_interior =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_is_interior"
        );
    method_bindings.mb_gi_probe_set_bias =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_set_bias"
        );
    method_bindings.mb_gi_probe_set_bounds =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_set_bounds"
        );
    method_bindings.mb_gi_probe_set_cell_size =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_set_cell_size"
        );
    method_bindings.mb_gi_probe_set_compress =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_set_compress"
        );
    method_bindings.mb_gi_probe_set_dynamic_data =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_set_dynamic_data"
        );
    method_bindings.mb_gi_probe_set_dynamic_range =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_set_dynamic_range"
        );
    method_bindings.mb_gi_probe_set_energy =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_set_energy"
        );
    method_bindings.mb_gi_probe_set_interior =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_set_interior"
        );
    method_bindings.mb_gi_probe_set_normal_bias =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_set_normal_bias"
        );
    method_bindings.mb_gi_probe_set_propagation =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_set_propagation"
        );
    method_bindings.mb_gi_probe_set_to_cell_xform =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "gi_probe_set_to_cell_xform"
        );
    method_bindings.mb_has_changed =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "has_changed"
        );
    method_bindings.mb_has_feature =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "has_feature"
        );
    method_bindings.mb_has_os_feature =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "has_os_feature"
        );
    method_bindings.mb_immediate_begin =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "immediate_begin"
        );
    method_bindings.mb_immediate_clear =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "immediate_clear"
        );
    method_bindings.mb_immediate_color =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "immediate_color"
        );
    method_bindings.mb_immediate_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "immediate_create"
        );
    method_bindings.mb_immediate_end =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "immediate_end"
        );
    method_bindings.mb_immediate_get_material =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "immediate_get_material"
        );
    method_bindings.mb_immediate_normal =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "immediate_normal"
        );
    method_bindings.mb_immediate_set_material =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "immediate_set_material"
        );
    method_bindings.mb_immediate_tangent =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "immediate_tangent"
        );
    method_bindings.mb_immediate_uv =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "immediate_uv"
        );
    method_bindings.mb_immediate_uv2 =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "immediate_uv2"
        );
    method_bindings.mb_immediate_vertex =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "immediate_vertex"
        );
    method_bindings.mb_immediate_vertex_2d =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "immediate_vertex_2d"
        );
    method_bindings.mb_init =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "init"
        );
    method_bindings.mb_instance_attach_object_instance_id =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_attach_object_instance_id"
        );
    method_bindings.mb_instance_attach_skeleton =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_attach_skeleton"
        );
    method_bindings.mb_instance_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_create"
        );
    method_bindings.mb_instance_create2 =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_create2"
        );
    method_bindings.mb_instance_geometry_set_as_instance_lod =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_geometry_set_as_instance_lod"
        );
    method_bindings.mb_instance_geometry_set_cast_shadows_setting =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_geometry_set_cast_shadows_setting"
        );
    method_bindings.mb_instance_geometry_set_draw_range =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_geometry_set_draw_range"
        );
    method_bindings.mb_instance_geometry_set_flag =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_geometry_set_flag"
        );
    method_bindings.mb_instance_geometry_set_material_override =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_geometry_set_material_override"
        );
    method_bindings.mb_instance_set_base =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_set_base"
        );
    method_bindings.mb_instance_set_blend_shape_weight =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_set_blend_shape_weight"
        );
    method_bindings.mb_instance_set_custom_aabb =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_set_custom_aabb"
        );
    method_bindings.mb_instance_set_exterior =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_set_exterior"
        );
    method_bindings.mb_instance_set_extra_visibility_margin =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_set_extra_visibility_margin"
        );
    method_bindings.mb_instance_set_layer_mask =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_set_layer_mask"
        );
    method_bindings.mb_instance_set_scenario =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_set_scenario"
        );
    method_bindings.mb_instance_set_surface_material =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_set_surface_material"
        );
    method_bindings.mb_instance_set_transform =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_set_transform"
        );
    method_bindings.mb_instance_set_use_lightmap =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_set_use_lightmap"
        );
    method_bindings.mb_instance_set_visible =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instance_set_visible"
        );
    method_bindings.mb_instances_cull_aabb =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instances_cull_aabb"
        );
    method_bindings.mb_instances_cull_convex =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instances_cull_convex"
        );
    method_bindings.mb_instances_cull_ray =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "instances_cull_ray"
        );
    method_bindings.mb_is_render_loop_enabled =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "is_render_loop_enabled"
        );
    method_bindings.mb_light_directional_set_blend_splits =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "light_directional_set_blend_splits"
        );
    method_bindings.mb_light_directional_set_shadow_depth_range_mode =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "light_directional_set_shadow_depth_range_mode"
        );
    method_bindings.mb_light_directional_set_shadow_mode =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "light_directional_set_shadow_mode"
        );
    method_bindings.mb_light_omni_set_shadow_detail =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "light_omni_set_shadow_detail"
        );
    method_bindings.mb_light_omni_set_shadow_mode =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "light_omni_set_shadow_mode"
        );
    method_bindings.mb_light_set_bake_mode =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "light_set_bake_mode"
        );
    method_bindings.mb_light_set_color =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "light_set_color"
        );
    method_bindings.mb_light_set_cull_mask =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "light_set_cull_mask"
        );
    method_bindings.mb_light_set_negative =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "light_set_negative"
        );
    method_bindings.mb_light_set_param =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "light_set_param"
        );
    method_bindings.mb_light_set_projector =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "light_set_projector"
        );
    method_bindings.mb_light_set_reverse_cull_face_mode =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "light_set_reverse_cull_face_mode"
        );
    method_bindings.mb_light_set_shadow =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "light_set_shadow"
        );
    method_bindings.mb_light_set_shadow_color =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "light_set_shadow_color"
        );
    method_bindings.mb_light_set_use_gi =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "light_set_use_gi"
        );
    method_bindings.mb_lightmap_capture_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "lightmap_capture_create"
        );
    method_bindings.mb_lightmap_capture_get_bounds =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "lightmap_capture_get_bounds"
        );
    method_bindings.mb_lightmap_capture_get_energy =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "lightmap_capture_get_energy"
        );
    method_bindings.mb_lightmap_capture_get_octree =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "lightmap_capture_get_octree"
        );
    method_bindings.mb_lightmap_capture_get_octree_cell_subdiv =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "lightmap_capture_get_octree_cell_subdiv"
        );
    method_bindings.mb_lightmap_capture_get_octree_cell_transform =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "lightmap_capture_get_octree_cell_transform"
        );
    method_bindings.mb_lightmap_capture_is_interior =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "lightmap_capture_is_interior"
        );
    method_bindings.mb_lightmap_capture_set_bounds =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "lightmap_capture_set_bounds"
        );
    method_bindings.mb_lightmap_capture_set_energy =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "lightmap_capture_set_energy"
        );
    method_bindings.mb_lightmap_capture_set_interior =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "lightmap_capture_set_interior"
        );
    method_bindings.mb_lightmap_capture_set_octree =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "lightmap_capture_set_octree"
        );
    method_bindings.mb_lightmap_capture_set_octree_cell_subdiv =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "lightmap_capture_set_octree_cell_subdiv"
        );
    method_bindings.mb_lightmap_capture_set_octree_cell_transform =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "lightmap_capture_set_octree_cell_transform"
        );
    method_bindings.mb_make_sphere_mesh =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "make_sphere_mesh"
        );
    method_bindings.mb_material_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "material_create"
        );
    method_bindings.mb_material_get_param =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "material_get_param"
        );
    method_bindings.mb_material_get_param_default =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "material_get_param_default"
        );
    method_bindings.mb_material_get_shader =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "material_get_shader"
        );
    method_bindings.mb_material_set_line_width =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "material_set_line_width"
        );
    method_bindings.mb_material_set_next_pass =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "material_set_next_pass"
        );
    method_bindings.mb_material_set_param =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "material_set_param"
        );
    method_bindings.mb_material_set_render_priority =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "material_set_render_priority"
        );
    method_bindings.mb_material_set_shader =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "material_set_shader"
        );
    method_bindings.mb_mesh_add_surface_from_arrays =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_add_surface_from_arrays"
        );
    method_bindings.mb_mesh_clear =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_clear"
        );
    method_bindings.mb_mesh_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_create"
        );
    method_bindings.mb_mesh_get_blend_shape_count =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_get_blend_shape_count"
        );
    method_bindings.mb_mesh_get_blend_shape_mode =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_get_blend_shape_mode"
        );
    method_bindings.mb_mesh_get_custom_aabb =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_get_custom_aabb"
        );
    method_bindings.mb_mesh_get_surface_count =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_get_surface_count"
        );
    method_bindings.mb_mesh_remove_surface =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_remove_surface"
        );
    method_bindings.mb_mesh_set_blend_shape_count =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_set_blend_shape_count"
        );
    method_bindings.mb_mesh_set_blend_shape_mode =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_set_blend_shape_mode"
        );
    method_bindings.mb_mesh_set_custom_aabb =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_set_custom_aabb"
        );
    method_bindings.mb_mesh_surface_get_aabb =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_surface_get_aabb"
        );
    method_bindings.mb_mesh_surface_get_array =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_surface_get_array"
        );
    method_bindings.mb_mesh_surface_get_array_index_len =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_surface_get_array_index_len"
        );
    method_bindings.mb_mesh_surface_get_array_len =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_surface_get_array_len"
        );
    method_bindings.mb_mesh_surface_get_arrays =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_surface_get_arrays"
        );
    method_bindings.mb_mesh_surface_get_blend_shape_arrays =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_surface_get_blend_shape_arrays"
        );
    method_bindings.mb_mesh_surface_get_format =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_surface_get_format"
        );
    method_bindings.mb_mesh_surface_get_format_offset =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_surface_get_format_offset"
        );
    method_bindings.mb_mesh_surface_get_format_stride =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_surface_get_format_stride"
        );
    method_bindings.mb_mesh_surface_get_index_array =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_surface_get_index_array"
        );
    method_bindings.mb_mesh_surface_get_material =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_surface_get_material"
        );
    method_bindings.mb_mesh_surface_get_primitive_type =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_surface_get_primitive_type"
        );
    method_bindings.mb_mesh_surface_get_skeleton_aabb =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_surface_get_skeleton_aabb"
        );
    method_bindings.mb_mesh_surface_set_material =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_surface_set_material"
        );
    method_bindings.mb_mesh_surface_update_region =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "mesh_surface_update_region"
        );
    method_bindings.mb_multimesh_allocate =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "multimesh_allocate"
        );
    method_bindings.mb_multimesh_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "multimesh_create"
        );
    method_bindings.mb_multimesh_get_aabb =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "multimesh_get_aabb"
        );
    method_bindings.mb_multimesh_get_instance_count =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "multimesh_get_instance_count"
        );
    method_bindings.mb_multimesh_get_mesh =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "multimesh_get_mesh"
        );
    method_bindings.mb_multimesh_get_visible_instances =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "multimesh_get_visible_instances"
        );
    method_bindings.mb_multimesh_instance_get_color =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "multimesh_instance_get_color"
        );
    method_bindings.mb_multimesh_instance_get_custom_data =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "multimesh_instance_get_custom_data"
        );
    method_bindings.mb_multimesh_instance_get_transform =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "multimesh_instance_get_transform"
        );
    method_bindings.mb_multimesh_instance_get_transform_2d =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "multimesh_instance_get_transform_2d"
        );
    method_bindings.mb_multimesh_instance_set_color =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "multimesh_instance_set_color"
        );
    method_bindings.mb_multimesh_instance_set_custom_data =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "multimesh_instance_set_custom_data"
        );
    method_bindings.mb_multimesh_instance_set_transform =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "multimesh_instance_set_transform"
        );
    method_bindings.mb_multimesh_instance_set_transform_2d =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "multimesh_instance_set_transform_2d"
        );
    method_bindings.mb_multimesh_set_as_bulk_array =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "multimesh_set_as_bulk_array"
        );
    method_bindings.mb_multimesh_set_mesh =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "multimesh_set_mesh"
        );
    method_bindings.mb_multimesh_set_visible_instances =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "multimesh_set_visible_instances"
        );
    method_bindings.mb_omni_light_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "omni_light_create"
        );
    method_bindings.mb_particles_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_create"
        );
    method_bindings.mb_particles_get_current_aabb =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_get_current_aabb"
        );
    method_bindings.mb_particles_get_emitting =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_get_emitting"
        );
    method_bindings.mb_particles_is_inactive =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_is_inactive"
        );
    method_bindings.mb_particles_request_process =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_request_process"
        );
    method_bindings.mb_particles_restart =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_restart"
        );
    method_bindings.mb_particles_set_amount =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_set_amount"
        );
    method_bindings.mb_particles_set_custom_aabb =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_set_custom_aabb"
        );
    method_bindings.mb_particles_set_draw_order =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_set_draw_order"
        );
    method_bindings.mb_particles_set_draw_pass_mesh =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_set_draw_pass_mesh"
        );
    method_bindings.mb_particles_set_draw_passes =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_set_draw_passes"
        );
    method_bindings.mb_particles_set_emission_transform =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_set_emission_transform"
        );
    method_bindings.mb_particles_set_emitting =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_set_emitting"
        );
    method_bindings.mb_particles_set_explosiveness_ratio =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_set_explosiveness_ratio"
        );
    method_bindings.mb_particles_set_fixed_fps =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_set_fixed_fps"
        );
    method_bindings.mb_particles_set_fractional_delta =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_set_fractional_delta"
        );
    method_bindings.mb_particles_set_lifetime =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_set_lifetime"
        );
    method_bindings.mb_particles_set_one_shot =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_set_one_shot"
        );
    method_bindings.mb_particles_set_pre_process_time =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_set_pre_process_time"
        );
    method_bindings.mb_particles_set_process_material =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_set_process_material"
        );
    method_bindings.mb_particles_set_randomness_ratio =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_set_randomness_ratio"
        );
    method_bindings.mb_particles_set_speed_scale =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_set_speed_scale"
        );
    method_bindings.mb_particles_set_use_local_coordinates =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "particles_set_use_local_coordinates"
        );
    method_bindings.mb_reflection_probe_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "reflection_probe_create"
        );
    method_bindings.mb_reflection_probe_set_as_interior =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "reflection_probe_set_as_interior"
        );
    method_bindings.mb_reflection_probe_set_cull_mask =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "reflection_probe_set_cull_mask"
        );
    method_bindings.mb_reflection_probe_set_enable_box_projection =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "reflection_probe_set_enable_box_projection"
        );
    method_bindings.mb_reflection_probe_set_enable_shadows =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "reflection_probe_set_enable_shadows"
        );
    method_bindings.mb_reflection_probe_set_extents =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "reflection_probe_set_extents"
        );
    method_bindings.mb_reflection_probe_set_intensity =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "reflection_probe_set_intensity"
        );
    method_bindings.mb_reflection_probe_set_interior_ambient =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "reflection_probe_set_interior_ambient"
        );
    method_bindings.mb_reflection_probe_set_interior_ambient_energy =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "reflection_probe_set_interior_ambient_energy"
        );
    method_bindings.mb_reflection_probe_set_interior_ambient_probe_contribution =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "reflection_probe_set_interior_ambient_probe_contribution"
        );
    method_bindings.mb_reflection_probe_set_max_distance =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "reflection_probe_set_max_distance"
        );
    method_bindings.mb_reflection_probe_set_origin_offset =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "reflection_probe_set_origin_offset"
        );
    method_bindings.mb_reflection_probe_set_update_mode =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "reflection_probe_set_update_mode"
        );
    method_bindings.mb_request_frame_drawn_callback =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "request_frame_drawn_callback"
        );
    method_bindings.mb_scenario_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "scenario_create"
        );
    method_bindings.mb_scenario_set_debug =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "scenario_set_debug"
        );
    method_bindings.mb_scenario_set_environment =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "scenario_set_environment"
        );
    method_bindings.mb_scenario_set_fallback_environment =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "scenario_set_fallback_environment"
        );
    method_bindings.mb_scenario_set_reflection_atlas_size =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "scenario_set_reflection_atlas_size"
        );
    method_bindings.mb_set_boot_image =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "set_boot_image"
        );
    method_bindings.mb_set_debug_generate_wireframes =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "set_debug_generate_wireframes"
        );
    method_bindings.mb_set_default_clear_color =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "set_default_clear_color"
        );
    method_bindings.mb_set_render_loop_enabled =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "set_render_loop_enabled"
        );
    method_bindings.mb_set_shader_time_scale =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "set_shader_time_scale"
        );
    method_bindings.mb_set_use_occlusion_culling =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "set_use_occlusion_culling"
        );
    method_bindings.mb_shader_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "shader_create"
        );
    method_bindings.mb_shader_get_code =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "shader_get_code"
        );
    method_bindings.mb_shader_get_default_texture_param =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "shader_get_default_texture_param"
        );
    method_bindings.mb_shader_get_param_list =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "shader_get_param_list"
        );
    method_bindings.mb_shader_set_code =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "shader_set_code"
        );
    method_bindings.mb_shader_set_default_texture_param =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "shader_set_default_texture_param"
        );
    method_bindings.mb_skeleton_allocate =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "skeleton_allocate"
        );
    method_bindings.mb_skeleton_bone_get_transform =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "skeleton_bone_get_transform"
        );
    method_bindings.mb_skeleton_bone_get_transform_2d =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "skeleton_bone_get_transform_2d"
        );
    method_bindings.mb_skeleton_bone_set_transform =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "skeleton_bone_set_transform"
        );
    method_bindings.mb_skeleton_bone_set_transform_2d =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "skeleton_bone_set_transform_2d"
        );
    method_bindings.mb_skeleton_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "skeleton_create"
        );
    method_bindings.mb_skeleton_get_bone_count =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "skeleton_get_bone_count"
        );
    method_bindings.mb_sky_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "sky_create"
        );
    method_bindings.mb_sky_set_texture =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "sky_set_texture"
        );
    method_bindings.mb_spot_light_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "spot_light_create"
        );
    method_bindings.mb_sync =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "sync"
        );
    method_bindings.mb_texture_allocate =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_allocate"
        );
    method_bindings.mb_texture_bind =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_bind"
        );
    method_bindings.mb_texture_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_create"
        );
    method_bindings.mb_texture_create_from_image =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_create_from_image"
        );
    method_bindings.mb_texture_debug_usage =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_debug_usage"
        );
    method_bindings.mb_texture_get_data =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_get_data"
        );
    method_bindings.mb_texture_get_depth =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_get_depth"
        );
    method_bindings.mb_texture_get_flags =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_get_flags"
        );
    method_bindings.mb_texture_get_format =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_get_format"
        );
    method_bindings.mb_texture_get_height =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_get_height"
        );
    method_bindings.mb_texture_get_path =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_get_path"
        );
    method_bindings.mb_texture_get_texid =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_get_texid"
        );
    method_bindings.mb_texture_get_type =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_get_type"
        );
    method_bindings.mb_texture_get_width =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_get_width"
        );
    method_bindings.mb_texture_set_data =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_set_data"
        );
    method_bindings.mb_texture_set_data_partial =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_set_data_partial"
        );
    method_bindings.mb_texture_set_flags =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_set_flags"
        );
    method_bindings.mb_texture_set_path =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_set_path"
        );
    method_bindings.mb_texture_set_shrink_all_x2_on_set_data =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_set_shrink_all_x2_on_set_data"
        );
    method_bindings.mb_texture_set_size_override =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "texture_set_size_override"
        );
    method_bindings.mb_textures_keep_original =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "textures_keep_original"
        );
    method_bindings.mb_viewport_attach_camera =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_attach_camera"
        );
    method_bindings.mb_viewport_attach_canvas =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_attach_canvas"
        );
    method_bindings.mb_viewport_attach_to_screen =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_attach_to_screen"
        );
    method_bindings.mb_viewport_create =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_create"
        );
    method_bindings.mb_viewport_detach =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_detach"
        );
    method_bindings.mb_viewport_get_render_info =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_get_render_info"
        );
    method_bindings.mb_viewport_get_texture =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_get_texture"
        );
    method_bindings.mb_viewport_remove_canvas =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_remove_canvas"
        );
    method_bindings.mb_viewport_set_active =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_active"
        );
    method_bindings.mb_viewport_set_canvas_stacking =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_canvas_stacking"
        );
    method_bindings.mb_viewport_set_canvas_transform =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_canvas_transform"
        );
    method_bindings.mb_viewport_set_clear_mode =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_clear_mode"
        );
    method_bindings.mb_viewport_set_debug_draw =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_debug_draw"
        );
    method_bindings.mb_viewport_set_disable_3d =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_disable_3d"
        );
    method_bindings.mb_viewport_set_disable_environment =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_disable_environment"
        );
    method_bindings.mb_viewport_set_global_canvas_transform =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_global_canvas_transform"
        );
    method_bindings.mb_viewport_set_hdr =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_hdr"
        );
    method_bindings.mb_viewport_set_hide_canvas =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_hide_canvas"
        );
    method_bindings.mb_viewport_set_hide_scenario =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_hide_scenario"
        );
    method_bindings.mb_viewport_set_msaa =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_msaa"
        );
    method_bindings.mb_viewport_set_parent_viewport =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_parent_viewport"
        );
    method_bindings.mb_viewport_set_render_direct_to_screen =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_render_direct_to_screen"
        );
    method_bindings.mb_viewport_set_scenario =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_scenario"
        );
    method_bindings.mb_viewport_set_shadow_atlas_quadrant_subdivision =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_shadow_atlas_quadrant_subdivision"
        );
    method_bindings.mb_viewport_set_shadow_atlas_size =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_shadow_atlas_size"
        );
    method_bindings.mb_viewport_set_sharpen_intensity =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_sharpen_intensity"
        );
    method_bindings.mb_viewport_set_size =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_size"
        );
    method_bindings.mb_viewport_set_transparent_background =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_transparent_background"
        );
    method_bindings.mb_viewport_set_update_mode =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_update_mode"
        );
    method_bindings.mb_viewport_set_usage =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_usage"
        );
    method_bindings.mb_viewport_set_use_arvr =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_use_arvr"
        );
    method_bindings.mb_viewport_set_use_debanding =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_use_debanding"
        );
    method_bindings.mb_viewport_set_use_fxaa =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_use_fxaa"
        );
    method_bindings.mb_viewport_set_vflip =
        api->rebel_method_bind_get_method(
            "VisualServer",
            "viewport_set_vflip"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualServer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualServer::MethodBindings VisualServer::method_bindings = {};
void* VisualServer::class_tag = nullptr;
} // namespace Rebel
