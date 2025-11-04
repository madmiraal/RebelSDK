// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSCRIPTFUNCTIONSTATE_H
#define REBEL_VISUALSCRIPTFUNCTIONSTATE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Object;

class VisualScriptFunctionState : public Reference {
public:
    Variant _signal_callback(const Array& args = Array());
    void connect_to_signal(const Object* obj, const String signals, const Array args);
    bool is_valid() const;
    Variant resume(const Array args = Array());

    template <class... Args>
    Variant _signal_callback(Args... args) {
        return _signal_callback(Array::make(args...));
    }

    static VisualScriptFunctionState* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualScriptFunctionState";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualScriptFunctionState";
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
        rebel_method_bind* mb_connect_to_signal;
        rebel_method_bind* mb_is_valid;
        rebel_method_bind* mb_resume;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSCRIPTFUNCTIONSTATE_H
