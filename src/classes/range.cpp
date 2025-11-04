// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/range.h"

#include "classes/icalls.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t Range::get_as_ratio() const {
    return rebel_icall_float(
        method_bindings.mb_get_as_ratio,
        (const Object*)this
    );
}

real_t Range::get_max() const {
    return rebel_icall_float(
        method_bindings.mb_get_max,
        (const Object*)this
    );
}

real_t Range::get_min() const {
    return rebel_icall_float(
        method_bindings.mb_get_min,
        (const Object*)this
    );
}

real_t Range::get_page() const {
    return rebel_icall_float(
        method_bindings.mb_get_page,
        (const Object*)this
    );
}

real_t Range::get_step() const {
    return rebel_icall_float(
        method_bindings.mb_get_step,
        (const Object*)this
    );
}

real_t Range::get_value() const {
    return rebel_icall_float(
        method_bindings.mb_get_value,
        (const Object*)this
    );
}

bool Range::is_greater_allowed() const {
    return rebel_icall_bool(
        method_bindings.mb_is_greater_allowed,
        (const Object*)this
    );
}

bool Range::is_lesser_allowed() const {
    return rebel_icall_bool(
        method_bindings.mb_is_lesser_allowed,
        (const Object*)this
    );
}

bool Range::is_ratio_exp() const {
    return rebel_icall_bool(
        method_bindings.mb_is_ratio_exp,
        (const Object*)this
    );
}

bool Range::is_using_rounded_values() const {
    return rebel_icall_bool(
        method_bindings.mb_is_using_rounded_values,
        (const Object*)this
    );
}

void Range::set_allow_greater(const bool allow) {
    rebel_icall_void_bool(
        method_bindings.mb_set_allow_greater,
        (const Object*)this,
        allow
    );
}

void Range::set_allow_lesser(const bool allow) {
    rebel_icall_void_bool(
        method_bindings.mb_set_allow_lesser,
        (const Object*)this,
        allow
    );
}

void Range::set_as_ratio(const real_t value) {
    rebel_icall_void_float(
        method_bindings.mb_set_as_ratio,
        (const Object*)this,
        value
    );
}

void Range::set_exp_ratio(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_exp_ratio,
        (const Object*)this,
        enabled
    );
}

void Range::set_max(const real_t maximum) {
    rebel_icall_void_float(
        method_bindings.mb_set_max,
        (const Object*)this,
        maximum
    );
}

void Range::set_min(const real_t minimum) {
    rebel_icall_void_float(
        method_bindings.mb_set_min,
        (const Object*)this,
        minimum
    );
}

void Range::set_page(const real_t pagesize) {
    rebel_icall_void_float(
        method_bindings.mb_set_page,
        (const Object*)this,
        pagesize
    );
}

void Range::set_step(const real_t step) {
    rebel_icall_void_float(
        method_bindings.mb_set_step,
        (const Object*)this,
        step
    );
}

void Range::set_use_rounded_values(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_rounded_values,
        (const Object*)this,
        enabled
    );
}

void Range::set_value(const real_t value) {
    rebel_icall_void_float(
        method_bindings.mb_set_value,
        (const Object*)this,
        value
    );
}

void Range::share(const Node* with) {
    rebel_icall_void_object(
        method_bindings.mb_share,
        (const Object*)this,
        with
    );
}

void Range::unshare() {
    rebel_icall_void(
        method_bindings.mb_unshare,
        (const Object*)this
    );
}

void Range::init_method_bindings() {
    method_bindings.mb_get_as_ratio =
        api->rebel_method_bind_get_method(
            "Range",
            "get_as_ratio"
        );
    method_bindings.mb_get_max =
        api->rebel_method_bind_get_method(
            "Range",
            "get_max"
        );
    method_bindings.mb_get_min =
        api->rebel_method_bind_get_method(
            "Range",
            "get_min"
        );
    method_bindings.mb_get_page =
        api->rebel_method_bind_get_method(
            "Range",
            "get_page"
        );
    method_bindings.mb_get_step =
        api->rebel_method_bind_get_method(
            "Range",
            "get_step"
        );
    method_bindings.mb_get_value =
        api->rebel_method_bind_get_method(
            "Range",
            "get_value"
        );
    method_bindings.mb_is_greater_allowed =
        api->rebel_method_bind_get_method(
            "Range",
            "is_greater_allowed"
        );
    method_bindings.mb_is_lesser_allowed =
        api->rebel_method_bind_get_method(
            "Range",
            "is_lesser_allowed"
        );
    method_bindings.mb_is_ratio_exp =
        api->rebel_method_bind_get_method(
            "Range",
            "is_ratio_exp"
        );
    method_bindings.mb_is_using_rounded_values =
        api->rebel_method_bind_get_method(
            "Range",
            "is_using_rounded_values"
        );
    method_bindings.mb_set_allow_greater =
        api->rebel_method_bind_get_method(
            "Range",
            "set_allow_greater"
        );
    method_bindings.mb_set_allow_lesser =
        api->rebel_method_bind_get_method(
            "Range",
            "set_allow_lesser"
        );
    method_bindings.mb_set_as_ratio =
        api->rebel_method_bind_get_method(
            "Range",
            "set_as_ratio"
        );
    method_bindings.mb_set_exp_ratio =
        api->rebel_method_bind_get_method(
            "Range",
            "set_exp_ratio"
        );
    method_bindings.mb_set_max =
        api->rebel_method_bind_get_method(
            "Range",
            "set_max"
        );
    method_bindings.mb_set_min =
        api->rebel_method_bind_get_method(
            "Range",
            "set_min"
        );
    method_bindings.mb_set_page =
        api->rebel_method_bind_get_method(
            "Range",
            "set_page"
        );
    method_bindings.mb_set_step =
        api->rebel_method_bind_get_method(
            "Range",
            "set_step"
        );
    method_bindings.mb_set_use_rounded_values =
        api->rebel_method_bind_get_method(
            "Range",
            "set_use_rounded_values"
        );
    method_bindings.mb_set_value =
        api->rebel_method_bind_get_method(
            "Range",
            "set_value"
        );
    method_bindings.mb_share =
        api->rebel_method_bind_get_method(
            "Range",
            "share"
        );
    method_bindings.mb_unshare =
        api->rebel_method_bind_get_method(
            "Range",
            "unshare"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Range");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Range::MethodBindings Range::method_bindings = {};
void* Range::class_tag = nullptr;
} // namespace Rebel
