// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/videostreamtheora.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String VideoStreamTheora::get_file() {
    return rebel_icall_string(
        method_bindings.mb_get_file,
        (const Object*)this
    );
}

void VideoStreamTheora::set_file(const String file) {
    rebel_icall_void_string(
        method_bindings.mb_set_file,
        (const Object*)this,
        file
    );
}

VideoStreamTheora* VideoStreamTheora::create() {
    return (VideoStreamTheora*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VideoStreamTheora")()
         );
}

void VideoStreamTheora::init_method_bindings() {
    method_bindings.mb_get_file =
        api->rebel_method_bind_get_method(
            "VideoStreamTheora",
            "get_file"
        );
    method_bindings.mb_set_file =
        api->rebel_method_bind_get_method(
            "VideoStreamTheora",
            "set_file"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VideoStreamTheora");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VideoStreamTheora::MethodBindings VideoStreamTheora::method_bindings = {};
void* VideoStreamTheora::class_tag = nullptr;
} // namespace Rebel
