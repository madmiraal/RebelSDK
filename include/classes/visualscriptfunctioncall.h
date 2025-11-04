// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSCRIPTFUNCTIONCALL_H
#define REBEL_VISUALSCRIPTFUNCTIONCALL_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualscriptnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualScriptFunctionCall : public VisualScriptNode {
public:
    enum RPCCallMode {
        RPC_DISABLED = 0,
        RPC_RELIABLE = 1,
        RPC_UNRELIABLE = 2,
        RPC_RELIABLE_TO_ID = 3,
        RPC_UNRELIABLE_TO_ID = 4,
    };

    enum CallMode {
        CALL_MODE_SELF = 0,
        CALL_MODE_NODE_PATH = 1,
        CALL_MODE_INSTANCE = 2,
        CALL_MODE_BASIC_TYPE = 3,
        CALL_MODE_SINGLETON = 4,
    };

    Dictionary _get_argument_cache() const;
    void _set_argument_cache(const Dictionary argument_cache);
    NodePath get_base_path() const;
    String get_base_script() const;
    String get_base_type() const;
    Variant::Type get_basic_type() const;
    VisualScriptFunctionCall::CallMode get_call_mode() const;
    String get_function() const;
    VisualScriptFunctionCall::RPCCallMode get_rpc_call_mode() const;
    String get_singleton() const;
    int64_t get_use_default_args() const;
    bool get_validate() const;
    void set_base_path(const NodePath base_path);
    void set_base_script(const String base_script);
    void set_base_type(const String base_type);
    void set_basic_type(const int64_t basic_type);
    void set_call_mode(const int64_t mode);
    void set_function(const String function);
    void set_rpc_call_mode(const int64_t mode);
    void set_singleton(const String singleton);
    void set_use_default_args(const int64_t amount);
    void set_validate(const bool enable);

    static VisualScriptFunctionCall* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualScriptFunctionCall";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualScriptFunctionCall";
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
        rebel_method_bind* mb__get_argument_cache;
        rebel_method_bind* mb__set_argument_cache;
        rebel_method_bind* mb_get_base_path;
        rebel_method_bind* mb_get_base_script;
        rebel_method_bind* mb_get_base_type;
        rebel_method_bind* mb_get_basic_type;
        rebel_method_bind* mb_get_call_mode;
        rebel_method_bind* mb_get_function;
        rebel_method_bind* mb_get_rpc_call_mode;
        rebel_method_bind* mb_get_singleton;
        rebel_method_bind* mb_get_use_default_args;
        rebel_method_bind* mb_get_validate;
        rebel_method_bind* mb_set_base_path;
        rebel_method_bind* mb_set_base_script;
        rebel_method_bind* mb_set_base_type;
        rebel_method_bind* mb_set_basic_type;
        rebel_method_bind* mb_set_call_mode;
        rebel_method_bind* mb_set_function;
        rebel_method_bind* mb_set_rpc_call_mode;
        rebel_method_bind* mb_set_singleton;
        rebel_method_bind* mb_set_use_default_args;
        rebel_method_bind* mb_set_validate;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSCRIPTFUNCTIONCALL_H
