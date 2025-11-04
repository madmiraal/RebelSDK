// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/shape2d.h"

#include "classes/icalls.h"
#include "classes/shape2d.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool Shape2D::collide(const Transform2D local_xform, const Ref<Shape2D> with_shape, const Transform2D shape_xform) {
    return rebel_icall_bool_transform2d_object_transform2d(
        method_bindings.mb_collide,
        (const Object*)this,
        local_xform,
        with_shape.ptr(),
        shape_xform
    );
}

Array Shape2D::collide_and_get_contacts(const Transform2D local_xform, const Ref<Shape2D> with_shape, const Transform2D shape_xform) {
    return rebel_icall_array_transform2d_object_transform2d(
        method_bindings.mb_collide_and_get_contacts,
        (const Object*)this,
        local_xform,
        with_shape.ptr(),
        shape_xform
    );
}

bool Shape2D::collide_with_motion(const Transform2D local_xform, const Vector2 local_motion, const Ref<Shape2D> with_shape, const Transform2D shape_xform, const Vector2 shape_motion) {
    return rebel_icall_bool_transform2d_vector2_object_transform2d_vector2(
        method_bindings.mb_collide_with_motion,
        (const Object*)this,
        local_xform,
        local_motion,
        with_shape.ptr(),
        shape_xform,
        shape_motion
    );
}

Array Shape2D::collide_with_motion_and_get_contacts(const Transform2D local_xform, const Vector2 local_motion, const Ref<Shape2D> with_shape, const Transform2D shape_xform, const Vector2 shape_motion) {
    return rebel_icall_array_transform2d_vector2_object_transform2d_vector2(
        method_bindings.mb_collide_with_motion_and_get_contacts,
        (const Object*)this,
        local_xform,
        local_motion,
        with_shape.ptr(),
        shape_xform,
        shape_motion
    );
}

void Shape2D::draw(const RID canvas_item, const Color color) {
    rebel_icall_void_rid_color(
        method_bindings.mb_draw,
        (const Object*)this,
        canvas_item,
        color
    );
}

real_t Shape2D::get_custom_solver_bias() const {
    return rebel_icall_float(
        method_bindings.mb_get_custom_solver_bias,
        (const Object*)this
    );
}

void Shape2D::set_custom_solver_bias(const real_t bias) {
    rebel_icall_void_float(
        method_bindings.mb_set_custom_solver_bias,
        (const Object*)this,
        bias
    );
}

void Shape2D::init_method_bindings() {
    method_bindings.mb_collide =
        api->rebel_method_bind_get_method(
            "Shape2D",
            "collide"
        );
    method_bindings.mb_collide_and_get_contacts =
        api->rebel_method_bind_get_method(
            "Shape2D",
            "collide_and_get_contacts"
        );
    method_bindings.mb_collide_with_motion =
        api->rebel_method_bind_get_method(
            "Shape2D",
            "collide_with_motion"
        );
    method_bindings.mb_collide_with_motion_and_get_contacts =
        api->rebel_method_bind_get_method(
            "Shape2D",
            "collide_with_motion_and_get_contacts"
        );
    method_bindings.mb_draw =
        api->rebel_method_bind_get_method(
            "Shape2D",
            "draw"
        );
    method_bindings.mb_get_custom_solver_bias =
        api->rebel_method_bind_get_method(
            "Shape2D",
            "get_custom_solver_bias"
        );
    method_bindings.mb_set_custom_solver_bias =
        api->rebel_method_bind_get_method(
            "Shape2D",
            "set_custom_solver_bias"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Shape2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Shape2D::MethodBindings Shape2D::method_bindings = {};
void* Shape2D::class_tag = nullptr;
} // namespace Rebel
