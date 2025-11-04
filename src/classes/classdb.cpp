// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/classdb.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool ClassDB::can_instance(const String _class) const {
    return rebel_icall_bool_string(
        method_bindings.mb_can_instance,
        (const Object*)this,
        _class
    );
}

bool ClassDB::class_exists(const String _class) const {
    return rebel_icall_bool_string(
        method_bindings.mb_class_exists,
        (const Object*)this,
        _class
    );
}

String ClassDB::class_get_category(const String _class) const {
    return rebel_icall_string_string(
        method_bindings.mb_class_get_category,
        (const Object*)this,
        _class
    );
}

PoolStringArray ClassDB::class_get_enum_constants(const String _class, const String _enum, const bool no_inheritance) const {
    return rebel_icall_poolstringarray_string_string_bool(
        method_bindings.mb_class_get_enum_constants,
        (const Object*)this,
        _class,
        _enum,
        no_inheritance
    );
}

PoolStringArray ClassDB::class_get_enum_list(const String _class, const bool no_inheritance) const {
    return rebel_icall_poolstringarray_string_bool(
        method_bindings.mb_class_get_enum_list,
        (const Object*)this,
        _class,
        no_inheritance
    );
}

int64_t ClassDB::class_get_integer_constant(const String _class, const String name) const {
    return rebel_icall_int_string_string(
        method_bindings.mb_class_get_integer_constant,
        (const Object*)this,
        _class,
        name
    );
}

String ClassDB::class_get_integer_constant_enum(const String _class, const String name, const bool no_inheritance) const {
    return rebel_icall_string_string_string_bool(
        method_bindings.mb_class_get_integer_constant_enum,
        (const Object*)this,
        _class,
        name,
        no_inheritance
    );
}

PoolStringArray ClassDB::class_get_integer_constant_list(const String _class, const bool no_inheritance) const {
    return rebel_icall_poolstringarray_string_bool(
        method_bindings.mb_class_get_integer_constant_list,
        (const Object*)this,
        _class,
        no_inheritance
    );
}

Array ClassDB::class_get_method_list(const String _class, const bool no_inheritance) const {
    return rebel_icall_array_string_bool(
        method_bindings.mb_class_get_method_list,
        (const Object*)this,
        _class,
        no_inheritance
    );
}

Variant ClassDB::class_get_property(const Object* object, const String property) const {
    return rebel_icall_variant_object_string(
        method_bindings.mb_class_get_property,
        (const Object*)this,
        object,
        property
    );
}

Array ClassDB::class_get_property_list(const String _class, const bool no_inheritance) const {
    return rebel_icall_array_string_bool(
        method_bindings.mb_class_get_property_list,
        (const Object*)this,
        _class,
        no_inheritance
    );
}

Dictionary ClassDB::class_get_signal(const String _class, const String signal) const {
    return rebel_icall_dictionary_string_string(
        method_bindings.mb_class_get_signal,
        (const Object*)this,
        _class,
        signal
    );
}

Array ClassDB::class_get_signal_list(const String _class, const bool no_inheritance) const {
    return rebel_icall_array_string_bool(
        method_bindings.mb_class_get_signal_list,
        (const Object*)this,
        _class,
        no_inheritance
    );
}

bool ClassDB::class_has_enum(const String _class, const String name, const bool no_inheritance) const {
    return rebel_icall_bool_string_string_bool(
        method_bindings.mb_class_has_enum,
        (const Object*)this,
        _class,
        name,
        no_inheritance
    );
}

bool ClassDB::class_has_integer_constant(const String _class, const String name) const {
    return rebel_icall_bool_string_string(
        method_bindings.mb_class_has_integer_constant,
        (const Object*)this,
        _class,
        name
    );
}

bool ClassDB::class_has_method(const String _class, const String method, const bool no_inheritance) const {
    return rebel_icall_bool_string_string_bool(
        method_bindings.mb_class_has_method,
        (const Object*)this,
        _class,
        method,
        no_inheritance
    );
}

bool ClassDB::class_has_signal(const String _class, const String signal) const {
    return rebel_icall_bool_string_string(
        method_bindings.mb_class_has_signal,
        (const Object*)this,
        _class,
        signal
    );
}

Error ClassDB::class_set_property(const Object* object, const String property, const Variant value) const {
    return (Error)rebel_icall_int_object_string_variant(
        method_bindings.mb_class_set_property,
        (const Object*)this,
        object,
        property,
        value
    );
}

PoolStringArray ClassDB::get_class_list() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_class_list,
        (const Object*)this
    );
}

PoolStringArray ClassDB::get_inheriters_from_class(const String _class) const {
    return rebel_icall_poolstringarray_string(
        method_bindings.mb_get_inheriters_from_class,
        (const Object*)this,
        _class
    );
}

String ClassDB::get_parent_class(const String _class) const {
    return rebel_icall_string_string(
        method_bindings.mb_get_parent_class,
        (const Object*)this,
        _class
    );
}

Variant ClassDB::instance(const String _class) const {
    return rebel_icall_variant_string(
        method_bindings.mb_instance,
        (const Object*)this,
        _class
    );
}

bool ClassDB::is_class_enabled(const String _class) const {
    return rebel_icall_bool_string(
        method_bindings.mb_is_class_enabled,
        (const Object*)this,
        _class
    );
}

bool ClassDB::is_parent_class(const String _class, const String inherits) const {
    return rebel_icall_bool_string_string(
        method_bindings.mb_is_parent_class,
        (const Object*)this,
        _class,
        inherits
    );
}

ClassDB* ClassDB::singleton = nullptr;

ClassDB::ClassDB() {
    owner = api->rebel_global_get_singleton((char*) "ClassDB");
}

void ClassDB::init_method_bindings() {
    method_bindings.mb_can_instance =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "can_instance"
        );
    method_bindings.mb_class_exists =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "class_exists"
        );
    method_bindings.mb_class_get_category =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "class_get_category"
        );
    method_bindings.mb_class_get_enum_constants =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "class_get_enum_constants"
        );
    method_bindings.mb_class_get_enum_list =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "class_get_enum_list"
        );
    method_bindings.mb_class_get_integer_constant =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "class_get_integer_constant"
        );
    method_bindings.mb_class_get_integer_constant_enum =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "class_get_integer_constant_enum"
        );
    method_bindings.mb_class_get_integer_constant_list =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "class_get_integer_constant_list"
        );
    method_bindings.mb_class_get_method_list =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "class_get_method_list"
        );
    method_bindings.mb_class_get_property =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "class_get_property"
        );
    method_bindings.mb_class_get_property_list =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "class_get_property_list"
        );
    method_bindings.mb_class_get_signal =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "class_get_signal"
        );
    method_bindings.mb_class_get_signal_list =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "class_get_signal_list"
        );
    method_bindings.mb_class_has_enum =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "class_has_enum"
        );
    method_bindings.mb_class_has_integer_constant =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "class_has_integer_constant"
        );
    method_bindings.mb_class_has_method =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "class_has_method"
        );
    method_bindings.mb_class_has_signal =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "class_has_signal"
        );
    method_bindings.mb_class_set_property =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "class_set_property"
        );
    method_bindings.mb_get_class_list =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "get_class_list"
        );
    method_bindings.mb_get_inheriters_from_class =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "get_inheriters_from_class"
        );
    method_bindings.mb_get_parent_class =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "get_parent_class"
        );
    method_bindings.mb_instance =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "instance"
        );
    method_bindings.mb_is_class_enabled =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "is_class_enabled"
        );
    method_bindings.mb_is_parent_class =
        api->rebel_method_bind_get_method(
            "_ClassDB",
            "is_parent_class"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "_ClassDB");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ClassDB::MethodBindings ClassDB::method_bindings = {};
void* ClassDB::class_tag = nullptr;
} // namespace Rebel
