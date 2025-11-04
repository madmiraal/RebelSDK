// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GDSCRIPT_H
#define REBEL_GDSCRIPT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/script.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class GDScript : public Script {
public:
    PoolByteArray get_as_byte_code() const;
    Variant new_(const Array& args = Array());

    template <class... Args>
    Variant new_(Args... args) {
        return new_(Array::make(args...));
    }

    static GDScript* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GDScript";
    }

    inline static const char* get_rebel_class_name() {
        return "GDScript";
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
        rebel_method_bind* mb_get_as_byte_code;
        rebel_method_bind* mb_new;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GDSCRIPT_H
