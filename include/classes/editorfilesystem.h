// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORFILESYSTEM_H
#define REBEL_EDITORFILESYSTEM_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class EditorFileSystemDirectory;

class EditorFileSystem : public Node {
public:
    String get_file_type(const String path) const;
    EditorFileSystemDirectory* get_filesystem();
    EditorFileSystemDirectory* get_filesystem_path(const String path);
    real_t get_scanning_progress() const;
    bool is_scanning() const;
    void scan();
    void scan_sources();
    void update_file(const String path);
    void update_script_classes();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorFileSystem";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorFileSystem";
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
        rebel_method_bind* mb_get_file_type;
        rebel_method_bind* mb_get_filesystem;
        rebel_method_bind* mb_get_filesystem_path;
        rebel_method_bind* mb_get_scanning_progress;
        rebel_method_bind* mb_is_scanning;
        rebel_method_bind* mb_scan;
        rebel_method_bind* mb_scan_sources;
        rebel_method_bind* mb_update_file;
        rebel_method_bind* mb_update_script_classes;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORFILESYSTEM_H
