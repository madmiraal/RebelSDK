// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSCRIPTYIELD_H
#define REBEL_VISUALSCRIPTYIELD_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualscriptnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualScriptYield : public VisualScriptNode {
public:
    enum YieldMode {
        YIELD_FRAME = 1,
        YIELD_PHYSICS_FRAME = 2,
        YIELD_WAIT = 3,
    };

    real_t get_wait_time();
    VisualScriptYield::YieldMode get_yield_mode();
    void set_wait_time(const real_t sec);
    void set_yield_mode(const int64_t mode);

    static VisualScriptYield* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualScriptYield";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualScriptYield";
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
        rebel_method_bind* mb_get_wait_time;
        rebel_method_bind* mb_get_yield_mode;
        rebel_method_bind* mb_set_wait_time;
        rebel_method_bind* mb_set_yield_mode;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSCRIPTYIELD_H
