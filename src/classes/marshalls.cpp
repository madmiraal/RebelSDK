// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/marshalls.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
PoolByteArray Marshalls::base64_to_raw(const String base64_str) {
    return rebel_icall_poolbytearray_string(
        method_bindings.mb_base64_to_raw,
        (const Object*)this,
        base64_str
    );
}

String Marshalls::base64_to_utf8(const String base64_str) {
    return rebel_icall_string_string(
        method_bindings.mb_base64_to_utf8,
        (const Object*)this,
        base64_str
    );
}

Variant Marshalls::base64_to_variant(const String base64_str, const bool allow_objects) {
    return rebel_icall_variant_string_bool(
        method_bindings.mb_base64_to_variant,
        (const Object*)this,
        base64_str,
        allow_objects
    );
}

String Marshalls::raw_to_base64(const PoolByteArray array) {
    return rebel_icall_string_poolbytearray(
        method_bindings.mb_raw_to_base64,
        (const Object*)this,
        array
    );
}

String Marshalls::utf8_to_base64(const String utf8_str) {
    return rebel_icall_string_string(
        method_bindings.mb_utf8_to_base64,
        (const Object*)this,
        utf8_str
    );
}

String Marshalls::variant_to_base64(const Variant variant, const bool full_objects) {
    return rebel_icall_string_variant_bool(
        method_bindings.mb_variant_to_base64,
        (const Object*)this,
        variant,
        full_objects
    );
}

Marshalls* Marshalls::singleton = nullptr;

Marshalls::Marshalls() {
    owner = api->rebel_global_get_singleton((char*) "Marshalls");
}

void Marshalls::init_method_bindings() {
    method_bindings.mb_base64_to_raw =
        api->rebel_method_bind_get_method(
            "_Marshalls",
            "base64_to_raw"
        );
    method_bindings.mb_base64_to_utf8 =
        api->rebel_method_bind_get_method(
            "_Marshalls",
            "base64_to_utf8"
        );
    method_bindings.mb_base64_to_variant =
        api->rebel_method_bind_get_method(
            "_Marshalls",
            "base64_to_variant"
        );
    method_bindings.mb_raw_to_base64 =
        api->rebel_method_bind_get_method(
            "_Marshalls",
            "raw_to_base64"
        );
    method_bindings.mb_utf8_to_base64 =
        api->rebel_method_bind_get_method(
            "_Marshalls",
            "utf8_to_base64"
        );
    method_bindings.mb_variant_to_base64 =
        api->rebel_method_bind_get_method(
            "_Marshalls",
            "variant_to_base64"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "_Marshalls");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Marshalls::MethodBindings Marshalls::method_bindings = {};
void* Marshalls::class_tag = nullptr;
} // namespace Rebel
