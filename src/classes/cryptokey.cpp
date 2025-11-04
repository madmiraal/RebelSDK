// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/cryptokey.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool CryptoKey::is_public_only() const {
    return rebel_icall_bool(
        method_bindings.mb_is_public_only,
        (const Object*)this
    );
}

Error CryptoKey::load(const String path, const bool public_only) {
    return (Error)rebel_icall_int_string_bool(
        method_bindings.mb_load,
        (const Object*)this,
        path,
        public_only
    );
}

Error CryptoKey::load_from_string(const String string_key, const bool public_only) {
    return (Error)rebel_icall_int_string_bool(
        method_bindings.mb_load_from_string,
        (const Object*)this,
        string_key,
        public_only
    );
}

Error CryptoKey::save(const String path, const bool public_only) {
    return (Error)rebel_icall_int_string_bool(
        method_bindings.mb_save,
        (const Object*)this,
        path,
        public_only
    );
}

String CryptoKey::save_to_string(const bool public_only) {
    return rebel_icall_string_bool(
        method_bindings.mb_save_to_string,
        (const Object*)this,
        public_only
    );
}

CryptoKey* CryptoKey::create() {
    return (CryptoKey*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CryptoKey")()
         );
}

void CryptoKey::init_method_bindings() {
    method_bindings.mb_is_public_only =
        api->rebel_method_bind_get_method(
            "CryptoKey",
            "is_public_only"
        );
    method_bindings.mb_load =
        api->rebel_method_bind_get_method(
            "CryptoKey",
            "load"
        );
    method_bindings.mb_load_from_string =
        api->rebel_method_bind_get_method(
            "CryptoKey",
            "load_from_string"
        );
    method_bindings.mb_save =
        api->rebel_method_bind_get_method(
            "CryptoKey",
            "save"
        );
    method_bindings.mb_save_to_string =
        api->rebel_method_bind_get_method(
            "CryptoKey",
            "save_to_string"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CryptoKey");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CryptoKey::MethodBindings CryptoKey::method_bindings = {};
void* CryptoKey::class_tag = nullptr;
} // namespace Rebel
