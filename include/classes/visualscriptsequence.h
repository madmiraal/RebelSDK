// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSCRIPTSEQUENCE_H
#define REBEL_VISUALSCRIPTSEQUENCE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualscriptnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualScriptSequence : public VisualScriptNode {
public:
    int64_t get_steps() const;
    void set_steps(const int64_t steps);

    static VisualScriptSequence* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualScriptSequence";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualScriptSequence";
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
        rebel_method_bind* mb_get_steps;
        rebel_method_bind* mb_set_steps;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSCRIPTSEQUENCE_H
