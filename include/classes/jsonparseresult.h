// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_JSONPARSERESULT_H
#define REBEL_JSONPARSERESULT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class JSONParseResult : public Reference {
public:
    Error get_error() const;
    int64_t get_error_line() const;
    String get_error_string() const;
    Variant get_result() const;
    void set_error(const int64_t error);
    void set_error_line(const int64_t error_line);
    void set_error_string(const String error_string);
    void set_result(const Variant result);

    static JSONParseResult* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "JSONParseResult";
    }

    inline static const char* get_rebel_class_name() {
        return "JSONParseResult";
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
        rebel_method_bind* mb_get_error;
        rebel_method_bind* mb_get_error_line;
        rebel_method_bind* mb_get_error_string;
        rebel_method_bind* mb_get_result;
        rebel_method_bind* mb_set_error;
        rebel_method_bind* mb_set_error_line;
        rebel_method_bind* mb_set_error_string;
        rebel_method_bind* mb_set_result;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_JSONPARSERESULT_H
