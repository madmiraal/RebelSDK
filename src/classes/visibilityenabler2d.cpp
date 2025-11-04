// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visibilityenabler2d.h"

#include "classes/icalls.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void VisibilityEnabler2D::_node_removed(const Node* arg0) {
    rebel_icall_void_object(
        method_bindings.mb__node_removed,
        (const Object*)this,
        arg0
    );
}

bool VisibilityEnabler2D::is_enabler_enabled(const int64_t enabler) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_enabler_enabled,
        (const Object*)this,
        enabler
    );
}

void VisibilityEnabler2D::set_enabler(const int64_t enabler, const bool enabled) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_enabler,
        (const Object*)this,
        enabler,
        enabled
    );
}

VisibilityEnabler2D* VisibilityEnabler2D::create() {
    return (VisibilityEnabler2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisibilityEnabler2D")()
         );
}

void VisibilityEnabler2D::init_method_bindings() {
    method_bindings.mb__node_removed =
        api->rebel_method_bind_get_method(
            "VisibilityEnabler2D",
            "_node_removed"
        );
    method_bindings.mb_is_enabler_enabled =
        api->rebel_method_bind_get_method(
            "VisibilityEnabler2D",
            "is_enabler_enabled"
        );
    method_bindings.mb_set_enabler =
        api->rebel_method_bind_get_method(
            "VisibilityEnabler2D",
            "set_enabler"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisibilityEnabler2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisibilityEnabler2D::MethodBindings VisibilityEnabler2D::method_bindings = {};
void* VisibilityEnabler2D::class_tag = nullptr;
} // namespace Rebel
