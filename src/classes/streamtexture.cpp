// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/streamtexture.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String StreamTexture::get_load_path() const {
    return rebel_icall_string(
        method_bindings.mb_get_load_path,
        (const Object*)this
    );
}

Error StreamTexture::load(const String path) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_load,
        (const Object*)this,
        path
    );
}

StreamTexture* StreamTexture::create() {
    return (StreamTexture*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"StreamTexture")()
         );
}

void StreamTexture::init_method_bindings() {
    method_bindings.mb_get_load_path =
        api->rebel_method_bind_get_method(
            "StreamTexture",
            "get_load_path"
        );
    method_bindings.mb_load =
        api->rebel_method_bind_get_method(
            "StreamTexture",
            "load"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "StreamTexture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

StreamTexture::MethodBindings StreamTexture::method_bindings = {};
void* StreamTexture::class_tag = nullptr;
} // namespace Rebel
