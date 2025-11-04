// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/texturearray.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void TextureArray::create(const int64_t width, const int64_t height, const int64_t depth, const int64_t format, const int64_t flags) {
    rebel_icall_void_int_int_int_int_int(
        method_bindings.mb_create,
        (const Object*)this,
        width,
        height,
        depth,
        format,
        flags
    );
}

TextureArray* TextureArray::create() {
    return (TextureArray*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"TextureArray")()
         );
}

void TextureArray::init_method_bindings() {
    method_bindings.mb_create =
        api->rebel_method_bind_get_method(
            "TextureArray",
            "create"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "TextureArray");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

TextureArray::MethodBindings TextureArray::method_bindings = {};
void* TextureArray::class_tag = nullptr;
} // namespace Rebel
