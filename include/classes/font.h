// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_FONT_H
#define REBEL_FONT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Font : public Resource {
public:
    void draw(const RID canvas_item, const Vector2 position, const String string, const Color modulate = Color(1,1,1,1), const int64_t clip_w = -1, const Color outline_modulate = Color(1,1,1,1)) const;
    real_t draw_char(const RID canvas_item, const Vector2 position, const int64_t _char, const int64_t next = -1, const Color modulate = Color(1,1,1,1), const bool outline = false) const;
    real_t get_ascent() const;
    Vector2 get_char_size(const int64_t _char, const int64_t next = 0) const;
    real_t get_descent() const;
    real_t get_height() const;
    Vector2 get_string_size(const String string) const;
    Vector2 get_wordwrap_string_size(const String string, const real_t width) const;
    bool has_outline() const;
    bool is_distance_field_hint() const;
    void update_changes();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Font";
    }

    inline static const char* get_rebel_class_name() {
        return "Font";
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
        rebel_method_bind* mb_draw;
        rebel_method_bind* mb_draw_char;
        rebel_method_bind* mb_get_ascent;
        rebel_method_bind* mb_get_char_size;
        rebel_method_bind* mb_get_descent;
        rebel_method_bind* mb_get_height;
        rebel_method_bind* mb_get_string_size;
        rebel_method_bind* mb_get_wordwrap_string_size;
        rebel_method_bind* mb_has_outline;
        rebel_method_bind* mb_is_distance_field_hint;
        rebel_method_bind* mb_update_changes;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_FONT_H
