// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/segmentshape2d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Vector2 SegmentShape2D::get_a() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_a,
        (const Object*)this
    );
}

Vector2 SegmentShape2D::get_b() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_b,
        (const Object*)this
    );
}

void SegmentShape2D::set_a(const Vector2 a) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_a,
        (const Object*)this,
        a
    );
}

void SegmentShape2D::set_b(const Vector2 b) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_b,
        (const Object*)this,
        b
    );
}

SegmentShape2D* SegmentShape2D::create() {
    return (SegmentShape2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"SegmentShape2D")()
         );
}

void SegmentShape2D::init_method_bindings() {
    method_bindings.mb_get_a =
        api->rebel_method_bind_get_method(
            "SegmentShape2D",
            "get_a"
        );
    method_bindings.mb_get_b =
        api->rebel_method_bind_get_method(
            "SegmentShape2D",
            "get_b"
        );
    method_bindings.mb_set_a =
        api->rebel_method_bind_get_method(
            "SegmentShape2D",
            "set_a"
        );
    method_bindings.mb_set_b =
        api->rebel_method_bind_get_method(
            "SegmentShape2D",
            "set_b"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "SegmentShape2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

SegmentShape2D::MethodBindings SegmentShape2D::method_bindings = {};
void* SegmentShape2D::class_tag = nullptr;
} // namespace Rebel
