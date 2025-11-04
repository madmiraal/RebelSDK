// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/x509certificate.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Error X509Certificate::load(const String path) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_load,
        (const Object*)this,
        path
    );
}

Error X509Certificate::save(const String path) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_save,
        (const Object*)this,
        path
    );
}

X509Certificate* X509Certificate::create() {
    return (X509Certificate*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"X509Certificate")()
         );
}

void X509Certificate::init_method_bindings() {
    method_bindings.mb_load =
        api->rebel_method_bind_get_method(
            "X509Certificate",
            "load"
        );
    method_bindings.mb_save =
        api->rebel_method_bind_get_method(
            "X509Certificate",
            "save"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "X509Certificate");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

X509Certificate::MethodBindings X509Certificate::method_bindings = {};
void* X509Certificate::class_tag = nullptr;
} // namespace Rebel
