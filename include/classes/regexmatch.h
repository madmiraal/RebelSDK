// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_REGEXMATCH_H
#define REBEL_REGEXMATCH_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class RegExMatch : public Reference {
public:
    int64_t get_end(const Variant name = 0) const;
    int64_t get_group_count() const;
    Dictionary get_names() const;
    int64_t get_start(const Variant name = 0) const;
    String get_string(const Variant name = 0) const;
    Array get_strings() const;
    String get_subject() const;

    static RegExMatch* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "RegExMatch";
    }

    inline static const char* get_rebel_class_name() {
        return "RegExMatch";
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
        rebel_method_bind* mb_get_end;
        rebel_method_bind* mb_get_group_count;
        rebel_method_bind* mb_get_names;
        rebel_method_bind* mb_get_start;
        rebel_method_bind* mb_get_string;
        rebel_method_bind* mb_get_strings;
        rebel_method_bind* mb_get_subject;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_REGEXMATCH_H
