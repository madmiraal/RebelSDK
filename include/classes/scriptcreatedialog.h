// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SCRIPTCREATEDIALOG_H
#define REBEL_SCRIPTCREATEDIALOG_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/confirmationdialog.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ScriptCreateDialog : public ConfirmationDialog {
public:
    void _browse_class_in_tree();
    void _browse_path(const bool arg0, const bool arg1);
    void _built_in_pressed();
    void _class_name_changed(const String arg0);
    void _create();
    void _file_selected(const String arg0);
    void _lang_changed(const int64_t arg0);
    void _parent_name_changed(const String arg0);
    void _path_changed(const String arg0);
    void _path_entered(const String arg0);
    void _path_hbox_sorted();
    void _template_changed(const int64_t arg0);
    void config(const String inherits, const String path, const bool built_in_enabled = true, const bool load_enabled = true);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ScriptCreateDialog";
    }

    inline static const char* get_rebel_class_name() {
        return "ScriptCreateDialog";
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
        rebel_method_bind* mb__browse_class_in_tree;
        rebel_method_bind* mb__browse_path;
        rebel_method_bind* mb__built_in_pressed;
        rebel_method_bind* mb__class_name_changed;
        rebel_method_bind* mb__create;
        rebel_method_bind* mb__file_selected;
        rebel_method_bind* mb__lang_changed;
        rebel_method_bind* mb__parent_name_changed;
        rebel_method_bind* mb__path_changed;
        rebel_method_bind* mb__path_entered;
        rebel_method_bind* mb__path_hbox_sorted;
        rebel_method_bind* mb__template_changed;
        rebel_method_bind* mb_config;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SCRIPTCREATEDIALOG_H
