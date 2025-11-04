// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSCRIPTCONSTRUCTOR_H
#define REBEL_VISUALSCRIPTCONSTRUCTOR_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualscriptnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualScriptConstructor : public VisualScriptNode {
public:
    Dictionary get_constructor() const;
    Variant::Type get_constructor_type() const;
    void set_constructor(const Dictionary constructor);
    void set_constructor_type(const int64_t type);

    static VisualScriptConstructor* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualScriptConstructor";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualScriptConstructor";
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
        rebel_method_bind* mb_get_constructor;
        rebel_method_bind* mb_get_constructor_type;
        rebel_method_bind* mb_set_constructor;
        rebel_method_bind* mb_set_constructor_type;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSCRIPTCONSTRUCTOR_H
