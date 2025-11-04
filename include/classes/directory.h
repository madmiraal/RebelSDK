// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_DIRECTORY_H
#define REBEL_DIRECTORY_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Directory : public Reference {
public:
    Error change_dir(const String todir);
    Error copy(const String from, const String to);
    bool current_is_dir() const;
    bool dir_exists(const String path);
    bool file_exists(const String path);
    String get_current_dir();
    int64_t get_current_drive();
    String get_drive(const int64_t idx);
    int64_t get_drive_count();
    String get_next();
    int64_t get_space_left();
    Error list_dir_begin(const bool skip_navigational = false, const bool skip_hidden = false);
    void list_dir_end();
    Error make_dir(const String path);
    Error make_dir_recursive(const String path);
    Error open(const String path);
    Error remove(const String path);
    Error rename(const String from, const String to);

    static Directory* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Directory";
    }

    inline static const char* get_rebel_class_name() {
        return "Directory";
    }

    inline static Object* from_variant(Variant variant) {
        rebel_object* object = (rebel_object*)variant;
        if (!object) {
            return nullptr;
        }
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                object
            );
    }

private:
    struct MethodBindings {
        rebel_method_bind* mb_change_dir;
        rebel_method_bind* mb_copy;
        rebel_method_bind* mb_current_is_dir;
        rebel_method_bind* mb_dir_exists;
        rebel_method_bind* mb_file_exists;
        rebel_method_bind* mb_get_current_dir;
        rebel_method_bind* mb_get_current_drive;
        rebel_method_bind* mb_get_drive;
        rebel_method_bind* mb_get_drive_count;
        rebel_method_bind* mb_get_next;
        rebel_method_bind* mb_get_space_left;
        rebel_method_bind* mb_list_dir_begin;
        rebel_method_bind* mb_list_dir_end;
        rebel_method_bind* mb_make_dir;
        rebel_method_bind* mb_make_dir_recursive;
        rebel_method_bind* mb_open;
        rebel_method_bind* mb_remove;
        rebel_method_bind* mb_rename;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_DIRECTORY_H
