// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/packeddatacontainer.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
PoolByteArray PackedDataContainer::_get_data() const {
    return rebel_icall_poolbytearray(
        method_bindings.mb__get_data,
        (const Object*)this
    );
}

Variant PackedDataContainer::_iter_get(const Variant arg0) {
    return rebel_icall_variant_variant(
        method_bindings.mb__iter_get,
        (const Object*)this,
        arg0
    );
}

Variant PackedDataContainer::_iter_init(const Array arg0) {
    return rebel_icall_variant_array(
        method_bindings.mb__iter_init,
        (const Object*)this,
        arg0
    );
}

Variant PackedDataContainer::_iter_next(const Array arg0) {
    return rebel_icall_variant_array(
        method_bindings.mb__iter_next,
        (const Object*)this,
        arg0
    );
}

void PackedDataContainer::_set_data(const PoolByteArray arg0) {
    rebel_icall_void_poolbytearray(
        method_bindings.mb__set_data,
        (const Object*)this,
        arg0
    );
}

Error PackedDataContainer::pack(const Variant value) {
    return (Error)rebel_icall_int_variant(
        method_bindings.mb_pack,
        (const Object*)this,
        value
    );
}

int64_t PackedDataContainer::size() const {
    return rebel_icall_int(
        method_bindings.mb_size,
        (const Object*)this
    );
}

PackedDataContainer* PackedDataContainer::create() {
    return (PackedDataContainer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PackedDataContainer")()
         );
}

void PackedDataContainer::init_method_bindings() {
    method_bindings.mb__get_data =
        api->rebel_method_bind_get_method(
            "PackedDataContainer",
            "_get_data"
        );
    method_bindings.mb__iter_get =
        api->rebel_method_bind_get_method(
            "PackedDataContainer",
            "_iter_get"
        );
    method_bindings.mb__iter_init =
        api->rebel_method_bind_get_method(
            "PackedDataContainer",
            "_iter_init"
        );
    method_bindings.mb__iter_next =
        api->rebel_method_bind_get_method(
            "PackedDataContainer",
            "_iter_next"
        );
    method_bindings.mb__set_data =
        api->rebel_method_bind_get_method(
            "PackedDataContainer",
            "_set_data"
        );
    method_bindings.mb_pack =
        api->rebel_method_bind_get_method(
            "PackedDataContainer",
            "pack"
        );
    method_bindings.mb_size =
        api->rebel_method_bind_get_method(
            "PackedDataContainer",
            "size"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PackedDataContainer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PackedDataContainer::MethodBindings PackedDataContainer::method_bindings = {};
void* PackedDataContainer::class_tag = nullptr;
} // namespace Rebel
