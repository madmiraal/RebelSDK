// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORINSPECTOR_H
#define REBEL_EDITORINSPECTOR_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/scrollcontainer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Node;
class Object;
class Resource;

class EditorInspector : public ScrollContainer {
public:
    void _edit_request_change(const Object* arg0, const String arg1);
    void _feature_profile_changed();
    void _filter_changed(const String arg0);
    void _multiple_properties_changed(const PoolStringArray arg0, const Array arg1);
    void _node_removed(const Node* arg0);
    void _object_id_selected(const String arg0, const int64_t arg1);
    void _property_changed(const String arg0, const Variant arg1, const String arg2 = "", const bool arg3 = false);
    void _property_changed_update_all(const String arg0, const Variant arg1, const String arg2, const bool arg3);
    void _property_checked(const String arg0, const bool arg1);
    void _property_keyed(const String arg0, const bool arg1);
    void _property_keyed_with_value(const String arg0, const Variant arg1, const bool arg2);
    void _property_selected(const String arg0, const int64_t arg1);
    void _resource_selected(const String arg0, const Ref<Resource> arg1);
    void _vscroll_changed(const real_t arg0);
    void refresh();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorInspector";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorInspector";
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
        rebel_method_bind* mb__edit_request_change;
        rebel_method_bind* mb__feature_profile_changed;
        rebel_method_bind* mb__filter_changed;
        rebel_method_bind* mb__multiple_properties_changed;
        rebel_method_bind* mb__node_removed;
        rebel_method_bind* mb__object_id_selected;
        rebel_method_bind* mb__property_changed;
        rebel_method_bind* mb__property_changed_update_all;
        rebel_method_bind* mb__property_checked;
        rebel_method_bind* mb__property_keyed;
        rebel_method_bind* mb__property_keyed_with_value;
        rebel_method_bind* mb__property_selected;
        rebel_method_bind* mb__resource_selected;
        rebel_method_bind* mb__vscroll_changed;
        rebel_method_bind* mb_refresh;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORINSPECTOR_H
