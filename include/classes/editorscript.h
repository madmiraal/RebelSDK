// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORSCRIPT_H
#define REBEL_EDITORSCRIPT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class EditorInterface;
class Node;

class EditorScript : public Reference {
public:
    void _run();
    void add_root_node(const Node* node);
    EditorInterface* get_editor_interface();
    Node* get_scene();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorScript";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorScript";
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
        rebel_method_bind* mb__run;
        rebel_method_bind* mb_add_root_node;
        rebel_method_bind* mb_get_editor_interface;
        rebel_method_bind* mb_get_scene;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORSCRIPT_H
