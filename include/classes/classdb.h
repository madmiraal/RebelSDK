// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CLASSDB_H
#define REBEL_CLASSDB_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ClassDB : public Object {
public:
    bool can_instance(const String _class) const;
    bool class_exists(const String _class) const;
    String class_get_category(const String _class) const;
    PoolStringArray class_get_enum_constants(const String _class, const String _enum, const bool no_inheritance = false) const;
    PoolStringArray class_get_enum_list(const String _class, const bool no_inheritance = false) const;
    int64_t class_get_integer_constant(const String _class, const String name) const;
    String class_get_integer_constant_enum(const String _class, const String name, const bool no_inheritance = false) const;
    PoolStringArray class_get_integer_constant_list(const String _class, const bool no_inheritance = false) const;
    Array class_get_method_list(const String _class, const bool no_inheritance = false) const;
    Variant class_get_property(const Object* object, const String property) const;
    Array class_get_property_list(const String _class, const bool no_inheritance = false) const;
    Dictionary class_get_signal(const String _class, const String signal) const;
    Array class_get_signal_list(const String _class, const bool no_inheritance = false) const;
    bool class_has_enum(const String _class, const String name, const bool no_inheritance = false) const;
    bool class_has_integer_constant(const String _class, const String name) const;
    bool class_has_method(const String _class, const String method, const bool no_inheritance = false) const;
    bool class_has_signal(const String _class, const String signal) const;
    Error class_set_property(const Object* object, const String property, const Variant value) const;
    PoolStringArray get_class_list() const;
    PoolStringArray get_inheriters_from_class(const String _class) const;
    String get_parent_class(const String _class) const;
    Variant instance(const String _class) const;
    bool is_class_enabled(const String _class) const;
    bool is_parent_class(const String _class, const String inherits) const;

    static inline ClassDB* get_singleton() {
        if (!ClassDB::singleton) {
            ClassDB::singleton = new ClassDB;
        }
        return ClassDB::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ClassDB";
    }

    inline static const char* get_rebel_class_name() {
        return "ClassDB";
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
    ClassDB();
    static ClassDB* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_can_instance;
        rebel_method_bind* mb_class_exists;
        rebel_method_bind* mb_class_get_category;
        rebel_method_bind* mb_class_get_enum_constants;
        rebel_method_bind* mb_class_get_enum_list;
        rebel_method_bind* mb_class_get_integer_constant;
        rebel_method_bind* mb_class_get_integer_constant_enum;
        rebel_method_bind* mb_class_get_integer_constant_list;
        rebel_method_bind* mb_class_get_method_list;
        rebel_method_bind* mb_class_get_property;
        rebel_method_bind* mb_class_get_property_list;
        rebel_method_bind* mb_class_get_signal;
        rebel_method_bind* mb_class_get_signal_list;
        rebel_method_bind* mb_class_has_enum;
        rebel_method_bind* mb_class_has_integer_constant;
        rebel_method_bind* mb_class_has_method;
        rebel_method_bind* mb_class_has_signal;
        rebel_method_bind* mb_class_set_property;
        rebel_method_bind* mb_get_class_list;
        rebel_method_bind* mb_get_inheriters_from_class;
        rebel_method_bind* mb_get_parent_class;
        rebel_method_bind* mb_instance;
        rebel_method_bind* mb_is_class_enabled;
        rebel_method_bind* mb_is_parent_class;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CLASSDB_H
