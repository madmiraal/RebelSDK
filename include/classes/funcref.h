// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_FUNCREF_H
#define REBEL_FUNCREF_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Object;

class FuncRef : public Reference {
public:
    Variant call_func(const Array& args = Array());
    Variant call_funcv(const Array arg_array);
    String get_function();
    bool is_valid() const;
    void set_function(const String name);
    void set_instance(const Object* instance);

    template <class... Args>
    Variant call_func(Args... args) {
        return call_func(Array::make(args...));
    }

    static FuncRef* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "FuncRef";
    }

    inline static const char* get_rebel_class_name() {
        return "FuncRef";
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
        rebel_method_bind* mb_call_func;
        rebel_method_bind* mb_call_funcv;
        rebel_method_bind* mb_get_function;
        rebel_method_bind* mb_is_valid;
        rebel_method_bind* mb_set_function;
        rebel_method_bind* mb_set_instance;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_FUNCREF_H
