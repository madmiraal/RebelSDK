// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSCRIPTENGINESINGLETON_H
#define REBEL_VISUALSCRIPTENGINESINGLETON_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualscriptnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualScriptEngineSingleton : public VisualScriptNode {
public:
    String get_singleton();
    void set_singleton(const String name);

    static VisualScriptEngineSingleton* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualScriptEngineSingleton";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualScriptEngineSingleton";
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
        rebel_method_bind* mb_get_singleton;
        rebel_method_bind* mb_set_singleton;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSCRIPTENGINESINGLETON_H
