// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/splitcontainer.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void SplitContainer::_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void SplitContainer::clamp_split_offset() {
    rebel_icall_void(
        method_bindings.mb_clamp_split_offset,
        (const Object*)this
    );
}

SplitContainer::DraggerVisibility SplitContainer::get_dragger_visibility() const {
    return (SplitContainer::DraggerVisibility)rebel_icall_int(
        method_bindings.mb_get_dragger_visibility,
        (const Object*)this
    );
}

int64_t SplitContainer::get_split_offset() const {
    return rebel_icall_int(
        method_bindings.mb_get_split_offset,
        (const Object*)this
    );
}

bool SplitContainer::is_collapsed() const {
    return rebel_icall_bool(
        method_bindings.mb_is_collapsed,
        (const Object*)this
    );
}

void SplitContainer::set_collapsed(const bool collapsed) {
    rebel_icall_void_bool(
        method_bindings.mb_set_collapsed,
        (const Object*)this,
        collapsed
    );
}

void SplitContainer::set_dragger_visibility(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_dragger_visibility,
        (const Object*)this,
        mode
    );
}

void SplitContainer::set_split_offset(const int64_t offset) {
    rebel_icall_void_int(
        method_bindings.mb_set_split_offset,
        (const Object*)this,
        offset
    );
}

void SplitContainer::init_method_bindings() {
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "SplitContainer",
            "_gui_input"
        );
    method_bindings.mb_clamp_split_offset =
        api->rebel_method_bind_get_method(
            "SplitContainer",
            "clamp_split_offset"
        );
    method_bindings.mb_get_dragger_visibility =
        api->rebel_method_bind_get_method(
            "SplitContainer",
            "get_dragger_visibility"
        );
    method_bindings.mb_get_split_offset =
        api->rebel_method_bind_get_method(
            "SplitContainer",
            "get_split_offset"
        );
    method_bindings.mb_is_collapsed =
        api->rebel_method_bind_get_method(
            "SplitContainer",
            "is_collapsed"
        );
    method_bindings.mb_set_collapsed =
        api->rebel_method_bind_get_method(
            "SplitContainer",
            "set_collapsed"
        );
    method_bindings.mb_set_dragger_visibility =
        api->rebel_method_bind_get_method(
            "SplitContainer",
            "set_dragger_visibility"
        );
    method_bindings.mb_set_split_offset =
        api->rebel_method_bind_get_method(
            "SplitContainer",
            "set_split_offset"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "SplitContainer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

SplitContainer::MethodBindings SplitContainer::method_bindings = {};
void* SplitContainer::class_tag = nullptr;
} // namespace Rebel
