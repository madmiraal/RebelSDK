// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORINSPECTORPLUGIN_H
#define REBEL_EDITORINSPECTORPLUGIN_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Control;
class Object;

class EditorInspectorPlugin : public Reference {
public:
    void add_custom_control(const Control* control);
    void add_property_editor(const String property, const Control* editor);
    void add_property_editor_for_multiple_properties(const String label, const PoolStringArray properties, const Control* editor);
    bool can_handle(const Object* object);
    void parse_begin(const Object* object);
    void parse_category(const Object* object, const String category);
    void parse_end();
    bool parse_property(const Object* object, const int64_t type, const String path, const int64_t hint, const String hint_text, const int64_t usage);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorInspectorPlugin";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorInspectorPlugin";
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
        rebel_method_bind* mb_add_custom_control;
        rebel_method_bind* mb_add_property_editor;
        rebel_method_bind* mb_add_property_editor_for_multiple_properties;
        rebel_method_bind* mb_can_handle;
        rebel_method_bind* mb_parse_begin;
        rebel_method_bind* mb_parse_category;
        rebel_method_bind* mb_parse_end;
        rebel_method_bind* mb_parse_property;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORINSPECTORPLUGIN_H
