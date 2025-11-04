// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORSELECTION_H
#define REBEL_EDITORSELECTION_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Node;

class EditorSelection : public Object {
public:
    void _emit_change();
    void _node_removed(const Node* arg0);
    void add_node(const Node* node);
    void clear();
    Array get_selected_nodes();
    Array get_transformable_selected_nodes();
    void remove_node(const Node* node);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorSelection";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorSelection";
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
        rebel_method_bind* mb__emit_change;
        rebel_method_bind* mb__node_removed;
        rebel_method_bind* mb_add_node;
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_get_selected_nodes;
        rebel_method_bind* mb_get_transformable_selected_nodes;
        rebel_method_bind* mb_remove_node;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORSELECTION_H
