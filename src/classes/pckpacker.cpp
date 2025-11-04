// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/pckpacker.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Error PCKPacker::add_file(const String pck_path, const String source_path) {
    return (Error)rebel_icall_int_string_string(
        method_bindings.mb_add_file,
        (const Object*)this,
        pck_path,
        source_path
    );
}

Error PCKPacker::flush(const bool verbose) {
    return (Error)rebel_icall_int_bool(
        method_bindings.mb_flush,
        (const Object*)this,
        verbose
    );
}

Error PCKPacker::pck_start(const String pck_name, const int64_t alignment) {
    return (Error)rebel_icall_int_string_int(
        method_bindings.mb_pck_start,
        (const Object*)this,
        pck_name,
        alignment
    );
}

PCKPacker* PCKPacker::create() {
    return (PCKPacker*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PCKPacker")()
         );
}

void PCKPacker::init_method_bindings() {
    method_bindings.mb_add_file =
        api->rebel_method_bind_get_method(
            "PCKPacker",
            "add_file"
        );
    method_bindings.mb_flush =
        api->rebel_method_bind_get_method(
            "PCKPacker",
            "flush"
        );
    method_bindings.mb_pck_start =
        api->rebel_method_bind_get_method(
            "PCKPacker",
            "pck_start"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PCKPacker");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PCKPacker::MethodBindings PCKPacker::method_bindings = {};
void* PCKPacker::class_tag = nullptr;
} // namespace Rebel
