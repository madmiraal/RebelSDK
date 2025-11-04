// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_OBJECT_H
#define REBEL_OBJECT_H

#include "api/gdnative_api_struct.gen.h"
#include "common/commontypes.h"
#include "common/tagdb.h"

#include <cstdint>

namespace Rebel {
class Reference;

class Object : public Wrapped {
public:
    enum { CLASS_IS_SCRIPT = 0, };

    enum ConnectFlags {
        CONNECT_DEFERRED = 1,
        CONNECT_PERSIST = 2,
        CONNECT_ONESHOT = 4,
        CONNECT_REFERENCE_COUNTED = 8,
    };

    static const int NOTIFICATION_POSTINITIALIZE = 0;
    static const int NOTIFICATION_PREDELETE = 1;

    Variant _get(const String property);
    Array _get_property_list();
    void _init();
    void _notification(const int64_t what);
    bool _set(const String property, const Variant value);
    String _to_string();
    void add_user_signal(const String signal, const Array arguments = Array());
    Variant call(const String method, const Array& args = Array());
    void call_deferred(const String method, const Array& args = Array());
    Variant callv(const String method, const Array arg_array);
    bool can_translate_messages() const;
    Error connect(const String signal, const Object* target, const String method, const Array binds = Array(), const int64_t flags = 0);
    void disconnect(const String signal, const Object* target, const String method);
    void emit_signal(const String signal, const Array& args = Array());
    void free();
    Variant get(const String property) const;
    String get_class() const;
    Array get_incoming_connections() const;
    Variant get_indexed(const NodePath property) const;
    int64_t get_instance_id() const;
    Variant get_meta(const String name) const;
    PoolStringArray get_meta_list() const;
    Array get_method_list() const;
    Array get_property_list() const;
    Reference* get_script() const;
    Array get_signal_connection_list(const String signal) const;
    Array get_signal_list() const;
    bool has_meta(const String name) const;
    bool has_method(const String method) const;
    bool has_signal(const String signal) const;
    bool has_user_signal(const String signal) const;
    bool is_blocking_signals() const;
    bool is_class(const String _class) const;
    bool is_connected(const String signal, const Object* target, const String method) const;
    bool is_queued_for_deletion() const;
    void notification(const int64_t what, const bool reversed = false);
    void property_list_changed_notify();
    void remove_meta(const String name);
    void set(const String property, const Variant value);
    void set_block_signals(const bool enable);
    void set_deferred(const String property, const Variant value);
    void set_indexed(const NodePath property, const Variant value);
    void set_message_translation(const bool enable);
    void set_meta(const String name, const Variant value);
    void set_script(const Reference* script);
    String to_string();
    String tr(const String message) const;

    template <class... Args>
    Variant call(const String method, Args... args) {
        return call(method, Array::make(args...));
    }

    template <class... Args>
    void call_deferred(const String method, Args... args) {
        return call_deferred(method, Array::make(args...));
    }

    template <class... Args>
    void emit_signal(const String signal, Args... args) {
        return emit_signal(signal, Array::make(args...));
    }

    static Object* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Object";
    }

    inline static const char* get_rebel_class_name() {
        return "Object";
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

#ifndef NO_OBJECT_CAST
    template<class T>
    static T *cast_to(const Object *object);
#endif // NO_OBJECT_CAST

private:
    struct MethodBindings {
        rebel_method_bind* mb__get;
        rebel_method_bind* mb__get_property_list;
        rebel_method_bind* mb__init;
        rebel_method_bind* mb__notification;
        rebel_method_bind* mb__set;
        rebel_method_bind* mb__to_string;
        rebel_method_bind* mb_add_user_signal;
        rebel_method_bind* mb_call;
        rebel_method_bind* mb_call_deferred;
        rebel_method_bind* mb_callv;
        rebel_method_bind* mb_can_translate_messages;
        rebel_method_bind* mb_connect;
        rebel_method_bind* mb_disconnect;
        rebel_method_bind* mb_emit_signal;
        rebel_method_bind* mb_free;
        rebel_method_bind* mb_get;
        rebel_method_bind* mb_get_class;
        rebel_method_bind* mb_get_incoming_connections;
        rebel_method_bind* mb_get_indexed;
        rebel_method_bind* mb_get_instance_id;
        rebel_method_bind* mb_get_meta;
        rebel_method_bind* mb_get_meta_list;
        rebel_method_bind* mb_get_method_list;
        rebel_method_bind* mb_get_property_list;
        rebel_method_bind* mb_get_script;
        rebel_method_bind* mb_get_signal_connection_list;
        rebel_method_bind* mb_get_signal_list;
        rebel_method_bind* mb_has_meta;
        rebel_method_bind* mb_has_method;
        rebel_method_bind* mb_has_signal;
        rebel_method_bind* mb_has_user_signal;
        rebel_method_bind* mb_is_blocking_signals;
        rebel_method_bind* mb_is_class;
        rebel_method_bind* mb_is_connected;
        rebel_method_bind* mb_is_queued_for_deletion;
        rebel_method_bind* mb_notification;
        rebel_method_bind* mb_property_list_changed_notify;
        rebel_method_bind* mb_remove_meta;
        rebel_method_bind* mb_set;
        rebel_method_bind* mb_set_block_signals;
        rebel_method_bind* mb_set_deferred;
        rebel_method_bind* mb_set_indexed;
        rebel_method_bind* mb_set_message_translation;
        rebel_method_bind* mb_set_meta;
        rebel_method_bind* mb_set_script;
        rebel_method_bind* mb_to_string;
        rebel_method_bind* mb_tr;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_OBJECT_H
