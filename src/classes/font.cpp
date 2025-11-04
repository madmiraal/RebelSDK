// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/font.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Font::draw(const RID canvas_item, const Vector2 position, const String string, const Color modulate, const int64_t clip_w, const Color outline_modulate) const {
    rebel_icall_void_rid_vector2_string_color_int_color(
        method_bindings.mb_draw,
        (const Object*)this,
        canvas_item,
        position,
        string,
        modulate,
        clip_w,
        outline_modulate
    );
}

real_t Font::draw_char(const RID canvas_item, const Vector2 position, const int64_t _char, const int64_t next, const Color modulate, const bool outline) const {
    return rebel_icall_float_rid_vector2_int_int_color_bool(
        method_bindings.mb_draw_char,
        (const Object*)this,
        canvas_item,
        position,
        _char,
        next,
        modulate,
        outline
    );
}

real_t Font::get_ascent() const {
    return rebel_icall_float(
        method_bindings.mb_get_ascent,
        (const Object*)this
    );
}

Vector2 Font::get_char_size(const int64_t _char, const int64_t next) const {
    return rebel_icall_vector2_int_int(
        method_bindings.mb_get_char_size,
        (const Object*)this,
        _char,
        next
    );
}

real_t Font::get_descent() const {
    return rebel_icall_float(
        method_bindings.mb_get_descent,
        (const Object*)this
    );
}

real_t Font::get_height() const {
    return rebel_icall_float(
        method_bindings.mb_get_height,
        (const Object*)this
    );
}

Vector2 Font::get_string_size(const String string) const {
    return rebel_icall_vector2_string(
        method_bindings.mb_get_string_size,
        (const Object*)this,
        string
    );
}

Vector2 Font::get_wordwrap_string_size(const String string, const real_t width) const {
    return rebel_icall_vector2_string_float(
        method_bindings.mb_get_wordwrap_string_size,
        (const Object*)this,
        string,
        width
    );
}

bool Font::has_outline() const {
    return rebel_icall_bool(
        method_bindings.mb_has_outline,
        (const Object*)this
    );
}

bool Font::is_distance_field_hint() const {
    return rebel_icall_bool(
        method_bindings.mb_is_distance_field_hint,
        (const Object*)this
    );
}

void Font::update_changes() {
    rebel_icall_void(
        method_bindings.mb_update_changes,
        (const Object*)this
    );
}

void Font::init_method_bindings() {
    method_bindings.mb_draw =
        api->rebel_method_bind_get_method(
            "Font",
            "draw"
        );
    method_bindings.mb_draw_char =
        api->rebel_method_bind_get_method(
            "Font",
            "draw_char"
        );
    method_bindings.mb_get_ascent =
        api->rebel_method_bind_get_method(
            "Font",
            "get_ascent"
        );
    method_bindings.mb_get_char_size =
        api->rebel_method_bind_get_method(
            "Font",
            "get_char_size"
        );
    method_bindings.mb_get_descent =
        api->rebel_method_bind_get_method(
            "Font",
            "get_descent"
        );
    method_bindings.mb_get_height =
        api->rebel_method_bind_get_method(
            "Font",
            "get_height"
        );
    method_bindings.mb_get_string_size =
        api->rebel_method_bind_get_method(
            "Font",
            "get_string_size"
        );
    method_bindings.mb_get_wordwrap_string_size =
        api->rebel_method_bind_get_method(
            "Font",
            "get_wordwrap_string_size"
        );
    method_bindings.mb_has_outline =
        api->rebel_method_bind_get_method(
            "Font",
            "has_outline"
        );
    method_bindings.mb_is_distance_field_hint =
        api->rebel_method_bind_get_method(
            "Font",
            "is_distance_field_hint"
        );
    method_bindings.mb_update_changes =
        api->rebel_method_bind_get_method(
            "Font",
            "update_changes"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Font");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Font::MethodBindings Font::method_bindings = {};
void* Font::class_tag = nullptr;
} // namespace Rebel
