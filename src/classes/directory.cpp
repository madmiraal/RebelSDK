// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/directory.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Error Directory::change_dir(const String todir) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_change_dir,
        (const Object*)this,
        todir
    );
}

Error Directory::copy(const String from, const String to) {
    return (Error)rebel_icall_int_string_string(
        method_bindings.mb_copy,
        (const Object*)this,
        from,
        to
    );
}

bool Directory::current_is_dir() const {
    return rebel_icall_bool(
        method_bindings.mb_current_is_dir,
        (const Object*)this
    );
}

bool Directory::dir_exists(const String path) {
    return rebel_icall_bool_string(
        method_bindings.mb_dir_exists,
        (const Object*)this,
        path
    );
}

bool Directory::file_exists(const String path) {
    return rebel_icall_bool_string(
        method_bindings.mb_file_exists,
        (const Object*)this,
        path
    );
}

String Directory::get_current_dir() {
    return rebel_icall_string(
        method_bindings.mb_get_current_dir,
        (const Object*)this
    );
}

int64_t Directory::get_current_drive() {
    return rebel_icall_int(
        method_bindings.mb_get_current_drive,
        (const Object*)this
    );
}

String Directory::get_drive(const int64_t idx) {
    return rebel_icall_string_int(
        method_bindings.mb_get_drive,
        (const Object*)this,
        idx
    );
}

int64_t Directory::get_drive_count() {
    return rebel_icall_int(
        method_bindings.mb_get_drive_count,
        (const Object*)this
    );
}

String Directory::get_next() {
    return rebel_icall_string(
        method_bindings.mb_get_next,
        (const Object*)this
    );
}

int64_t Directory::get_space_left() {
    return rebel_icall_int(
        method_bindings.mb_get_space_left,
        (const Object*)this
    );
}

Error Directory::list_dir_begin(const bool skip_navigational, const bool skip_hidden) {
    return (Error)rebel_icall_int_bool_bool(
        method_bindings.mb_list_dir_begin,
        (const Object*)this,
        skip_navigational,
        skip_hidden
    );
}

void Directory::list_dir_end() {
    rebel_icall_void(
        method_bindings.mb_list_dir_end,
        (const Object*)this
    );
}

Error Directory::make_dir(const String path) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_make_dir,
        (const Object*)this,
        path
    );
}

Error Directory::make_dir_recursive(const String path) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_make_dir_recursive,
        (const Object*)this,
        path
    );
}

Error Directory::open(const String path) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_open,
        (const Object*)this,
        path
    );
}

Error Directory::remove(const String path) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_remove,
        (const Object*)this,
        path
    );
}

Error Directory::rename(const String from, const String to) {
    return (Error)rebel_icall_int_string_string(
        method_bindings.mb_rename,
        (const Object*)this,
        from,
        to
    );
}

Directory* Directory::create() {
    return (Directory*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"_Directory")()
         );
}

void Directory::init_method_bindings() {
    method_bindings.mb_change_dir =
        api->rebel_method_bind_get_method(
            "_Directory",
            "change_dir"
        );
    method_bindings.mb_copy =
        api->rebel_method_bind_get_method(
            "_Directory",
            "copy"
        );
    method_bindings.mb_current_is_dir =
        api->rebel_method_bind_get_method(
            "_Directory",
            "current_is_dir"
        );
    method_bindings.mb_dir_exists =
        api->rebel_method_bind_get_method(
            "_Directory",
            "dir_exists"
        );
    method_bindings.mb_file_exists =
        api->rebel_method_bind_get_method(
            "_Directory",
            "file_exists"
        );
    method_bindings.mb_get_current_dir =
        api->rebel_method_bind_get_method(
            "_Directory",
            "get_current_dir"
        );
    method_bindings.mb_get_current_drive =
        api->rebel_method_bind_get_method(
            "_Directory",
            "get_current_drive"
        );
    method_bindings.mb_get_drive =
        api->rebel_method_bind_get_method(
            "_Directory",
            "get_drive"
        );
    method_bindings.mb_get_drive_count =
        api->rebel_method_bind_get_method(
            "_Directory",
            "get_drive_count"
        );
    method_bindings.mb_get_next =
        api->rebel_method_bind_get_method(
            "_Directory",
            "get_next"
        );
    method_bindings.mb_get_space_left =
        api->rebel_method_bind_get_method(
            "_Directory",
            "get_space_left"
        );
    method_bindings.mb_list_dir_begin =
        api->rebel_method_bind_get_method(
            "_Directory",
            "list_dir_begin"
        );
    method_bindings.mb_list_dir_end =
        api->rebel_method_bind_get_method(
            "_Directory",
            "list_dir_end"
        );
    method_bindings.mb_make_dir =
        api->rebel_method_bind_get_method(
            "_Directory",
            "make_dir"
        );
    method_bindings.mb_make_dir_recursive =
        api->rebel_method_bind_get_method(
            "_Directory",
            "make_dir_recursive"
        );
    method_bindings.mb_open =
        api->rebel_method_bind_get_method(
            "_Directory",
            "open"
        );
    method_bindings.mb_remove =
        api->rebel_method_bind_get_method(
            "_Directory",
            "remove"
        );
    method_bindings.mb_rename =
        api->rebel_method_bind_get_method(
            "_Directory",
            "rename"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "_Directory");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Directory::MethodBindings Directory::method_bindings = {};
void* Directory::class_tag = nullptr;
} // namespace Rebel
