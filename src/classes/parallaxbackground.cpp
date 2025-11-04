// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/parallaxbackground.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ParallaxBackground::_camera_moved(const Transform2D arg0, const Vector2 arg1) {
    rebel_icall_void_transform2d_vector2(
        method_bindings.mb__camera_moved,
        (const Object*)this,
        arg0,
        arg1
    );
}

Vector2 ParallaxBackground::get_limit_begin() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_limit_begin,
        (const Object*)this
    );
}

Vector2 ParallaxBackground::get_limit_end() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_limit_end,
        (const Object*)this
    );
}

Vector2 ParallaxBackground::get_scroll_base_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_scroll_base_offset,
        (const Object*)this
    );
}

Vector2 ParallaxBackground::get_scroll_base_scale() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_scroll_base_scale,
        (const Object*)this
    );
}

Vector2 ParallaxBackground::get_scroll_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_scroll_offset,
        (const Object*)this
    );
}

bool ParallaxBackground::is_ignore_camera_zoom() {
    return rebel_icall_bool(
        method_bindings.mb_is_ignore_camera_zoom,
        (const Object*)this
    );
}

void ParallaxBackground::set_ignore_camera_zoom(const bool ignore) {
    rebel_icall_void_bool(
        method_bindings.mb_set_ignore_camera_zoom,
        (const Object*)this,
        ignore
    );
}

void ParallaxBackground::set_limit_begin(const Vector2 ofs) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_limit_begin,
        (const Object*)this,
        ofs
    );
}

void ParallaxBackground::set_limit_end(const Vector2 ofs) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_limit_end,
        (const Object*)this,
        ofs
    );
}

void ParallaxBackground::set_scroll_base_offset(const Vector2 ofs) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_scroll_base_offset,
        (const Object*)this,
        ofs
    );
}

void ParallaxBackground::set_scroll_base_scale(const Vector2 scale) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_scroll_base_scale,
        (const Object*)this,
        scale
    );
}

void ParallaxBackground::set_scroll_offset(const Vector2 ofs) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_scroll_offset,
        (const Object*)this,
        ofs
    );
}

ParallaxBackground* ParallaxBackground::create() {
    return (ParallaxBackground*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ParallaxBackground")()
         );
}

void ParallaxBackground::init_method_bindings() {
    method_bindings.mb__camera_moved =
        api->rebel_method_bind_get_method(
            "ParallaxBackground",
            "_camera_moved"
        );
    method_bindings.mb_get_limit_begin =
        api->rebel_method_bind_get_method(
            "ParallaxBackground",
            "get_limit_begin"
        );
    method_bindings.mb_get_limit_end =
        api->rebel_method_bind_get_method(
            "ParallaxBackground",
            "get_limit_end"
        );
    method_bindings.mb_get_scroll_base_offset =
        api->rebel_method_bind_get_method(
            "ParallaxBackground",
            "get_scroll_base_offset"
        );
    method_bindings.mb_get_scroll_base_scale =
        api->rebel_method_bind_get_method(
            "ParallaxBackground",
            "get_scroll_base_scale"
        );
    method_bindings.mb_get_scroll_offset =
        api->rebel_method_bind_get_method(
            "ParallaxBackground",
            "get_scroll_offset"
        );
    method_bindings.mb_is_ignore_camera_zoom =
        api->rebel_method_bind_get_method(
            "ParallaxBackground",
            "is_ignore_camera_zoom"
        );
    method_bindings.mb_set_ignore_camera_zoom =
        api->rebel_method_bind_get_method(
            "ParallaxBackground",
            "set_ignore_camera_zoom"
        );
    method_bindings.mb_set_limit_begin =
        api->rebel_method_bind_get_method(
            "ParallaxBackground",
            "set_limit_begin"
        );
    method_bindings.mb_set_limit_end =
        api->rebel_method_bind_get_method(
            "ParallaxBackground",
            "set_limit_end"
        );
    method_bindings.mb_set_scroll_base_offset =
        api->rebel_method_bind_get_method(
            "ParallaxBackground",
            "set_scroll_base_offset"
        );
    method_bindings.mb_set_scroll_base_scale =
        api->rebel_method_bind_get_method(
            "ParallaxBackground",
            "set_scroll_base_scale"
        );
    method_bindings.mb_set_scroll_offset =
        api->rebel_method_bind_get_method(
            "ParallaxBackground",
            "set_scroll_offset"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ParallaxBackground");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ParallaxBackground::MethodBindings ParallaxBackground::method_bindings = {};
void* ParallaxBackground::class_tag = nullptr;
} // namespace Rebel
