// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/aspectratiocontainer.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
AspectRatioContainer::AlignMode AspectRatioContainer::get_alignment_horizontal() const {
    return (AspectRatioContainer::AlignMode)rebel_icall_int(
        method_bindings.mb_get_alignment_horizontal,
        (const Object*)this
    );
}

AspectRatioContainer::AlignMode AspectRatioContainer::get_alignment_vertical() const {
    return (AspectRatioContainer::AlignMode)rebel_icall_int(
        method_bindings.mb_get_alignment_vertical,
        (const Object*)this
    );
}

real_t AspectRatioContainer::get_ratio() const {
    return rebel_icall_float(
        method_bindings.mb_get_ratio,
        (const Object*)this
    );
}

AspectRatioContainer::StretchMode AspectRatioContainer::get_stretch_mode() const {
    return (AspectRatioContainer::StretchMode)rebel_icall_int(
        method_bindings.mb_get_stretch_mode,
        (const Object*)this
    );
}

void AspectRatioContainer::set_alignment_horizontal(const int64_t alignment_horizontal) {
    rebel_icall_void_int(
        method_bindings.mb_set_alignment_horizontal,
        (const Object*)this,
        alignment_horizontal
    );
}

void AspectRatioContainer::set_alignment_vertical(const int64_t alignment_vertical) {
    rebel_icall_void_int(
        method_bindings.mb_set_alignment_vertical,
        (const Object*)this,
        alignment_vertical
    );
}

void AspectRatioContainer::set_ratio(const real_t ratio) {
    rebel_icall_void_float(
        method_bindings.mb_set_ratio,
        (const Object*)this,
        ratio
    );
}

void AspectRatioContainer::set_stretch_mode(const int64_t stretch_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_stretch_mode,
        (const Object*)this,
        stretch_mode
    );
}

AspectRatioContainer* AspectRatioContainer::create() {
    return (AspectRatioContainer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AspectRatioContainer")()
         );
}

void AspectRatioContainer::init_method_bindings() {
    method_bindings.mb_get_alignment_horizontal =
        api->rebel_method_bind_get_method(
            "AspectRatioContainer",
            "get_alignment_horizontal"
        );
    method_bindings.mb_get_alignment_vertical =
        api->rebel_method_bind_get_method(
            "AspectRatioContainer",
            "get_alignment_vertical"
        );
    method_bindings.mb_get_ratio =
        api->rebel_method_bind_get_method(
            "AspectRatioContainer",
            "get_ratio"
        );
    method_bindings.mb_get_stretch_mode =
        api->rebel_method_bind_get_method(
            "AspectRatioContainer",
            "get_stretch_mode"
        );
    method_bindings.mb_set_alignment_horizontal =
        api->rebel_method_bind_get_method(
            "AspectRatioContainer",
            "set_alignment_horizontal"
        );
    method_bindings.mb_set_alignment_vertical =
        api->rebel_method_bind_get_method(
            "AspectRatioContainer",
            "set_alignment_vertical"
        );
    method_bindings.mb_set_ratio =
        api->rebel_method_bind_get_method(
            "AspectRatioContainer",
            "set_ratio"
        );
    method_bindings.mb_set_stretch_mode =
        api->rebel_method_bind_get_method(
            "AspectRatioContainer",
            "set_stretch_mode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AspectRatioContainer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AspectRatioContainer::MethodBindings AspectRatioContainer::method_bindings = {};
void* AspectRatioContainer::class_tag = nullptr;
} // namespace Rebel
