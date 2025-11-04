// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_LABEL_H
#define REBEL_LABEL_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/control.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Label : public Control {
public:
    enum Align {
        ALIGN_LEFT = 0,
        ALIGN_CENTER = 1,
        ALIGN_RIGHT = 2,
        ALIGN_FILL = 3,
    };

    enum VAlign {
        VALIGN_TOP = 0,
        VALIGN_CENTER = 1,
        VALIGN_BOTTOM = 2,
        VALIGN_FILL = 3,
    };

    Label::Align get_align() const;
    int64_t get_line_count() const;
    int64_t get_line_height() const;
    int64_t get_lines_skipped() const;
    int64_t get_max_lines_visible() const;
    real_t get_percent_visible() const;
    String get_text() const;
    int64_t get_total_character_count() const;
    Label::VAlign get_valign() const;
    int64_t get_visible_characters() const;
    int64_t get_visible_line_count() const;
    bool has_autowrap() const;
    bool is_clipping_text() const;
    bool is_uppercase() const;
    void set_align(const int64_t align);
    void set_autowrap(const bool enable);
    void set_clip_text(const bool enable);
    void set_lines_skipped(const int64_t lines_skipped);
    void set_max_lines_visible(const int64_t lines_visible);
    void set_percent_visible(const real_t percent_visible);
    void set_text(const String text);
    void set_uppercase(const bool enable);
    void set_valign(const int64_t valign);
    void set_visible_characters(const int64_t amount);

    static Label* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Label";
    }

    inline static const char* get_rebel_class_name() {
        return "Label";
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
        rebel_method_bind* mb_get_align;
        rebel_method_bind* mb_get_line_count;
        rebel_method_bind* mb_get_line_height;
        rebel_method_bind* mb_get_lines_skipped;
        rebel_method_bind* mb_get_max_lines_visible;
        rebel_method_bind* mb_get_percent_visible;
        rebel_method_bind* mb_get_text;
        rebel_method_bind* mb_get_total_character_count;
        rebel_method_bind* mb_get_valign;
        rebel_method_bind* mb_get_visible_characters;
        rebel_method_bind* mb_get_visible_line_count;
        rebel_method_bind* mb_has_autowrap;
        rebel_method_bind* mb_is_clipping_text;
        rebel_method_bind* mb_is_uppercase;
        rebel_method_bind* mb_set_align;
        rebel_method_bind* mb_set_autowrap;
        rebel_method_bind* mb_set_clip_text;
        rebel_method_bind* mb_set_lines_skipped;
        rebel_method_bind* mb_set_max_lines_visible;
        rebel_method_bind* mb_set_percent_visible;
        rebel_method_bind* mb_set_text;
        rebel_method_bind* mb_set_uppercase;
        rebel_method_bind* mb_set_valign;
        rebel_method_bind* mb_set_visible_characters;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_LABEL_H
