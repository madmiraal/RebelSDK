// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_JAVASCRIPT_H
#define REBEL_JAVASCRIPT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class JavaScriptObject;

class JavaScript : public Object {
public:
    Ref<JavaScriptObject> create_callback(const Object* object, const String method);
    Variant create_object(const String object, const Array& args = Array());
    void download_buffer(const PoolByteArray buffer, const String name, const String mime = "application/octet-stream");
    Variant eval(const String code, const bool use_global_execution_context = false);
    Ref<JavaScriptObject> get_interface(const String interface);

    template <class... Args>
    Variant create_object(const String object, Args... args) {
        return create_object(object, Array::make(args...));
    }

    static inline JavaScript* get_singleton() {
        if (!JavaScript::singleton) {
            JavaScript::singleton = new JavaScript;
        }
        return JavaScript::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "JavaScript";
    }

    inline static const char* get_rebel_class_name() {
        return "JavaScript";
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
    JavaScript();
    static JavaScript* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_create_callback;
        rebel_method_bind* mb_create_object;
        rebel_method_bind* mb_download_buffer;
        rebel_method_bind* mb_eval;
        rebel_method_bind* mb_get_interface;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_JAVASCRIPT_H
