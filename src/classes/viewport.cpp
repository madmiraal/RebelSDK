// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/viewport.h"

#include "classes/camera.h"
#include "classes/control.h"
#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/viewporttexture.h"
#include "classes/world.h"
#include "classes/world2d.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Viewport::_gui_remove_focus() {
    rebel_icall_void(
        method_bindings.mb__gui_remove_focus,
        (const Object*)this
    );
}

void Viewport::_gui_show_tooltip() {
    rebel_icall_void(
        method_bindings.mb__gui_show_tooltip,
        (const Object*)this
    );
}

void Viewport::_own_world_changed() {
    rebel_icall_void(
        method_bindings.mb__own_world_changed,
        (const Object*)this
    );
}

void Viewport::_post_gui_grab_click_focus() {
    rebel_icall_void(
        method_bindings.mb__post_gui_grab_click_focus,
        (const Object*)this
    );
}

void Viewport::_process_picking(const bool ignore_paused) {
    rebel_icall_void_bool(
        method_bindings.mb__process_picking,
        (const Object*)this,
        ignore_paused
    );
}

void Viewport::_subwindow_visibility_changed() {
    rebel_icall_void(
        method_bindings.mb__subwindow_visibility_changed,
        (const Object*)this
    );
}

void Viewport::_vp_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__vp_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void Viewport::_vp_input_text(const String text) {
    rebel_icall_void_string(
        method_bindings.mb__vp_input_text,
        (const Object*)this,
        text
    );
}

void Viewport::_vp_unhandled_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__vp_unhandled_input,
        (const Object*)this,
        arg0.ptr()
    );
}

Ref<World> Viewport::find_world() const {
    return Ref<World>::create_ref(rebel_icall_object(
        method_bindings.mb_find_world,
        (const Object*)this
    ));
}

Ref<World2D> Viewport::find_world_2d() const {
    return Ref<World2D>::create_ref(rebel_icall_object(
        method_bindings.mb_find_world_2d,
        (const Object*)this
    ));
}

Camera* Viewport::get_camera() const {
    return (Camera*)rebel_icall_object(
        method_bindings.mb_get_camera,
        (const Object*)this
    );
}

Transform2D Viewport::get_canvas_transform() const {
    return rebel_icall_transform2d(
        method_bindings.mb_get_canvas_transform,
        (const Object*)this
    );
}

Viewport::ClearMode Viewport::get_clear_mode() const {
    return (Viewport::ClearMode)rebel_icall_int(
        method_bindings.mb_get_clear_mode,
        (const Object*)this
    );
}

Viewport::DebugDraw Viewport::get_debug_draw() const {
    return (Viewport::DebugDraw)rebel_icall_int(
        method_bindings.mb_get_debug_draw,
        (const Object*)this
    );
}

Transform2D Viewport::get_final_transform() const {
    return rebel_icall_transform2d(
        method_bindings.mb_get_final_transform,
        (const Object*)this
    );
}

Transform2D Viewport::get_global_canvas_transform() const {
    return rebel_icall_transform2d(
        method_bindings.mb_get_global_canvas_transform,
        (const Object*)this
    );
}

bool Viewport::get_hdr() const {
    return rebel_icall_bool(
        method_bindings.mb_get_hdr,
        (const Object*)this
    );
}

bool Viewport::get_keep_3d_linear() const {
    return rebel_icall_bool(
        method_bindings.mb_get_keep_3d_linear,
        (const Object*)this
    );
}

Control* Viewport::get_modal_stack_top() const {
    return (Control*)rebel_icall_object(
        method_bindings.mb_get_modal_stack_top,
        (const Object*)this
    );
}

Vector2 Viewport::get_mouse_position() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_mouse_position,
        (const Object*)this
    );
}

Viewport::MSAA Viewport::get_msaa() const {
    return (Viewport::MSAA)rebel_icall_int(
        method_bindings.mb_get_msaa,
        (const Object*)this
    );
}

bool Viewport::get_physics_object_picking() {
    return rebel_icall_bool(
        method_bindings.mb_get_physics_object_picking,
        (const Object*)this
    );
}

int64_t Viewport::get_render_info(const int64_t info) {
    return rebel_icall_int_int(
        method_bindings.mb_get_render_info,
        (const Object*)this,
        info
    );
}

Viewport::ShadowAtlasQuadrantSubdiv Viewport::get_shadow_atlas_quadrant_subdiv(const int64_t quadrant) const {
    return (Viewport::ShadowAtlasQuadrantSubdiv)rebel_icall_int_int(
        method_bindings.mb_get_shadow_atlas_quadrant_subdiv,
        (const Object*)this,
        quadrant
    );
}

int64_t Viewport::get_shadow_atlas_size() const {
    return rebel_icall_int(
        method_bindings.mb_get_shadow_atlas_size,
        (const Object*)this
    );
}

real_t Viewport::get_sharpen_intensity() const {
    return rebel_icall_float(
        method_bindings.mb_get_sharpen_intensity,
        (const Object*)this
    );
}

Vector2 Viewport::get_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_size,
        (const Object*)this
    );
}

Vector2 Viewport::get_size_override() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_size_override,
        (const Object*)this
    );
}

Ref<ViewportTexture> Viewport::get_texture() const {
    return Ref<ViewportTexture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_texture,
        (const Object*)this
    ));
}

Viewport::UpdateMode Viewport::get_update_mode() const {
    return (Viewport::UpdateMode)rebel_icall_int(
        method_bindings.mb_get_update_mode,
        (const Object*)this
    );
}

Viewport::Usage Viewport::get_usage() const {
    return (Viewport::Usage)rebel_icall_int(
        method_bindings.mb_get_usage,
        (const Object*)this
    );
}

bool Viewport::get_use_debanding() const {
    return rebel_icall_bool(
        method_bindings.mb_get_use_debanding,
        (const Object*)this
    );
}

bool Viewport::get_use_fxaa() const {
    return rebel_icall_bool(
        method_bindings.mb_get_use_fxaa,
        (const Object*)this
    );
}

bool Viewport::get_vflip() const {
    return rebel_icall_bool(
        method_bindings.mb_get_vflip,
        (const Object*)this
    );
}

RID Viewport::get_viewport_rid() const {
    return rebel_icall_rid(
        method_bindings.mb_get_viewport_rid,
        (const Object*)this
    );
}

Rect2 Viewport::get_visible_rect() const {
    return rebel_icall_rect2(
        method_bindings.mb_get_visible_rect,
        (const Object*)this
    );
}

Ref<World> Viewport::get_world() const {
    return Ref<World>::create_ref(rebel_icall_object(
        method_bindings.mb_get_world,
        (const Object*)this
    ));
}

Ref<World2D> Viewport::get_world_2d() const {
    return Ref<World2D>::create_ref(rebel_icall_object(
        method_bindings.mb_get_world_2d,
        (const Object*)this
    ));
}

Variant Viewport::gui_get_drag_data() const {
    return rebel_icall_variant(
        method_bindings.mb_gui_get_drag_data,
        (const Object*)this
    );
}

bool Viewport::gui_has_modal_stack() const {
    return rebel_icall_bool(
        method_bindings.mb_gui_has_modal_stack,
        (const Object*)this
    );
}

bool Viewport::gui_is_dragging() const {
    return rebel_icall_bool(
        method_bindings.mb_gui_is_dragging,
        (const Object*)this
    );
}

bool Viewport::has_transparent_background() const {
    return rebel_icall_bool(
        method_bindings.mb_has_transparent_background,
        (const Object*)this
    );
}

void Viewport::input(const Ref<InputEvent> local_event) {
    rebel_icall_void_object(
        method_bindings.mb_input,
        (const Object*)this,
        local_event.ptr()
    );
}

bool Viewport::is_3d_disabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_3d_disabled,
        (const Object*)this
    );
}

bool Viewport::is_audio_listener() const {
    return rebel_icall_bool(
        method_bindings.mb_is_audio_listener,
        (const Object*)this
    );
}

bool Viewport::is_audio_listener_2d() const {
    return rebel_icall_bool(
        method_bindings.mb_is_audio_listener_2d,
        (const Object*)this
    );
}

bool Viewport::is_handling_input_locally() const {
    return rebel_icall_bool(
        method_bindings.mb_is_handling_input_locally,
        (const Object*)this
    );
}

bool Viewport::is_input_disabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_input_disabled,
        (const Object*)this
    );
}

bool Viewport::is_input_handled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_input_handled,
        (const Object*)this
    );
}

bool Viewport::is_size_override_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_size_override_enabled,
        (const Object*)this
    );
}

bool Viewport::is_size_override_stretch_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_size_override_stretch_enabled,
        (const Object*)this
    );
}

bool Viewport::is_snap_controls_to_pixels_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_snap_controls_to_pixels_enabled,
        (const Object*)this
    );
}

bool Viewport::is_using_own_world() const {
    return rebel_icall_bool(
        method_bindings.mb_is_using_own_world,
        (const Object*)this
    );
}

bool Viewport::is_using_render_direct_to_screen() const {
    return rebel_icall_bool(
        method_bindings.mb_is_using_render_direct_to_screen,
        (const Object*)this
    );
}

void Viewport::set_as_audio_listener(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_as_audio_listener,
        (const Object*)this,
        enable
    );
}

void Viewport::set_as_audio_listener_2d(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_as_audio_listener_2d,
        (const Object*)this,
        enable
    );
}

void Viewport::set_attach_to_screen_rect(const Rect2 rect) {
    rebel_icall_void_rect2(
        method_bindings.mb_set_attach_to_screen_rect,
        (const Object*)this,
        rect
    );
}

void Viewport::set_canvas_transform(const Transform2D xform) {
    rebel_icall_void_transform2d(
        method_bindings.mb_set_canvas_transform,
        (const Object*)this,
        xform
    );
}

void Viewport::set_clear_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_clear_mode,
        (const Object*)this,
        mode
    );
}

void Viewport::set_debug_draw(const int64_t debug_draw) {
    rebel_icall_void_int(
        method_bindings.mb_set_debug_draw,
        (const Object*)this,
        debug_draw
    );
}

void Viewport::set_disable_3d(const bool disable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_disable_3d,
        (const Object*)this,
        disable
    );
}

void Viewport::set_disable_input(const bool disable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_disable_input,
        (const Object*)this,
        disable
    );
}

void Viewport::set_global_canvas_transform(const Transform2D xform) {
    rebel_icall_void_transform2d(
        method_bindings.mb_set_global_canvas_transform,
        (const Object*)this,
        xform
    );
}

void Viewport::set_handle_input_locally(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_handle_input_locally,
        (const Object*)this,
        enable
    );
}

void Viewport::set_hdr(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_hdr,
        (const Object*)this,
        enable
    );
}

void Viewport::set_input_as_handled() {
    rebel_icall_void(
        method_bindings.mb_set_input_as_handled,
        (const Object*)this
    );
}

void Viewport::set_keep_3d_linear(const bool keep_3d_linear) {
    rebel_icall_void_bool(
        method_bindings.mb_set_keep_3d_linear,
        (const Object*)this,
        keep_3d_linear
    );
}

void Viewport::set_msaa(const int64_t msaa) {
    rebel_icall_void_int(
        method_bindings.mb_set_msaa,
        (const Object*)this,
        msaa
    );
}

void Viewport::set_physics_object_picking(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_physics_object_picking,
        (const Object*)this,
        enable
    );
}

void Viewport::set_shadow_atlas_quadrant_subdiv(const int64_t quadrant, const int64_t subdiv) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_shadow_atlas_quadrant_subdiv,
        (const Object*)this,
        quadrant,
        subdiv
    );
}

void Viewport::set_shadow_atlas_size(const int64_t size) {
    rebel_icall_void_int(
        method_bindings.mb_set_shadow_atlas_size,
        (const Object*)this,
        size
    );
}

void Viewport::set_sharpen_intensity(const real_t intensity) {
    rebel_icall_void_float(
        method_bindings.mb_set_sharpen_intensity,
        (const Object*)this,
        intensity
    );
}

void Viewport::set_size(const Vector2 size) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_size,
        (const Object*)this,
        size
    );
}

void Viewport::set_size_override(const bool enable, const Vector2 size, const Vector2 margin) {
    rebel_icall_void_bool_vector2_vector2(
        method_bindings.mb_set_size_override,
        (const Object*)this,
        enable,
        size,
        margin
    );
}

void Viewport::set_size_override_stretch(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_size_override_stretch,
        (const Object*)this,
        enabled
    );
}

void Viewport::set_snap_controls_to_pixels(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_snap_controls_to_pixels,
        (const Object*)this,
        enabled
    );
}

void Viewport::set_transparent_background(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_transparent_background,
        (const Object*)this,
        enable
    );
}

void Viewport::set_update_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_update_mode,
        (const Object*)this,
        mode
    );
}

void Viewport::set_usage(const int64_t usage) {
    rebel_icall_void_int(
        method_bindings.mb_set_usage,
        (const Object*)this,
        usage
    );
}

void Viewport::set_use_arvr(const bool use) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_arvr,
        (const Object*)this,
        use
    );
}

void Viewport::set_use_debanding(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_debanding,
        (const Object*)this,
        enable
    );
}

void Viewport::set_use_fxaa(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_fxaa,
        (const Object*)this,
        enable
    );
}

void Viewport::set_use_own_world(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_own_world,
        (const Object*)this,
        enable
    );
}

void Viewport::set_use_render_direct_to_screen(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_render_direct_to_screen,
        (const Object*)this,
        enable
    );
}

void Viewport::set_vflip(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_vflip,
        (const Object*)this,
        enable
    );
}

void Viewport::set_world(const Ref<World> world) {
    rebel_icall_void_object(
        method_bindings.mb_set_world,
        (const Object*)this,
        world.ptr()
    );
}

void Viewport::set_world_2d(const Ref<World2D> world_2d) {
    rebel_icall_void_object(
        method_bindings.mb_set_world_2d,
        (const Object*)this,
        world_2d.ptr()
    );
}

void Viewport::unhandled_input(const Ref<InputEvent> local_event) {
    rebel_icall_void_object(
        method_bindings.mb_unhandled_input,
        (const Object*)this,
        local_event.ptr()
    );
}

void Viewport::update_worlds() {
    rebel_icall_void(
        method_bindings.mb_update_worlds,
        (const Object*)this
    );
}

bool Viewport::use_arvr() {
    return rebel_icall_bool(
        method_bindings.mb_use_arvr,
        (const Object*)this
    );
}

void Viewport::warp_mouse(const Vector2 to_position) {
    rebel_icall_void_vector2(
        method_bindings.mb_warp_mouse,
        (const Object*)this,
        to_position
    );
}

Viewport* Viewport::create() {
    return (Viewport*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Viewport")()
         );
}

void Viewport::init_method_bindings() {
    method_bindings.mb__gui_remove_focus =
        api->rebel_method_bind_get_method(
            "Viewport",
            "_gui_remove_focus"
        );
    method_bindings.mb__gui_show_tooltip =
        api->rebel_method_bind_get_method(
            "Viewport",
            "_gui_show_tooltip"
        );
    method_bindings.mb__own_world_changed =
        api->rebel_method_bind_get_method(
            "Viewport",
            "_own_world_changed"
        );
    method_bindings.mb__post_gui_grab_click_focus =
        api->rebel_method_bind_get_method(
            "Viewport",
            "_post_gui_grab_click_focus"
        );
    method_bindings.mb__process_picking =
        api->rebel_method_bind_get_method(
            "Viewport",
            "_process_picking"
        );
    method_bindings.mb__subwindow_visibility_changed =
        api->rebel_method_bind_get_method(
            "Viewport",
            "_subwindow_visibility_changed"
        );
    method_bindings.mb__vp_input =
        api->rebel_method_bind_get_method(
            "Viewport",
            "_vp_input"
        );
    method_bindings.mb__vp_input_text =
        api->rebel_method_bind_get_method(
            "Viewport",
            "_vp_input_text"
        );
    method_bindings.mb__vp_unhandled_input =
        api->rebel_method_bind_get_method(
            "Viewport",
            "_vp_unhandled_input"
        );
    method_bindings.mb_find_world =
        api->rebel_method_bind_get_method(
            "Viewport",
            "find_world"
        );
    method_bindings.mb_find_world_2d =
        api->rebel_method_bind_get_method(
            "Viewport",
            "find_world_2d"
        );
    method_bindings.mb_get_camera =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_camera"
        );
    method_bindings.mb_get_canvas_transform =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_canvas_transform"
        );
    method_bindings.mb_get_clear_mode =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_clear_mode"
        );
    method_bindings.mb_get_debug_draw =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_debug_draw"
        );
    method_bindings.mb_get_final_transform =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_final_transform"
        );
    method_bindings.mb_get_global_canvas_transform =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_global_canvas_transform"
        );
    method_bindings.mb_get_hdr =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_hdr"
        );
    method_bindings.mb_get_keep_3d_linear =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_keep_3d_linear"
        );
    method_bindings.mb_get_modal_stack_top =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_modal_stack_top"
        );
    method_bindings.mb_get_mouse_position =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_mouse_position"
        );
    method_bindings.mb_get_msaa =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_msaa"
        );
    method_bindings.mb_get_physics_object_picking =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_physics_object_picking"
        );
    method_bindings.mb_get_render_info =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_render_info"
        );
    method_bindings.mb_get_shadow_atlas_quadrant_subdiv =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_shadow_atlas_quadrant_subdiv"
        );
    method_bindings.mb_get_shadow_atlas_size =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_shadow_atlas_size"
        );
    method_bindings.mb_get_sharpen_intensity =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_sharpen_intensity"
        );
    method_bindings.mb_get_size =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_size"
        );
    method_bindings.mb_get_size_override =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_size_override"
        );
    method_bindings.mb_get_texture =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_texture"
        );
    method_bindings.mb_get_update_mode =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_update_mode"
        );
    method_bindings.mb_get_usage =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_usage"
        );
    method_bindings.mb_get_use_debanding =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_use_debanding"
        );
    method_bindings.mb_get_use_fxaa =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_use_fxaa"
        );
    method_bindings.mb_get_vflip =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_vflip"
        );
    method_bindings.mb_get_viewport_rid =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_viewport_rid"
        );
    method_bindings.mb_get_visible_rect =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_visible_rect"
        );
    method_bindings.mb_get_world =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_world"
        );
    method_bindings.mb_get_world_2d =
        api->rebel_method_bind_get_method(
            "Viewport",
            "get_world_2d"
        );
    method_bindings.mb_gui_get_drag_data =
        api->rebel_method_bind_get_method(
            "Viewport",
            "gui_get_drag_data"
        );
    method_bindings.mb_gui_has_modal_stack =
        api->rebel_method_bind_get_method(
            "Viewport",
            "gui_has_modal_stack"
        );
    method_bindings.mb_gui_is_dragging =
        api->rebel_method_bind_get_method(
            "Viewport",
            "gui_is_dragging"
        );
    method_bindings.mb_has_transparent_background =
        api->rebel_method_bind_get_method(
            "Viewport",
            "has_transparent_background"
        );
    method_bindings.mb_input =
        api->rebel_method_bind_get_method(
            "Viewport",
            "input"
        );
    method_bindings.mb_is_3d_disabled =
        api->rebel_method_bind_get_method(
            "Viewport",
            "is_3d_disabled"
        );
    method_bindings.mb_is_audio_listener =
        api->rebel_method_bind_get_method(
            "Viewport",
            "is_audio_listener"
        );
    method_bindings.mb_is_audio_listener_2d =
        api->rebel_method_bind_get_method(
            "Viewport",
            "is_audio_listener_2d"
        );
    method_bindings.mb_is_handling_input_locally =
        api->rebel_method_bind_get_method(
            "Viewport",
            "is_handling_input_locally"
        );
    method_bindings.mb_is_input_disabled =
        api->rebel_method_bind_get_method(
            "Viewport",
            "is_input_disabled"
        );
    method_bindings.mb_is_input_handled =
        api->rebel_method_bind_get_method(
            "Viewport",
            "is_input_handled"
        );
    method_bindings.mb_is_size_override_enabled =
        api->rebel_method_bind_get_method(
            "Viewport",
            "is_size_override_enabled"
        );
    method_bindings.mb_is_size_override_stretch_enabled =
        api->rebel_method_bind_get_method(
            "Viewport",
            "is_size_override_stretch_enabled"
        );
    method_bindings.mb_is_snap_controls_to_pixels_enabled =
        api->rebel_method_bind_get_method(
            "Viewport",
            "is_snap_controls_to_pixels_enabled"
        );
    method_bindings.mb_is_using_own_world =
        api->rebel_method_bind_get_method(
            "Viewport",
            "is_using_own_world"
        );
    method_bindings.mb_is_using_render_direct_to_screen =
        api->rebel_method_bind_get_method(
            "Viewport",
            "is_using_render_direct_to_screen"
        );
    method_bindings.mb_set_as_audio_listener =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_as_audio_listener"
        );
    method_bindings.mb_set_as_audio_listener_2d =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_as_audio_listener_2d"
        );
    method_bindings.mb_set_attach_to_screen_rect =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_attach_to_screen_rect"
        );
    method_bindings.mb_set_canvas_transform =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_canvas_transform"
        );
    method_bindings.mb_set_clear_mode =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_clear_mode"
        );
    method_bindings.mb_set_debug_draw =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_debug_draw"
        );
    method_bindings.mb_set_disable_3d =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_disable_3d"
        );
    method_bindings.mb_set_disable_input =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_disable_input"
        );
    method_bindings.mb_set_global_canvas_transform =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_global_canvas_transform"
        );
    method_bindings.mb_set_handle_input_locally =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_handle_input_locally"
        );
    method_bindings.mb_set_hdr =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_hdr"
        );
    method_bindings.mb_set_input_as_handled =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_input_as_handled"
        );
    method_bindings.mb_set_keep_3d_linear =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_keep_3d_linear"
        );
    method_bindings.mb_set_msaa =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_msaa"
        );
    method_bindings.mb_set_physics_object_picking =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_physics_object_picking"
        );
    method_bindings.mb_set_shadow_atlas_quadrant_subdiv =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_shadow_atlas_quadrant_subdiv"
        );
    method_bindings.mb_set_shadow_atlas_size =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_shadow_atlas_size"
        );
    method_bindings.mb_set_sharpen_intensity =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_sharpen_intensity"
        );
    method_bindings.mb_set_size =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_size"
        );
    method_bindings.mb_set_size_override =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_size_override"
        );
    method_bindings.mb_set_size_override_stretch =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_size_override_stretch"
        );
    method_bindings.mb_set_snap_controls_to_pixels =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_snap_controls_to_pixels"
        );
    method_bindings.mb_set_transparent_background =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_transparent_background"
        );
    method_bindings.mb_set_update_mode =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_update_mode"
        );
    method_bindings.mb_set_usage =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_usage"
        );
    method_bindings.mb_set_use_arvr =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_use_arvr"
        );
    method_bindings.mb_set_use_debanding =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_use_debanding"
        );
    method_bindings.mb_set_use_fxaa =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_use_fxaa"
        );
    method_bindings.mb_set_use_own_world =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_use_own_world"
        );
    method_bindings.mb_set_use_render_direct_to_screen =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_use_render_direct_to_screen"
        );
    method_bindings.mb_set_vflip =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_vflip"
        );
    method_bindings.mb_set_world =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_world"
        );
    method_bindings.mb_set_world_2d =
        api->rebel_method_bind_get_method(
            "Viewport",
            "set_world_2d"
        );
    method_bindings.mb_unhandled_input =
        api->rebel_method_bind_get_method(
            "Viewport",
            "unhandled_input"
        );
    method_bindings.mb_update_worlds =
        api->rebel_method_bind_get_method(
            "Viewport",
            "update_worlds"
        );
    method_bindings.mb_use_arvr =
        api->rebel_method_bind_get_method(
            "Viewport",
            "use_arvr"
        );
    method_bindings.mb_warp_mouse =
        api->rebel_method_bind_get_method(
            "Viewport",
            "warp_mouse"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Viewport");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Viewport::MethodBindings Viewport::method_bindings = {};
void* Viewport::class_tag = nullptr;
} // namespace Rebel
