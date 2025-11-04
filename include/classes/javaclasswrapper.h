// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_JAVACLASSWRAPPER_H
#define REBEL_JAVACLASSWRAPPER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class JavaClass;

class JavaClassWrapper : public Object {
public:
    Ref<JavaClass> wrap(const String name);

    static inline JavaClassWrapper* get_singleton() {
        if (!JavaClassWrapper::singleton) {
            JavaClassWrapper::singleton = new JavaClassWrapper;
        }
        return JavaClassWrapper::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "JavaClassWrapper";
    }

    inline static const char* get_rebel_class_name() {
        return "JavaClassWrapper";
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
    JavaClassWrapper();
    static JavaClassWrapper* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_wrap;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_JAVACLASSWRAPPER_H
