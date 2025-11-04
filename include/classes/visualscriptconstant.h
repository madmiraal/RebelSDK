// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSCRIPTCONSTANT_H
#define REBEL_VISUALSCRIPTCONSTANT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualscriptnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualScriptConstant : public VisualScriptNode {
public:
    Variant::Type get_constant_type() const;
    Variant get_constant_value() const;
    void set_constant_type(const int64_t type);
    void set_constant_value(const Variant value);

    static VisualScriptConstant* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualScriptConstant";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualScriptConstant";
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
        rebel_method_bind* mb_get_constant_type;
        rebel_method_bind* mb_get_constant_value;
        rebel_method_bind* mb_set_constant_type;
        rebel_method_bind* mb_set_constant_value;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSCRIPTCONSTANT_H
