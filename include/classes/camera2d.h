// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CAMERA2D_H
#define REBEL_CAMERA2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Node;
class Object;

class Camera2D : public Node2D {
public:
    enum Camera2DProcessMode {
        CAMERA2D_PROCESS_PHYSICS = 0,
        CAMERA2D_PROCESS_IDLE = 1,
    };

    enum AnchorMode {
        ANCHOR_MODE_FIXED_TOP_LEFT = 0,
        ANCHOR_MODE_DRAG_CENTER = 1,
    };

    void _make_current(const Object* arg0);
    void _set_current(const bool current);
    void _update_scroll();
    void align();
    void clear_current();
    void force_update_scroll();
    Camera2D::AnchorMode get_anchor_mode() const;
    Vector2 get_camera_position() const;
    Vector2 get_camera_screen_center() const;
    Node* get_custom_viewport() const;
    real_t get_drag_margin(const int64_t margin) const;
    real_t get_follow_smoothing() const;
    real_t get_h_offset() const;
    int64_t get_limit(const int64_t margin) const;
    Vector2 get_offset() const;
    Camera2D::Camera2DProcessMode get_process_mode() const;
    real_t get_v_offset() const;
    Vector2 get_zoom() const;
    bool is_current() const;
    bool is_follow_smoothing_enabled() const;
    bool is_h_drag_enabled() const;
    bool is_limit_drawing_enabled() const;
    bool is_limit_smoothing_enabled() const;
    bool is_margin_drawing_enabled() const;
    bool is_rotating() const;
    bool is_screen_drawing_enabled() const;
    bool is_v_drag_enabled() const;
    void make_current();
    void reset_smoothing();
    void set_anchor_mode(const int64_t anchor_mode);
    void set_custom_viewport(const Node* viewport);
    void set_drag_margin(const int64_t margin, const real_t drag_margin);
    void set_enable_follow_smoothing(const bool follow_smoothing);
    void set_follow_smoothing(const real_t follow_smoothing);
    void set_h_drag_enabled(const bool enabled);
    void set_h_offset(const real_t ofs);
    void set_limit(const int64_t margin, const int64_t limit);
    void set_limit_drawing_enabled(const bool limit_drawing_enabled);
    void set_limit_smoothing_enabled(const bool limit_smoothing_enabled);
    void set_margin_drawing_enabled(const bool margin_drawing_enabled);
    void set_offset(const Vector2 offset);
    void set_process_mode(const int64_t mode);
    void set_rotating(const bool rotating);
    void set_screen_drawing_enabled(const bool screen_drawing_enabled);
    void set_v_drag_enabled(const bool enabled);
    void set_v_offset(const real_t ofs);
    void set_zoom(const Vector2 zoom);

    static Camera2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Camera2D";
    }

    inline static const char* get_rebel_class_name() {
        return "Camera2D";
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
        rebel_method_bind* mb__make_current;
        rebel_method_bind* mb__set_current;
        rebel_method_bind* mb__update_scroll;
        rebel_method_bind* mb_align;
        rebel_method_bind* mb_clear_current;
        rebel_method_bind* mb_force_update_scroll;
        rebel_method_bind* mb_get_anchor_mode;
        rebel_method_bind* mb_get_camera_position;
        rebel_method_bind* mb_get_camera_screen_center;
        rebel_method_bind* mb_get_custom_viewport;
        rebel_method_bind* mb_get_drag_margin;
        rebel_method_bind* mb_get_follow_smoothing;
        rebel_method_bind* mb_get_h_offset;
        rebel_method_bind* mb_get_limit;
        rebel_method_bind* mb_get_offset;
        rebel_method_bind* mb_get_process_mode;
        rebel_method_bind* mb_get_v_offset;
        rebel_method_bind* mb_get_zoom;
        rebel_method_bind* mb_is_current;
        rebel_method_bind* mb_is_follow_smoothing_enabled;
        rebel_method_bind* mb_is_h_drag_enabled;
        rebel_method_bind* mb_is_limit_drawing_enabled;
        rebel_method_bind* mb_is_limit_smoothing_enabled;
        rebel_method_bind* mb_is_margin_drawing_enabled;
        rebel_method_bind* mb_is_rotating;
        rebel_method_bind* mb_is_screen_drawing_enabled;
        rebel_method_bind* mb_is_v_drag_enabled;
        rebel_method_bind* mb_make_current;
        rebel_method_bind* mb_reset_smoothing;
        rebel_method_bind* mb_set_anchor_mode;
        rebel_method_bind* mb_set_custom_viewport;
        rebel_method_bind* mb_set_drag_margin;
        rebel_method_bind* mb_set_enable_follow_smoothing;
        rebel_method_bind* mb_set_follow_smoothing;
        rebel_method_bind* mb_set_h_drag_enabled;
        rebel_method_bind* mb_set_h_offset;
        rebel_method_bind* mb_set_limit;
        rebel_method_bind* mb_set_limit_drawing_enabled;
        rebel_method_bind* mb_set_limit_smoothing_enabled;
        rebel_method_bind* mb_set_margin_drawing_enabled;
        rebel_method_bind* mb_set_offset;
        rebel_method_bind* mb_set_process_mode;
        rebel_method_bind* mb_set_rotating;
        rebel_method_bind* mb_set_screen_drawing_enabled;
        rebel_method_bind* mb_set_v_drag_enabled;
        rebel_method_bind* mb_set_v_offset;
        rebel_method_bind* mb_set_zoom;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CAMERA2D_H
