// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/object.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "classes/reference.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Variant Object::_get(const String property) {
    return rebel_icall_variant_string(
        method_bindings.mb__get,
        (const Object*)this,
        property
    );
}

Array Object::_get_property_list() {
    return rebel_icall_array(
        method_bindings.mb__get_property_list,
        (const Object*)this
    );
}

void Object::_init() {
    rebel_icall_void(
        method_bindings.mb__init,
        (const Object*)this
    );
}

void Object::_notification(const int64_t what) {
    rebel_icall_void_int(
        method_bindings.mb__notification,
        (const Object*)this,
        what
    );
}

bool Object::_set(const String property, const Variant value) {
    return rebel_icall_bool_string_variant(
        method_bindings.mb__set,
        (const Object*)this,
        property,
        value
    );
}

String Object::_to_string() {
    return rebel_icall_string(
        method_bindings.mb__to_string,
        (const Object*)this
    );
}

void Object::add_user_signal(const String signal, const Array arguments) {
    rebel_icall_void_string_array(
        method_bindings.mb_add_user_signal,
        (const Object*)this,
        signal,
        arguments
    );
}

Variant Object::call(const String method, const Array& args) {
    size_t arg_count = 1 + args.size();
    Variant arg_values[1];
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[0]);
    arg_values[0] = method;

    rebel_variant** var_args =
        (rebel_variant**)alloca(sizeof(rebel_variant*) * arg_count);
    var_args[0] = (rebel_variant*) &arg_values[0];
    for (int i = 0; i < args.size(); i++) {
        var_args[1 + i] = (rebel_variant*) &((Array&) args)[i];
    }

    Variant result;
    *(rebel_variant*) &result = api->rebel_method_bind_call(
        method_bindings.mb_call,
        ((const Object *)this)->owner,
        (const rebel_variant**) var_args,
        arg_count,
        nullptr
    );

    api->rebel_variant_destroy((rebel_variant *) &var_args[0]);
    return result;
}

void Object::call_deferred(const String method, const Array& args) {
    size_t arg_count = 1 + args.size();
    Variant arg_values[1];
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[0]);
    arg_values[0] = method;

    rebel_variant** var_args =
        (rebel_variant**)alloca(sizeof(rebel_variant*) * arg_count);
    var_args[0] = (rebel_variant*) &arg_values[0];
    for (int i = 0; i < args.size(); i++) {
        var_args[1 + i] = (rebel_variant*) &((Array&) args)[i];
    }

    Variant result;
    *(rebel_variant*) &result = api->rebel_method_bind_call(
        method_bindings.mb_call_deferred,
        ((const Object *)this)->owner,
        (const rebel_variant**) var_args,
        arg_count,
        nullptr
    );

    api->rebel_variant_destroy((rebel_variant *) &var_args[0]);
}

Variant Object::callv(const String method, const Array arg_array) {
    return rebel_icall_variant_string_array(
        method_bindings.mb_callv,
        (const Object*)this,
        method,
        arg_array
    );
}

bool Object::can_translate_messages() const {
    return rebel_icall_bool(
        method_bindings.mb_can_translate_messages,
        (const Object*)this
    );
}

Error Object::connect(const String signal, const Object* target, const String method, const Array binds, const int64_t flags) {
    return (Error)rebel_icall_int_string_object_string_array_int(
        method_bindings.mb_connect,
        (const Object*)this,
        signal,
        target,
        method,
        binds,
        flags
    );
}

void Object::disconnect(const String signal, const Object* target, const String method) {
    rebel_icall_void_string_object_string(
        method_bindings.mb_disconnect,
        (const Object*)this,
        signal,
        target,
        method
    );
}

void Object::emit_signal(const String signal, const Array& args) {
    size_t arg_count = 1 + args.size();
    Variant arg_values[1];
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[0]);
    arg_values[0] = signal;

    rebel_variant** var_args =
        (rebel_variant**)alloca(sizeof(rebel_variant*) * arg_count);
    var_args[0] = (rebel_variant*) &arg_values[0];
    for (int i = 0; i < args.size(); i++) {
        var_args[1 + i] = (rebel_variant*) &((Array&) args)[i];
    }

    Variant result;
    *(rebel_variant*) &result = api->rebel_method_bind_call(
        method_bindings.mb_emit_signal,
        ((const Object *)this)->owner,
        (const rebel_variant**) var_args,
        arg_count,
        nullptr
    );

    api->rebel_variant_destroy((rebel_variant *) &var_args[0]);
}

void Object::free() {
    api->rebel_object_destroy(owner);
}

Variant Object::get(const String property) const {
    return rebel_icall_variant_string(
        method_bindings.mb_get,
        (const Object*)this,
        property
    );
}

String Object::get_class() const {
    return rebel_icall_string(
        method_bindings.mb_get_class,
        (const Object*)this
    );
}

Array Object::get_incoming_connections() const {
    return rebel_icall_array(
        method_bindings.mb_get_incoming_connections,
        (const Object*)this
    );
}

Variant Object::get_indexed(const NodePath property) const {
    return rebel_icall_variant_nodepath(
        method_bindings.mb_get_indexed,
        (const Object*)this,
        property
    );
}

int64_t Object::get_instance_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_instance_id,
        (const Object*)this
    );
}

Variant Object::get_meta(const String name) const {
    return rebel_icall_variant_string(
        method_bindings.mb_get_meta,
        (const Object*)this,
        name
    );
}

PoolStringArray Object::get_meta_list() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_meta_list,
        (const Object*)this
    );
}

Array Object::get_method_list() const {
    return rebel_icall_array(
        method_bindings.mb_get_method_list,
        (const Object*)this
    );
}

Array Object::get_property_list() const {
    return rebel_icall_array(
        method_bindings.mb_get_property_list,
        (const Object*)this
    );
}

Reference* Object::get_script() const {
    return (Reference*)rebel_icall_object(
        method_bindings.mb_get_script,
        (const Object*)this
    );
}

Array Object::get_signal_connection_list(const String signal) const {
    return rebel_icall_array_string(
        method_bindings.mb_get_signal_connection_list,
        (const Object*)this,
        signal
    );
}

Array Object::get_signal_list() const {
    return rebel_icall_array(
        method_bindings.mb_get_signal_list,
        (const Object*)this
    );
}

bool Object::has_meta(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_meta,
        (const Object*)this,
        name
    );
}

bool Object::has_method(const String method) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_method,
        (const Object*)this,
        method
    );
}

bool Object::has_signal(const String signal) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_signal,
        (const Object*)this,
        signal
    );
}

bool Object::has_user_signal(const String signal) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_user_signal,
        (const Object*)this,
        signal
    );
}

bool Object::is_blocking_signals() const {
    return rebel_icall_bool(
        method_bindings.mb_is_blocking_signals,
        (const Object*)this
    );
}

bool Object::is_class(const String _class) const {
    return rebel_icall_bool_string(
        method_bindings.mb_is_class,
        (const Object*)this,
        _class
    );
}

bool Object::is_connected(const String signal, const Object* target, const String method) const {
    return rebel_icall_bool_string_object_string(
        method_bindings.mb_is_connected,
        (const Object*)this,
        signal,
        target,
        method
    );
}

bool Object::is_queued_for_deletion() const {
    return rebel_icall_bool(
        method_bindings.mb_is_queued_for_deletion,
        (const Object*)this
    );
}

void Object::notification(const int64_t what, const bool reversed) {
    rebel_icall_void_int_bool(
        method_bindings.mb_notification,
        (const Object*)this,
        what,
        reversed
    );
}

void Object::property_list_changed_notify() {
    rebel_icall_void(
        method_bindings.mb_property_list_changed_notify,
        (const Object*)this
    );
}

void Object::remove_meta(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_remove_meta,
        (const Object*)this,
        name
    );
}

void Object::set(const String property, const Variant value) {
    rebel_icall_void_string_variant(
        method_bindings.mb_set,
        (const Object*)this,
        property,
        value
    );
}

void Object::set_block_signals(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_block_signals,
        (const Object*)this,
        enable
    );
}

void Object::set_deferred(const String property, const Variant value) {
    rebel_icall_void_string_variant(
        method_bindings.mb_set_deferred,
        (const Object*)this,
        property,
        value
    );
}

void Object::set_indexed(const NodePath property, const Variant value) {
    rebel_icall_void_nodepath_variant(
        method_bindings.mb_set_indexed,
        (const Object*)this,
        property,
        value
    );
}

void Object::set_message_translation(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_message_translation,
        (const Object*)this,
        enable
    );
}

void Object::set_meta(const String name, const Variant value) {
    rebel_icall_void_string_variant(
        method_bindings.mb_set_meta,
        (const Object*)this,
        name,
        value
    );
}

void Object::set_script(const Reference* script) {
    rebel_icall_void_object(
        method_bindings.mb_set_script,
        (const Object*)this,
        script
    );
}

String Object::to_string() {
    return rebel_icall_string(
        method_bindings.mb_to_string,
        (const Object*)this
    );
}

String Object::tr(const String message) const {
    return rebel_icall_string_string(
        method_bindings.mb_tr,
        (const Object*)this,
        message
    );
}

Object* Object::create() {
    return (Object*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Object")()
         );
}

void Object::init_method_bindings() {
    method_bindings.mb__get =
        api->rebel_method_bind_get_method(
            "Object",
            "_get"
        );
    method_bindings.mb__get_property_list =
        api->rebel_method_bind_get_method(
            "Object",
            "_get_property_list"
        );
    method_bindings.mb__init =
        api->rebel_method_bind_get_method(
            "Object",
            "_init"
        );
    method_bindings.mb__notification =
        api->rebel_method_bind_get_method(
            "Object",
            "_notification"
        );
    method_bindings.mb__set =
        api->rebel_method_bind_get_method(
            "Object",
            "_set"
        );
    method_bindings.mb__to_string =
        api->rebel_method_bind_get_method(
            "Object",
            "_to_string"
        );
    method_bindings.mb_add_user_signal =
        api->rebel_method_bind_get_method(
            "Object",
            "add_user_signal"
        );
    method_bindings.mb_call =
        api->rebel_method_bind_get_method(
            "Object",
            "call"
        );
    method_bindings.mb_call_deferred =
        api->rebel_method_bind_get_method(
            "Object",
            "call_deferred"
        );
    method_bindings.mb_callv =
        api->rebel_method_bind_get_method(
            "Object",
            "callv"
        );
    method_bindings.mb_can_translate_messages =
        api->rebel_method_bind_get_method(
            "Object",
            "can_translate_messages"
        );
    method_bindings.mb_connect =
        api->rebel_method_bind_get_method(
            "Object",
            "connect"
        );
    method_bindings.mb_disconnect =
        api->rebel_method_bind_get_method(
            "Object",
            "disconnect"
        );
    method_bindings.mb_emit_signal =
        api->rebel_method_bind_get_method(
            "Object",
            "emit_signal"
        );
    method_bindings.mb_free =
        api->rebel_method_bind_get_method(
            "Object",
            "free"
        );
    method_bindings.mb_get =
        api->rebel_method_bind_get_method(
            "Object",
            "get"
        );
    method_bindings.mb_get_class =
        api->rebel_method_bind_get_method(
            "Object",
            "get_class"
        );
    method_bindings.mb_get_incoming_connections =
        api->rebel_method_bind_get_method(
            "Object",
            "get_incoming_connections"
        );
    method_bindings.mb_get_indexed =
        api->rebel_method_bind_get_method(
            "Object",
            "get_indexed"
        );
    method_bindings.mb_get_instance_id =
        api->rebel_method_bind_get_method(
            "Object",
            "get_instance_id"
        );
    method_bindings.mb_get_meta =
        api->rebel_method_bind_get_method(
            "Object",
            "get_meta"
        );
    method_bindings.mb_get_meta_list =
        api->rebel_method_bind_get_method(
            "Object",
            "get_meta_list"
        );
    method_bindings.mb_get_method_list =
        api->rebel_method_bind_get_method(
            "Object",
            "get_method_list"
        );
    method_bindings.mb_get_property_list =
        api->rebel_method_bind_get_method(
            "Object",
            "get_property_list"
        );
    method_bindings.mb_get_script =
        api->rebel_method_bind_get_method(
            "Object",
            "get_script"
        );
    method_bindings.mb_get_signal_connection_list =
        api->rebel_method_bind_get_method(
            "Object",
            "get_signal_connection_list"
        );
    method_bindings.mb_get_signal_list =
        api->rebel_method_bind_get_method(
            "Object",
            "get_signal_list"
        );
    method_bindings.mb_has_meta =
        api->rebel_method_bind_get_method(
            "Object",
            "has_meta"
        );
    method_bindings.mb_has_method =
        api->rebel_method_bind_get_method(
            "Object",
            "has_method"
        );
    method_bindings.mb_has_signal =
        api->rebel_method_bind_get_method(
            "Object",
            "has_signal"
        );
    method_bindings.mb_has_user_signal =
        api->rebel_method_bind_get_method(
            "Object",
            "has_user_signal"
        );
    method_bindings.mb_is_blocking_signals =
        api->rebel_method_bind_get_method(
            "Object",
            "is_blocking_signals"
        );
    method_bindings.mb_is_class =
        api->rebel_method_bind_get_method(
            "Object",
            "is_class"
        );
    method_bindings.mb_is_connected =
        api->rebel_method_bind_get_method(
            "Object",
            "is_connected"
        );
    method_bindings.mb_is_queued_for_deletion =
        api->rebel_method_bind_get_method(
            "Object",
            "is_queued_for_deletion"
        );
    method_bindings.mb_notification =
        api->rebel_method_bind_get_method(
            "Object",
            "notification"
        );
    method_bindings.mb_property_list_changed_notify =
        api->rebel_method_bind_get_method(
            "Object",
            "property_list_changed_notify"
        );
    method_bindings.mb_remove_meta =
        api->rebel_method_bind_get_method(
            "Object",
            "remove_meta"
        );
    method_bindings.mb_set =
        api->rebel_method_bind_get_method(
            "Object",
            "set"
        );
    method_bindings.mb_set_block_signals =
        api->rebel_method_bind_get_method(
            "Object",
            "set_block_signals"
        );
    method_bindings.mb_set_deferred =
        api->rebel_method_bind_get_method(
            "Object",
            "set_deferred"
        );
    method_bindings.mb_set_indexed =
        api->rebel_method_bind_get_method(
            "Object",
            "set_indexed"
        );
    method_bindings.mb_set_message_translation =
        api->rebel_method_bind_get_method(
            "Object",
            "set_message_translation"
        );
    method_bindings.mb_set_meta =
        api->rebel_method_bind_get_method(
            "Object",
            "set_meta"
        );
    method_bindings.mb_set_script =
        api->rebel_method_bind_get_method(
            "Object",
            "set_script"
        );
    method_bindings.mb_to_string =
        api->rebel_method_bind_get_method(
            "Object",
            "to_string"
        );
    method_bindings.mb_tr =
        api->rebel_method_bind_get_method(
            "Object",
            "tr"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Object");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Object::MethodBindings Object::method_bindings = {};
void* Object::class_tag = nullptr;
} // namespace Rebel
