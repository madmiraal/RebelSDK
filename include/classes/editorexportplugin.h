// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITOREXPORTPLUGIN_H
#define REBEL_EDITOREXPORTPLUGIN_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class EditorExportPlugin : public Reference {
public:
    void _export_begin(const PoolStringArray features, const bool is_debug, const String path, const int64_t flags);
    void _export_end();
    void _export_file(const String path, const String type, const PoolStringArray features);
    void add_file(const String path, const PoolByteArray file, const bool remap);
    void add_ios_bundle_file(const String path);
    void add_ios_cpp_code(const String code);
    void add_ios_embedded_framework(const String path);
    void add_ios_framework(const String path);
    void add_ios_linker_flags(const String flags);
    void add_ios_plist_content(const String plist_content);
    void add_ios_project_static_lib(const String path);
    void add_shared_object(const String path, const PoolStringArray tags);
    void skip();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorExportPlugin";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorExportPlugin";
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
        rebel_method_bind* mb__export_begin;
        rebel_method_bind* mb__export_end;
        rebel_method_bind* mb__export_file;
        rebel_method_bind* mb_add_file;
        rebel_method_bind* mb_add_ios_bundle_file;
        rebel_method_bind* mb_add_ios_cpp_code;
        rebel_method_bind* mb_add_ios_embedded_framework;
        rebel_method_bind* mb_add_ios_framework;
        rebel_method_bind* mb_add_ios_linker_flags;
        rebel_method_bind* mb_add_ios_plist_content;
        rebel_method_bind* mb_add_ios_project_static_lib;
        rebel_method_bind* mb_add_shared_object;
        rebel_method_bind* mb_skip;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITOREXPORTPLUGIN_H
