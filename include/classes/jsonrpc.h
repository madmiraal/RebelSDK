// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_JSONRPC_H
#define REBEL_JSONRPC_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class JSONRPC : public Object {
public:
    enum ErrorCode {
        PARSE_ERROR = -32700,
        INTERNAL_ERROR = -32603,
        INVALID_PARAMS = -32602,
        METHOD_NOT_FOUND = -32601,
        INVALID_REQUEST = -32600,
    };

    Dictionary make_notification(const String method, const Variant params);
    Dictionary make_request(const String method, const Variant params, const Variant id);
    Dictionary make_response(const Variant result, const Variant id);
    Dictionary make_response_error(const int64_t code, const String message, const Variant id = Variant()) const;
    Variant process_action(const Variant action, const bool recurse = false);
    String process_string(const String action);
    void set_scope(const String scope, const Object* target);

    static JSONRPC* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "JSONRPC";
    }

    inline static const char* get_rebel_class_name() {
        return "JSONRPC";
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
        rebel_method_bind* mb_make_notification;
        rebel_method_bind* mb_make_request;
        rebel_method_bind* mb_make_response;
        rebel_method_bind* mb_make_response_error;
        rebel_method_bind* mb_process_action;
        rebel_method_bind* mb_process_string;
        rebel_method_bind* mb_set_scope;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_JSONRPC_H
