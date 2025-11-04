// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/undoredo.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void UndoRedo::add_do_method(const Object* object, const String method, const Array& args) {
    size_t arg_count = 2 + args.size();
    Variant arg_values[2];
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[0]);
    arg_values[0] = object;
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[1]);
    arg_values[1] = method;

    rebel_variant** var_args =
        (rebel_variant**)alloca(sizeof(rebel_variant*) * arg_count);
    var_args[0] = (rebel_variant*) &arg_values[0];
    var_args[1] = (rebel_variant*) &arg_values[1];
    for (int i = 0; i < args.size(); i++) {
        var_args[2 + i] = (rebel_variant*) &((Array&) args)[i];
    }

    Variant result;
    *(rebel_variant*) &result = api->rebel_method_bind_call(
        method_bindings.mb_add_do_method,
        ((const Object *)this)->owner,
        (const rebel_variant**) var_args,
        arg_count,
        nullptr
    );

    api->rebel_variant_destroy((rebel_variant *) &var_args[0]);
    api->rebel_variant_destroy((rebel_variant *) &var_args[1]);
}

void UndoRedo::add_do_property(const Object* object, const String property, const Variant value) {
    rebel_icall_void_object_string_variant(
        method_bindings.mb_add_do_property,
        (const Object*)this,
        object,
        property,
        value
    );
}

void UndoRedo::add_do_reference(const Object* object) {
    rebel_icall_void_object(
        method_bindings.mb_add_do_reference,
        (const Object*)this,
        object
    );
}

void UndoRedo::add_undo_method(const Object* object, const String method, const Array& args) {
    size_t arg_count = 2 + args.size();
    Variant arg_values[2];
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[0]);
    arg_values[0] = object;
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[1]);
    arg_values[1] = method;

    rebel_variant** var_args =
        (rebel_variant**)alloca(sizeof(rebel_variant*) * arg_count);
    var_args[0] = (rebel_variant*) &arg_values[0];
    var_args[1] = (rebel_variant*) &arg_values[1];
    for (int i = 0; i < args.size(); i++) {
        var_args[2 + i] = (rebel_variant*) &((Array&) args)[i];
    }

    Variant result;
    *(rebel_variant*) &result = api->rebel_method_bind_call(
        method_bindings.mb_add_undo_method,
        ((const Object *)this)->owner,
        (const rebel_variant**) var_args,
        arg_count,
        nullptr
    );

    api->rebel_variant_destroy((rebel_variant *) &var_args[0]);
    api->rebel_variant_destroy((rebel_variant *) &var_args[1]);
}

void UndoRedo::add_undo_property(const Object* object, const String property, const Variant value) {
    rebel_icall_void_object_string_variant(
        method_bindings.mb_add_undo_property,
        (const Object*)this,
        object,
        property,
        value
    );
}

void UndoRedo::add_undo_reference(const Object* object) {
    rebel_icall_void_object(
        method_bindings.mb_add_undo_reference,
        (const Object*)this,
        object
    );
}

void UndoRedo::clear_history(const bool increase_version) {
    rebel_icall_void_bool(
        method_bindings.mb_clear_history,
        (const Object*)this,
        increase_version
    );
}

void UndoRedo::commit_action() {
    rebel_icall_void(
        method_bindings.mb_commit_action,
        (const Object*)this
    );
}

void UndoRedo::create_action(const String name, const int64_t merge_mode) {
    rebel_icall_void_string_int(
        method_bindings.mb_create_action,
        (const Object*)this,
        name,
        merge_mode
    );
}

String UndoRedo::get_current_action_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_current_action_name,
        (const Object*)this
    );
}

int64_t UndoRedo::get_version() const {
    return rebel_icall_int(
        method_bindings.mb_get_version,
        (const Object*)this
    );
}

bool UndoRedo::has_redo() const {
    return rebel_icall_bool(
        method_bindings.mb_has_redo,
        (const Object*)this
    );
}

bool UndoRedo::has_undo() const {
    return rebel_icall_bool(
        method_bindings.mb_has_undo,
        (const Object*)this
    );
}

bool UndoRedo::is_commiting_action() const {
    return rebel_icall_bool(
        method_bindings.mb_is_commiting_action,
        (const Object*)this
    );
}

bool UndoRedo::redo() {
    return rebel_icall_bool(
        method_bindings.mb_redo,
        (const Object*)this
    );
}

bool UndoRedo::undo() {
    return rebel_icall_bool(
        method_bindings.mb_undo,
        (const Object*)this
    );
}

UndoRedo* UndoRedo::create() {
    return (UndoRedo*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"UndoRedo")()
         );
}

void UndoRedo::init_method_bindings() {
    method_bindings.mb_add_do_method =
        api->rebel_method_bind_get_method(
            "UndoRedo",
            "add_do_method"
        );
    method_bindings.mb_add_do_property =
        api->rebel_method_bind_get_method(
            "UndoRedo",
            "add_do_property"
        );
    method_bindings.mb_add_do_reference =
        api->rebel_method_bind_get_method(
            "UndoRedo",
            "add_do_reference"
        );
    method_bindings.mb_add_undo_method =
        api->rebel_method_bind_get_method(
            "UndoRedo",
            "add_undo_method"
        );
    method_bindings.mb_add_undo_property =
        api->rebel_method_bind_get_method(
            "UndoRedo",
            "add_undo_property"
        );
    method_bindings.mb_add_undo_reference =
        api->rebel_method_bind_get_method(
            "UndoRedo",
            "add_undo_reference"
        );
    method_bindings.mb_clear_history =
        api->rebel_method_bind_get_method(
            "UndoRedo",
            "clear_history"
        );
    method_bindings.mb_commit_action =
        api->rebel_method_bind_get_method(
            "UndoRedo",
            "commit_action"
        );
    method_bindings.mb_create_action =
        api->rebel_method_bind_get_method(
            "UndoRedo",
            "create_action"
        );
    method_bindings.mb_get_current_action_name =
        api->rebel_method_bind_get_method(
            "UndoRedo",
            "get_current_action_name"
        );
    method_bindings.mb_get_version =
        api->rebel_method_bind_get_method(
            "UndoRedo",
            "get_version"
        );
    method_bindings.mb_has_redo =
        api->rebel_method_bind_get_method(
            "UndoRedo",
            "has_redo"
        );
    method_bindings.mb_has_undo =
        api->rebel_method_bind_get_method(
            "UndoRedo",
            "has_undo"
        );
    method_bindings.mb_is_commiting_action =
        api->rebel_method_bind_get_method(
            "UndoRedo",
            "is_commiting_action"
        );
    method_bindings.mb_redo =
        api->rebel_method_bind_get_method(
            "UndoRedo",
            "redo"
        );
    method_bindings.mb_undo =
        api->rebel_method_bind_get_method(
            "UndoRedo",
            "undo"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "UndoRedo");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

UndoRedo::MethodBindings UndoRedo::method_bindings = {};
void* UndoRedo::class_tag = nullptr;
} // namespace Rebel
