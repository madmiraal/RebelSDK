// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_STYLEBOX_H
#define REBEL_STYLEBOX_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CanvasItem;

class StyleBox : public Resource {
public:
    void draw(const RID canvas_item, const Rect2 rect) const;
    Vector2 get_center_size() const;
    CanvasItem* get_current_item_drawn() const;
    real_t get_default_margin(const int64_t margin) const;
    real_t get_margin(const int64_t margin) const;
    Vector2 get_minimum_size() const;
    Vector2 get_offset() const;
    void set_default_margin(const int64_t margin, const real_t offset);
    bool test_mask(const Vector2 point, const Rect2 rect) const;

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "StyleBox";
    }

    inline static const char* get_rebel_class_name() {
        return "StyleBox";
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
        rebel_method_bind* mb_get_center_size;
        rebel_method_bind* mb_get_current_item_drawn;
        rebel_method_bind* mb_get_default_margin;
        rebel_method_bind* mb_get_margin;
        rebel_method_bind* mb_get_minimum_size;
        rebel_method_bind* mb_get_offset;
        rebel_method_bind* mb_set_default_margin;
        rebel_method_bind* mb_test_mask;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_STYLEBOX_H
