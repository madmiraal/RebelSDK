// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PROJECTSETTINGS_H
#define REBEL_PROJECTSETTINGS_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ProjectSettings : public Object {
public:
    void add_property_info(const Dictionary hint);
    int64_t get_order(const String name) const;
    Variant get_setting(const String name) const;
    String globalize_path(const String path) const;
    bool has_setting(const String name) const;
    bool load_resource_pack(const String pack, const bool replace_files = true, const int64_t offset = 0);
    String localize_path(const String path) const;
    bool property_can_revert(const String name);
    Variant property_get_revert(const String name) const;
    Error save();
    Error save_custom(const String file);
    void set_initial_value(const String name, const Variant value);
    void set_order(const String name, const int64_t position);
    void set_setting(const String name, const Variant value);

    static inline ProjectSettings* get_singleton() {
        if (!ProjectSettings::singleton) {
            ProjectSettings::singleton = new ProjectSettings;
        }
        return ProjectSettings::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ProjectSettings";
    }

    inline static const char* get_rebel_class_name() {
        return "ProjectSettings";
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
    ProjectSettings();
    static ProjectSettings* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_add_property_info;
        rebel_method_bind* mb_get_order;
        rebel_method_bind* mb_get_setting;
        rebel_method_bind* mb_globalize_path;
        rebel_method_bind* mb_has_setting;
        rebel_method_bind* mb_load_resource_pack;
        rebel_method_bind* mb_localize_path;
        rebel_method_bind* mb_property_can_revert;
        rebel_method_bind* mb_property_get_revert;
        rebel_method_bind* mb_save;
        rebel_method_bind* mb_save_custom;
        rebel_method_bind* mb_set_initial_value;
        rebel_method_bind* mb_set_order;
        rebel_method_bind* mb_set_setting;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PROJECTSETTINGS_H
