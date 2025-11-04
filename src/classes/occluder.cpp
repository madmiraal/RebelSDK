// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/occluder.h"

#include "classes/icalls.h"
#include "classes/occludershape.h"
#include "classes/resource.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<OccluderShape> Occluder::get_shape() const {
    return Ref<OccluderShape>::create_ref(rebel_icall_object(
        method_bindings.mb_get_shape,
        (const Object*)this
    ));
}

void Occluder::resource_changed(const Ref<Resource> resource) {
    rebel_icall_void_object(
        method_bindings.mb_resource_changed,
        (const Object*)this,
        resource.ptr()
    );
}

void Occluder::set_shape(const Ref<OccluderShape> shape) {
    rebel_icall_void_object(
        method_bindings.mb_set_shape,
        (const Object*)this,
        shape.ptr()
    );
}

Occluder* Occluder::create() {
    return (Occluder*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Occluder")()
         );
}

void Occluder::init_method_bindings() {
    method_bindings.mb_get_shape =
        api->rebel_method_bind_get_method(
            "Occluder",
            "get_shape"
        );
    method_bindings.mb_resource_changed =
        api->rebel_method_bind_get_method(
            "Occluder",
            "resource_changed"
        );
    method_bindings.mb_set_shape =
        api->rebel_method_bind_get_method(
            "Occluder",
            "set_shape"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Occluder");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Occluder::MethodBindings Occluder::method_bindings = {};
void* Occluder::class_tag = nullptr;
} // namespace Rebel
