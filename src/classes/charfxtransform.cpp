// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/charfxtransform.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t CharFXTransform::get_absolute_index() {
    return rebel_icall_int(
        method_bindings.mb_get_absolute_index,
        (const Object*)this
    );
}

int64_t CharFXTransform::get_character() {
    return rebel_icall_int(
        method_bindings.mb_get_character,
        (const Object*)this
    );
}

Color CharFXTransform::get_color() {
    return rebel_icall_color(
        method_bindings.mb_get_color,
        (const Object*)this
    );
}

real_t CharFXTransform::get_elapsed_time() {
    return rebel_icall_float(
        method_bindings.mb_get_elapsed_time,
        (const Object*)this
    );
}

Dictionary CharFXTransform::get_environment() {
    return rebel_icall_dictionary(
        method_bindings.mb_get_environment,
        (const Object*)this
    );
}

Vector2 CharFXTransform::get_offset() {
    return rebel_icall_vector2(
        method_bindings.mb_get_offset,
        (const Object*)this
    );
}

int64_t CharFXTransform::get_relative_index() {
    return rebel_icall_int(
        method_bindings.mb_get_relative_index,
        (const Object*)this
    );
}

bool CharFXTransform::is_visible() {
    return rebel_icall_bool(
        method_bindings.mb_is_visible,
        (const Object*)this
    );
}

void CharFXTransform::set_absolute_index(const int64_t index) {
    rebel_icall_void_int(
        method_bindings.mb_set_absolute_index,
        (const Object*)this,
        index
    );
}

void CharFXTransform::set_character(const int64_t character) {
    rebel_icall_void_int(
        method_bindings.mb_set_character,
        (const Object*)this,
        character
    );
}

void CharFXTransform::set_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_color,
        (const Object*)this,
        color
    );
}

void CharFXTransform::set_elapsed_time(const real_t time) {
    rebel_icall_void_float(
        method_bindings.mb_set_elapsed_time,
        (const Object*)this,
        time
    );
}

void CharFXTransform::set_environment(const Dictionary environment) {
    rebel_icall_void_dictionary(
        method_bindings.mb_set_environment,
        (const Object*)this,
        environment
    );
}

void CharFXTransform::set_offset(const Vector2 offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_offset,
        (const Object*)this,
        offset
    );
}

void CharFXTransform::set_relative_index(const int64_t index) {
    rebel_icall_void_int(
        method_bindings.mb_set_relative_index,
        (const Object*)this,
        index
    );
}

void CharFXTransform::set_visibility(const bool visibility) {
    rebel_icall_void_bool(
        method_bindings.mb_set_visibility,
        (const Object*)this,
        visibility
    );
}

CharFXTransform* CharFXTransform::create() {
    return (CharFXTransform*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CharFXTransform")()
         );
}

void CharFXTransform::init_method_bindings() {
    method_bindings.mb_get_absolute_index =
        api->rebel_method_bind_get_method(
            "CharFXTransform",
            "get_absolute_index"
        );
    method_bindings.mb_get_character =
        api->rebel_method_bind_get_method(
            "CharFXTransform",
            "get_character"
        );
    method_bindings.mb_get_color =
        api->rebel_method_bind_get_method(
            "CharFXTransform",
            "get_color"
        );
    method_bindings.mb_get_elapsed_time =
        api->rebel_method_bind_get_method(
            "CharFXTransform",
            "get_elapsed_time"
        );
    method_bindings.mb_get_environment =
        api->rebel_method_bind_get_method(
            "CharFXTransform",
            "get_environment"
        );
    method_bindings.mb_get_offset =
        api->rebel_method_bind_get_method(
            "CharFXTransform",
            "get_offset"
        );
    method_bindings.mb_get_relative_index =
        api->rebel_method_bind_get_method(
            "CharFXTransform",
            "get_relative_index"
        );
    method_bindings.mb_is_visible =
        api->rebel_method_bind_get_method(
            "CharFXTransform",
            "is_visible"
        );
    method_bindings.mb_set_absolute_index =
        api->rebel_method_bind_get_method(
            "CharFXTransform",
            "set_absolute_index"
        );
    method_bindings.mb_set_character =
        api->rebel_method_bind_get_method(
            "CharFXTransform",
            "set_character"
        );
    method_bindings.mb_set_color =
        api->rebel_method_bind_get_method(
            "CharFXTransform",
            "set_color"
        );
    method_bindings.mb_set_elapsed_time =
        api->rebel_method_bind_get_method(
            "CharFXTransform",
            "set_elapsed_time"
        );
    method_bindings.mb_set_environment =
        api->rebel_method_bind_get_method(
            "CharFXTransform",
            "set_environment"
        );
    method_bindings.mb_set_offset =
        api->rebel_method_bind_get_method(
            "CharFXTransform",
            "set_offset"
        );
    method_bindings.mb_set_relative_index =
        api->rebel_method_bind_get_method(
            "CharFXTransform",
            "set_relative_index"
        );
    method_bindings.mb_set_visibility =
        api->rebel_method_bind_get_method(
            "CharFXTransform",
            "set_visibility"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CharFXTransform");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CharFXTransform::MethodBindings CharFXTransform::method_bindings = {};
void* CharFXTransform::class_tag = nullptr;
} // namespace Rebel
