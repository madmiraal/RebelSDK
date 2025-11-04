// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/skinreference.h"

#include "classes/icalls.h"
#include "classes/skin.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void SkinReference::_skin_changed() {
    rebel_icall_void(
        method_bindings.mb__skin_changed,
        (const Object*)this
    );
}

RID SkinReference::get_skeleton() const {
    return rebel_icall_rid(
        method_bindings.mb_get_skeleton,
        (const Object*)this
    );
}

Ref<Skin> SkinReference::get_skin() const {
    return Ref<Skin>::create_ref(rebel_icall_object(
        method_bindings.mb_get_skin,
        (const Object*)this
    ));
}

void SkinReference::init_method_bindings() {
    method_bindings.mb__skin_changed =
        api->rebel_method_bind_get_method(
            "SkinReference",
            "_skin_changed"
        );
    method_bindings.mb_get_skeleton =
        api->rebel_method_bind_get_method(
            "SkinReference",
            "get_skeleton"
        );
    method_bindings.mb_get_skin =
        api->rebel_method_bind_get_method(
            "SkinReference",
            "get_skin"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "SkinReference");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

SkinReference::MethodBindings SkinReference::method_bindings = {};
void* SkinReference::class_tag = nullptr;
} // namespace Rebel
