// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_REGEX_H
#define REBEL_REGEX_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class RegExMatch;

class RegEx : public Reference {
public:
    void clear();
    Error compile(const String pattern);
    int64_t get_group_count() const;
    Array get_names() const;
    String get_pattern() const;
    bool is_valid() const;
    Ref<RegExMatch> search(const String subject, const int64_t offset = 0, const int64_t end = -1) const;
    Array search_all(const String subject, const int64_t offset = 0, const int64_t end = -1) const;
    String sub(const String subject, const String replacement, const bool all = false, const int64_t offset = 0, const int64_t end = -1) const;

    static RegEx* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "RegEx";
    }

    inline static const char* get_rebel_class_name() {
        return "RegEx";
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
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_compile;
        rebel_method_bind* mb_get_group_count;
        rebel_method_bind* mb_get_names;
        rebel_method_bind* mb_get_pattern;
        rebel_method_bind* mb_is_valid;
        rebel_method_bind* mb_search;
        rebel_method_bind* mb_search_all;
        rebel_method_bind* mb_sub;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_REGEX_H
