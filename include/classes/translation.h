// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_TRANSLATION_H
#define REBEL_TRANSLATION_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Translation : public Resource {
public:
    String _get_message(const String src_message);
    PoolStringArray _get_messages() const;
    void _set_messages(const PoolStringArray arg0);
    void add_message(const String src_message, const String xlated_message);
    void erase_message(const String src_message);
    String get_locale() const;
    String get_message(const String src_message) const;
    int64_t get_message_count() const;
    PoolStringArray get_message_list() const;
    void set_locale(const String locale);

    static Translation* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Translation";
    }

    inline static const char* get_rebel_class_name() {
        return "Translation";
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
        rebel_method_bind* mb__get_message;
        rebel_method_bind* mb__get_messages;
        rebel_method_bind* mb__set_messages;
        rebel_method_bind* mb_add_message;
        rebel_method_bind* mb_erase_message;
        rebel_method_bind* mb_get_locale;
        rebel_method_bind* mb_get_message;
        rebel_method_bind* mb_get_message_count;
        rebel_method_bind* mb_get_message_list;
        rebel_method_bind* mb_set_locale;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_TRANSLATION_H
