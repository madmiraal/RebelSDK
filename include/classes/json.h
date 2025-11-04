// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_JSON_H
#define REBEL_JSON_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class JSONParseResult;

class JSON : public Object {
public:
    Ref<JSONParseResult> parse(const String json);
    String print(const Variant value, const String indent = "", const bool sort_keys = false);

    static inline JSON* get_singleton() {
        if (!JSON::singleton) {
            JSON::singleton = new JSON;
        }
        return JSON::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "JSON";
    }

    inline static const char* get_rebel_class_name() {
        return "JSON";
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
    JSON();
    static JSON* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_parse;
        rebel_method_bind* mb_print;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_JSON_H
