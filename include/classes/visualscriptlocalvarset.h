// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSCRIPTLOCALVARSET_H
#define REBEL_VISUALSCRIPTLOCALVARSET_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualscriptnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualScriptLocalVarSet : public VisualScriptNode {
public:
    String get_var_name() const;
    Variant::Type get_var_type() const;
    void set_var_name(const String name);
    void set_var_type(const int64_t type);

    static VisualScriptLocalVarSet* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualScriptLocalVarSet";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualScriptLocalVarSet";
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
        rebel_method_bind* mb_get_var_name;
        rebel_method_bind* mb_get_var_type;
        rebel_method_bind* mb_set_var_name;
        rebel_method_bind* mb_set_var_type;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSCRIPTLOCALVARSET_H
