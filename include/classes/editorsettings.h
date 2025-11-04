// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORSETTINGS_H
#define REBEL_EDITORSETTINGS_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class EditorSettings : public Resource {
public:
    static const int NOTIFICATION_EDITOR_SETTINGS_CHANGED = 10000;

    void add_property_info(const Dictionary info);
    void erase(const String property);
    PoolStringArray get_favorites() const;
    Variant get_project_metadata(const String section, const String key, const Variant _default = Variant()) const;
    String get_project_settings_dir() const;
    PoolStringArray get_recent_dirs() const;
    Variant get_setting(const String name) const;
    String get_settings_dir() const;
    bool has_setting(const String name) const;
    bool property_can_revert(const String name);
    Variant property_get_revert(const String name);
    void set_favorites(const PoolStringArray dirs);
    void set_initial_value(const String name, const Variant value, const bool update_current);
    void set_project_metadata(const String section, const String key, const Variant data);
    void set_recent_dirs(const PoolStringArray dirs);
    void set_setting(const String name, const Variant value);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorSettings";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorSettings";
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
        rebel_method_bind* mb_add_property_info;
        rebel_method_bind* mb_erase;
        rebel_method_bind* mb_get_favorites;
        rebel_method_bind* mb_get_project_metadata;
        rebel_method_bind* mb_get_project_settings_dir;
        rebel_method_bind* mb_get_recent_dirs;
        rebel_method_bind* mb_get_setting;
        rebel_method_bind* mb_get_settings_dir;
        rebel_method_bind* mb_has_setting;
        rebel_method_bind* mb_property_can_revert;
        rebel_method_bind* mb_property_get_revert;
        rebel_method_bind* mb_set_favorites;
        rebel_method_bind* mb_set_initial_value;
        rebel_method_bind* mb_set_project_metadata;
        rebel_method_bind* mb_set_recent_dirs;
        rebel_method_bind* mb_set_setting;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORSETTINGS_H
