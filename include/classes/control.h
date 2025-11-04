// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CONTROL_H
#define REBEL_CONTROL_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/canvasitem.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Font;
class InputEvent;
class Shader;
class StyleBox;
class Texture;
class Theme;

class Control : public CanvasItem {
public:
    enum Anchor {
        ANCHOR_BEGIN = 0,
        ANCHOR_END = 1,
    };

    enum FocusMode {
        FOCUS_NONE = 0,
        FOCUS_CLICK = 1,
        FOCUS_ALL = 2,
    };

    enum LayoutPresetMode {
        PRESET_MODE_MINSIZE = 0,
        PRESET_MODE_KEEP_WIDTH = 1,
        PRESET_MODE_KEEP_HEIGHT = 2,
        PRESET_MODE_KEEP_SIZE = 3,
    };

    enum MouseFilter {
        MOUSE_FILTER_STOP = 0,
        MOUSE_FILTER_PASS = 1,
        MOUSE_FILTER_IGNORE = 2,
    };

    enum CursorShape {
        CURSOR_ARROW = 0,
        CURSOR_IBEAM = 1,
        CURSOR_POINTING_HAND = 2,
        CURSOR_CROSS = 3,
        CURSOR_WAIT = 4,
        CURSOR_BUSY = 5,
        CURSOR_DRAG = 6,
        CURSOR_CAN_DROP = 7,
        CURSOR_FORBIDDEN = 8,
        CURSOR_VSIZE = 9,
        CURSOR_HSIZE = 10,
        CURSOR_BDIAGSIZE = 11,
        CURSOR_FDIAGSIZE = 12,
        CURSOR_MOVE = 13,
        CURSOR_VSPLIT = 14,
        CURSOR_HSPLIT = 15,
        CURSOR_HELP = 16,
    };

    enum GrowDirection {
        GROW_DIRECTION_BEGIN = 0,
        GROW_DIRECTION_END = 1,
        GROW_DIRECTION_BOTH = 2,
    };

    enum SizeFlags {
        SIZE_FILL = 1,
        SIZE_EXPAND = 2,
        SIZE_EXPAND_FILL = 3,
        SIZE_SHRINK_CENTER = 4,
        SIZE_SHRINK_END = 8,
    };

    enum LayoutPreset {
        PRESET_TOP_LEFT = 0,
        PRESET_TOP_RIGHT = 1,
        PRESET_BOTTOM_LEFT = 2,
        PRESET_BOTTOM_RIGHT = 3,
        PRESET_CENTER_LEFT = 4,
        PRESET_CENTER_TOP = 5,
        PRESET_CENTER_RIGHT = 6,
        PRESET_CENTER_BOTTOM = 7,
        PRESET_CENTER = 8,
        PRESET_LEFT_WIDE = 9,
        PRESET_TOP_WIDE = 10,
        PRESET_RIGHT_WIDE = 11,
        PRESET_BOTTOM_WIDE = 12,
        PRESET_VCENTER_WIDE = 13,
        PRESET_HCENTER_WIDE = 14,
        PRESET_WIDE = 15,
    };

    static const int NOTIFICATION_FOCUS_ENTER = 43;
    static const int NOTIFICATION_FOCUS_EXIT = 44;
    static const int NOTIFICATION_MODAL_CLOSE = 46;
    static const int NOTIFICATION_MOUSE_ENTER = 41;
    static const int NOTIFICATION_MOUSE_EXIT = 42;
    static const int NOTIFICATION_RESIZED = 40;
    static const int NOTIFICATION_SCROLL_BEGIN = 47;
    static const int NOTIFICATION_SCROLL_END = 48;
    static const int NOTIFICATION_THEME_CHANGED = 45;

    bool _clips_input();
    Vector2 _get_minimum_size();
    String _get_tooltip() const;
    void _gui_input(const Ref<InputEvent> event);
    Control* _make_custom_tooltip(const String for_text);
    void _override_changed();
    void _set_anchor(const int64_t margin, const real_t anchor);
    void _set_global_position(const Vector2 position);
    void _set_position(const Vector2 margin);
    void _set_size(const Vector2 size);
    void _size_changed();
    void _theme_changed();
    void _update_minimum_size();
    void accept_event();
    void add_color_override(const String name, const Color color);
    void add_constant_override(const String name, const int64_t constant);
    void add_font_override(const String name, const Ref<Font> font);
    void add_icon_override(const String name, const Ref<Texture> texture);
    void add_shader_override(const String name, const Ref<Shader> shader);
    void add_stylebox_override(const String name, const Ref<StyleBox> stylebox);
    bool can_drop_data(const Vector2 position, const Variant data);
    void drop_data(const Vector2 position, const Variant data);
    Control* find_next_valid_focus() const;
    Control* find_prev_valid_focus() const;
    void force_drag(const Variant data, const Control* preview);
    real_t get_anchor(const int64_t margin) const;
    Vector2 get_begin() const;
    Color get_color(const String name, const String theme_type = "") const;
    Vector2 get_combined_minimum_size() const;
    int64_t get_constant(const String name, const String theme_type = "") const;
    Control::CursorShape get_cursor_shape(const Vector2 position = Vector2(0, 0)) const;
    Vector2 get_custom_minimum_size() const;
    Control::CursorShape get_default_cursor_shape() const;
    Variant get_drag_data(const Vector2 position);
    Vector2 get_end() const;
    Control::FocusMode get_focus_mode() const;
    NodePath get_focus_neighbour(const int64_t margin) const;
    NodePath get_focus_next() const;
    Control* get_focus_owner() const;
    NodePath get_focus_previous() const;
    Ref<Font> get_font(const String name, const String theme_type = "") const;
    Vector2 get_global_position() const;
    Rect2 get_global_rect() const;
    Control::GrowDirection get_h_grow_direction() const;
    int64_t get_h_size_flags() const;
    Ref<Texture> get_icon(const String name, const String theme_type = "") const;
    real_t get_margin(const int64_t margin) const;
    Vector2 get_minimum_size() const;
    Control::MouseFilter get_mouse_filter() const;
    Vector2 get_parent_area_size() const;
    Control* get_parent_control() const;
    bool get_pass_on_modal_close_click() const;
    Vector2 get_pivot_offset() const;
    Vector2 get_position() const;
    Rect2 get_rect() const;
    real_t get_rotation() const;
    real_t get_rotation_degrees() const;
    Vector2 get_scale() const;
    Vector2 get_size() const;
    real_t get_stretch_ratio() const;
    Ref<StyleBox> get_stylebox(const String name, const String theme_type = "") const;
    Ref<Theme> get_theme() const;
    Ref<Font> get_theme_default_font() const;
    String get_tooltip(const Vector2 at_position = Vector2(0, 0)) const;
    Control::GrowDirection get_v_grow_direction() const;
    int64_t get_v_size_flags() const;
    void grab_click_focus();
    void grab_focus();
    bool has_color(const String name, const String theme_type = "") const;
    bool has_color_override(const String name) const;
    bool has_constant(const String name, const String theme_type = "") const;
    bool has_constant_override(const String name) const;
    bool has_focus() const;
    bool has_font(const String name, const String theme_type = "") const;
    bool has_font_override(const String name) const;
    bool has_icon(const String name, const String theme_type = "") const;
    bool has_icon_override(const String name) const;
    bool has_point(const Vector2 point);
    bool has_shader_override(const String name) const;
    bool has_stylebox(const String name, const String theme_type = "") const;
    bool has_stylebox_override(const String name) const;
    bool is_clipping_contents();
    void minimum_size_changed();
    void release_focus();
    void set_anchor(const int64_t margin, const real_t anchor, const bool keep_margin = false, const bool push_opposite_anchor = true);
    void set_anchor_and_margin(const int64_t margin, const real_t anchor, const real_t offset, const bool push_opposite_anchor = false);
    void set_anchors_and_margins_preset(const int64_t preset, const int64_t resize_mode = 0, const int64_t margin = 0);
    void set_anchors_preset(const int64_t preset, const bool keep_margins = false);
    void set_begin(const Vector2 position);
    void set_clip_contents(const bool enable);
    void set_custom_minimum_size(const Vector2 size);
    void set_default_cursor_shape(const int64_t shape);
    void set_drag_forwarding(const Control* target);
    void set_drag_preview(const Control* control);
    void set_end(const Vector2 position);
    void set_focus_mode(const int64_t mode);
    void set_focus_neighbour(const int64_t margin, const NodePath neighbour);
    void set_focus_next(const NodePath next);
    void set_focus_previous(const NodePath previous);
    void set_global_position(const Vector2 position, const bool keep_margins = false);
    void set_h_grow_direction(const int64_t direction);
    void set_h_size_flags(const int64_t flags);
    void set_margin(const int64_t margin, const real_t offset);
    void set_margins_preset(const int64_t preset, const int64_t resize_mode = 0, const int64_t margin = 0);
    void set_mouse_filter(const int64_t filter);
    void set_pass_on_modal_close_click(const bool enabled);
    void set_pivot_offset(const Vector2 pivot_offset);
    void set_position(const Vector2 position, const bool keep_margins = false);
    void set_rotation(const real_t radians);
    void set_rotation_degrees(const real_t degrees);
    void set_scale(const Vector2 scale);
    void set_size(const Vector2 size, const bool keep_margins = false);
    void set_stretch_ratio(const real_t ratio);
    void set_theme(const Ref<Theme> theme);
    void set_tooltip(const String tooltip);
    void set_v_grow_direction(const int64_t direction);
    void set_v_size_flags(const int64_t flags);
    void show_modal(const bool exclusive = false);
    void warp_mouse(const Vector2 to_position);

    static Control* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Control";
    }

    inline static const char* get_rebel_class_name() {
        return "Control";
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
        rebel_method_bind* mb__clips_input;
        rebel_method_bind* mb__get_minimum_size;
        rebel_method_bind* mb__get_tooltip;
        rebel_method_bind* mb__gui_input;
        rebel_method_bind* mb__make_custom_tooltip;
        rebel_method_bind* mb__override_changed;
        rebel_method_bind* mb__set_anchor;
        rebel_method_bind* mb__set_global_position;
        rebel_method_bind* mb__set_position;
        rebel_method_bind* mb__set_size;
        rebel_method_bind* mb__size_changed;
        rebel_method_bind* mb__theme_changed;
        rebel_method_bind* mb__update_minimum_size;
        rebel_method_bind* mb_accept_event;
        rebel_method_bind* mb_add_color_override;
        rebel_method_bind* mb_add_constant_override;
        rebel_method_bind* mb_add_font_override;
        rebel_method_bind* mb_add_icon_override;
        rebel_method_bind* mb_add_shader_override;
        rebel_method_bind* mb_add_stylebox_override;
        rebel_method_bind* mb_can_drop_data;
        rebel_method_bind* mb_drop_data;
        rebel_method_bind* mb_find_next_valid_focus;
        rebel_method_bind* mb_find_prev_valid_focus;
        rebel_method_bind* mb_force_drag;
        rebel_method_bind* mb_get_anchor;
        rebel_method_bind* mb_get_begin;
        rebel_method_bind* mb_get_color;
        rebel_method_bind* mb_get_combined_minimum_size;
        rebel_method_bind* mb_get_constant;
        rebel_method_bind* mb_get_cursor_shape;
        rebel_method_bind* mb_get_custom_minimum_size;
        rebel_method_bind* mb_get_default_cursor_shape;
        rebel_method_bind* mb_get_drag_data;
        rebel_method_bind* mb_get_end;
        rebel_method_bind* mb_get_focus_mode;
        rebel_method_bind* mb_get_focus_neighbour;
        rebel_method_bind* mb_get_focus_next;
        rebel_method_bind* mb_get_focus_owner;
        rebel_method_bind* mb_get_focus_previous;
        rebel_method_bind* mb_get_font;
        rebel_method_bind* mb_get_global_position;
        rebel_method_bind* mb_get_global_rect;
        rebel_method_bind* mb_get_h_grow_direction;
        rebel_method_bind* mb_get_h_size_flags;
        rebel_method_bind* mb_get_icon;
        rebel_method_bind* mb_get_margin;
        rebel_method_bind* mb_get_minimum_size;
        rebel_method_bind* mb_get_mouse_filter;
        rebel_method_bind* mb_get_parent_area_size;
        rebel_method_bind* mb_get_parent_control;
        rebel_method_bind* mb_get_pass_on_modal_close_click;
        rebel_method_bind* mb_get_pivot_offset;
        rebel_method_bind* mb_get_position;
        rebel_method_bind* mb_get_rect;
        rebel_method_bind* mb_get_rotation;
        rebel_method_bind* mb_get_rotation_degrees;
        rebel_method_bind* mb_get_scale;
        rebel_method_bind* mb_get_size;
        rebel_method_bind* mb_get_stretch_ratio;
        rebel_method_bind* mb_get_stylebox;
        rebel_method_bind* mb_get_theme;
        rebel_method_bind* mb_get_theme_default_font;
        rebel_method_bind* mb_get_tooltip;
        rebel_method_bind* mb_get_v_grow_direction;
        rebel_method_bind* mb_get_v_size_flags;
        rebel_method_bind* mb_grab_click_focus;
        rebel_method_bind* mb_grab_focus;
        rebel_method_bind* mb_has_color;
        rebel_method_bind* mb_has_color_override;
        rebel_method_bind* mb_has_constant;
        rebel_method_bind* mb_has_constant_override;
        rebel_method_bind* mb_has_focus;
        rebel_method_bind* mb_has_font;
        rebel_method_bind* mb_has_font_override;
        rebel_method_bind* mb_has_icon;
        rebel_method_bind* mb_has_icon_override;
        rebel_method_bind* mb_has_point;
        rebel_method_bind* mb_has_shader_override;
        rebel_method_bind* mb_has_stylebox;
        rebel_method_bind* mb_has_stylebox_override;
        rebel_method_bind* mb_is_clipping_contents;
        rebel_method_bind* mb_minimum_size_changed;
        rebel_method_bind* mb_release_focus;
        rebel_method_bind* mb_set_anchor;
        rebel_method_bind* mb_set_anchor_and_margin;
        rebel_method_bind* mb_set_anchors_and_margins_preset;
        rebel_method_bind* mb_set_anchors_preset;
        rebel_method_bind* mb_set_begin;
        rebel_method_bind* mb_set_clip_contents;
        rebel_method_bind* mb_set_custom_minimum_size;
        rebel_method_bind* mb_set_default_cursor_shape;
        rebel_method_bind* mb_set_drag_forwarding;
        rebel_method_bind* mb_set_drag_preview;
        rebel_method_bind* mb_set_end;
        rebel_method_bind* mb_set_focus_mode;
        rebel_method_bind* mb_set_focus_neighbour;
        rebel_method_bind* mb_set_focus_next;
        rebel_method_bind* mb_set_focus_previous;
        rebel_method_bind* mb_set_global_position;
        rebel_method_bind* mb_set_h_grow_direction;
        rebel_method_bind* mb_set_h_size_flags;
        rebel_method_bind* mb_set_margin;
        rebel_method_bind* mb_set_margins_preset;
        rebel_method_bind* mb_set_mouse_filter;
        rebel_method_bind* mb_set_pass_on_modal_close_click;
        rebel_method_bind* mb_set_pivot_offset;
        rebel_method_bind* mb_set_position;
        rebel_method_bind* mb_set_rotation;
        rebel_method_bind* mb_set_rotation_degrees;
        rebel_method_bind* mb_set_scale;
        rebel_method_bind* mb_set_size;
        rebel_method_bind* mb_set_stretch_ratio;
        rebel_method_bind* mb_set_theme;
        rebel_method_bind* mb_set_tooltip;
        rebel_method_bind* mb_set_v_grow_direction;
        rebel_method_bind* mb_set_v_size_flags;
        rebel_method_bind* mb_show_modal;
        rebel_method_bind* mb_warp_mouse;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CONTROL_H
