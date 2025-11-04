// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/collisionshape.h"

#include "classes/icalls.h"
#include "classes/resource.h"
#include "classes/shape.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<Shape> CollisionShape::get_shape() const {
    return Ref<Shape>::create_ref(rebel_icall_object(
        method_bindings.mb_get_shape,
        (const Object*)this
    ));
}

bool CollisionShape::is_disabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_disabled,
        (const Object*)this
    );
}

void CollisionShape::make_convex_from_brothers() {
    rebel_icall_void(
        method_bindings.mb_make_convex_from_brothers,
        (const Object*)this
    );
}

void CollisionShape::resource_changed(const Ref<Resource> resource) {
    rebel_icall_void_object(
        method_bindings.mb_resource_changed,
        (const Object*)this,
        resource.ptr()
    );
}

void CollisionShape::set_disabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_disabled,
        (const Object*)this,
        enable
    );
}

void CollisionShape::set_shape(const Ref<Shape> shape) {
    rebel_icall_void_object(
        method_bindings.mb_set_shape,
        (const Object*)this,
        shape.ptr()
    );
}

CollisionShape* CollisionShape::create() {
    return (CollisionShape*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CollisionShape")()
         );
}

void CollisionShape::init_method_bindings() {
    method_bindings.mb_get_shape =
        api->rebel_method_bind_get_method(
            "CollisionShape",
            "get_shape"
        );
    method_bindings.mb_is_disabled =
        api->rebel_method_bind_get_method(
            "CollisionShape",
            "is_disabled"
        );
    method_bindings.mb_make_convex_from_brothers =
        api->rebel_method_bind_get_method(
            "CollisionShape",
            "make_convex_from_brothers"
        );
    method_bindings.mb_resource_changed =
        api->rebel_method_bind_get_method(
            "CollisionShape",
            "resource_changed"
        );
    method_bindings.mb_set_disabled =
        api->rebel_method_bind_get_method(
            "CollisionShape",
            "set_disabled"
        );
    method_bindings.mb_set_shape =
        api->rebel_method_bind_get_method(
            "CollisionShape",
            "set_shape"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CollisionShape");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CollisionShape::MethodBindings CollisionShape::method_bindings = {};
void* CollisionShape::class_tag = nullptr;
} // namespace Rebel
