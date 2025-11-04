// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/stylebox.h"

#include "classes/canvasitem.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void StyleBox::draw(const RID canvas_item, const Rect2 rect) const {
    rebel_icall_void_rid_rect2(
        method_bindings.mb_draw,
        (const Object*)this,
        canvas_item,
        rect
    );
}

Vector2 StyleBox::get_center_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_center_size,
        (const Object*)this
    );
}

CanvasItem* StyleBox::get_current_item_drawn() const {
    return (CanvasItem*)rebel_icall_object(
        method_bindings.mb_get_current_item_drawn,
        (const Object*)this
    );
}

real_t StyleBox::get_default_margin(const int64_t margin) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_default_margin,
        (const Object*)this,
        margin
    );
}

real_t StyleBox::get_margin(const int64_t margin) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_margin,
        (const Object*)this,
        margin
    );
}

Vector2 StyleBox::get_minimum_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_minimum_size,
        (const Object*)this
    );
}

Vector2 StyleBox::get_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_offset,
        (const Object*)this
    );
}

void StyleBox::set_default_margin(const int64_t margin, const real_t offset) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_default_margin,
        (const Object*)this,
        margin,
        offset
    );
}

bool StyleBox::test_mask(const Vector2 point, const Rect2 rect) const {
    return rebel_icall_bool_vector2_rect2(
        method_bindings.mb_test_mask,
        (const Object*)this,
        point,
        rect
    );
}

void StyleBox::init_method_bindings() {
    method_bindings.mb_draw =
        api->rebel_method_bind_get_method(
            "StyleBox",
            "draw"
        );
    method_bindings.mb_get_center_size =
        api->rebel_method_bind_get_method(
            "StyleBox",
            "get_center_size"
        );
    method_bindings.mb_get_current_item_drawn =
        api->rebel_method_bind_get_method(
            "StyleBox",
            "get_current_item_drawn"
        );
    method_bindings.mb_get_default_margin =
        api->rebel_method_bind_get_method(
            "StyleBox",
            "get_default_margin"
        );
    method_bindings.mb_get_margin =
        api->rebel_method_bind_get_method(
            "StyleBox",
            "get_margin"
        );
    method_bindings.mb_get_minimum_size =
        api->rebel_method_bind_get_method(
            "StyleBox",
            "get_minimum_size"
        );
    method_bindings.mb_get_offset =
        api->rebel_method_bind_get_method(
            "StyleBox",
            "get_offset"
        );
    method_bindings.mb_set_default_margin =
        api->rebel_method_bind_get_method(
            "StyleBox",
            "set_default_margin"
        );
    method_bindings.mb_test_mask =
        api->rebel_method_bind_get_method(
            "StyleBox",
            "test_mask"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "StyleBox");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

StyleBox::MethodBindings StyleBox::method_bindings = {};
void* StyleBox::class_tag = nullptr;
} // namespace Rebel
