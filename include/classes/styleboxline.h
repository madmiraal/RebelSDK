// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_STYLEBOXLINE_H
#define REBEL_STYLEBOXLINE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/stylebox.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class StyleBoxLine : public StyleBox {
public:
    Color get_color() const;
    real_t get_grow_begin() const;
    real_t get_grow_end() const;
    int64_t get_thickness() const;
    bool is_vertical() const;
    void set_color(const Color color);
    void set_grow_begin(const real_t offset);
    void set_grow_end(const real_t offset);
    void set_thickness(const int64_t thickness);
    void set_vertical(const bool vertical);

    static StyleBoxLine* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "StyleBoxLine";
    }

    inline static const char* get_rebel_class_name() {
        return "StyleBoxLine";
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
        rebel_method_bind* mb_get_color;
        rebel_method_bind* mb_get_grow_begin;
        rebel_method_bind* mb_get_grow_end;
        rebel_method_bind* mb_get_thickness;
        rebel_method_bind* mb_is_vertical;
        rebel_method_bind* mb_set_color;
        rebel_method_bind* mb_set_grow_begin;
        rebel_method_bind* mb_set_grow_end;
        rebel_method_bind* mb_set_thickness;
        rebel_method_bind* mb_set_vertical;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_STYLEBOXLINE_H
