// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/packeddatacontainerref.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool PackedDataContainerRef::_is_dictionary() const {
    return rebel_icall_bool(
        method_bindings.mb__is_dictionary,
        (const Object*)this
    );
}

Variant PackedDataContainerRef::_iter_get(const Variant arg0) {
    return rebel_icall_variant_variant(
        method_bindings.mb__iter_get,
        (const Object*)this,
        arg0
    );
}

Variant PackedDataContainerRef::_iter_init(const Array arg0) {
    return rebel_icall_variant_array(
        method_bindings.mb__iter_init,
        (const Object*)this,
        arg0
    );
}

Variant PackedDataContainerRef::_iter_next(const Array arg0) {
    return rebel_icall_variant_array(
        method_bindings.mb__iter_next,
        (const Object*)this,
        arg0
    );
}

int64_t PackedDataContainerRef::size() const {
    return rebel_icall_int(
        method_bindings.mb_size,
        (const Object*)this
    );
}

void PackedDataContainerRef::init_method_bindings() {
    method_bindings.mb__is_dictionary =
        api->rebel_method_bind_get_method(
            "PackedDataContainerRef",
            "_is_dictionary"
        );
    method_bindings.mb__iter_get =
        api->rebel_method_bind_get_method(
            "PackedDataContainerRef",
            "_iter_get"
        );
    method_bindings.mb__iter_init =
        api->rebel_method_bind_get_method(
            "PackedDataContainerRef",
            "_iter_init"
        );
    method_bindings.mb__iter_next =
        api->rebel_method_bind_get_method(
            "PackedDataContainerRef",
            "_iter_next"
        );
    method_bindings.mb_size =
        api->rebel_method_bind_get_method(
            "PackedDataContainerRef",
            "size"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PackedDataContainerRef");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PackedDataContainerRef::MethodBindings PackedDataContainerRef::method_bindings = {};
void* PackedDataContainerRef::class_tag = nullptr;
} // namespace Rebel
