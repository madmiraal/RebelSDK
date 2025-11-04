// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORFEATUREPROFILE_H
#define REBEL_EDITORFEATUREPROFILE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class EditorFeatureProfile : public Reference {
public:
    enum Feature {
        FEATURE_3D = 0,
        FEATURE_SCRIPT = 1,
        FEATURE_ASSET_LIB = 2,
        FEATURE_SCENE_TREE = 3,
        FEATURE_NODE_DOCK = 4,
        FEATURE_FILESYSTEM_DOCK = 5,
        FEATURE_IMPORT_DOCK = 6,
        FEATURE_MAX = 7,
    };

    String get_feature_name(const int64_t feature);
    bool is_class_disabled(const String class_name) const;
    bool is_class_editor_disabled(const String class_name) const;
    bool is_class_property_disabled(const String class_name, const String property) const;
    bool is_feature_disabled(const int64_t feature) const;
    Error load_from_file(const String path);
    Error save_to_file(const String path);
    void set_disable_class(const String class_name, const bool disable);
    void set_disable_class_editor(const String class_name, const bool disable);
    void set_disable_class_property(const String class_name, const String property, const bool disable);
    void set_disable_feature(const int64_t feature, const bool disable);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorFeatureProfile";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorFeatureProfile";
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
        rebel_method_bind* mb_get_feature_name;
        rebel_method_bind* mb_is_class_disabled;
        rebel_method_bind* mb_is_class_editor_disabled;
        rebel_method_bind* mb_is_class_property_disabled;
        rebel_method_bind* mb_is_feature_disabled;
        rebel_method_bind* mb_load_from_file;
        rebel_method_bind* mb_save_to_file;
        rebel_method_bind* mb_set_disable_class;
        rebel_method_bind* mb_set_disable_class_editor;
        rebel_method_bind* mb_set_disable_class_property;
        rebel_method_bind* mb_set_disable_feature;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORFEATUREPROFILE_H
