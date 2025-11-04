// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSCRIPTINPUTACTION_H
#define REBEL_VISUALSCRIPTINPUTACTION_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualscriptnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualScriptInputAction : public VisualScriptNode {
public:
    enum Mode {
        MODE_PRESSED = 0,
        MODE_RELEASED = 1,
        MODE_JUST_PRESSED = 2,
        MODE_JUST_RELEASED = 3,
    };

    VisualScriptInputAction::Mode get_action_mode() const;
    String get_action_name() const;
    void set_action_mode(const int64_t mode);
    void set_action_name(const String name);

    static VisualScriptInputAction* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualScriptInputAction";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualScriptInputAction";
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
        rebel_method_bind* mb_get_action_mode;
        rebel_method_bind* mb_get_action_name;
        rebel_method_bind* mb_set_action_mode;
        rebel_method_bind* mb_set_action_name;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSCRIPTINPUTACTION_H
