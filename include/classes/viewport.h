// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VIEWPORT_H
#define REBEL_VIEWPORT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Camera;
class Control;
class InputEvent;
class ViewportTexture;
class World;
class World2D;

class Viewport : public Node {
public:
    enum ClearMode {
        CLEAR_MODE_ALWAYS = 0,
        CLEAR_MODE_NEVER = 1,
        CLEAR_MODE_ONLY_NEXT_FRAME = 2,
    };

    enum RenderInfo {
        RENDER_INFO_OBJECTS_IN_FRAME = 0,
        RENDER_INFO_VERTICES_IN_FRAME = 1,
        RENDER_INFO_MATERIAL_CHANGES_IN_FRAME = 2,
        RENDER_INFO_SHADER_CHANGES_IN_FRAME = 3,
        RENDER_INFO_SURFACE_CHANGES_IN_FRAME = 4,
        RENDER_INFO_DRAW_CALLS_IN_FRAME = 5,
        RENDER_INFO_2D_ITEMS_IN_FRAME = 6,
        RENDER_INFO_2D_DRAW_CALLS_IN_FRAME = 7,
        RENDER_INFO_MAX = 8,
    };

    enum Usage {
        USAGE_2D = 0,
        USAGE_2D_NO_SAMPLING = 1,
        USAGE_3D = 2,
        USAGE_3D_NO_EFFECTS = 3,
    };

    enum DebugDraw {
        DEBUG_DRAW_DISABLED = 0,
        DEBUG_DRAW_UNSHADED = 1,
        DEBUG_DRAW_OVERDRAW = 2,
        DEBUG_DRAW_WIREFRAME = 3,
    };

    enum ShadowAtlasQuadrantSubdiv {
        SHADOW_ATLAS_QUADRANT_SUBDIV_DISABLED = 0,
        SHADOW_ATLAS_QUADRANT_SUBDIV_1 = 1,
        SHADOW_ATLAS_QUADRANT_SUBDIV_4 = 2,
        SHADOW_ATLAS_QUADRANT_SUBDIV_16 = 3,
        SHADOW_ATLAS_QUADRANT_SUBDIV_64 = 4,
        SHADOW_ATLAS_QUADRANT_SUBDIV_256 = 5,
        SHADOW_ATLAS_QUADRANT_SUBDIV_1024 = 6,
        SHADOW_ATLAS_QUADRANT_SUBDIV_MAX = 7,
    };

    enum UpdateMode {
        UPDATE_DISABLED = 0,
        UPDATE_ONCE = 1,
        UPDATE_WHEN_VISIBLE = 2,
        UPDATE_ALWAYS = 3,
    };

    enum MSAA {
        MSAA_DISABLED = 0,
        MSAA_2X = 1,
        MSAA_4X = 2,
        MSAA_8X = 3,
        MSAA_16X = 4,
    };

    void _gui_remove_focus();
    void _gui_show_tooltip();
    void _own_world_changed();
    void _post_gui_grab_click_focus();
    void _process_picking(const bool ignore_paused);
    void _subwindow_visibility_changed();
    void _vp_input(const Ref<InputEvent> arg0);
    void _vp_input_text(const String text);
    void _vp_unhandled_input(const Ref<InputEvent> arg0);
    Ref<World> find_world() const;
    Ref<World2D> find_world_2d() const;
    Camera* get_camera() const;
    Transform2D get_canvas_transform() const;
    Viewport::ClearMode get_clear_mode() const;
    Viewport::DebugDraw get_debug_draw() const;
    Transform2D get_final_transform() const;
    Transform2D get_global_canvas_transform() const;
    bool get_hdr() const;
    bool get_keep_3d_linear() const;
    Control* get_modal_stack_top() const;
    Vector2 get_mouse_position() const;
    Viewport::MSAA get_msaa() const;
    bool get_physics_object_picking();
    int64_t get_render_info(const int64_t info);
    Viewport::ShadowAtlasQuadrantSubdiv get_shadow_atlas_quadrant_subdiv(const int64_t quadrant) const;
    int64_t get_shadow_atlas_size() const;
    real_t get_sharpen_intensity() const;
    Vector2 get_size() const;
    Vector2 get_size_override() const;
    Ref<ViewportTexture> get_texture() const;
    Viewport::UpdateMode get_update_mode() const;
    Viewport::Usage get_usage() const;
    bool get_use_debanding() const;
    bool get_use_fxaa() const;
    bool get_vflip() const;
    RID get_viewport_rid() const;
    Rect2 get_visible_rect() const;
    Ref<World> get_world() const;
    Ref<World2D> get_world_2d() const;
    Variant gui_get_drag_data() const;
    bool gui_has_modal_stack() const;
    bool gui_is_dragging() const;
    bool has_transparent_background() const;
    void input(const Ref<InputEvent> local_event);
    bool is_3d_disabled() const;
    bool is_audio_listener() const;
    bool is_audio_listener_2d() const;
    bool is_handling_input_locally() const;
    bool is_input_disabled() const;
    bool is_input_handled() const;
    bool is_size_override_enabled() const;
    bool is_size_override_stretch_enabled() const;
    bool is_snap_controls_to_pixels_enabled() const;
    bool is_using_own_world() const;
    bool is_using_render_direct_to_screen() const;
    void set_as_audio_listener(const bool enable);
    void set_as_audio_listener_2d(const bool enable);
    void set_attach_to_screen_rect(const Rect2 rect);
    void set_canvas_transform(const Transform2D xform);
    void set_clear_mode(const int64_t mode);
    void set_debug_draw(const int64_t debug_draw);
    void set_disable_3d(const bool disable);
    void set_disable_input(const bool disable);
    void set_global_canvas_transform(const Transform2D xform);
    void set_handle_input_locally(const bool enable);
    void set_hdr(const bool enable);
    void set_input_as_handled();
    void set_keep_3d_linear(const bool keep_3d_linear);
    void set_msaa(const int64_t msaa);
    void set_physics_object_picking(const bool enable);
    void set_shadow_atlas_quadrant_subdiv(const int64_t quadrant, const int64_t subdiv);
    void set_shadow_atlas_size(const int64_t size);
    void set_sharpen_intensity(const real_t intensity);
    void set_size(const Vector2 size);
    void set_size_override(const bool enable, const Vector2 size = Vector2(-1, -1), const Vector2 margin = Vector2(0, 0));
    void set_size_override_stretch(const bool enabled);
    void set_snap_controls_to_pixels(const bool enabled);
    void set_transparent_background(const bool enable);
    void set_update_mode(const int64_t mode);
    void set_usage(const int64_t usage);
    void set_use_arvr(const bool use);
    void set_use_debanding(const bool enable);
    void set_use_fxaa(const bool enable);
    void set_use_own_world(const bool enable);
    void set_use_render_direct_to_screen(const bool enable);
    void set_vflip(const bool enable);
    void set_world(const Ref<World> world);
    void set_world_2d(const Ref<World2D> world_2d);
    void unhandled_input(const Ref<InputEvent> local_event);
    void update_worlds();
    bool use_arvr();
    void warp_mouse(const Vector2 to_position);

    static Viewport* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Viewport";
    }

    inline static const char* get_rebel_class_name() {
        return "Viewport";
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
        rebel_method_bind* mb__gui_remove_focus;
        rebel_method_bind* mb__gui_show_tooltip;
        rebel_method_bind* mb__own_world_changed;
        rebel_method_bind* mb__post_gui_grab_click_focus;
        rebel_method_bind* mb__process_picking;
        rebel_method_bind* mb__subwindow_visibility_changed;
        rebel_method_bind* mb__vp_input;
        rebel_method_bind* mb__vp_input_text;
        rebel_method_bind* mb__vp_unhandled_input;
        rebel_method_bind* mb_find_world;
        rebel_method_bind* mb_find_world_2d;
        rebel_method_bind* mb_get_camera;
        rebel_method_bind* mb_get_canvas_transform;
        rebel_method_bind* mb_get_clear_mode;
        rebel_method_bind* mb_get_debug_draw;
        rebel_method_bind* mb_get_final_transform;
        rebel_method_bind* mb_get_global_canvas_transform;
        rebel_method_bind* mb_get_hdr;
        rebel_method_bind* mb_get_keep_3d_linear;
        rebel_method_bind* mb_get_modal_stack_top;
        rebel_method_bind* mb_get_mouse_position;
        rebel_method_bind* mb_get_msaa;
        rebel_method_bind* mb_get_physics_object_picking;
        rebel_method_bind* mb_get_render_info;
        rebel_method_bind* mb_get_shadow_atlas_quadrant_subdiv;
        rebel_method_bind* mb_get_shadow_atlas_size;
        rebel_method_bind* mb_get_sharpen_intensity;
        rebel_method_bind* mb_get_size;
        rebel_method_bind* mb_get_size_override;
        rebel_method_bind* mb_get_texture;
        rebel_method_bind* mb_get_update_mode;
        rebel_method_bind* mb_get_usage;
        rebel_method_bind* mb_get_use_debanding;
        rebel_method_bind* mb_get_use_fxaa;
        rebel_method_bind* mb_get_vflip;
        rebel_method_bind* mb_get_viewport_rid;
        rebel_method_bind* mb_get_visible_rect;
        rebel_method_bind* mb_get_world;
        rebel_method_bind* mb_get_world_2d;
        rebel_method_bind* mb_gui_get_drag_data;
        rebel_method_bind* mb_gui_has_modal_stack;
        rebel_method_bind* mb_gui_is_dragging;
        rebel_method_bind* mb_has_transparent_background;
        rebel_method_bind* mb_input;
        rebel_method_bind* mb_is_3d_disabled;
        rebel_method_bind* mb_is_audio_listener;
        rebel_method_bind* mb_is_audio_listener_2d;
        rebel_method_bind* mb_is_handling_input_locally;
        rebel_method_bind* mb_is_input_disabled;
        rebel_method_bind* mb_is_input_handled;
        rebel_method_bind* mb_is_size_override_enabled;
        rebel_method_bind* mb_is_size_override_stretch_enabled;
        rebel_method_bind* mb_is_snap_controls_to_pixels_enabled;
        rebel_method_bind* mb_is_using_own_world;
        rebel_method_bind* mb_is_using_render_direct_to_screen;
        rebel_method_bind* mb_set_as_audio_listener;
        rebel_method_bind* mb_set_as_audio_listener_2d;
        rebel_method_bind* mb_set_attach_to_screen_rect;
        rebel_method_bind* mb_set_canvas_transform;
        rebel_method_bind* mb_set_clear_mode;
        rebel_method_bind* mb_set_debug_draw;
        rebel_method_bind* mb_set_disable_3d;
        rebel_method_bind* mb_set_disable_input;
        rebel_method_bind* mb_set_global_canvas_transform;
        rebel_method_bind* mb_set_handle_input_locally;
        rebel_method_bind* mb_set_hdr;
        rebel_method_bind* mb_set_input_as_handled;
        rebel_method_bind* mb_set_keep_3d_linear;
        rebel_method_bind* mb_set_msaa;
        rebel_method_bind* mb_set_physics_object_picking;
        rebel_method_bind* mb_set_shadow_atlas_quadrant_subdiv;
        rebel_method_bind* mb_set_shadow_atlas_size;
        rebel_method_bind* mb_set_sharpen_intensity;
        rebel_method_bind* mb_set_size;
        rebel_method_bind* mb_set_size_override;
        rebel_method_bind* mb_set_size_override_stretch;
        rebel_method_bind* mb_set_snap_controls_to_pixels;
        rebel_method_bind* mb_set_transparent_background;
        rebel_method_bind* mb_set_update_mode;
        rebel_method_bind* mb_set_usage;
        rebel_method_bind* mb_set_use_arvr;
        rebel_method_bind* mb_set_use_debanding;
        rebel_method_bind* mb_set_use_fxaa;
        rebel_method_bind* mb_set_use_own_world;
        rebel_method_bind* mb_set_use_render_direct_to_screen;
        rebel_method_bind* mb_set_vflip;
        rebel_method_bind* mb_set_world;
        rebel_method_bind* mb_set_world_2d;
        rebel_method_bind* mb_unhandled_input;
        rebel_method_bind* mb_update_worlds;
        rebel_method_bind* mb_use_arvr;
        rebel_method_bind* mb_warp_mouse;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VIEWPORT_H
