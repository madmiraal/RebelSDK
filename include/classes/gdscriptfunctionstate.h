// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GDSCRIPTFUNCTIONSTATE_H
#define REBEL_GDSCRIPTFUNCTIONSTATE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class GDScriptFunctionState : public Reference {
public:
    Variant _signal_callback(const Array& args = Array());
    bool is_valid(const bool extended_check = false) const;
    Variant resume(const Variant arg = Variant());

    template <class... Args>
    Variant _signal_callback(Args... args) {
        return _signal_callback(Array::make(args...));
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GDScriptFunctionState";
    }

    inline static const char* get_rebel_class_name() {
        return "GDScriptFunctionState";
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
        rebel_method_bind* mb__signal_callback;
        rebel_method_bind* mb_is_valid;
        rebel_method_bind* mb_resume;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GDSCRIPTFUNCTIONSTATE_H
