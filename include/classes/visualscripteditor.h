// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSCRIPTEDITOR_H
#define REBEL_VISUALSCRIPTEDITOR_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Script;

class VisualScriptEditor : public Object {
public:
    void add_custom_node(const String name, const String category, const Ref<Script> script);
    void remove_custom_node(const String name, const String category);

    static inline VisualScriptEditor* get_singleton() {
        if (!VisualScriptEditor::singleton) {
            VisualScriptEditor::singleton = new VisualScriptEditor;
        }
        return VisualScriptEditor::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualScriptEditor";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualScriptEditor";
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
    VisualScriptEditor();
    static VisualScriptEditor* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_add_custom_node;
        rebel_method_bind* mb_remove_custom_node;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSCRIPTEDITOR_H
