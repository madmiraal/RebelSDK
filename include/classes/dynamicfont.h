// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_DYNAMICFONT_H
#define REBEL_DYNAMICFONT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/font.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class DynamicFontData;

class DynamicFont : public Font {
public:
    enum SpacingType {
        SPACING_TOP = 0,
        SPACING_BOTTOM = 1,
        SPACING_CHAR = 2,
        SPACING_SPACE = 3,
    };

    void add_fallback(const Ref<DynamicFontData> data);
    String get_available_chars() const;
    Ref<DynamicFontData> get_fallback(const int64_t idx) const;
    int64_t get_fallback_count() const;
    Ref<DynamicFontData> get_font_data() const;
    Color get_outline_color() const;
    int64_t get_outline_size() const;
    int64_t get_size() const;
    int64_t get_spacing(const int64_t type) const;
    bool get_use_filter() const;
    bool get_use_mipmaps() const;
    void remove_fallback(const int64_t idx);
    void set_fallback(const int64_t idx, const Ref<DynamicFontData> data);
    void set_font_data(const Ref<DynamicFontData> data);
    void set_outline_color(const Color color);
    void set_outline_size(const int64_t size);
    void set_size(const int64_t data);
    void set_spacing(const int64_t type, const int64_t value);
    void set_use_filter(const bool enable);
    void set_use_mipmaps(const bool enable);

    static DynamicFont* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "DynamicFont";
    }

    inline static const char* get_rebel_class_name() {
        return "DynamicFont";
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
        rebel_method_bind* mb_add_fallback;
        rebel_method_bind* mb_get_available_chars;
        rebel_method_bind* mb_get_fallback;
        rebel_method_bind* mb_get_fallback_count;
        rebel_method_bind* mb_get_font_data;
        rebel_method_bind* mb_get_outline_color;
        rebel_method_bind* mb_get_outline_size;
        rebel_method_bind* mb_get_size;
        rebel_method_bind* mb_get_spacing;
        rebel_method_bind* mb_get_use_filter;
        rebel_method_bind* mb_get_use_mipmaps;
        rebel_method_bind* mb_remove_fallback;
        rebel_method_bind* mb_set_fallback;
        rebel_method_bind* mb_set_font_data;
        rebel_method_bind* mb_set_outline_color;
        rebel_method_bind* mb_set_outline_size;
        rebel_method_bind* mb_set_size;
        rebel_method_bind* mb_set_spacing;
        rebel_method_bind* mb_set_use_filter;
        rebel_method_bind* mb_set_use_mipmaps;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_DYNAMICFONT_H
