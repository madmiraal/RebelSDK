// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORFILESYSTEMDIRECTORY_H
#define REBEL_EDITORFILESYSTEMDIRECTORY_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class EditorFileSystemDirectory : public Object {
public:
    int64_t find_dir_index(const String name) const;
    int64_t find_file_index(const String name) const;
    String get_file(const int64_t idx) const;
    int64_t get_file_count() const;
    bool get_file_import_is_valid(const int64_t idx) const;
    String get_file_path(const int64_t idx) const;
    String get_file_script_class_extends(const int64_t idx) const;
    String get_file_script_class_name(const int64_t idx) const;
    String get_file_type(const int64_t idx) const;
    String get_name();
    EditorFileSystemDirectory* get_parent();
    String get_path() const;
    EditorFileSystemDirectory* get_subdir(const int64_t idx);
    int64_t get_subdir_count() const;

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorFileSystemDirectory";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorFileSystemDirectory";
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
        rebel_method_bind* mb_find_dir_index;
        rebel_method_bind* mb_find_file_index;
        rebel_method_bind* mb_get_file;
        rebel_method_bind* mb_get_file_count;
        rebel_method_bind* mb_get_file_import_is_valid;
        rebel_method_bind* mb_get_file_path;
        rebel_method_bind* mb_get_file_script_class_extends;
        rebel_method_bind* mb_get_file_script_class_name;
        rebel_method_bind* mb_get_file_type;
        rebel_method_bind* mb_get_name;
        rebel_method_bind* mb_get_parent;
        rebel_method_bind* mb_get_path;
        rebel_method_bind* mb_get_subdir;
        rebel_method_bind* mb_get_subdir_count;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORFILESYSTEMDIRECTORY_H
