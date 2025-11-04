// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/cullinstance.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool CullInstance::get_include_in_bound() const {
    return rebel_icall_bool(
        method_bindings.mb_get_include_in_bound,
        (const Object*)this
    );
}

int64_t CullInstance::get_portal_autoplace_priority() const {
    return rebel_icall_int(
        method_bindings.mb_get_portal_autoplace_priority,
        (const Object*)this
    );
}

CullInstance::PortalMode CullInstance::get_portal_mode() const {
    return (CullInstance::PortalMode)rebel_icall_int(
        method_bindings.mb_get_portal_mode,
        (const Object*)this
    );
}

void CullInstance::set_include_in_bound(const bool arg0) {
    rebel_icall_void_bool(
        method_bindings.mb_set_include_in_bound,
        (const Object*)this,
        arg0
    );
}

void CullInstance::set_portal_autoplace_priority(const int64_t priority) {
    rebel_icall_void_int(
        method_bindings.mb_set_portal_autoplace_priority,
        (const Object*)this,
        priority
    );
}

void CullInstance::set_portal_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_portal_mode,
        (const Object*)this,
        mode
    );
}

void CullInstance::init_method_bindings() {
    method_bindings.mb_get_include_in_bound =
        api->rebel_method_bind_get_method(
            "CullInstance",
            "get_include_in_bound"
        );
    method_bindings.mb_get_portal_autoplace_priority =
        api->rebel_method_bind_get_method(
            "CullInstance",
            "get_portal_autoplace_priority"
        );
    method_bindings.mb_get_portal_mode =
        api->rebel_method_bind_get_method(
            "CullInstance",
            "get_portal_mode"
        );
    method_bindings.mb_set_include_in_bound =
        api->rebel_method_bind_get_method(
            "CullInstance",
            "set_include_in_bound"
        );
    method_bindings.mb_set_portal_autoplace_priority =
        api->rebel_method_bind_get_method(
            "CullInstance",
            "set_portal_autoplace_priority"
        );
    method_bindings.mb_set_portal_mode =
        api->rebel_method_bind_get_method(
            "CullInstance",
            "set_portal_mode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CullInstance");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CullInstance::MethodBindings CullInstance::method_bindings = {};
void* CullInstance::class_tag = nullptr;
} // namespace Rebel
