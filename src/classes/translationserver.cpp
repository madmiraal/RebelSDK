// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/translationserver.h"

#include "classes/icalls.h"
#include "classes/translation.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void TranslationServer::add_translation(const Ref<Translation> translation) {
    rebel_icall_void_object(
        method_bindings.mb_add_translation,
        (const Object*)this,
        translation.ptr()
    );
}

void TranslationServer::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

Array TranslationServer::get_loaded_locales() const {
    return rebel_icall_array(
        method_bindings.mb_get_loaded_locales,
        (const Object*)this
    );
}

String TranslationServer::get_locale() const {
    return rebel_icall_string(
        method_bindings.mb_get_locale,
        (const Object*)this
    );
}

String TranslationServer::get_locale_name(const String locale) const {
    return rebel_icall_string_string(
        method_bindings.mb_get_locale_name,
        (const Object*)this,
        locale
    );
}

void TranslationServer::remove_translation(const Ref<Translation> translation) {
    rebel_icall_void_object(
        method_bindings.mb_remove_translation,
        (const Object*)this,
        translation.ptr()
    );
}

void TranslationServer::set_locale(const String locale) {
    rebel_icall_void_string(
        method_bindings.mb_set_locale,
        (const Object*)this,
        locale
    );
}

String TranslationServer::translate(const String message) const {
    return rebel_icall_string_string(
        method_bindings.mb_translate,
        (const Object*)this,
        message
    );
}

TranslationServer* TranslationServer::singleton = nullptr;

TranslationServer::TranslationServer() {
    owner = api->rebel_global_get_singleton((char*) "TranslationServer");
}

void TranslationServer::init_method_bindings() {
    method_bindings.mb_add_translation =
        api->rebel_method_bind_get_method(
            "TranslationServer",
            "add_translation"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "TranslationServer",
            "clear"
        );
    method_bindings.mb_get_loaded_locales =
        api->rebel_method_bind_get_method(
            "TranslationServer",
            "get_loaded_locales"
        );
    method_bindings.mb_get_locale =
        api->rebel_method_bind_get_method(
            "TranslationServer",
            "get_locale"
        );
    method_bindings.mb_get_locale_name =
        api->rebel_method_bind_get_method(
            "TranslationServer",
            "get_locale_name"
        );
    method_bindings.mb_remove_translation =
        api->rebel_method_bind_get_method(
            "TranslationServer",
            "remove_translation"
        );
    method_bindings.mb_set_locale =
        api->rebel_method_bind_get_method(
            "TranslationServer",
            "set_locale"
        );
    method_bindings.mb_translate =
        api->rebel_method_bind_get_method(
            "TranslationServer",
            "translate"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "TranslationServer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

TranslationServer::MethodBindings TranslationServer::method_bindings = {};
void* TranslationServer::class_tag = nullptr;
} // namespace Rebel
