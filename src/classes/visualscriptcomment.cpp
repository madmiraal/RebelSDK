// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptcomment.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String VisualScriptComment::get_description() const {
    return rebel_icall_string(
        method_bindings.mb_get_description,
        (const Object*)this
    );
}

Vector2 VisualScriptComment::get_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_size,
        (const Object*)this
    );
}

String VisualScriptComment::get_title() const {
    return rebel_icall_string(
        method_bindings.mb_get_title,
        (const Object*)this
    );
}

void VisualScriptComment::set_description(const String description) {
    rebel_icall_void_string(
        method_bindings.mb_set_description,
        (const Object*)this,
        description
    );
}

void VisualScriptComment::set_size(const Vector2 size) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_size,
        (const Object*)this,
        size
    );
}

void VisualScriptComment::set_title(const String title) {
    rebel_icall_void_string(
        method_bindings.mb_set_title,
        (const Object*)this,
        title
    );
}

VisualScriptComment* VisualScriptComment::create() {
    return (VisualScriptComment*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptComment")()
         );
}

void VisualScriptComment::init_method_bindings() {
    method_bindings.mb_get_description =
        api->rebel_method_bind_get_method(
            "VisualScriptComment",
            "get_description"
        );
    method_bindings.mb_get_size =
        api->rebel_method_bind_get_method(
            "VisualScriptComment",
            "get_size"
        );
    method_bindings.mb_get_title =
        api->rebel_method_bind_get_method(
            "VisualScriptComment",
            "get_title"
        );
    method_bindings.mb_set_description =
        api->rebel_method_bind_get_method(
            "VisualScriptComment",
            "set_description"
        );
    method_bindings.mb_set_size =
        api->rebel_method_bind_get_method(
            "VisualScriptComment",
            "set_size"
        );
    method_bindings.mb_set_title =
        api->rebel_method_bind_get_method(
            "VisualScriptComment",
            "set_title"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptComment");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptComment::MethodBindings VisualScriptComment::method_bindings = {};
void* VisualScriptComment::class_tag = nullptr;
} // namespace Rebel
