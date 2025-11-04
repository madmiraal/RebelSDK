// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_TRANSLATIONSERVER_H
#define REBEL_TRANSLATIONSERVER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Translation;

class TranslationServer : public Object {
public:
    void add_translation(const Ref<Translation> translation);
    void clear();
    Array get_loaded_locales() const;
    String get_locale() const;
    String get_locale_name(const String locale) const;
    void remove_translation(const Ref<Translation> translation);
    void set_locale(const String locale);
    String translate(const String message) const;

    static inline TranslationServer* get_singleton() {
        if (!TranslationServer::singleton) {
            TranslationServer::singleton = new TranslationServer;
        }
        return TranslationServer::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "TranslationServer";
    }

    inline static const char* get_rebel_class_name() {
        return "TranslationServer";
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
    TranslationServer();
    static TranslationServer* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_add_translation;
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_get_loaded_locales;
        rebel_method_bind* mb_get_locale;
        rebel_method_bind* mb_get_locale_name;
        rebel_method_bind* mb_remove_translation;
        rebel_method_bind* mb_set_locale;
        rebel_method_bind* mb_translate;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_TRANSLATIONSERVER_H
