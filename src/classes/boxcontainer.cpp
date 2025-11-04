// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/boxcontainer.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void BoxContainer::add_spacer(const bool begin) {
    rebel_icall_void_bool(
        method_bindings.mb_add_spacer,
        (const Object*)this,
        begin
    );
}

BoxContainer::AlignMode BoxContainer::get_alignment() const {
    return (BoxContainer::AlignMode)rebel_icall_int(
        method_bindings.mb_get_alignment,
        (const Object*)this
    );
}

void BoxContainer::set_alignment(const int64_t alignment) {
    rebel_icall_void_int(
        method_bindings.mb_set_alignment,
        (const Object*)this,
        alignment
    );
}

void BoxContainer::init_method_bindings() {
    method_bindings.mb_add_spacer =
        api->rebel_method_bind_get_method(
            "BoxContainer",
            "add_spacer"
        );
    method_bindings.mb_get_alignment =
        api->rebel_method_bind_get_method(
            "BoxContainer",
            "get_alignment"
        );
    method_bindings.mb_set_alignment =
        api->rebel_method_bind_get_method(
            "BoxContainer",
            "set_alignment"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "BoxContainer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

BoxContainer::MethodBindings BoxContainer::method_bindings = {};
void* BoxContainer::class_tag = nullptr;
} // namespace Rebel
