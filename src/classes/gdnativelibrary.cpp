// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/gdnativelibrary.h"

#include "classes/configfile.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<ConfigFile> GDNativeLibrary::get_config_file() {
    return Ref<ConfigFile>::create_ref(rebel_icall_object(
        method_bindings.mb_get_config_file,
        (const Object*)this
    ));
}

PoolStringArray GDNativeLibrary::get_current_dependencies() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_current_dependencies,
        (const Object*)this
    );
}

String GDNativeLibrary::get_current_library_path() const {
    return rebel_icall_string(
        method_bindings.mb_get_current_library_path,
        (const Object*)this
    );
}

String GDNativeLibrary::get_symbol_prefix() const {
    return rebel_icall_string(
        method_bindings.mb_get_symbol_prefix,
        (const Object*)this
    );
}

bool GDNativeLibrary::is_reloadable() const {
    return rebel_icall_bool(
        method_bindings.mb_is_reloadable,
        (const Object*)this
    );
}

bool GDNativeLibrary::is_singleton() const {
    return rebel_icall_bool(
        method_bindings.mb_is_singleton,
        (const Object*)this
    );
}

void GDNativeLibrary::set_config_file(const Ref<ConfigFile> config_file) {
    rebel_icall_void_object(
        method_bindings.mb_set_config_file,
        (const Object*)this,
        config_file.ptr()
    );
}

void GDNativeLibrary::set_load_once(const bool load_once) {
    rebel_icall_void_bool(
        method_bindings.mb_set_load_once,
        (const Object*)this,
        load_once
    );
}

void GDNativeLibrary::set_reloadable(const bool reloadable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_reloadable,
        (const Object*)this,
        reloadable
    );
}

void GDNativeLibrary::set_singleton(const bool singleton) {
    rebel_icall_void_bool(
        method_bindings.mb_set_singleton,
        (const Object*)this,
        singleton
    );
}

void GDNativeLibrary::set_symbol_prefix(const String symbol_prefix) {
    rebel_icall_void_string(
        method_bindings.mb_set_symbol_prefix,
        (const Object*)this,
        symbol_prefix
    );
}

bool GDNativeLibrary::should_load_once() const {
    return rebel_icall_bool(
        method_bindings.mb_should_load_once,
        (const Object*)this
    );
}

GDNativeLibrary* GDNativeLibrary::create() {
    return (GDNativeLibrary*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GDNativeLibrary")()
         );
}

void GDNativeLibrary::init_method_bindings() {
    method_bindings.mb_get_config_file =
        api->rebel_method_bind_get_method(
            "GDNativeLibrary",
            "get_config_file"
        );
    method_bindings.mb_get_current_dependencies =
        api->rebel_method_bind_get_method(
            "GDNativeLibrary",
            "get_current_dependencies"
        );
    method_bindings.mb_get_current_library_path =
        api->rebel_method_bind_get_method(
            "GDNativeLibrary",
            "get_current_library_path"
        );
    method_bindings.mb_get_symbol_prefix =
        api->rebel_method_bind_get_method(
            "GDNativeLibrary",
            "get_symbol_prefix"
        );
    method_bindings.mb_is_reloadable =
        api->rebel_method_bind_get_method(
            "GDNativeLibrary",
            "is_reloadable"
        );
    method_bindings.mb_is_singleton =
        api->rebel_method_bind_get_method(
            "GDNativeLibrary",
            "is_singleton"
        );
    method_bindings.mb_set_config_file =
        api->rebel_method_bind_get_method(
            "GDNativeLibrary",
            "set_config_file"
        );
    method_bindings.mb_set_load_once =
        api->rebel_method_bind_get_method(
            "GDNativeLibrary",
            "set_load_once"
        );
    method_bindings.mb_set_reloadable =
        api->rebel_method_bind_get_method(
            "GDNativeLibrary",
            "set_reloadable"
        );
    method_bindings.mb_set_singleton =
        api->rebel_method_bind_get_method(
            "GDNativeLibrary",
            "set_singleton"
        );
    method_bindings.mb_set_symbol_prefix =
        api->rebel_method_bind_get_method(
            "GDNativeLibrary",
            "set_symbol_prefix"
        );
    method_bindings.mb_should_load_once =
        api->rebel_method_bind_get_method(
            "GDNativeLibrary",
            "should_load_once"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GDNativeLibrary");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GDNativeLibrary::MethodBindings GDNativeLibrary::method_bindings = {};
void* GDNativeLibrary::class_tag = nullptr;
} // namespace Rebel
