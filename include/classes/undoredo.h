// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_UNDOREDO_H
#define REBEL_UNDOREDO_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class UndoRedo : public Object {
public:
    enum MergeMode {
        MERGE_DISABLE = 0,
        MERGE_ENDS = 1,
        MERGE_ALL = 2,
    };

    void add_do_method(const Object* object, const String method, const Array& args = Array());
    void add_do_property(const Object* object, const String property, const Variant value);
    void add_do_reference(const Object* object);
    void add_undo_method(const Object* object, const String method, const Array& args = Array());
    void add_undo_property(const Object* object, const String property, const Variant value);
    void add_undo_reference(const Object* object);
    void clear_history(const bool increase_version = true);
    void commit_action();
    void create_action(const String name, const int64_t merge_mode = 0);
    String get_current_action_name() const;
    int64_t get_version() const;
    bool has_redo() const;
    bool has_undo() const;
    bool is_commiting_action() const;
    bool redo();
    bool undo();

    template <class... Args>
    void add_do_method(const Object* object, const String method, Args... args) {
        return add_do_method(object, method, Array::make(args...));
    }

    template <class... Args>
    void add_undo_method(const Object* object, const String method, Args... args) {
        return add_undo_method(object, method, Array::make(args...));
    }

    static UndoRedo* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "UndoRedo";
    }

    inline static const char* get_rebel_class_name() {
        return "UndoRedo";
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
        rebel_method_bind* mb_add_do_method;
        rebel_method_bind* mb_add_do_property;
        rebel_method_bind* mb_add_do_reference;
        rebel_method_bind* mb_add_undo_method;
        rebel_method_bind* mb_add_undo_property;
        rebel_method_bind* mb_add_undo_reference;
        rebel_method_bind* mb_clear_history;
        rebel_method_bind* mb_commit_action;
        rebel_method_bind* mb_create_action;
        rebel_method_bind* mb_get_current_action_name;
        rebel_method_bind* mb_get_version;
        rebel_method_bind* mb_has_redo;
        rebel_method_bind* mb_has_undo;
        rebel_method_bind* mb_is_commiting_action;
        rebel_method_bind* mb_redo;
        rebel_method_bind* mb_undo;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_UNDOREDO_H
