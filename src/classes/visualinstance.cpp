// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualinstance.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
RID VisualInstance::_get_visual_instance_rid() const {
    return rebel_icall_rid(
        method_bindings.mb__get_visual_instance_rid,
        (const Object*)this
    );
}

AABB VisualInstance::get_aabb() const {
    return rebel_icall_aabb(
        method_bindings.mb_get_aabb,
        (const Object*)this
    );
}

RID VisualInstance::get_base() const {
    return rebel_icall_rid(
        method_bindings.mb_get_base,
        (const Object*)this
    );
}

RID VisualInstance::get_instance() const {
    return rebel_icall_rid(
        method_bindings.mb_get_instance,
        (const Object*)this
    );
}

int64_t VisualInstance::get_layer_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_layer_mask,
        (const Object*)this
    );
}

bool VisualInstance::get_layer_mask_bit(const int64_t layer) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_layer_mask_bit,
        (const Object*)this,
        layer
    );
}

AABB VisualInstance::get_transformed_aabb() const {
    return rebel_icall_aabb(
        method_bindings.mb_get_transformed_aabb,
        (const Object*)this
    );
}

void VisualInstance::set_base(const RID base) {
    rebel_icall_void_rid(
        method_bindings.mb_set_base,
        (const Object*)this,
        base
    );
}

void VisualInstance::set_layer_mask(const int64_t mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_layer_mask,
        (const Object*)this,
        mask
    );
}

void VisualInstance::set_layer_mask_bit(const int64_t layer, const bool enabled) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_layer_mask_bit,
        (const Object*)this,
        layer,
        enabled
    );
}

void VisualInstance::init_method_bindings() {
    method_bindings.mb__get_visual_instance_rid =
        api->rebel_method_bind_get_method(
            "VisualInstance",
            "_get_visual_instance_rid"
        );
    method_bindings.mb_get_aabb =
        api->rebel_method_bind_get_method(
            "VisualInstance",
            "get_aabb"
        );
    method_bindings.mb_get_base =
        api->rebel_method_bind_get_method(
            "VisualInstance",
            "get_base"
        );
    method_bindings.mb_get_instance =
        api->rebel_method_bind_get_method(
            "VisualInstance",
            "get_instance"
        );
    method_bindings.mb_get_layer_mask =
        api->rebel_method_bind_get_method(
            "VisualInstance",
            "get_layer_mask"
        );
    method_bindings.mb_get_layer_mask_bit =
        api->rebel_method_bind_get_method(
            "VisualInstance",
            "get_layer_mask_bit"
        );
    method_bindings.mb_get_transformed_aabb =
        api->rebel_method_bind_get_method(
            "VisualInstance",
            "get_transformed_aabb"
        );
    method_bindings.mb_set_base =
        api->rebel_method_bind_get_method(
            "VisualInstance",
            "set_base"
        );
    method_bindings.mb_set_layer_mask =
        api->rebel_method_bind_get_method(
            "VisualInstance",
            "set_layer_mask"
        );
    method_bindings.mb_set_layer_mask_bit =
        api->rebel_method_bind_get_method(
            "VisualInstance",
            "set_layer_mask_bit"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualInstance");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualInstance::MethodBindings VisualInstance::method_bindings = {};
void* VisualInstance::class_tag = nullptr;
} // namespace Rebel
