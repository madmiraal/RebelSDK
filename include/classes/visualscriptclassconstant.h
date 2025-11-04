// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSCRIPTCLASSCONSTANT_H
#define REBEL_VISUALSCRIPTCLASSCONSTANT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualscriptnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualScriptClassConstant : public VisualScriptNode {
public:
    String get_base_type();
    String get_class_constant();
    void set_base_type(const String name);
    void set_class_constant(const String name);

    static VisualScriptClassConstant* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualScriptClassConstant";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualScriptClassConstant";
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
        rebel_method_bind* mb_get_base_type;
        rebel_method_bind* mb_get_class_constant;
        rebel_method_bind* mb_set_base_type;
        rebel_method_bind* mb_set_class_constant;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSCRIPTCLASSCONSTANT_H
