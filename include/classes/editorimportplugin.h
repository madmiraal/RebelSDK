// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORIMPORTPLUGIN_H
#define REBEL_EDITORIMPORTPLUGIN_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resourceimporter.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class EditorImportPlugin : public ResourceImporter {
public:
    Array get_import_options(const int64_t preset);
    int64_t get_import_order();
    String get_importer_name();
    bool get_option_visibility(const String option, const Dictionary options);
    int64_t get_preset_count();
    String get_preset_name(const int64_t preset);
    real_t get_priority();
    Array get_recognized_extensions();
    String get_resource_type();
    String get_save_extension();
    String get_visible_name();
    int64_t import(const String source_file, const String save_path, const Dictionary options, const Array platform_variants, const Array gen_files);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorImportPlugin";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorImportPlugin";
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
        rebel_method_bind* mb_get_import_options;
        rebel_method_bind* mb_get_import_order;
        rebel_method_bind* mb_get_importer_name;
        rebel_method_bind* mb_get_option_visibility;
        rebel_method_bind* mb_get_preset_count;
        rebel_method_bind* mb_get_preset_name;
        rebel_method_bind* mb_get_priority;
        rebel_method_bind* mb_get_recognized_extensions;
        rebel_method_bind* mb_get_resource_type;
        rebel_method_bind* mb_get_save_extension;
        rebel_method_bind* mb_get_visible_name;
        rebel_method_bind* mb_import;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORIMPORTPLUGIN_H
