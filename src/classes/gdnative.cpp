// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/gdnative.h"

#include "classes/gdnativelibrary.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Variant GDNative::call_native(const String calling_type, const String procedure_name, const Array arguments) {
    return rebel_icall_variant_string_string_array(
        method_bindings.mb_call_native,
        (const Object*)this,
        calling_type,
        procedure_name,
        arguments
    );
}

Ref<GDNativeLibrary> GDNative::get_library() const {
    return Ref<GDNativeLibrary>::create_ref(rebel_icall_object(
        method_bindings.mb_get_library,
        (const Object*)this
    ));
}

bool GDNative::initialize() {
    return rebel_icall_bool(
        method_bindings.mb_initialize,
        (const Object*)this
    );
}

void GDNative::set_library(const Ref<GDNativeLibrary> library) {
    rebel_icall_void_object(
        method_bindings.mb_set_library,
        (const Object*)this,
        library.ptr()
    );
}

bool GDNative::terminate() {
    return rebel_icall_bool(
        method_bindings.mb_terminate,
        (const Object*)this
    );
}

GDNative* GDNative::create() {
    return (GDNative*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GDNative")()
         );
}

void GDNative::init_method_bindings() {
    method_bindings.mb_call_native =
        api->rebel_method_bind_get_method(
            "GDNative",
            "call_native"
        );
    method_bindings.mb_get_library =
        api->rebel_method_bind_get_method(
            "GDNative",
            "get_library"
        );
    method_bindings.mb_initialize =
        api->rebel_method_bind_get_method(
            "GDNative",
            "initialize"
        );
    method_bindings.mb_set_library =
        api->rebel_method_bind_get_method(
            "GDNative",
            "set_library"
        );
    method_bindings.mb_terminate =
        api->rebel_method_bind_get_method(
            "GDNative",
            "terminate"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GDNative");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GDNative::MethodBindings GDNative::method_bindings = {};
void* GDNative::class_tag = nullptr;
} // namespace Rebel
