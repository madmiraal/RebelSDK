// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/container.h"

#include "classes/control.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Container::_child_minsize_changed() {
    rebel_icall_void(
        method_bindings.mb__child_minsize_changed,
        (const Object*)this
    );
}

void Container::_sort_children() {
    rebel_icall_void(
        method_bindings.mb__sort_children,
        (const Object*)this
    );
}

void Container::fit_child_in_rect(const Control* child, const Rect2 rect) {
    rebel_icall_void_object_rect2(
        method_bindings.mb_fit_child_in_rect,
        (const Object*)this,
        child,
        rect
    );
}

void Container::queue_sort() {
    rebel_icall_void(
        method_bindings.mb_queue_sort,
        (const Object*)this
    );
}

Container* Container::create() {
    return (Container*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Container")()
         );
}

void Container::init_method_bindings() {
    method_bindings.mb__child_minsize_changed =
        api->rebel_method_bind_get_method(
            "Container",
            "_child_minsize_changed"
        );
    method_bindings.mb__sort_children =
        api->rebel_method_bind_get_method(
            "Container",
            "_sort_children"
        );
    method_bindings.mb_fit_child_in_rect =
        api->rebel_method_bind_get_method(
            "Container",
            "fit_child_in_rect"
        );
    method_bindings.mb_queue_sort =
        api->rebel_method_bind_get_method(
            "Container",
            "queue_sort"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Container");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Container::MethodBindings Container::method_bindings = {};
void* Container::class_tag = nullptr;
} // namespace Rebel
