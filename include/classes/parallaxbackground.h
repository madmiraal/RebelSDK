// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PARALLAXBACKGROUND_H
#define REBEL_PARALLAXBACKGROUND_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/canvaslayer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ParallaxBackground : public CanvasLayer {
public:
    void _camera_moved(const Transform2D arg0, const Vector2 arg1);
    Vector2 get_limit_begin() const;
    Vector2 get_limit_end() const;
    Vector2 get_scroll_base_offset() const;
    Vector2 get_scroll_base_scale() const;
    Vector2 get_scroll_offset() const;
    bool is_ignore_camera_zoom();
    void set_ignore_camera_zoom(const bool ignore);
    void set_limit_begin(const Vector2 ofs);
    void set_limit_end(const Vector2 ofs);
    void set_scroll_base_offset(const Vector2 ofs);
    void set_scroll_base_scale(const Vector2 scale);
    void set_scroll_offset(const Vector2 ofs);

    static ParallaxBackground* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ParallaxBackground";
    }

    inline static const char* get_rebel_class_name() {
        return "ParallaxBackground";
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
        rebel_method_bind* mb__camera_moved;
        rebel_method_bind* mb_get_limit_begin;
        rebel_method_bind* mb_get_limit_end;
        rebel_method_bind* mb_get_scroll_base_offset;
        rebel_method_bind* mb_get_scroll_base_scale;
        rebel_method_bind* mb_get_scroll_offset;
        rebel_method_bind* mb_is_ignore_camera_zoom;
        rebel_method_bind* mb_set_ignore_camera_zoom;
        rebel_method_bind* mb_set_limit_begin;
        rebel_method_bind* mb_set_limit_end;
        rebel_method_bind* mb_set_scroll_base_offset;
        rebel_method_bind* mb_set_scroll_base_scale;
        rebel_method_bind* mb_set_scroll_offset;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PARALLAXBACKGROUND_H
